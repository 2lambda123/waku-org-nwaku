{.used.}

import
  std/options,
  stew/results,
  testutils/unittests
import
  ../../../waku/v2/waku_core/topics

suite "Waku Message - Content topics namespacing":

  test "Stringify namespaced content topic":
    ## Given
    var ns = NsContentTopic()
    ns.generation = none(int)
    ns.bias = Unbiased
    ns.application = "toychat"
    ns.version = "2"
    ns.name = "huilong"
    ns.encoding = "proto"

    ## When
    let topic = $ns

    ## Then
    check:
      topic == "/toychat/2/huilong/proto"

  test "Parse content topic string - Valid string":
    ## Given
    let topic = "/toychat/2/huilong/proto"

    ## When
    let nsRes = NsContentTopic.parse(topic)

    ## Then
    assert nsRes.isOk(), $nsRes.error

    let ns = nsRes.get()
    check:
      ns.generation == none(int)
      ns.bias == Unbiased
      ns.application == "toychat"
      ns.version == "2"
      ns.name == "huilong"
      ns.encoding == "proto"

  test "Parse content topic string - Valid string with sharding":
    ## Given
    let topic = "/0/lower20/toychat/2/huilong/proto"

    ## When
    let nsRes = NsContentTopic.parse(topic)

    ## Then
    assert nsRes.isOk(), $nsRes.error

    let ns = nsRes.get()
    check:
      ns.generation == some(0)
      ns.bias == Lower20
      ns.application == "toychat"
      ns.version == "2"
      ns.name == "huilong"
      ns.encoding == "proto"

  test "Parse content topic string - Invalid string: missing leading slash":
    ## Given
    let topic = "toychat/2/huilong/proto"

    ## When
    let ns = NsContentTopic.parse(topic)

    ## Then
    assert ns.isErr(), $ns.get()

    let err = ns.tryError()
    check:
      err.kind == ParsingErrorKind.InvalidFormat
      err.cause == "topic must start with slash"

  test "Parse content topic string - Invalid string: not namespaced":
    ## Given
    let topic = "/this-is-not-namespaced"

    ## When
    let ns = NsContentTopic.parse(topic)

    ## Then
    assert ns.isErr(), $ns.get()

    let err = ns.tryError()
    check:
      err.kind == ParsingErrorKind.InvalidFormat
      err.cause == "invalid topic structure"

  test "Parse content topic string - Invalid string: missing encoding part":
    ## Given
    let topic = "/toychat/2/huilong"

    ## When
    let ns = NsContentTopic.parse(topic)

    ## Then
    assert ns.isErr(), $ns.get()

    let err = ns.tryError()
    check:
      err.kind == ParsingErrorKind.InvalidFormat
      err.cause == "invalid topic structure"

  test "Parse content topic string - Invalid string: wrong extra parts":
    ## Given
    let topic = "/toychat/2/huilong/proto/33"

    ## When
    let ns = NsContentTopic.parse(topic)

    ## Then
    assert ns.isErr(), $ns.get()

    let err = ns.tryError()
    check:
      err.kind == ParsingErrorKind.InvalidFormat
      err.cause == "invalid topic structure"

  test "Parse content topic string - Invalid string: non numeric generation":
    ## Given
    let topic = "/first/unbiased/toychat/2/huilong/proto"

    ## When
    let ns = NsContentTopic.parse(topic)

    ## Then
    assert ns.isErr(), $ns.get()

    let err = ns.tryError()
    check:
      err.kind == ParsingErrorKind.InvalidFormat
      err.cause == "generation should be a numeric value"

  test "Parse content topic string - Invalid string: invalid bias":
    ## Given
    let topic = "/0/no/toychat/2/huilong/proto"

    ## When
    let ns = NsContentTopic.parse(topic)

    ## Then
    assert ns.isErr(), $ns.get()

    let err = ns.tryError()
    check:
      err.kind == ParsingErrorKind.InvalidFormat
      err.cause == "bias should be one of; unbiased, lower20 or higher80"

suite "Waku Message - Pub-sub topics namespacing":

  test "Stringify named sharding pub-sub topic":
    ## Given
    var ns = NsPubsubTopic.named("waku-dev")

    ## When
    let topic = $ns

    ## Then
    check:
      topic == "/waku/2/waku-dev"

  test "Stringify static sharding pub-sub topic":
    ## Given
    var ns = NsPubsubTopic.staticSharding(cluster=0, shard=2)

    ## When
    let topic = $ns

    ## Then
    check:
      topic == "/waku/2/rs/0/2"

  test "Parse named pub-sub topic string - Valid string":
    ## Given
    let topic = "/waku/2/waku-dev"

    ## When
    let nsRes = NsPubsubTopic.parse(topic)

    ## Then
    check nsRes.isOk()

    let ns = nsRes.get()
    check:
      ns.name == "waku-dev"

  test "Parse static sharding pub-sub topic string - Valid string":
    ## Given
    let topic = "/waku/2/rs/16/42"

    ## When
    let nsRes = NsPubsubTopic.parse(topic)

    ## Then
    check nsRes.isOk()

    let ns = nsRes.get()
    check:
      ns.cluster == 16
      ns.shard == 42

  test "Parse pub-sub topic string - Invalid string: invalid protocol version":
    ## Given
    let topic = "/waku/1/rs/16/42"

    ## When
    let ns = NsPubsubTopic.parse(topic)

    ## Then
    check ns.isErr()
    let err = ns.tryError()
    check:
      err.kind == ParsingErrorKind.InvalidFormat

  test "Parse static sharding pub-sub topic string - Invalid string: empty shard value":
    ## Given
    let topic = "/waku/2/rs//02"

    ## When
    let ns = NsPubsubTopic.parse(topic)

    ## Then
    check ns.isErr()
    let err = ns.tryError()
    check:
      err.kind == ParsingErrorKind.MissingPart
      err.part == "shard_cluster_index"

  test "Parse static sharding pub-sub topic string - Invalid string: cluster value":
    ## Given
    let topic = "/waku/2/rs/xx/77"

    ## When
    let ns = NsPubsubTopic.parse(topic)

    ## Then
    check ns.isErr()
    let err = ns.tryError()
    check:
      err.kind == ParsingErrorKind.InvalidFormat
