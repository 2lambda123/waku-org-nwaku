/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v2/node -o nimcache/release/wakunode2/@m..@s..@s..@svendor@snim-libp2p@slibp2p@scrypto@ssecp.nim.c.o nimcache/release/wakunode2/@m..@s..@s..@svendor@snim-libp2p@slibp2p@scrypto@ssecp.nim.c */
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
typedef struct tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA;
typedef struct tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA;
typedef struct tyObject_secp256k1_pubkey__GYc9aFo1e2qOLdmAqUvIikQ tyObject_secp256k1_pubkey__GYc9aFo1e2qOLdmAqUvIikQ;
typedef struct tyObject_Result__ac12d9bB2oPDNrhZXEa1pxQ tyObject_Result__ac12d9bB2oPDNrhZXEa1pxQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w;
typedef struct tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg;
typedef struct tyObject_secp256k1_ecdsa_signature__9abCoFG0e9awROn9bWeoOX9aEA tyObject_secp256k1_ecdsa_signature__9abCoFG0e9awROn9bWeoOX9aEA;
typedef struct tyObject_MDigest__law9ct65KplMYBvtmjCQxbw tyObject_MDigest__law9ct65KplMYBvtmjCQxbw;
typedef struct tyObject_Result__cqKviKPTEptuNJjCTlgYBQ tyObject_Result__cqKviKPTEptuNJjCTlgYBQ;
typedef struct tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw;
typedef struct tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA {NIM_BOOL o;
union{
struct {NCSTRING e;
} _o_1;
};
};
typedef NU8 tyArray__w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_secp256k1_pubkey__GYc9aFo1e2qOLdmAqUvIikQ {tyArray__w5VB8h5K8DB3oWrO5U2wqg data;
};
struct tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA {tyObject_secp256k1_pubkey__GYc9aFo1e2qOLdmAqUvIikQ data;
};
struct tyObject_Result__ac12d9bB2oPDNrhZXEa1pxQ {NIM_BOOL o;
union{
struct {NCSTRING e;
} _o_1;
struct {tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA v;
} _o_2;
};
};
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_secp256k1_ecdsa_signature__9abCoFG0e9awROn9bWeoOX9aEA {tyArray__w5VB8h5K8DB3oWrO5U2wqg data;
};
struct tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg {tyObject_secp256k1_ecdsa_signature__9abCoFG0e9awROn9bWeoOX9aEA data;
};
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
struct tyObject_MDigest__law9ct65KplMYBvtmjCQxbw {tyArray__vEOa9c5qaE9ajWxR5R4zwfQg data;
};
struct tyObject_Result__cqKviKPTEptuNJjCTlgYBQ {NIM_BOOL o;
union{
struct {NCSTRING e;
} _o_1;
struct {tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg v;
} _o_2;
};
};
struct tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w {tyArray__vEOa9c5qaE9ajWxR5R4zwfQg data;
};
struct tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw {NIM_BOOL o;
union{
struct {NCSTRING e;
} _o_1;
struct {tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w v;
} _o_2;
};
};
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
struct RootObj {TNimType* m_type;};
struct tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA {  RootObj Sup;NI colonstate_;
br_hmac_drbg_context* rngPtr1;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NU8* data_0, NI data_0Len_0, void* ClE_0);
void* ClE_0;
} tyProc__2eQPaS8XIidfzb11dDC4nw;
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
N_LIB_PRIVATE N_NIMCALL(tyObject_Result__ac12d9bB2oPDNrhZXEa1pxQ, fromRaw__wuoqSv069a0hw79btLKQagEg)(NU8* data_0, NI data_0Len_0);
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_LIB_PRIVATE N_NIMCALL(tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA, toPublicKey__dZX6pG1PJuze9ctWTRA1ENw)(tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w* key_0);
N_LIB_PRIVATE N_NIMCALL(tyObject_MDigest__law9ct65KplMYBvtmjCQxbw, digest__y0iFskTLLbZVCJoMR0aipg)(NU8* data_0, NI data_0Len_0);
N_LIB_PRIVATE N_NIMCALL(tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg, sign__LWp0AcyBRS6BMzlr8xTI3g)(tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w* key_0, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg msg);
N_LIB_PRIVATE N_NIMCALL(NI, toDer__oKZBatsMFAl9b7Nm8P8vmmA)(tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg* sig, NU8* data_0, NI data_0Len_0);
N_LIB_PRIVATE N_NIMCALL(tyObject_Result__cqKviKPTEptuNJjCTlgYBQ, fromDer__IyTnjSYZ1ZkQrLj9bQIbslw)(NU8* data_0, NI data_0Len_0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, verify__2W2NV7Lox4sw9c7rNLNvOcw)(tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg* sig, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg msg, tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA* key_0);
static N_INLINE(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw, mapConvert__izVpEVmul53Z0Mj9c6cOEBAresults)(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw* self);
N_LIB_PRIVATE N_NIMCALL(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw, fromRaw__nFXLVvDSqgy9cuKCCRzv4jg)(NU8* data_0, NI data_0Len_0);
static N_NIMCALL(void, Marker_tyRef__4I4lPQnG7TauRIx9amGNs2w)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w, random__0zyuItkuaHgarDWONXkbnQ)(tyProc__2eQPaS8XIidfzb11dDC4nw rng_0);
N_LIB_PRIVATE N_CLOSURE(void, callRng__rNjBXzZ4tZf8v0pNLg6Jsw)(NU8* data_0, NI data_0Len_0, void* ClE_0);
N_LIB_PRIVATE N_NIMCALL(void, brHmacDrbgGenerate__jb39atYOOGTT2cdYx6onnSw)(br_hmac_drbg_context* ctx, NU8* outp, NI outpLen_0);
STRING_LITERAL(TM__elUZfosX088YgpgYUbhUWA_2, "\'e\' is not accessible using discriminant \'o\' of type \'Result\'", 61);
STRING_LITERAL(TM__elUZfosX088YgpgYUbhUWA_3, "\'v\' is not accessible using discriminant \'o\' of type \'Result\'", 61);
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTI__ptGU5QWsB8POspfsOU8FNA_;
extern TNimType NTI__xHTZrq9aYs6boc9bCba0JbpQ_;
extern TNimType NTI__P862mCDAUrlG5aF5HvxacQ_;
N_LIB_PRIVATE TNimType NTI__4I4lPQnG7TauRIx9amGNs2w_;
extern TNimType* nimTypeRoot;

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

