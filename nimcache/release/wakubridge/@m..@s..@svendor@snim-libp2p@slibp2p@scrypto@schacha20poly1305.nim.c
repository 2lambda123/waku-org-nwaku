/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/common -o nimcache/release/wakubridge/@m..@s..@svendor@snim-libp2p@slibp2p@scrypto@schacha20poly1305.nim.c.o nimcache/release/wakubridge/@m..@s..@svendor@snim-libp2p@slibp2p@scrypto@schacha20poly1305.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include "bearssl_block.h"
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
typedef NU8 tyArray__qtqsWM5aXmcpMIVmvq3kAA[16];
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
typedef NU8 tyArray__YHmXll5a9bp5TA5MVvQwRow[12];
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
STRING_LITERAL(TM__EYaKYk4eEo2S9cDT4PTkJBw_2, "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/cr"
"ypto/chacha20poly1305.nim(49, 10) `s.len == ChaChaPolyTagSize` ", 126);
STRING_LITERAL(TM__EYaKYk4eEo2S9cDT4PTkJBw_3, "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/cr"
"ypto/chacha20poly1305.nim(41, 10) `s.len == ChaChaPolyKeySize` ", 126);

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

#line 11 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
#line 13 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 13 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memcpy(dest, source, ((size_t) (size)));}

#line 2112 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
#line 2113 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"

#line 2113 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
	nimCopyMem(dest, source, size);
}

#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
N_LIB_PRIVATE N_NIMCALL(void, intoChaChaPolyTag__K2DYllCGjKfWSP2bD9ah9aFg)(NU8* s_0, NI s_0Len_0, tyArray__qtqsWM5aXmcpMIVmvq3kAA Result) {	chckNil((void*)Result);	nimZeroMem((void*)Result, sizeof(tyArray__qtqsWM5aXmcpMIVmvq3kAA));
#line 49 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	{
#line 49 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 49 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 49 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
		if (!!((s_0Len_0 == ((NI) 16)))) goto LA3_;

#line 49 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 49 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__EYaKYk4eEo2S9cDT4PTkJBw_2));
	}
	LA3_: ;

#line 50 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	if ((NU)(((NI) 0)) >= (NU)(s_0Len_0)){ raiseIndexError2(((NI) 0),s_0Len_0-1); }
#line 50 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&Result[(((NI) 0))- 0]))), ((void*) ((&s_0[((NI) 0)]))), ((NI) 16));
}

#line 79 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
N_LIB_PRIVATE N_NIMCALL(void, decrypt__uW9aORLGdO0TFQzD09aCMtkQ)(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg key_0, tyArray__YHmXll5a9bp5TA5MVvQwRow nonce_0, NU8* tag, NU8* data_0, NI data_0Len_0, NU8* aad, NI aadLen_0) {	NU8* ad;
#line 86 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 86 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	{
#line 86 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 86 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
		if (!(((NI) 0) < aadLen_0)) goto LA3_;
		if ((NU)(((NI) 0)) >= (NU)(aadLen_0)){ raiseIndexError2(((NI) 0),aadLen_0-1); }		ad = (&aad[((NI) 0)]);	}
	goto LA1_;
	LA3_: ;
	{		ad = NIM_NIL;	}
	LA1_: ;

#line 91 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	if ((NU)(((NI) 0)) >= (NU)(data_0Len_0)){ raiseIndexError2(((NI) 0),data_0Len_0-1); }
#line 95 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 91 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	br_poly1305_ctmul_run(((void*) ((&key_0[(((NI) 0))- 0]))), ((void*) ((&nonce_0[(((NI) 0))- 0]))), ((void*) ((&data_0[((NI) 0)]))), data_0Len_0, ((void*) (ad)), aadLen_0, ((void*) ((&tag[(((NI) 0))- 0]))), ((void*) (br_chacha20_ct_run)), ((int) 0));
}

#line 56 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
N_LIB_PRIVATE N_NIMCALL(void, encrypt__uW9aORLGdO0TFQzD09aCMtkQ_2)(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg key_0, tyArray__YHmXll5a9bp5TA5MVvQwRow nonce_0, NU8* tag, NU8* data_0, NI data_0Len_0, NU8* aad, NI aadLen_0) {	NU8* ad;
#line 63 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 63 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	{
#line 63 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 63 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
		if (!(((NI) 0) < aadLen_0)) goto LA3_;
		if ((NU)(((NI) 0)) >= (NU)(aadLen_0)){ raiseIndexError2(((NI) 0),aadLen_0-1); }		ad = (&aad[((NI) 0)]);	}
	goto LA1_;
	LA3_: ;
	{		ad = NIM_NIL;	}
	LA1_: ;

#line 68 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	if ((NU)(((NI) 0)) >= (NU)(data_0Len_0)){ raiseIndexError2(((NI) 0),data_0Len_0-1); }
#line 72 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 74 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 68 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	br_poly1305_ctmul_run(((void*) ((&key_0[(((NI) 0))- 0]))), ((void*) ((&nonce_0[(((NI) 0))- 0]))), ((void*) ((&data_0[((NI) 0)]))), data_0Len_0, ((void*) (ad)), aadLen_0, ((void*) ((&tag[(((NI) 0))- 0]))), ((void*) (br_chacha20_ct_run)), ((int) 1));
}

#line 40 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
N_LIB_PRIVATE N_NIMCALL(void, intoChaChaPolyKey__JjGK4vp5v0i2Ac7VvyXdFg)(NU8* s_0, NI s_0Len_0, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg Result) {	chckNil((void*)Result);	nimZeroMem((void*)Result, sizeof(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg));
#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	{
#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
		if (!!((s_0Len_0 == ((NI) 32)))) goto LA3_;

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__EYaKYk4eEo2S9cDT4PTkJBw_3));
	}
	LA3_: ;

#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	if ((NU)(((NI) 0)) >= (NU)(s_0Len_0)){ raiseIndexError2(((NI) 0),s_0Len_0-1); }
#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/chacha20poly1305.nim"
	copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&Result[(((NI) 0))- 0]))), ((void*) ((&s_0[((NI) 0)]))), ((NI) 32));
}
