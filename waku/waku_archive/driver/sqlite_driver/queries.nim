when (NimMajor, NimMinor) < (1, 4):
  {.push raises: [Defect].}
else:
  {.push raises: [].}

import std/[options, sequtils], stew/[results, byteutils, arrayops], sqlite3_abi
import
  ../../../common/databases/db_sqlite,
  ../../../common/databases/common,
  ../../../waku_core,
  ./cursor

const DbTable = "Message"

type SqlQueryStr = string

### SQLite column helper methods

proc queryRowWakuMessageCallback(
    s: ptr sqlite3_stmt,
    contentTopicCol, payloadCol, versionCol, senderTimestampCol: cint,
): WakuMessage =
  let
    topic = cast[ptr UncheckedArray[byte]](sqlite3_column_blob(s, contentTopicCol))
    topicLength = sqlite3_column_bytes(s, contentTopicCol)
    contentTopic = string.fromBytes(@(toOpenArray(topic, 0, topicLength - 1)))

    p = cast[ptr UncheckedArray[byte]](sqlite3_column_blob(s, payloadCol))

    length = sqlite3_column_bytes(s, payloadCol)
    payload = @(toOpenArray(p, 0, length - 1))
    version = sqlite3_column_int64(s, versionCol)
    senderTimestamp = sqlite3_column_int64(s, senderTimestampCol)

  return WakuMessage(
    contentTopic: ContentTopic(contentTopic),
    payload: payload,
    version: uint32(version),
    timestamp: Timestamp(senderTimestamp),
  )

proc queryRowReceiverTimestampCallback(
    s: ptr sqlite3_stmt, storedAtCol: cint
): Timestamp =
  let storedAt = sqlite3_column_int64(s, storedAtCol)
  return Timestamp(storedAt)

proc queryRowPubsubTopicCallback(
    s: ptr sqlite3_stmt, pubsubTopicCol: cint
): PubsubTopic =
  let
    pubsubTopicPointer =
      cast[ptr UncheckedArray[byte]](sqlite3_column_blob(s, pubsubTopicCol))
    pubsubTopicLength = sqlite3_column_bytes(s, pubsubTopicCol)
    pubsubTopic =
      string.fromBytes(@(toOpenArray(pubsubTopicPointer, 0, pubsubTopicLength - 1)))

  return pubsubTopic

proc queryRowDigestCallback(s: ptr sqlite3_stmt, digestCol: cint): seq[byte] =
  let
    digestPointer = cast[ptr UncheckedArray[byte]](sqlite3_column_blob(s, digestCol))
    digestLength = sqlite3_column_bytes(s, digestCol)
    digest = @(toOpenArray(digestPointer, 0, digestLength - 1))

  return digest

proc queryRowWakuMessageHashCallback(
    s: ptr sqlite3_stmt, hashCol: cint
): WakuMessageHash =
  let
    hashPointer = cast[ptr UncheckedArray[byte]](sqlite3_column_blob(s, hashCol))
    hashLength = sqlite3_column_bytes(s, hashCol)
    hash = fromBytes(toOpenArray(hashPointer, 0, hashLength - 1))

  return hash

### SQLite queries

## Create table

proc createTableQuery(table: string): SqlQueryStr =
  "CREATE TABLE IF NOT EXISTS " & table & " (" & " pubsubTopic BLOB NOT NULL," &
    " contentTopic BLOB NOT NULL," & " payload BLOB," & " version INTEGER NOT NULL," &
    " timestamp INTEGER NOT NULL," & " id BLOB," & " messageHash BLOB," &
    " storedAt INTEGER NOT NULL," & " CONSTRAINT messageIndex PRIMARY KEY (messageHash)" &
    ") WITHOUT ROWID;"

proc createTable*(db: SqliteDatabase): DatabaseResult[void] =
  let query = createTableQuery(DbTable)
  discard
    ?db.query(
      query,
      proc(s: ptr sqlite3_stmt) =
        discard
      ,
    )
  return ok()

## Create indices

proc createOldestMessageTimestampIndexQuery(table: string): SqlQueryStr =
  "CREATE INDEX IF NOT EXISTS i_ts ON " & table & " (storedAt);"