#line 69 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA, init__VK9anPmPg8GD2pJILFR8EeQ)(tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA* key_0, NU8* data_0, NI data_0Len_0) {	tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA result;	tyObject_Result__ac12d9bB2oPDNrhZXEa1pxQ vX60gensym89460017_;{	nimZeroMem((void*)(&result), sizeof(tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA));
#line 70 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 72 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 657 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 72 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	vX60gensym89460017_ = fromRaw__wuoqSv069a0hw79btLKQagEg(data_0, data_0Len_0);
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
	{
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		if (!!(vX60gensym89460017_.o)) goto LA3_;

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)(&result));		nimZeroMem((void*)(&result), sizeof(tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA));		result.o = NIM_FALSE;		if (!(((1 &(1U<<((NU)(vX60gensym89460017_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__elUZfosX088YgpgYUbhUWA_2)); }		result._o_1.e = vX60gensym89460017_._o_1.e;		goto BeforeRet_;
	}
	LA3_: ;
	if (!(((2 &(1U<<((NU)(vX60gensym89460017_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__elUZfosX088YgpgYUbhUWA_3)); }	(*key_0) = vX60gensym89460017_._o_2.v;	chckNil((void*)(&result));	nimZeroMem((void*)(&result), sizeof(tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA));	result.o = NIM_TRUE;	}BeforeRet_: ;
	return result;}

#line 144 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA, getKey__7VH9bAvjjfeIpx8OODXp0kw)(tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w* key_0) {	tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA result;	nimZeroMem((void*)(&result), sizeof(tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA));
#line 145 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 146 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 146 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	result = toPublicKey__dZX6pG1PJuze9ctWTRA1ENw(key_0);	return result;}

#line 194 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg, sign__Jt5e1e9csSJNU0jboRIzhNA)(tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w* key_0, NU8* msg, NI msgLen_0) {	tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg result;	tyObject_MDigest__law9ct65KplMYBvtmjCQxbw h_1;	nimZeroMem((void*)(&result), sizeof(tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg));
#line 195 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 196 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 196 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	h_1 = digest__y0iFskTLLbZVCJoMR0aipg(msg, msgLen_0);
#line 197 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 197 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	result = sign__LWp0AcyBRS6BMzlr8xTI3g(key_0, h_1.data);	return result;}

#line 172 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
N_LIB_PRIVATE N_NIMCALL(NI, toBytes__1NK8vJrh39b6JoXQBBDT8uQ)(tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg* sig, NU8* data_0, NI data_0Len_0) {	NI result;	result = (NI)0;
#line 173 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 178 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 178 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	result = toDer__oKZBatsMFAl9b7Nm8P8vmmA(sig, data_0, data_0Len_0);	return result;}

#line 81 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA, init__IJ5bHaao1Z0BXchwyWOQvw)(tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg* sig, NU8* data_0, NI data_0Len_0) {	tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA result;	tyObject_Result__cqKviKPTEptuNJjCTlgYBQ vX60gensym89545034_;{	nimZeroMem((void*)(&result), sizeof(tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA));
#line 82 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 84 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 657 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 84 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	vX60gensym89545034_ = fromDer__IyTnjSYZ1ZkQrLj9bQIbslw(data_0, data_0Len_0);
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
	{
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		if (!!(vX60gensym89545034_.o)) goto LA3_;

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)(&result));		nimZeroMem((void*)(&result), sizeof(tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA));		result.o = NIM_FALSE;		if (!(((1 &(1U<<((NU)(vX60gensym89545034_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__elUZfosX088YgpgYUbhUWA_2)); }		result._o_1.e = vX60gensym89545034_._o_1.e;		goto BeforeRet_;
	}
	LA3_: ;
	if (!(((2 &(1U<<((NU)(vX60gensym89545034_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__elUZfosX088YgpgYUbhUWA_3)); }	(*sig) = vX60gensym89545034_._o_2.v;	chckNil((void*)(&result));	nimZeroMem((void*)(&result), sizeof(tyObject_Result__mS1jHg9aTFgIUZQD9a9c2BMFA));	result.o = NIM_TRUE;	}BeforeRet_: ;
	return result;}

#line 199 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, verify__XezXbAB6sAtFe9av5pTAYrg)(tyObject_SkSignature__zIGR7WXU5PgL069bIs2HRIg* sig, NU8* msg, NI msgLen_0, tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA* key_0) {	NIM_BOOL result;	tyObject_MDigest__law9ct65KplMYBvtmjCQxbw h_1;	result = (NIM_BOOL)0;
#line 201 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 201 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 201 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	h_1 = digest__y0iFskTLLbZVCJoMR0aipg(msg, msgLen_0);
#line 202 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 202 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	result = verify__2W2NV7Lox4sw9c7rNLNvOcw(sig, h_1.data, key_0);	return result;}

#line 366 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
static N_INLINE(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw, mapConvert__izVpEVmul53Z0Mj9c6cOEBAresults)(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw* self) {	tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw result;	nimZeroMem((void*)(&result), sizeof(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw));
#line 370 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
	{		tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw T5_;		if (!(*self).o) goto LA3_;

#line 300 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		nimZeroMem((void*)(&T5_), sizeof(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw));		T5_.o = NIM_TRUE;		if (!(((2 &(1U<<((NU)((*self).o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__elUZfosX088YgpgYUbhUWA_3)); }		T5_._o_2.v = (*self)._o_2.v;		result = T5_;	}
	goto LA1_;
	LA3_: ;
	{		tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw T7_;
#line 319 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		nimZeroMem((void*)(&T7_), sizeof(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw));		T7_.o = NIM_FALSE;		if (!(((1 &(1U<<((NU)((*self).o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__elUZfosX088YgpgYUbhUWA_2)); }		T7_._o_1.e = (*self)._o_1.e;		result = T7_;	}
	LA1_: ;
	return result;}

#line 98 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw, init__9acLTt0b2rUVe0LNsC0f6KQ)(NU8* data_0, NI data_0Len_0) {	tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw result;	tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw T1_;	nimZeroMem((void*)(&result), sizeof(tyObject_Result__Ya9ccZBmFvHJBBkgW6aNwdw));
#line 99 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 103 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 103 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 103 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	T1_ = fromRaw__nFXLVvDSqgy9cuKCCRzv4jg(data_0, data_0Len_0);
#line 103 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	result = mapConvert__izVpEVmul53Z0Mj9c6cOEBAresults((&T1_));	return result;}
static N_NIMCALL(void, Marker_tyRef__4I4lPQnG7TauRIx9amGNs2w)(void* p, NI op) {
	tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA* a;
	a = (tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA*)p;
}

#line 39 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
N_LIB_PRIVATE N_CLOSURE(void, callRng__rNjBXzZ4tZf8v0pNLg6Jsw)(NU8* data_0, NI data_0Len_0, void* ClE_0) {	tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA* colonenvP_;	colonenvP_ = (tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA*) ClE_0;
#line 40 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 40 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	brHmacDrbgGenerate__jb39atYOOGTT2cdYx6onnSw((*colonenvP_).rngPtr1, data_0, data_0Len_0);
}

#line 37 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w, random__kzA2SHQcyEn69cF9ccOjTRHA)(br_hmac_drbg_context* rng_0) {	tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w result;	tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA* colonenv_;	tyProc__2eQPaS8XIidfzb11dDC4nw T1_;	nimZeroMem((void*)(&result), sizeof(tyObject_SkSecretKey__aKiBFtqo69b60sWLnM5A9c3w));	colonenv_ = (tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA*)0;
#line 230 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
	colonenv_ = (tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA*) newObj((&NTI__4I4lPQnG7TauRIx9amGNs2w_), sizeof(tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA));	(*colonenv_).Sup.m_type = (&NTI__ptGU5QWsB8POspfsOU8FNA_);
#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"

#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	(*colonenv_).rngPtr1 = rng_0;
#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	nimZeroMem((void*)(&T1_), sizeof(tyProc__2eQPaS8XIidfzb11dDC4nw));	T1_.ClP_0 = callRng__rNjBXzZ4tZf8v0pNLg6Jsw; T1_.ClE_0 = colonenv_;
#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/secp.nim"
	result = random__0zyuItkuaHgarDWONXkbnQ(T1_);	return result;}
N_LIB_PRIVATE N_NIMCALL(void, libp2p_secpDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode* TM__elUZfosX088YgpgYUbhUWA_4_2[2];
static TNimNode TM__elUZfosX088YgpgYUbhUWA_0[3];NTI__ptGU5QWsB8POspfsOU8FNA_.size = sizeof(tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA);
NTI__ptGU5QWsB8POspfsOU8FNA_.kind = 17;
NTI__ptGU5QWsB8POspfsOU8FNA_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
NTI__ptGU5QWsB8POspfsOU8FNA_.flags = 1;
NTI__ptGU5QWsB8POspfsOU8FNA_.name = "object";
NTI__ptGU5QWsB8POspfsOU8FNA_.nextType = nimTypeRoot; nimTypeRoot=&NTI__ptGU5QWsB8POspfsOU8FNA_;
TM__elUZfosX088YgpgYUbhUWA_4_2[0] = &TM__elUZfosX088YgpgYUbhUWA_0[1];
TM__elUZfosX088YgpgYUbhUWA_0[1].kind = 1;
TM__elUZfosX088YgpgYUbhUWA_0[1].offset = offsetof(tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA, colonstate_);
TM__elUZfosX088YgpgYUbhUWA_0[1].typ = (&NTI__xHTZrq9aYs6boc9bCba0JbpQ_);
TM__elUZfosX088YgpgYUbhUWA_0[1].name = ":state";
TM__elUZfosX088YgpgYUbhUWA_4_2[1] = &TM__elUZfosX088YgpgYUbhUWA_0[2];
TM__elUZfosX088YgpgYUbhUWA_0[2].kind = 1;
TM__elUZfosX088YgpgYUbhUWA_0[2].offset = offsetof(tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA, rngPtr1);
TM__elUZfosX088YgpgYUbhUWA_0[2].typ = (&NTI__P862mCDAUrlG5aF5HvxacQ_);
TM__elUZfosX088YgpgYUbhUWA_0[2].name = "rngPtr1";
TM__elUZfosX088YgpgYUbhUWA_0[0].len = 2; TM__elUZfosX088YgpgYUbhUWA_0[0].kind = 2; TM__elUZfosX088YgpgYUbhUWA_0[0].sons = &TM__elUZfosX088YgpgYUbhUWA_4_2[0];
NTI__ptGU5QWsB8POspfsOU8FNA_.node = &TM__elUZfosX088YgpgYUbhUWA_0[0];
NTI__4I4lPQnG7TauRIx9amGNs2w_.size = sizeof(tyObject_Env_secpdotnim___ptGU5QWsB8POspfsOU8FNA*);
NTI__4I4lPQnG7TauRIx9amGNs2w_.kind = 22;
NTI__4I4lPQnG7TauRIx9amGNs2w_.base = (&NTI__ptGU5QWsB8POspfsOU8FNA_);
NTI__4I4lPQnG7TauRIx9amGNs2w_.name = "anon ref object from /home/runner/work/nim-waku/nim-waku/vendor"
"/nim-libp2p/libp2p/crypto/secp.nim(42, 35)";
NTI__4I4lPQnG7TauRIx9amGNs2w_.nextType = nimTypeRoot; nimTypeRoot=&NTI__4I4lPQnG7TauRIx9amGNs2w_;
NTI__4I4lPQnG7TauRIx9amGNs2w_.marker = Marker_tyRef__4I4lPQnG7TauRIx9amGNs2w;
}

