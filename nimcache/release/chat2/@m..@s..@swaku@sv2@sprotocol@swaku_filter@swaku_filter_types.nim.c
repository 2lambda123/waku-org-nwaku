/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@swaku@sv2@sprotocol@swaku_filter@swaku_filter_types.nim.c.o nimcache/release/chat2/@m..@s..@swaku@sv2@sprotocol@swaku_filter@swaku_filter_types.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include "bearssl_rand.h"
#include "bearssl_hash.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA;
typedef struct tyObject_LPProtocolcolonObjectType___5aL02d9bjOYDZmYD0dWxn2w tyObject_LPProtocolcolonObjectType___5aL02d9bjOYDZmYD0dWxn2w;
typedef struct RootObj RootObj;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_FuturecolonObjectType___GXFSekg1U8JRoedGa2vBSA tyObject_FuturecolonObjectType___GXFSekg1U8JRoedGa2vBSA;
typedef struct tyObject_ConnectioncolonObjectType___crfbBHXu3U647CckYkg9cYg tyObject_ConnectioncolonObjectType___crfbBHXu3U647CckYkg9cYg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_PeerManagercolonObjectType___EXZUwC4ltfxJCp69c4oOLbA tyObject_PeerManagercolonObjectType___EXZUwC4ltfxJCp69c4oOLbA;
typedef struct tySequence__noUposH7mngFQgmwJm5tLw tySequence__noUposH7mngFQgmwJm5tLw;
typedef struct tyObject_MessagePush__UILfsGuWEowAWrsZL8SR3g tyObject_MessagePush__UILfsGuWEowAWrsZL8SR3g;
typedef struct tyObject_Subscriber__rNsv6TQZ3juEkG6c0MIYVQ tyObject_Subscriber__rNsv6TQZ3juEkG6c0MIYVQ;
typedef struct tyObject_PeerInfocolonObjectType___tniXhe3Zv7xQqYX3AOw9aQw tyObject_PeerInfocolonObjectType___tniXhe3Zv7xQqYX3AOw9aQw;
typedef struct tyObject_FilterRequest__VyTEdacxfXE9bBGtpTbiHVA tyObject_FilterRequest__VyTEdacxfXE9bBGtpTbiHVA;
typedef struct tySequence__xNHF59br19a2ddRDpm49b8z3A tySequence__xNHF59br19a2ddRDpm49b8z3A;
typedef struct tyObject_ContentFilter__zmS3UuJydVs2xUezA1n9akA tyObject_ContentFilter__zmS3UuJydVs2xUezA1n9akA;
typedef struct tySequence__9bAGqSvkAaFL9bWjsEPslrFA tySequence__9bAGqSvkAaFL9bWjsEPslrFA;
typedef struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A tyTuple__JfHvHzMrhKkWAUvQKe0i1A;
typedef struct tyObject_Env_waku_filter_typesdotnim___diB2NTuAIWY0FO9c5IUJRGg tyObject_Env_waku_filter_typesdotnim___diB2NTuAIWY0FO9c5IUJRGg;
typedef struct tyObject_FilterRPC__Xl3TTjK84JrFALKjYX6Gpg tyObject_FilterRPC__Xl3TTjK84JrFALKjYX6Gpg;
typedef struct tySequence__CP6AbN9aoC6Xupc2HZLYt1w tySequence__CP6AbN9aoC6Xupc2HZLYt1w;
typedef struct tyObject_Filter__llJHO4n7JfCluCvVce9c9cDw tyObject_Filter__llJHO4n7JfCluCvVce9c9cDw;
typedef struct tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A;
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ tySequence__6H5Oh5UUvVCLiakt9aTwtUQ;
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
NCSTRING name;
TNimType* nextType;
NI instances;
NI sizes;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {TNimType* m_type;};
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(tyObject_FuturecolonObjectType___GXFSekg1U8JRoedGa2vBSA*, ClP_0) (tyObject_ConnectioncolonObjectType___crfbBHXu3U647CckYkg9cYg* conn, NimStringDesc* proto, void* ClE_0);
void* ClE_0;
} tyProc__Sx7TcXJiI2BS08wYpfOyIg;
struct tyObject_LPProtocolcolonObjectType___5aL02d9bjOYDZmYD0dWxn2w {  RootObj Sup;tySequence__sM4lkSb7zS6F7OVMvW9cffQ* codecs;
tyProc__Sx7TcXJiI2BS08wYpfOyIg handler;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* requestId, tyObject_MessagePush__UILfsGuWEowAWrsZL8SR3g msg, void* ClE_0);
void* ClE_0;
} tyProc__a4DglbW0Bo0BSaEo4OAwDw;
struct tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA {  tyObject_LPProtocolcolonObjectType___5aL02d9bjOYDZmYD0dWxn2w Sup;br_hmac_drbg_context* rng;
tyObject_PeerManagercolonObjectType___EXZUwC4ltfxJCp69c4oOLbA* peerManager;
tySequence__noUposH7mngFQgmwJm5tLw* subscribers;
tyProc__a4DglbW0Bo0BSaEo4OAwDw pushHandler;
};
struct tyObject_FilterRequest__VyTEdacxfXE9bBGtpTbiHVA {tySequence__xNHF59br19a2ddRDpm49b8z3A* contentFilters;
NimStringDesc* topic;
NIM_BOOL subscribe;
};
struct tyObject_Subscriber__rNsv6TQZ3juEkG6c0MIYVQ {tyObject_PeerInfocolonObjectType___tniXhe3Zv7xQqYX3AOw9aQw* peer;
NimStringDesc* requestId;
tyObject_FilterRequest__VyTEdacxfXE9bBGtpTbiHVA filter;
};
struct tyObject_ContentFilter__zmS3UuJydVs2xUezA1n9akA {tySequence__9bAGqSvkAaFL9bWjsEPslrFA* topics;
};
struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A {
void* Field0;
tyObject_Env_waku_filter_typesdotnim___diB2NTuAIWY0FO9c5IUJRGg* Field1;
};
struct tyObject_MessagePush__UILfsGuWEowAWrsZL8SR3g {tySequence__CP6AbN9aoC6Xupc2HZLYt1w* messages;
};
struct tyObject_FilterRPC__Xl3TTjK84JrFALKjYX6Gpg {NimStringDesc* requestId;
tyObject_FilterRequest__VyTEdacxfXE9bBGtpTbiHVA request;
tyObject_MessagePush__UILfsGuWEowAWrsZL8SR3g push;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A msg, void* ClE_0);
void* ClE_0;
} tyProc__MiWDRU9bUQpEPIn4qbS04fg;
struct tyObject_Filter__llJHO4n7JfCluCvVce9c9cDw {tySequence__xNHF59br19a2ddRDpm49b8z3A* contentFilters;
tyProc__MiWDRU9bUQpEPIn4qbS04fg handler;
};
typedef unsigned char tyArray__A1SHJCPZVISPTujoygIPEQ[64];
struct tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A {tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* payload;
NU32 contentTopic;
NU32 version;
};
typedef N_CDECL_PTR(void, tyProc__3qI9bVHqiq07sTQRU9bkkkYQ) (br_prng_class** ctx, void* params, void* seed, NI seedLen);
typedef N_CDECL_PTR(void, tyProc__hquUwNr88w4T5ldt8BqLLQ) (br_prng_class** ctx, void* out_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__bF2JFxTs1q6Lq365NU79a2Q) (br_hash_class** ctx);
typedef N_CDECL_PTR(void, tyProc__Dc9br5a6SHw9cxie3cas0KTA) (br_hash_class** ctx, void* data_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__JETfgzvEnx6Tz9bYRct9a51g) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(NU64, tyProc__e9bd9aJH2sCZh75q9aAcv7ylg) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(void, tyProc__g9c2vH2tlPaPmvfTZ3PeWQQ) (br_hash_class** ctx, void* stb, NU64 count_0);
struct tySequence__xNHF59br19a2ddRDpm49b8z3A {  TGenericSeq Sup;  tyObject_ContentFilter__zmS3UuJydVs2xUezA1n9akA data[SEQ_DECL_SIZE];};struct tySequence__noUposH7mngFQgmwJm5tLw {  TGenericSeq Sup;  tyObject_Subscriber__rNsv6TQZ3juEkG6c0MIYVQ data[SEQ_DECL_SIZE];};struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {  TGenericSeq Sup;  NimStringDesc* data[SEQ_DECL_SIZE];};struct tySequence__9bAGqSvkAaFL9bWjsEPslrFA {  TGenericSeq Sup;  NU32 data[SEQ_DECL_SIZE];};struct tySequence__CP6AbN9aoC6Xupc2HZLYt1w {  TGenericSeq Sup;  tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A data[SEQ_DECL_SIZE];};struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ {  TGenericSeq Sup;  NU8 data[SEQ_DECL_SIZE];};N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__xNHF59br19a2ddRDpm49b8z3A)(void* p, NI op);
static N_NIMCALL(void, Marker_tySequence__noUposH7mngFQgmwJm5tLw)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__iEFqY8m9ayR9csH8bIQ9csdcQ)(void* p, NI op);
extern TNimType NTI__5aL02d9bjOYDZmYD0dWxn2w_;
N_LIB_PRIVATE TNimType NTI__piJynz2u7qBvQUztNfoNdA_;
extern TNimType NTI__RuNvFuo5ptASsihINNteSw_;
extern TNimType NTI__mAwL2D2EWMuWoFpTGy9aepg_;
N_LIB_PRIVATE TNimType NTI__rNsv6TQZ3juEkG6c0MIYVQ_;
extern TNimType NTI__Ol4zKcKZGzrnu3Hvu9aLd4w_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTI__VyTEdacxfXE9bBGtpTbiHVA_;
N_LIB_PRIVATE TNimType NTI__zmS3UuJydVs2xUezA1n9akA_;
extern TNimType NTI__9bAGqSvkAaFL9bWjsEPslrFA_;
N_LIB_PRIVATE TNimType NTI__xNHF59br19a2ddRDpm49b8z3A_;
extern TNimType NTI__VaVACK0bpYmqIQ0mKcHfQQ_;
N_LIB_PRIVATE TNimType NTI__noUposH7mngFQgmwJm5tLw_;
N_LIB_PRIVATE TNimType NTI__a4DglbW0Bo0BSaEo4OAwDw_;
extern TNimType NTI__vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI__HsJiUUcO9cHBdUCi0HwkSTA_;
N_LIB_PRIVATE TNimType NTI__iEFqY8m9ayR9csH8bIQ9csdcQ_;
N_LIB_PRIVATE TNimType NTI__Xl3TTjK84JrFALKjYX6Gpg_;
N_LIB_PRIVATE TNimType NTI__UILfsGuWEowAWrsZL8SR3g_;
extern TNimType NTI__CP6AbN9aoC6Xupc2HZLYt1w_;
N_LIB_PRIVATE TNimType NTI__llJHO4n7JfCluCvVce9c9cDw_;
N_LIB_PRIVATE TNimType NTI__MiWDRU9bUQpEPIn4qbS04fg_;
extern TNimType* nimTypeRoot;
static N_NIMCALL(void, Marker_tySequence__xNHF59br19a2ddRDpm49b8z3A)(void* p, NI op) {
	tySequence__xNHF59br19a2ddRDpm49b8z3A* a;
	NI T1_;	a = (tySequence__xNHF59br19a2ddRDpm49b8z3A*)p;
	T1_ = (NI)0;	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].topics, op);	}
}
static N_NIMCALL(void, Marker_tySequence__noUposH7mngFQgmwJm5tLw)(void* p, NI op) {
	tySequence__noUposH7mngFQgmwJm5tLw* a;
	NI T1_;	a = (tySequence__noUposH7mngFQgmwJm5tLw*)p;
	T1_ = (NI)0;	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].peer, op);	nimGCvisit((void*)a->data[T1_].requestId, op);	nimGCvisit((void*)a->data[T1_].filter.contentFilters, op);	nimGCvisit((void*)a->data[T1_].filter.topic, op);	}
}
static N_NIMCALL(void, Marker_tyRef__iEFqY8m9ayR9csH8bIQ9csdcQ)(void* p, NI op) {
	tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA* a;
	a = (tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA*)p;
	nimGCvisit((void*)(*a).Sup.codecs, op);	nimGCvisit((void*)(*a).Sup.handler.ClE_0, op);	nimGCvisit((void*)(*a).rng, op);	nimGCvisit((void*)(*a).peerManager, op);	nimGCvisit((void*)(*a).subscribers, op);	nimGCvisit((void*)(*a).pushHandler.ClE_0, op);}