proc createOldestMessageTimestampIndex*(db: SqliteDatabase): DatabaseResult[void] =
  let query = createOldestMessageTimestampIndexQuery(DbTable)
  discard
    ?db.query(
      query,
      proc(s: ptr sqlite3_stmt) =
        discard
      ,
    )
  return ok()

proc createHistoryQueryIndexQuery(table: string): SqlQueryStr =
  "CREATE INDEX IF NOT EXISTS i_query ON " & table &
    " (contentTopic, pubsubTopic, storedAt, id);"

proc createHistoryQueryIndex*(db: SqliteDatabase): DatabaseResult[void] =
  let query = createHistoryQueryIndexQuery(DbTable)
  discard
    ?db.query(
      query,
      proc(s: ptr sqlite3_stmt) =
        discard
      ,
    )
  return ok()

## Insert message
type InsertMessageParams* =
  (seq[byte], seq[byte], Timestamp, seq[byte], seq[byte], seq[byte], int64, Timestamp)

proc insertMessageQuery(table: string): SqlQueryStr =
  return
    "INSERT INTO " & table &
    "(id, messageHash, storedAt, contentTopic, payload, pubsubTopic, version, timestamp)" &
    " VALUES (?, ?, ?, ?, ?, ?, ?, ?);"

proc prepareInsertMessageStmt*(
    db: SqliteDatabase
): SqliteStmt[InsertMessageParams, void] =
  let query = insertMessageQuery(DbTable)
  return
    db.prepareStmt(query, InsertMessageParams, void).expect("this is a valid statement")

## Count table messages

proc countMessagesQuery(table: string): SqlQueryStr =
  return "SELECT COUNT(*) FROM " & table

proc getMessageCount*(db: SqliteDatabase): DatabaseResult[int64] =
  var count: int64
  proc queryRowCallback(s: ptr sqlite3_stmt) =
    count = sqlite3_column_int64(s, 0)

  let query = countMessagesQuery(DbTable)
  let res = db.query(query, queryRowCallback)
  if res.isErr():
    return err("failed to count number of messages in the database")

  return ok(count)

## Get oldest message receiver timestamp

proc selectOldestMessageTimestampQuery(table: string): SqlQueryStr =
  return "SELECT MIN(storedAt) FROM " & table

proc selectOldestReceiverTimestamp*(
    db: SqliteDatabase
): DatabaseResult[Timestamp] {.inline.} =
  var timestamp: Timestamp
  proc queryRowCallback(s: ptr sqlite3_stmt) =
    timestamp = queryRowReceiverTimestampCallback(s, 0)

  let query = selectOldestMessageTimestampQuery(DbTable)
  let res = db.query(query, queryRowCallback)
  if res.isErr():
    return err("failed to get the oldest receiver timestamp from the database")

  return ok(timestamp)

## Get newest message receiver timestamp

proc selectNewestMessageTimestampQuery(table: string): SqlQueryStr =
  return "SELECT MAX(storedAt) FROM " & table

proc selectNewestReceiverTimestamp*(
    db: SqliteDatabase
): DatabaseResult[Timestamp] {.inline.} =
  var timestamp: Timestamp
  proc queryRowCallback(s: ptr sqlite3_stmt) =
    timestamp = queryRowReceiverTimestampCallback(s, 0)

  let query = selectNewestMessageTimestampQuery(DbTable)
  let res = db.query(query, queryRowCallback)
  if res.isErr():
    return err("failed to get the newest receiver timestamp from the database")

  return ok(timestamp)

## Delete messages older than timestamp

proc deleteMessagesOlderThanTimestampQuery(table: string, ts: Timestamp): SqlQueryStr =
  return "DELETE FROM " & table & " WHERE storedAt < " & $ts

proc deleteMessagesOlderThanTimestamp*(
    db: SqliteDatabase, ts: int64
): DatabaseResult[void] =
  let query = deleteMessagesOlderThanTimestampQuery(DbTable, ts)
  discard
    ?db.query(
      query,
      proc(s: ptr sqlite3_stmt) =
        discard
      ,
    )
  return ok()

## Delete oldest messages not within limit

proc deleteOldestMessagesNotWithinLimitQuery(table: string, limit: int): SqlQueryStr =
  return
    "DELETE FROM " & table & " WHERE (storedAt, id, pubsubTopic) NOT IN (" &
    " SELECT storedAt, id, pubsubTopic FROM " & table &
    " ORDER BY storedAt DESC, id DESC" & " LIMIT " & $limit & ");"

