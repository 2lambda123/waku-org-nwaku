when (NimMajor, NimMinor) < (1, 4):
  {.push raises: [Defect].}
else:
  {.push raises: [].}

import
  std/times,
  stew/results,
  chronicles,
  chronos,
  os
import
  ../driver,
  ../retention_policy

logScope:
  topics = "waku archive retention_policy"

# default size is 30 GiB or 32212254720.0 in bytes
const DefaultRetentionSize*: int64 = 32212254720

# to remove 20% of the outdated data from database
const DeleteLimit = 0.80

type
  # SizeRetentionPolicy implements auto delete as follows:
  # - sizeLimit is the size in bytes the database can grow upto
  # to reduce the size of the databases, remove the rows/number-of-messages
  # DeleteLimit is the total number of messages to delete beyond this limit
  # when the database size crosses the sizeLimit, then only a fraction of messages are kept,
  # rest of the outdated message are deleted using deleteOldestMessagesNotWithinLimit(),
  # upon deletion process the fragmented space is retrieve back using Vacuum process. 
  SizeRetentionPolicy* = ref object of RetentionPolicy
      sizeLimit: int64

proc init*(T: type SizeRetentionPolicy, size=DefaultRetentionSize): T =
  SizeRetentionPolicy(
    sizeLimit: size
  )

method execute*(p: SizeRetentionPolicy,
                driver: ArchiveDriver):
                Future[RetentionPolicyResult[void]] {.async.} =

  # In SQLite vacuuming is done manually,
  let dbEngine = driver.getDbType()
  if dbEngine == "sqlite":
    return ok()

  ## when db size overshoots the database limit, shread 20% of outdated messages 
  # get size of database
  var dbSize = (await driver.getDatabaseSize()).valueOr:
    return err("failed to get database size: " & $error)

  # database size in bytes
  var totalSizeOfDB: int64 = int64(dbSize)
  let retryLimit = 2
  var retryCounter:int = 0

  if totalSizeOfDB < p.sizeLimit:
    return ok()
  
    # NOTE: Using SQLite vacuuming is done manually, we delete a percentage of rows
    # if vacumming is done automatically then we aim to check DB size periodially for efficient
    # retention policy implementation.
  while (totalSizeOfDB > p.sizeLimit) and (retryLimit > retryCounter):
    # to shread/delete messsges, get the total row/message count
    let numMessages = (await driver.getMessagesCount()).valueOr:
      return err("failed to get messages count: " & error)

    # 80% of the total messages are to be kept, delete others
    let pageDeleteWindow = int(float(numMessages) * DeleteLimit)

    (await driver.deleteOldestMessagesNotWithinLimit(limit=pageDeleteWindow)).isOkOr:
      return err("deleting oldest messages failed: " & error)

    # perform vacuum
    let resVaccum = await driver.performVacuum()
    if resVaccum.isErr():
      return err("vacuumming failed: " & resVaccum.error)
    # recompute the DB size to check if the size has actually reduced or not
    
    dbSize = (await driver.getDatabaseSize()).valueOr:
      return err("failed to get database size: " & $error)
    totalSizeOfDB = int64(dbSize)
    retryCounter += 1
    sleep(150*retryCounter)

  return ok()
