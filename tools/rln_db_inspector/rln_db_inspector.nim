when (NimMajor, NimMinor) < (1, 4):
  {.push raises: [Defect].}
else:
  {.push raises: [].}

import chronicles, sequtils, stew/[results]

import
  ../../waku/waku_rln_relay/rln,
  ../../waku/waku_rln_relay/conversion_utils,
  ../../waku/factory/external_config

logScope:
  topics = "rln_db_inspector"

proc doInspectRlnDb*(conf: WakuNodeConf) =
  # 1. load configuration
  trace "configuration", conf = $conf

  # 2. initialize rlnInstance
  let rlnInstance = createRLNInstance(d = 20, tree_path = conf.treePath).valueOr:
    error "failure while creating RLN instance", error
    quit(1)

  # 3. get metadata
  let metadataOpt = rlnInstance.getMetadata().valueOr:
    error "failure while getting RLN metadata", error
    quit(1)

  if metadataOpt.isNone():
    error "RLN metadata does not exist"
    quit(1)
  let metadata = metadataOpt.get()

  info "RLN metadata",
    lastProcessedBlock = metadata.lastProcessedBlock,
    chainId = metadata.chainId,
    contractAddress = metadata.contractAddress,
    validRoots = metadata.validRoots.mapIt(it.inHex())

  # 4. go from 0 to last leaf, see if zeroes are in between
  var index: uint = 0
  var hits = 0
  while true:
    let leaf = rlnInstance.getMember(index).valueOr:
      error "failure while getting RLN leaf", error
      quit(1)
    
    if leaf.inHex() == "0000000000000000000000000000000000000000000000000000000000000000":
      debug "found zero leaf", index = index
      hits = hits + 1
    else:
      hits = 0
    
    if hits > 10:
      info "reached end of RLN tree", index = index - 10
      break
  
    index = index + 1

  quit(0)
