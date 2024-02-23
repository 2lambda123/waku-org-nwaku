when (NimMajor, NimMinor) < (1, 4):
  {.push raises: [Defect].}
else:
  {.push raises: [].}

import
  std/[options, strutils, sequtils],
  stew/results,
  chronicles,
  chronos,
  libp2p/wire,
  libp2p/multicodec,
  libp2p/crypto/crypto,
  libp2p/nameresolving/dnsresolver,
  libp2p/protocols/pubsub/gossipsub,
  libp2p/peerid,
  eth/keys,
  json_rpc/rpcserver,
  presto,
  metrics,
  metrics/chronos_httpserver
import
  ../../waku/common/utils/nat,
  ../../waku/common/utils/parse_size_units,
  ../../waku/common/databases/db_sqlite,
  ../../waku/waku_archive/driver/builder,
  ../../waku/waku_archive/retention_policy/builder,
  ../../waku/waku_core,
  ../../waku/waku_node,
  ../../waku/node/waku_metrics,
  ../../waku/node/peer_manager,
  ../../waku/node/peer_manager/peer_store/waku_peer_storage,
  ../../waku/node/peer_manager/peer_store/migrations as peer_store_sqlite_migrations,
  ../../waku/waku_api/message_cache,
  ../../waku/waku_api/handlers,
  ../../waku/waku_api/rest/server,
  ../../waku/waku_api/rest/debug/handlers as rest_debug_api,
  ../../waku/waku_api/rest/relay/handlers as rest_relay_api,
  ../../waku/waku_api/rest/filter/legacy_handlers as rest_legacy_filter_api,
  ../../waku/waku_api/rest/filter/handlers as rest_filter_api,
  ../../waku/waku_api/rest/lightpush/handlers as rest_lightpush_api,
  ../../waku/waku_api/rest/store/handlers as rest_store_api,
  ../../waku/waku_api/rest/health/handlers as rest_health_api,
  ../../waku/waku_api/rest/admin/handlers as rest_admin_api,
  ../../waku/waku_api/jsonrpc/admin/handlers as rpc_admin_api,
  ../../waku/waku_api/jsonrpc/debug/handlers as rpc_debug_api,
  ../../waku/waku_api/jsonrpc/filter/handlers as rpc_filter_api,
  ../../waku/waku_api/jsonrpc/relay/handlers as rpc_relay_api,
  ../../waku/waku_api/jsonrpc/store/handlers as rpc_store_api,
  ../../waku/waku_archive,
  ../../waku/waku_dnsdisc,
  ../../waku/waku_enr/sharding,
  ../../waku/waku_discv5,
  ../../waku/waku_peer_exchange,
  ../../waku/waku_rln_relay,
  ../../waku/waku_store,
  ../../waku/waku_lightpush/common,
  ../../waku/waku_filter,
  ../../waku/waku_filter_v2,
  ./wakunode2_validator_signed,
  ./internal_config,
  ./external_config

logScope:
  topics = "wakunode app"


# Git version in git describe format (defined at compile time)
const git_version* {.strdefine.} = "n/a"

type
  App* = object
    version: string
    conf: WakuNodeConf
    rng: ref HmacDrbgContext
    key: crypto.PrivateKey
    record: Record

    wakuDiscv5: Option[WakuDiscoveryV5]
    peerStore: Option[WakuPeerStorage]
    dynamicBootstrapNodes: seq[RemotePeerInfo]

    node: WakuNode

    rpcServer: Option[RpcHttpServer]
    restServer: Option[RestServerRef]
    metricsServer: Option[MetricsHttpServerRef]

  AppResult*[T] = Result[T, string]


func node*(app: App): WakuNode =
  app.node

func version*(app: App): string =
  app.version

## Initialisation

proc init*(T: type App, conf: WakuNodeConf): Result[App, string] =

  #var wakuDiscV5 = none(WakuDiscoveryV5)
  let rng = crypto.newRng()

  #[ if not conf.nodekey.isSome():
    let key = crypto.PrivateKey.random(Secp256k1, rng[]).valueOr:
      error "Failed to generate key"
      return err("Failed to generate key")
    conf.nodekey = some(key) ]#

  let node = setupNode(conf).valueOr:
    error "Failed setting up node"#, error=$error
    return err("Failed setting up node ")# & $error)

  #[ if conf.discv5Discovery:
    wakuDiscV5 = some(app.setupDiscoveryV5()) ]#

  ok(App(
    version: git_version,
    conf: conf,
    rng: rng,
    key: conf.nodekey.get(),
    node: node
  ))