N_LIB_PRIVATE N_NIMCALL(void, waku_waku_filter_typesDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode* TM__oU9cTanDqyb7JX9aWVM0mShg_2_4[4];
static TNimNode* TM__oU9cTanDqyb7JX9aWVM0mShg_3_3[3];
static TNimNode* TM__oU9cTanDqyb7JX9aWVM0mShg_4_3[3];
static TNimNode* TM__oU9cTanDqyb7JX9aWVM0mShg_5_2[2];
static TNimNode* TM__oU9cTanDqyb7JX9aWVM0mShg_6_3[3];
static TNimNode* TM__oU9cTanDqyb7JX9aWVM0mShg_7_2[2];
static TNimNode* TM__oU9cTanDqyb7JX9aWVM0mShg_8_2[2];
static TNimNode TM__oU9cTanDqyb7JX9aWVM0mShg_0[28];NTI__piJynz2u7qBvQUztNfoNdA_.size = sizeof(tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA);
NTI__piJynz2u7qBvQUztNfoNdA_.kind = 17;
NTI__piJynz2u7qBvQUztNfoNdA_.base = (&NTI__5aL02d9bjOYDZmYD0dWxn2w_);
NTI__piJynz2u7qBvQUztNfoNdA_.name = "WakuFilter:ObjectType";
NTI__piJynz2u7qBvQUztNfoNdA_.nextType = nimTypeRoot; nimTypeRoot=&NTI__piJynz2u7qBvQUztNfoNdA_;
TM__oU9cTanDqyb7JX9aWVM0mShg_2_4[0] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[1];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[1].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[1].offset = offsetof(tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA, rng);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[1].typ = (&NTI__RuNvFuo5ptASsihINNteSw_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[1].name = "rng";
TM__oU9cTanDqyb7JX9aWVM0mShg_2_4[1] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[2];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[2].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[2].offset = offsetof(tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA, peerManager);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[2].typ = (&NTI__mAwL2D2EWMuWoFpTGy9aepg_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[2].name = "peerManager";
TM__oU9cTanDqyb7JX9aWVM0mShg_2_4[2] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[3];
NTI__rNsv6TQZ3juEkG6c0MIYVQ_.size = sizeof(tyObject_Subscriber__rNsv6TQZ3juEkG6c0MIYVQ);
NTI__rNsv6TQZ3juEkG6c0MIYVQ_.kind = 18;
NTI__rNsv6TQZ3juEkG6c0MIYVQ_.base = 0;
NTI__rNsv6TQZ3juEkG6c0MIYVQ_.name = "Subscriber";
NTI__rNsv6TQZ3juEkG6c0MIYVQ_.nextType = nimTypeRoot; nimTypeRoot=&NTI__rNsv6TQZ3juEkG6c0MIYVQ_;
TM__oU9cTanDqyb7JX9aWVM0mShg_3_3[0] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[5];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[5].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[5].offset = offsetof(tyObject_Subscriber__rNsv6TQZ3juEkG6c0MIYVQ, peer);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[5].typ = (&NTI__Ol4zKcKZGzrnu3Hvu9aLd4w_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[5].name = "peer";
TM__oU9cTanDqyb7JX9aWVM0mShg_3_3[1] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[6];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[6].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[6].offset = offsetof(tyObject_Subscriber__rNsv6TQZ3juEkG6c0MIYVQ, requestId);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[6].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[6].name = "requestId";
TM__oU9cTanDqyb7JX9aWVM0mShg_3_3[2] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[7];
NTI__VyTEdacxfXE9bBGtpTbiHVA_.size = sizeof(tyObject_FilterRequest__VyTEdacxfXE9bBGtpTbiHVA);
NTI__VyTEdacxfXE9bBGtpTbiHVA_.kind = 18;
NTI__VyTEdacxfXE9bBGtpTbiHVA_.base = 0;
NTI__VyTEdacxfXE9bBGtpTbiHVA_.flags = 2;
NTI__VyTEdacxfXE9bBGtpTbiHVA_.name = "FilterRequest";
NTI__VyTEdacxfXE9bBGtpTbiHVA_.nextType = nimTypeRoot; nimTypeRoot=&NTI__VyTEdacxfXE9bBGtpTbiHVA_;
TM__oU9cTanDqyb7JX9aWVM0mShg_4_3[0] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[9];
NTI__zmS3UuJydVs2xUezA1n9akA_.size = sizeof(tyObject_ContentFilter__zmS3UuJydVs2xUezA1n9akA);
NTI__zmS3UuJydVs2xUezA1n9akA_.kind = 18;
NTI__zmS3UuJydVs2xUezA1n9akA_.base = 0;
NTI__zmS3UuJydVs2xUezA1n9akA_.flags = 2;
NTI__zmS3UuJydVs2xUezA1n9akA_.name = "ContentFilter";
NTI__zmS3UuJydVs2xUezA1n9akA_.nextType = nimTypeRoot; nimTypeRoot=&NTI__zmS3UuJydVs2xUezA1n9akA_;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[10].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[10].offset = offsetof(tyObject_ContentFilter__zmS3UuJydVs2xUezA1n9akA, topics);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[10].typ = (&NTI__9bAGqSvkAaFL9bWjsEPslrFA_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[10].name = "topics";
NTI__zmS3UuJydVs2xUezA1n9akA_.node = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[10];
NTI__xNHF59br19a2ddRDpm49b8z3A_.size = sizeof(tySequence__xNHF59br19a2ddRDpm49b8z3A*);
NTI__xNHF59br19a2ddRDpm49b8z3A_.kind = 24;
NTI__xNHF59br19a2ddRDpm49b8z3A_.base = (&NTI__zmS3UuJydVs2xUezA1n9akA_);
NTI__xNHF59br19a2ddRDpm49b8z3A_.flags = 2;
NTI__xNHF59br19a2ddRDpm49b8z3A_.name = "seq[ContentFilter]";
NTI__xNHF59br19a2ddRDpm49b8z3A_.nextType = nimTypeRoot; nimTypeRoot=&NTI__xNHF59br19a2ddRDpm49b8z3A_;
NTI__xNHF59br19a2ddRDpm49b8z3A_.marker = Marker_tySequence__xNHF59br19a2ddRDpm49b8z3A;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[9].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[9].offset = offsetof(tyObject_FilterRequest__VyTEdacxfXE9bBGtpTbiHVA, contentFilters);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[9].typ = (&NTI__xNHF59br19a2ddRDpm49b8z3A_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[9].name = "contentFilters";
TM__oU9cTanDqyb7JX9aWVM0mShg_4_3[1] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[11];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[11].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[11].offset = offsetof(tyObject_FilterRequest__VyTEdacxfXE9bBGtpTbiHVA, topic);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[11].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[11].name = "topic";
TM__oU9cTanDqyb7JX9aWVM0mShg_4_3[2] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[12];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[12].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[12].offset = offsetof(tyObject_FilterRequest__VyTEdacxfXE9bBGtpTbiHVA, subscribe);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[12].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[12].name = "subscribe";
TM__oU9cTanDqyb7JX9aWVM0mShg_0[8].len = 3; TM__oU9cTanDqyb7JX9aWVM0mShg_0[8].kind = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[8].sons = &TM__oU9cTanDqyb7JX9aWVM0mShg_4_3[0];
NTI__VyTEdacxfXE9bBGtpTbiHVA_.node = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[8];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[7].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[7].offset = offsetof(tyObject_Subscriber__rNsv6TQZ3juEkG6c0MIYVQ, filter);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[7].typ = (&NTI__VyTEdacxfXE9bBGtpTbiHVA_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[7].name = "filter";
TM__oU9cTanDqyb7JX9aWVM0mShg_0[4].len = 3; TM__oU9cTanDqyb7JX9aWVM0mShg_0[4].kind = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[4].sons = &TM__oU9cTanDqyb7JX9aWVM0mShg_3_3[0];
NTI__rNsv6TQZ3juEkG6c0MIYVQ_.node = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[4];
NTI__noUposH7mngFQgmwJm5tLw_.size = sizeof(tySequence__noUposH7mngFQgmwJm5tLw*);
NTI__noUposH7mngFQgmwJm5tLw_.kind = 24;
NTI__noUposH7mngFQgmwJm5tLw_.base = (&NTI__rNsv6TQZ3juEkG6c0MIYVQ_);
NTI__noUposH7mngFQgmwJm5tLw_.name = "seq[Subscriber]";
NTI__noUposH7mngFQgmwJm5tLw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__noUposH7mngFQgmwJm5tLw_;
NTI__noUposH7mngFQgmwJm5tLw_.marker = Marker_tySequence__noUposH7mngFQgmwJm5tLw;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[3].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[3].offset = offsetof(tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA, subscribers);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[3].typ = (&NTI__noUposH7mngFQgmwJm5tLw_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[3].name = "subscribers";
TM__oU9cTanDqyb7JX9aWVM0mShg_2_4[3] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[13];
NTI__a4DglbW0Bo0BSaEo4OAwDw_.size = sizeof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__a4DglbW0Bo0BSaEo4OAwDw_.kind = 18;
NTI__a4DglbW0Bo0BSaEo4OAwDw_.base = 0;
NTI__a4DglbW0Bo0BSaEo4OAwDw_.name = "tuple of (pointer, ref object)";
NTI__a4DglbW0Bo0BSaEo4OAwDw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__a4DglbW0Bo0BSaEo4OAwDw_;
TM__oU9cTanDqyb7JX9aWVM0mShg_5_2[0] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[15];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[15].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[15].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field0);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[15].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[15].name = "Field0";
TM__oU9cTanDqyb7JX9aWVM0mShg_5_2[1] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[16];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[16].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[16].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field1);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[16].typ = (&NTI__HsJiUUcO9cHBdUCi0HwkSTA_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[16].name = "Field1";
TM__oU9cTanDqyb7JX9aWVM0mShg_0[14].len = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[14].kind = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[14].sons = &TM__oU9cTanDqyb7JX9aWVM0mShg_5_2[0];
NTI__a4DglbW0Bo0BSaEo4OAwDw_.node = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[14];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[13].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[13].offset = offsetof(tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA, pushHandler);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[13].typ = (&NTI__a4DglbW0Bo0BSaEo4OAwDw_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[13].name = "pushHandler";
TM__oU9cTanDqyb7JX9aWVM0mShg_0[0].len = 4; TM__oU9cTanDqyb7JX9aWVM0mShg_0[0].kind = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[0].sons = &TM__oU9cTanDqyb7JX9aWVM0mShg_2_4[0];
NTI__piJynz2u7qBvQUztNfoNdA_.node = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[0];
NTI__iEFqY8m9ayR9csH8bIQ9csdcQ_.size = sizeof(tyObject_WakuFiltercolonObjectType___piJynz2u7qBvQUztNfoNdA*);
NTI__iEFqY8m9ayR9csH8bIQ9csdcQ_.kind = 22;
NTI__iEFqY8m9ayR9csH8bIQ9csdcQ_.base = (&NTI__piJynz2u7qBvQUztNfoNdA_);
NTI__iEFqY8m9ayR9csH8bIQ9csdcQ_.name = "WakuFilter";
NTI__iEFqY8m9ayR9csH8bIQ9csdcQ_.nextType = nimTypeRoot; nimTypeRoot=&NTI__iEFqY8m9ayR9csH8bIQ9csdcQ_;
NTI__iEFqY8m9ayR9csH8bIQ9csdcQ_.marker = Marker_tyRef__iEFqY8m9ayR9csH8bIQ9csdcQ;
NTI__Xl3TTjK84JrFALKjYX6Gpg_.size = sizeof(tyObject_FilterRPC__Xl3TTjK84JrFALKjYX6Gpg);
NTI__Xl3TTjK84JrFALKjYX6Gpg_.kind = 18;
NTI__Xl3TTjK84JrFALKjYX6Gpg_.base = 0;
NTI__Xl3TTjK84JrFALKjYX6Gpg_.flags = 2;
NTI__Xl3TTjK84JrFALKjYX6Gpg_.name = "FilterRPC";
NTI__Xl3TTjK84JrFALKjYX6Gpg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__Xl3TTjK84JrFALKjYX6Gpg_;
TM__oU9cTanDqyb7JX9aWVM0mShg_6_3[0] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[18];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[18].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[18].offset = offsetof(tyObject_FilterRPC__Xl3TTjK84JrFALKjYX6Gpg, requestId);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[18].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[18].name = "requestId";
TM__oU9cTanDqyb7JX9aWVM0mShg_6_3[1] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[19];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[19].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[19].offset = offsetof(tyObject_FilterRPC__Xl3TTjK84JrFALKjYX6Gpg, request);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[19].typ = (&NTI__VyTEdacxfXE9bBGtpTbiHVA_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[19].name = "request";
TM__oU9cTanDqyb7JX9aWVM0mShg_6_3[2] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[20];
NTI__UILfsGuWEowAWrsZL8SR3g_.size = sizeof(tyObject_MessagePush__UILfsGuWEowAWrsZL8SR3g);
NTI__UILfsGuWEowAWrsZL8SR3g_.kind = 18;
NTI__UILfsGuWEowAWrsZL8SR3g_.base = 0;
NTI__UILfsGuWEowAWrsZL8SR3g_.flags = 2;
NTI__UILfsGuWEowAWrsZL8SR3g_.name = "MessagePush";
NTI__UILfsGuWEowAWrsZL8SR3g_.nextType = nimTypeRoot; nimTypeRoot=&NTI__UILfsGuWEowAWrsZL8SR3g_;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[21].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[21].offset = offsetof(tyObject_MessagePush__UILfsGuWEowAWrsZL8SR3g, messages);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[21].typ = (&NTI__CP6AbN9aoC6Xupc2HZLYt1w_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[21].name = "messages";
NTI__UILfsGuWEowAWrsZL8SR3g_.node = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[21];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[20].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[20].offset = offsetof(tyObject_FilterRPC__Xl3TTjK84JrFALKjYX6Gpg, push);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[20].typ = (&NTI__UILfsGuWEowAWrsZL8SR3g_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[20].name = "push";
TM__oU9cTanDqyb7JX9aWVM0mShg_0[17].len = 3; TM__oU9cTanDqyb7JX9aWVM0mShg_0[17].kind = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[17].sons = &TM__oU9cTanDqyb7JX9aWVM0mShg_6_3[0];
NTI__Xl3TTjK84JrFALKjYX6Gpg_.node = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[17];
NTI__llJHO4n7JfCluCvVce9c9cDw_.size = sizeof(tyObject_Filter__llJHO4n7JfCluCvVce9c9cDw);
NTI__llJHO4n7JfCluCvVce9c9cDw_.kind = 18;
NTI__llJHO4n7JfCluCvVce9c9cDw_.base = 0;
NTI__llJHO4n7JfCluCvVce9c9cDw_.name = "Filter";
NTI__llJHO4n7JfCluCvVce9c9cDw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__llJHO4n7JfCluCvVce9c9cDw_;
TM__oU9cTanDqyb7JX9aWVM0mShg_7_2[0] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[23];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[23].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[23].offset = offsetof(tyObject_Filter__llJHO4n7JfCluCvVce9c9cDw, contentFilters);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[23].typ = (&NTI__xNHF59br19a2ddRDpm49b8z3A_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[23].name = "contentFilters";
TM__oU9cTanDqyb7JX9aWVM0mShg_7_2[1] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[24];
NTI__MiWDRU9bUQpEPIn4qbS04fg_.size = sizeof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__MiWDRU9bUQpEPIn4qbS04fg_.kind = 18;
NTI__MiWDRU9bUQpEPIn4qbS04fg_.base = 0;
NTI__MiWDRU9bUQpEPIn4qbS04fg_.name = "tuple of (pointer, ref object)";
NTI__MiWDRU9bUQpEPIn4qbS04fg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__MiWDRU9bUQpEPIn4qbS04fg_;
TM__oU9cTanDqyb7JX9aWVM0mShg_8_2[0] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[26];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[26].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[26].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field0);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[26].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[26].name = "Field0";
TM__oU9cTanDqyb7JX9aWVM0mShg_8_2[1] = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[27];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[27].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[27].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field1);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[27].typ = (&NTI__HsJiUUcO9cHBdUCi0HwkSTA_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[27].name = "Field1";
TM__oU9cTanDqyb7JX9aWVM0mShg_0[25].len = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[25].kind = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[25].sons = &TM__oU9cTanDqyb7JX9aWVM0mShg_8_2[0];
NTI__MiWDRU9bUQpEPIn4qbS04fg_.node = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[25];
TM__oU9cTanDqyb7JX9aWVM0mShg_0[24].kind = 1;
TM__oU9cTanDqyb7JX9aWVM0mShg_0[24].offset = offsetof(tyObject_Filter__llJHO4n7JfCluCvVce9c9cDw, handler);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[24].typ = (&NTI__MiWDRU9bUQpEPIn4qbS04fg_);
TM__oU9cTanDqyb7JX9aWVM0mShg_0[24].name = "handler";
TM__oU9cTanDqyb7JX9aWVM0mShg_0[22].len = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[22].kind = 2; TM__oU9cTanDqyb7JX9aWVM0mShg_0[22].sons = &TM__oU9cTanDqyb7JX9aWVM0mShg_7_2[0];
NTI__llJHO4n7JfCluCvVce9c9cDw_.node = &TM__oU9cTanDqyb7JX9aWVM0mShg_0[22];
}

