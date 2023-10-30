when (NimMajor, NimMinor) < (1, 4):
  {.push raises: [Defect].}
else:
  {.push raises: [].}

import
  std/strformat,
  std/sequtils,
  stew/byteutils,
  chronicles,
  json_serialization,
  json_serialization/std/options,
  presto/route,
  presto/common

import
  ../../../waku_core,
  ../../waku/node/peer_manager,
  ../../../waku_node,
  ../../waku/waku_lightpush,
  ../../handlers,
  ../serdes,
  ../responses,
  ./types

export types

logScope:
  topics = "waku node rest lightpush api"

const futTimeoutForPushRequestProcessing* = 5.seconds

const NoPeerNoDiscoError = RestApiResponse.serviceUnavailable(
  "No suitable service peer & no discovery method")

const NoPeerNoneFoundError = RestApiResponse.serviceUnavailable(
  "No suitable service peer & none discovered")

#### Request handlers

const ROUTE_LIGHTPUSH* = "/lightpush/v1/message"

func decodeRequestBody[T](contentBody: Option[ContentBody]) : Result[T, RestApiResponse] =
  if contentBody.isNone():
    return err(RestApiResponse.badRequest("Missing content body"))

  let reqBodyContentType = MediaType.init($contentBody.get().contentType)
  if reqBodyContentType != MIMETYPE_JSON:
    return err(RestApiResponse.badRequest("Wrong Content-Type, expected application/json"))

  let reqBodyData = contentBody.get().data

  let requestResult = decodeFromJsonBytes(T, reqBodyData)
  if requestResult.isErr():
    return err(RestApiResponse.badRequest("Invalid content body, could not decode. " &
                                          $requestResult.error))

  return ok(requestResult.get())

proc installLightPushRequestHandler*(
  router: var RestRouter,
  node: WakuNode,
  discHandler: Option[DiscoveryHandler] = none(DiscoveryHandler),
  ) =

  router.api(MethodPost, ROUTE_LIGHTPUSH) do (contentBody: Option[ContentBody]) -> RestApiResponse:
    ## Send a request to push a waku message
    debug "post", ROUTE_LIGHTPUSH, contentBody

    let decodedBody = decodeRequestBody[PushRequest](contentBody)

    if decodedBody.isErr():
      return decodedBody.error()

    let req: PushRequest = decodedBody.value()
    
    let msg = req.message.toWakuMessage().valueOr:
      return RestApiResponse.badRequest("Invalid message: {msg.error}")

    let peer = node.peerManager.selectPeer(WakuLightPushCodec).valueOr:
      let handler = discHandler.valueOr:
        return NoPeerNoDiscoError

      let peerOp = (await handler()).valueOr:
        return RestApiResponse.internalServerError($error)

      peerOp.valueOr:
        return NoPeerNoneFoundError

    let subFut = node.lightpushPublish(req.pubsubTopic, msg, peer)

    if not await subFut.withTimeout(futTimeoutForPushRequestProcessing):
      error "Failed to request a message push due to timeout!"
      return RestApiResponse.serviceUnavailable("Push request timed out")

    if subFut.value().isErr():
      return RestApiResponse.serviceUnavailable(
        fmt("Failed to request a message push: {subFut.value().error}")
      )

    return RestApiResponse.ok()