## Setup DiscoveryV5

proc setupDiscoveryV5*(app: App): WakuDiscoveryV5 =
  let dynamicBootstrapEnrs = app.dynamicBootstrapNodes
                                .filterIt(it.hasUdpPort())
                                .mapIt(it.enr.get())

  var discv5BootstrapEnrs: seq[enr.Record]

  # parse enrURIs from the configuration and add the resulting ENRs to the discv5BootstrapEnrs seq
  for enrUri in app.conf.discv5BootstrapNodes:
    addBootstrapNode(enrUri, discv5BootstrapEnrs)

  discv5BootstrapEnrs.add(dynamicBootstrapEnrs)

  let discv5Config = DiscoveryConfig.init(app.conf.discv5TableIpLimit,
                                          app.conf.discv5BucketIpLimit,
                                          app.conf.discv5BitsPerHop)

  let discv5UdpPort = Port(uint16(app.conf.discv5UdpPort) + app.conf.portsShift)

  let discv5Conf = WakuDiscoveryV5Config(
    discv5Config: some(discv5Config),
    address: app.conf.listenAddress,
    port: discv5UdpPort,
    privateKey: keys.PrivateKey(app.key.skkey),
    bootstrapRecords: discv5BootstrapEnrs,
    autoupdateRecord: app.conf.discv5EnrAutoUpdate,
  )

  WakuDiscoveryV5.new(
    app.rng,
    discv5Conf,
    some(app.record),
    some(app.node.peerManager),
    app.node.topicSubscriptionQueue,
  )

proc setupWakuApp*(app: var App): AppResult[void] =
  ## Waku node
  #[ app.node = setupNode(app.conf).valueOr:
    return err("Failed to set up node: " & error) ]#
  
  ## Discv5
  if app.conf.discv5Discovery:
    app.wakuDiscV5 = some(app.setupDiscoveryV5())

  ok()

proc getPorts(listenAddrs: seq[MultiAddress]):
              AppResult[tuple[tcpPort, websocketPort: Option[Port]]] =

  var tcpPort, websocketPort = none(Port)

  for a in listenAddrs:
    if a.isWsAddress():
      if websocketPort.isNone():
        let wsAddress = initTAddress(a).valueOr:
          return err("getPorts wsAddr error:" & $error)
        websocketPort = some(wsAddress.port)
    elif tcpPort.isNone():
      let tcpAddress = initTAddress(a).valueOr:
        return err("getPorts tcpAddr error:" & $error)
      tcpPort = some(tcpAddress.port)

  return ok((tcpPort: tcpPort, websocketPort: websocketPort))

#[ proc updateNetConfig(app: var App): AppResult[void] =

  var conf = app.conf
  let (tcpPort, websocketPort) = getPorts(app.node.switch.peerInfo.listenAddrs).valueOr:
    return err("Could not retrieve ports " & error)

  if tcpPort.isSome():
    conf.tcpPort = tcpPort.get()

  if websocketPort.isSome():
    conf.websocketPort = websocketPort.get()

  # Rebuild NetConfig with bound port values
  let netConf = networkConfiguration(conf, clientId).valueOr:
    return err("Could not update NetConfig: " & error)

  #app.netConf = netConf

  return ok()

proc updateEnr(app: var App): AppResult[void] =

  let record = enrConfiguration(app.conf, app.netConf, app.key).valueOr:
    return err("ENR setup failed: " & error)

  if isClusterMismatched(record, app.conf.clusterId):
    return err("cluster id mismatch configured shards")

  app.record = record
  app.node.enr = record

  if app.conf.discv5Discovery:
    app.wakuDiscV5 = some(app.setupDiscoveryV5())

  return ok()

proc updateApp(app: var App): AppResult[void] =

  if app.conf.tcpPort == Port(0) or app.conf.websocketPort == Port(0):

    updateNetConfig(app).isOkOr:
      return err("error calling updateNetConfig: " & $error)

    updateEnr(app).isOkOr:
      return err("error calling updateEnr: " & $error)

    app.node.announcedAddresses = app.netConf.announcedAddresses

    printNodeNetworkInfo(app.node)

  return ok() ]#

