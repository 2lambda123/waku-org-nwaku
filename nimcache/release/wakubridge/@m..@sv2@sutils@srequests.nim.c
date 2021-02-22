/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/common -o nimcache/release/wakubridge/@m..@sv2@sutils@srequests.nim.c.o nimcache/release/wakubridge/@m..@sv2@sutils@srequests.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyArray__aczTGVLbkjaI8GxGYP6HtA[10];
typedef unsigned char tyArray__A1SHJCPZVISPTujoygIPEQ[64];
typedef N_CDECL_PTR(void, tyProc__3qI9bVHqiq07sTQRU9bkkkYQ) (br_prng_class** ctx, void* params, void* seed, NI seedLen);
typedef N_CDECL_PTR(void, tyProc__hquUwNr88w4T5ldt8BqLLQ) (br_prng_class** ctx, void* out_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__bF2JFxTs1q6Lq365NU79a2Q) (br_hash_class** ctx);
typedef N_CDECL_PTR(void, tyProc__Dc9br5a6SHw9cxie3cas0KTA) (br_hash_class** ctx, void* data_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__JETfgzvEnx6Tz9bYRct9a51g) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(NU64, tyProc__e9bd9aJH2sCZh75q9aAcv7ylg) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(void, tyProc__g9c2vH2tlPaPmvfTZ3PeWQQ) (br_hash_class** ctx, void* stb, NU64 count_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, brHmacDrbgGenerate__jb39atYOOGTT2cdYx6onnSw)(br_hmac_drbg_context* ctx, NU8* outp, NI outpLen_0);
static N_INLINE(NimStringDesc*, toHex__Dk9ckP63QdvXCyGCedTHkzQbyteutils)(tyArray__aczTGVLbkjaI8GxGYP6HtA ba);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHexAux__mTF3iGytPXR76nCDQ9aqz9cw)(NU8* ba, NI baLen_0);

#line 22 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memset(a, v, ((size_t) (size)));}

#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}

#line 131 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
static N_INLINE(NimStringDesc*, toHex__Dk9ckP63QdvXCyGCedTHkzQbyteutils)(tyArray__aczTGVLbkjaI8GxGYP6HtA ba) {	NimStringDesc* result;	result = (NimStringDesc*)0;
#line 132 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"

#line 135 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"

#line 135 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
	result = toHexAux__mTF3iGytPXR76nCDQ9aqz9cw(ba, 10);	return result;}

#line 5 "/home/runner/work/nim-waku/nim-waku/waku/v2/utils/requests.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, generateRequestId__m7OHmrw9cEQQUL4X9aOy17SA)(br_hmac_drbg_context* rng_0) {	NimStringDesc* result;	tyArray__aczTGVLbkjaI8GxGYP6HtA bytes;	result = (NimStringDesc*)0;
#line 6 "/home/runner/work/nim-waku/nim-waku/waku/v2/utils/requests.nim"
	nimZeroMem((void*)bytes, sizeof(tyArray__aczTGVLbkjaI8GxGYP6HtA));
#line 7 "/home/runner/work/nim-waku/nim-waku/waku/v2/utils/requests.nim"

#line 7 "/home/runner/work/nim-waku/nim-waku/waku/v2/utils/requests.nim"
	brHmacDrbgGenerate__jb39atYOOGTT2cdYx6onnSw(rng_0, bytes, 10);

#line 8 "/home/runner/work/nim-waku/nim-waku/waku/v2/utils/requests.nim"

#line 8 "/home/runner/work/nim-waku/nim-waku/waku/v2/utils/requests.nim"
	result = toHex__Dk9ckP63QdvXCyGCedTHkzQbyteutils(bytes);	return result;}
