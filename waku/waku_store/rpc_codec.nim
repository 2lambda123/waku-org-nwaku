when (NimMajor, NimMinor) < (1, 4):
  {.push raises: [Defect].}
else:
  {.push raises: [].}

import std/options, stew/arrayops, nimcrypto/hash
import ../common/[protobuf, paging], ../waku_core, ./common

#TODO recalculate the max size
const MaxRpcSize* = MaxPageSize * MaxWakuMessageSize + 64 * 1024
  # We add a 64kB safety buffer for protocol overhead

### Request ###

proc encode*(req: StoreQueryRequest): ProtoBuffer =
  var pb = initProtoBuffer()

  pb.write3(1, req.requestId)
  pb.write3(2, req.includeData)

  pb.write3(3, req.pubsubTopic)

  for contentTopic in req.contentTopics:
    pb.write3(4, contentTopic)

  pb.write3(
    5,
    req.startTime.map(
      proc(time: int64): zint64 =
        zint64(time)
    ),
  )
  pb.write3(
    6,
    req.endTime.map(
      proc(time: int64): zint64 =
        zint64(time)
    ),
  )

  for hash in req.messagehashes:
    pb.write3(7, hash)

  pb.write3(8, req.paginationCursor)
  pb.write3(9, uint32(req.paginationForward))
  pb.write3(10, req.paginationLimit)

  pb.finish3()

  return pb

proc decode*(
    T: type StoreQueryRequest, buffer: seq[byte]
): ProtobufResult[StoreQueryRequest] =
  var req = StoreQueryRequest()
  let pb = initProtoBuffer(buffer)

  if not ?pb.getField(1, req.requestId):
    return err(ProtobufError.missingRequiredField("request_id"))

  var inclData: uint
  if not ?pb.getField(2, inclData):
    req.includeData = false
  else:
    req.includeData = inclData == 1

  var pubsubTopic: string
  if not ?pb.getField(3, pubsubTopic):
    req.pubsubTopic = none(string)
  else:
    req.pubsubTopic = some(pubsubTopic)

  var topics: seq[string]
  if not ?pb.getRepeatedField(4, topics):
    req.contentTopics = @[]
  else:
    req.contentTopics = topics

  var start: zint64
  if not ?pb.getField(5, start):
    req.startTime = none(Timestamp)
  else:
    req.startTime = some(Timestamp(int64(start)))

  var endTime: zint64
  if not ?pb.getField(6, endTime):
    req.endTime = none(Timestamp)
  else:
    req.endTime = some(Timestamp(int64(endTime)))

  var buffer: seq[seq[byte]]
  if not ?pb.getRepeatedField(7, buffer):
    req.messageHashes = @[]
  else:
    req.messageHashes = newSeqOfCap[WakuMessageHash](buffer.len)
    for buf in buffer:
      var hash: WakuMessageHash
      discard copyFrom[byte](hash, buf)
      req.messageHashes.add(hash)

  var cursor: seq[byte]
  if not ?pb.getField(8, cursor):
    req.paginationCursor = none(WakuMessageHash)
  else:
    var hash: WakuMessageHash
    discard copyFrom[byte](hash, cursor)
    req.paginationCursor = some(hash)

  var paging: uint32
  if not ?pb.getField(9, paging):
    req.paginationForward = PagingDirection.default()
  else:
    req.paginationForward = PagingDirection(paging)

  var limit: uint64
  if not ?pb.getField(10, limit):
    req.paginationLimit = none(uint64)
  else:
    req.paginationLimit = some(limit)

  return ok(req)

### Response ###

proc encode*(keyValue: WakuMessageKeyValue): ProtoBuffer =
  var pb = initProtoBuffer()

  pb.write3(1, keyValue.messageHash)
  pb.write3(2, keyValue.message.encode())

  pb.finish3()

  return pb

proc encode*(res: StoreQueryResponse): ProtoBuffer =
  var pb = initProtoBuffer()

  pb.write3(1, res.requestId)

  pb.write3(2, res.statusCode)
  pb.write3(3, res.statusDesc)

  for msg in res.messages:
    pb.write3(4, msg.encode())

  pb.write3(5, res.paginationCursor)

  pb.finish3()

  return pb

proc decode*(
    T: type WakuMessageKeyValue, buffer: seq[byte]
): ProtobufResult[WakuMessageKeyValue] =
  var keyValue = WakuMessageKeyValue()
  let pb = initProtoBuffer(buffer)

  var buf: seq[byte]
  if not ?pb.getField(1, buf):
    return err(ProtobufError.missingRequiredField("message_hash"))
  else:
    var hash: WakuMessageHash
    discard copyFrom[byte](hash, buf)
    keyValue.messagehash = hash

  var proto: ProtoBuffer
  if not ?pb.getField(2, proto):
    return err(ProtobufError.missingRequiredField("message"))
  else:
    keyValue.message = ?WakuMessage.decode(proto.buffer)

  return ok(keyValue)

proc decode*(
    T: type StoreQueryResponse, buffer: seq[byte]
): ProtobufResult[StoreQueryResponse] =
  var res = StoreQueryResponse()
  let pb = initProtoBuffer(buffer)

  if not ?pb.getField(1, res.requestId):
    return err(ProtobufError.missingRequiredField("request_id"))

  var code: uint32
  if not ?pb.getField(2, code):
    return err(ProtobufError.missingRequiredField("status_code"))
  else:
    res.statusCode = code

  var desc: string
  if not ?pb.getField(3, desc):
    return err(ProtobufError.missingRequiredField("status_desc"))
  else:
    res.statusDesc = desc

  var buffer: seq[seq[byte]]
  if not ?pb.getRepeatedField(4, buffer):
    res.messages = @[]
  else:
    res.messages = newSeqOfCap[WakuMessageKeyValue](buffer.len)
    for buf in buffer:
      let msg = ?WakuMessageKeyValue.decode(buf)
      res.messages.add(msg)

  var cursor: seq[byte]
  if not ?pb.getField(5, cursor):
    res.paginationCursor = none(WakuMessageHash)
  else:
    var hash: WakuMessageHash
    discard copyFrom[byte](hash, cursor)
    res.paginationCursor = some(hash)

  return ok(res)