proc startApp*(app: var App): AppResult[void] =

  let nodeRes = catch: (waitFor startNode(app.node,app.conf))
  if nodeRes.isErr():
    return err("exception starting node: " & nodeRes.error.msg)

  nodeRes.get().isOkOr:
    return err("exception starting node: " & $error)

  # Update app data that is set dynamically on node start
  #[ app.updateApp().isOkOr:
    return err("Error in updateApp: " & $error) ]#

  if app.wakuDiscv5.isSome():
    let wakuDiscv5 = app.wakuDiscv5.get()
    let catchRes = catch: (waitFor wakuDiscv5.start())
    let startRes = catchRes.valueOr:
      return err("failed to start waku discovery v5: " & catchRes.error.msg)

    startRes.isOkOr:
      return err("failed to start waku discovery v5: " & error)

  return ok()



## Monitoring and external interfaces

proc startRestServer(app: App, address: IpAddress, port: Port, conf: WakuNodeConf): AppResult[RestServerRef] =

  # Used to register api endpoints that are not currently installed as keys,
  # values are holding error messages to be returned to the client
  var notInstalledTab: Table[string, string] = initTable[string, string]()

  proc requestErrorHandler(error: RestRequestError,
                                request: HttpRequestRef):
                                Future[HttpResponseRef] {.async.} =
    case error
    of RestRequestError.Invalid:
      return await request.respond(Http400, "Invalid request", HttpTable.init())
    of RestRequestError.NotFound:
      let rootPath = request.rawPath.split("/")[1]
      if notInstalledTab.hasKey(rootPath):
        return await request.respond(Http404, notInstalledTab[rootPath], HttpTable.init())
      else:
        return await request.respond(Http400, "Bad request initiated. Invalid path or method used.", HttpTable.init())
    of RestRequestError.InvalidContentBody:
      return await request.respond(Http400, "Invalid content body", HttpTable.init())
    of RestRequestError.InvalidContentType:
      return await request.respond(Http400, "Invalid content type", HttpTable.init())
    of RestRequestError.Unexpected:
      return defaultResponse()

    return defaultResponse()

  let server = ? newRestHttpServer(address, port, requestErrorHandler = requestErrorHandler)
  ## Admin REST API
  if conf.restAdmin:
    installAdminApiHandlers(server.router, app.node)

  ## Debug REST API
  installDebugApiHandlers(server.router, app.node)

  ## Health REST API
  installHealthApiHandler(server.router, app.node)

  ## Relay REST API
  if conf.relay:
    let cache = MessageCache.init(int(conf.restRelayCacheCapacity))

    let handler = messageCacheHandler(cache)

    for pubsubTopic in conf.pubsubTopics:
      cache.pubsubSubscribe(pubsubTopic)
      app.node.subscribe((kind: PubsubSub, topic: pubsubTopic), some(handler))

    for contentTopic in conf.contentTopics:
      cache.contentSubscribe(contentTopic)
      app.node.subscribe((kind: ContentSub, topic: contentTopic), some(handler))

    installRelayApiHandlers(server.router, app.node, cache)
  else:
    notInstalledTab["relay"] = "/relay endpoints are not available. Please check your configuration: --relay"

  ## Filter REST API
  if conf.filternode  != "" and
     app.node.wakuFilterClient != nil and
     app.node.wakuFilterClientLegacy != nil:

    let legacyFilterCache = MessageCache.init()
    rest_legacy_filter_api.installLegacyFilterRestApiHandlers(server.router, app.node, legacyFilterCache)

    let filterCache = MessageCache.init()

    let filterDiscoHandler =
      if app.wakuDiscv5.isSome():
        some(defaultDiscoveryHandler(app.wakuDiscv5.get(), Filter))
      else: none(DiscoveryHandler)

    rest_filter_api.installFilterRestApiHandlers(
      server.router,
      app.node,
      filterCache,
      filterDiscoHandler,
    )
  else:
    notInstalledTab["filter"] = "/filter endpoints are not available. Please check your configuration: --filternode"

  ## Store REST API
  let storeDiscoHandler =
    if app.wakuDiscv5.isSome():
      some(defaultDiscoveryHandler(app.wakuDiscv5.get(), Store))
    else: none(DiscoveryHandler)

  installStoreApiHandlers(server.router, app.node, storeDiscoHandler)

  ## Light push API
  if conf.lightpushnode  != "" and
     app.node.wakuLightpushClient != nil:
    let lightDiscoHandler =
      if app.wakuDiscv5.isSome():
        some(defaultDiscoveryHandler(app.wakuDiscv5.get(), Lightpush))
      else: none(DiscoveryHandler)

    rest_lightpush_api.installLightPushRequestHandler(server.router, app.node, lightDiscoHandler)
  else:
    notInstalledTab["lightpush"] = "/lightpush endpoints are not available. Please check your configuration: --lightpushnode"

  server.start()
  info "Starting REST HTTP server", url = "http://" & $address & ":" & $port & "/"

  ok(server)

