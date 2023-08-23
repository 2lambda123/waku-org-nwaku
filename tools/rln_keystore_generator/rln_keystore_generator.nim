when (NimMajor, NimMinor) < (1, 4):
  {.push raises: [Defect].}
else:
  {.push raises: [].}

import
  chronicles,
  stew/[results],
  std/tempfiles

import
  ../../waku/waku_keystore,
  ../../waku/waku_rln_relay/rln,
  ../../waku/waku_rln_relay/conversion_utils,
  ./external_config

logScope:
  topics = "rln_keystore_generator"

when isMainModule:
  {.pop.}
  # 1. load configuration
  let confRes = RlnKeystoreGeneratorConf.loadConfig()
  if confRes.isErr():
    error "failure while loading the configuration", error=confRes.error
    quit(1)

  let conf = confRes.get()
  
  debug "configuration", conf = $conf

  # 2. initialize rlnInstance
  let rlnInstanceRes = createRLNInstance(d=20, 
                                         tree_path = genTempPath("rln_tree", "rln_keystore_generator"))
  if rlnInstanceRes.isErr():
    error "failure while creating RLN instance", error=rlnInstanceRes.error
    quit(1)
  
  let rlnInstance = rlnInstanceRes.get()

  # 3. generate credentials
  let credentialRes = rlnInstance.membershipKeyGen()
  if credentialRes.isErr():
    error "failure while generating credentials", error=credentialRes.error
    quit(1)

  let credential = credentialRes.get()
  debug "credentials", idTrapdoor = credential.idTrapdoor.inHex(), 
                       idNullifier = credential.idNullifier.inHex(),
                       idSecretHash = credential.idSecretHash.inHex(),
                       idCommitment = credential.idCommitment.inHex()

  # 4. write to keystore
  ## TODO: after hooking up to the OnchainGroupManager, 
  ## obtain chainId and treeIndex from the contract
  let keystoreCred = MembershipCredentials(
    identityCredential: credential,
    membershipGroups: @[MembershipGroup(
      membershipContract: MembershipContract(
        chainId: "1155511",
        address: conf.rlnRelayEthContractAddress,
      ),
      treeIndex: 0,
    )]
  )

  let persistRes = addMembershipCredentials(conf.rlnRelayCredPath, 
                                            @[keystoreCred], 
                                            conf.rlnRelayCredPassword, 
                                            RLNAppInfo)
  if persistRes.isErr():
    error "failed to persist credentials", error=persistRes.error
    quit(1)
  
  info "credentials persisted", path = conf.rlnRelayCredPath

  