proc deleteOldestMessagesNotWithinLimit*(
    db: SqliteDatabase, limit: int
): DatabaseResult[void] =
  # NOTE: The word `limit` here refers the store capacity/maximum number-of-messages allowed limit
  let query = deleteOldestMessagesNotWithinLimitQuery(DbTable, limit = limit)
  discard
    ?db.query(
      query,
      proc(s: ptr sqlite3_stmt) =
        discard
      ,
    )
  return ok()

## Select all messages

proc selectAllMessagesQuery(table: string): SqlQueryStr =
  return
    "SELECT storedAt, contentTopic, payload, pubsubTopic, version, timestamp, id, messageHash" &
    " FROM " & table & " ORDER BY storedAt ASC"

proc selectAllMessages*(
    db: SqliteDatabase
): DatabaseResult[
    seq[(PubsubTopic, WakuMessage, seq[byte], Timestamp, WakuMessageHash)]
] =
  ## Retrieve all messages from the store.
  var rows: seq[(PubsubTopic, WakuMessage, seq[byte], Timestamp, WakuMessageHash)]
  proc queryRowCallback(s: ptr sqlite3_stmt) =
    let
      pubsubTopic = queryRowPubsubTopicCallback(s, pubsubTopicCol = 3)
      wakuMessage = queryRowWakuMessageCallback(
        s, contentTopicCol = 1, payloadCol = 2, versionCol = 4, senderTimestampCol = 5
      )
      digest = queryRowDigestCallback(s, digestCol = 6)
      storedAt = queryRowReceiverTimestampCallback(s, storedAtCol = 0)
      hash = queryRowWakuMessageHashCallback(s, hashCol = 7)

    rows.add((pubsubTopic, wakuMessage, digest, storedAt, hash))

  let query = selectAllMessagesQuery(DbTable)
  let res = db.query(query, queryRowCallback)
  if res.isErr():
    return err(res.error())

  return ok(rows)

## Select messages by history query with limit

proc combineClauses(clauses: varargs[Option[string]]): Option[string] =
  let whereSeq = @clauses.filterIt(it.isSome()).mapIt(it.get())
  if whereSeq.len <= 0:
    return none(string)

  var where: string = whereSeq[0]
  for clause in whereSeq[1 ..^ 1]:
    where &= " AND " & clause
  return some(where)

proc whereClause(
    cursor: Option[DbCursor],
    pubsubTopic: Option[PubsubTopic],
    contentTopic: seq[ContentTopic],
    startTime: Option[Timestamp],
    endTime: Option[Timestamp],
    hashes: seq[WakuMessageHash],
    ascending: bool,
): Option[string] =
  let cursorClause =
    if cursor.isNone():
      none(string)
    else:
      let comp = if ascending: ">" else: "<"
      some("(storedAt, id) " & comp & " (?, ?)")

  let pubsubTopicClause =
    if pubsubTopic.isNone():
      none(string)
    else:
      some("pubsubTopic = (?)")

  let contentTopicClause =
    if contentTopic.len <= 0:
      none(string)
    else:
      var where = "contentTopic IN ("
      where &= "?"
      for _ in 1 ..< contentTopic.len:
        where &= ", ?"
      where &= ")"
      some(where)

  let startTimeClause =
    if startTime.isNone():
      none(string)
    else:
      some("storedAt >= (?)")

  let endTimeClause =
    if endTime.isNone():
      none(string)
    else:
      some("storedAt <= (?)")

  let hashesClause =
    if hashes.len <= 0:
      none(string)
    else:
      var where = "messageHash IN ("
      where &= "?"
      for _ in 1 ..< hashes.len:
        where &= ", ?"
      where &= ")"
      some(where)

  return combineClauses(
    cursorClause, pubsubTopicClause, contentTopicClause, startTimeClause, endTimeClause,
    hashesClause,
  )

proc selectMessagesWithLimitQuery(
    table: string, where: Option[string], limit: uint, ascending = true
): SqlQueryStr =
  let order = if ascending: "ASC" else: "DESC"

  var query: string

  query =
    "SELECT storedAt, contentTopic, payload, pubsubTopic, version, timestamp, id, messageHash"
  query &= " FROM " & table

  if where.isSome():
    query &= " WHERE " & where.get()

  query &= " ORDER BY storedAt " & order & ", id " & order
  query &= " LIMIT " & $limit & ";"

  return query