proc startRpcServer(app: App, address: IpAddress, port: Port, conf: WakuNodeConf): AppResult[RpcHttpServer] =
  let ta = initTAddress(address, port)

  var server: RpcHttpServer
  try:
    server = newRpcHttpServer([ta])
  except CatchableError:
    return err("failed to init JSON-RPC server: " & getCurrentExceptionMsg())

  installDebugApiHandlers(app.node, server)

  if conf.relay:
    let cache = MessageCache.init(capacity=50)

    let handler = messageCacheHandler(cache)

    for pubsubTopic in conf.pubsubTopics:
      cache.pubsubSubscribe(pubsubTopic)
      app.node.subscribe((kind: PubsubSub, topic: pubsubTopic), some(handler))

    for contentTopic in conf.contentTopics:
      cache.contentSubscribe(contentTopic)
      app.node.subscribe((kind: ContentSub, topic: contentTopic), some(handler))

    installRelayApiHandlers(app.node, server, cache)

  if conf.filternode != "":
    let filterMessageCache = MessageCache.init(capacity=50)
    installFilterApiHandlers(app.node, server, filterMessageCache)

  installStoreApiHandlers(app.node, server)

  if conf.rpcAdmin:
    installAdminApiHandlers(app.node, server)

  server.start()
  info "RPC Server started", address=ta

  ok(server)

proc startMetricsServer(serverIp: IpAddress, serverPort: Port): AppResult[MetricsHttpServerRef] =
  info "Starting metrics HTTP server", serverIp= $serverIp, serverPort= $serverPort

  let metricsServerRes = MetricsHttpServerRef.new($serverIp, serverPort)
  if metricsServerRes.isErr():
    return err("metrics HTTP server start failed: " & $metricsServerRes.error)

  let server = metricsServerRes.value
  try:
    waitFor server.start()
  except CatchableError:
    return err("metrics HTTP server start failed: " & getCurrentExceptionMsg())

  info "Metrics HTTP server started", serverIp= $serverIp, serverPort= $serverPort
  ok(server)

proc startMetricsLogging(): AppResult[void] =
  startMetricsLog()
  ok()

proc setupMonitoringAndExternalInterfaces*(app: var App): AppResult[void] =
  if app.conf.rpc:
    let startRpcServerRes = startRpcServer(app, app.conf.rpcAddress, Port(app.conf.rpcPort + app.conf.portsShift), app.conf)
    if startRpcServerRes.isErr():
      error "6/7 Starting JSON-RPC server failed. Continuing in current state.", error=startRpcServerRes.error
    else:
      app.rpcServer = some(startRpcServerRes.value)

  if app.conf.rest:
    let startRestServerRes = startRestServer(app, app.conf.restAddress, Port(app.conf.restPort + app.conf.portsShift), app.conf)
    if startRestServerRes.isErr():
      error "6/7 Starting REST server failed. Continuing in current state.", error=startRestServerRes.error
    else:
      app.restServer = some(startRestServerRes.value)


  if app.conf.metricsServer:
    let startMetricsServerRes = startMetricsServer(app.conf.metricsServerAddress, Port(app.conf.metricsServerPort + app.conf.portsShift))
    if startMetricsServerRes.isErr():
      error "6/7 Starting metrics server failed. Continuing in current state.", error=startMetricsServerRes.error
    else:
      app.metricsServer = some(startMetricsServerRes.value)

  if app.conf.metricsLogging:
    let startMetricsLoggingRes = startMetricsLogging()
    if startMetricsLoggingRes.isErr():
      error "6/7 Starting metrics console logging failed. Continuing in current state.", error=startMetricsLoggingRes.error

  ok()


# App shutdown

proc stop*(app: App): Future[void] {.async: (raises: [Exception]).} =
  if app.restServer.isSome():
    await app.restServer.get().stop()

  if app.rpcServer.isSome():
    await app.rpcServer.get().stop()

  if app.metricsServer.isSome():
    await app.metricsServer.get().stop()

  if app.wakuDiscv5.isSome():
    await app.wakuDiscv5.get().stop()

  if not app.node.isNil():
    await app.node.stop()