proc prepareSelectMessagesWithlimitStmt(
    db: SqliteDatabase, stmt: string
): DatabaseResult[SqliteStmt[void, void]] =
  var s: RawStmtPtr
  checkErr sqlite3_prepare_v2(db.env, stmt, stmt.len.cint, addr s, nil)
  return ok(SqliteStmt[void, void](s))

proc execSelectMessagesWithLimitStmt(
    s: SqliteStmt,
    cursor: Option[DbCursor],
    pubsubTopic: Option[PubsubTopic],
    contentTopic: seq[ContentTopic],
    startTime: Option[Timestamp],
    endTime: Option[Timestamp],
    hashes: seq[WakuMessageHash],
    onRowCallback: DataProc,
): DatabaseResult[void] =
  let s = RawStmtPtr(s)

  # Bind params
  var paramIndex = 1

  if cursor.isSome(): # cursor = storedAt, id, pubsubTopic
    let (storedAt, id, _) = cursor.get()
    checkErr bindParam(s, paramIndex, storedAt)
    paramIndex += 1
    checkErr bindParam(s, paramIndex, id)
    paramIndex += 1

  if pubsubTopic.isSome():
    let pubsubTopic = toBytes(pubsubTopic.get())
    checkErr bindParam(s, paramIndex, pubsubTopic)
    paramIndex += 1

  for topic in contentTopic:
    checkErr bindParam(s, paramIndex, topic.toBytes())
    paramIndex += 1

  for hash in hashes:
    let bytes: array[32, byte] = hash
    var byteSeq: seq[byte]

    let byteCount = copyFrom(byteSeq, bytes)
    assert byteCount == 32

    checkErr bindParam(s, paramIndex, byteSeq)
    paramIndex += 1

  if startTime.isSome():
    let time = startTime.get()
    checkErr bindParam(s, paramIndex, time)
    paramIndex += 1

  if endTime.isSome():
    let time = endTime.get()
    checkErr bindParam(s, paramIndex, time)
    paramIndex += 1

  try:
    while true:
      let v = sqlite3_step(s)
      case v
      of SQLITE_ROW:
        onRowCallback(s)
      of SQLITE_DONE:
        return ok()
      else:
        return err($sqlite3_errstr(v))
  finally:
    # release implicit transaction
    discard sqlite3_reset(s) # same return information as step
    discard sqlite3_clear_bindings(s) # no errors possible

proc selectMessagesByHistoryQueryWithLimit*(
    db: SqliteDatabase,
    contentTopic: seq[ContentTopic],
    pubsubTopic: Option[PubsubTopic],
    cursor: Option[DbCursor],
    startTime: Option[Timestamp],
    endTime: Option[Timestamp],
    hashes: seq[WakuMessageHash],
    limit: uint,
    ascending: bool,
): DatabaseResult[
    seq[(PubsubTopic, WakuMessage, seq[byte], Timestamp, WakuMessageHash)]
] =
  var messages: seq[(PubsubTopic, WakuMessage, seq[byte], Timestamp, WakuMessageHash)] =
    @[]
  proc queryRowCallback(s: ptr sqlite3_stmt) =
    let
      pubsubTopic = queryRowPubsubTopicCallback(s, pubsubTopicCol = 3)
      message = queryRowWakuMessageCallback(
        s, contentTopicCol = 1, payloadCol = 2, versionCol = 4, senderTimestampCol = 5
      )
      digest = queryRowDigestCallback(s, digestCol = 6)
      storedAt = queryRowReceiverTimestampCallback(s, storedAtCol = 0)
      hash = queryRowWakuMessageHashCallback(s, hashCol = 7)

    messages.add((pubsubTopic, message, digest, storedAt, hash))

  let query = block:
    let where = whereClause(
      cursor, pubsubTopic, contentTopic, startTime, endTime, hashes, ascending
    )
    selectMessagesWithLimitQuery(DbTable, where, limit, ascending)

  let dbStmt = ?db.prepareSelectMessagesWithlimitStmt(query)
  ?dbStmt.execSelectMessagesWithLimitStmt(
    cursor, pubsubTopic, contentTopic, startTime, endTime, hashes, queryRowCallback
  )
  dbStmt.dispose()

  return ok(messages)
