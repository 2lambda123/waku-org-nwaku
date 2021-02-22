/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@svendor@snim-stew@sstew@sobjects.nim.c.o nimcache/release/chat2/@m..@s..@svendor@snim-stew@sstew@sobjects.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
STRING_LITERAL(TM__tHCAsM6r3dzyFHGIXD9b9blA_2, "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/object"
"s.nim(24, 12) `data.len == N` ", 93);

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

#line 23 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/objects.nim"
N_LIB_PRIVATE N_NIMCALL(void, toArray__4YEAz4XCqEsEBwgcwy5WUw)(NU8* data_0, NI data_0Len_0, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg Result) {	chckNil((void*)Result);	nimZeroMem((void*)Result, sizeof(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg));
#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/objects.nim"
	{
#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/objects.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/objects.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/objects.nim"
		if (!!((data_0Len_0 == ((NI) 32)))) goto LA3_;

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/objects.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/objects.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__tHCAsM6r3dzyFHGIXD9b9blA_2));
	}
	LA3_: ;

#line 25 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/objects.nim"
	if ((NU)(((NI) 0)) >= (NU)(data_0Len_0)){ raiseIndexError2(((NI) 0),data_0Len_0-1); }
#line 25 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/objects.nim"
	copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&Result[(((NI) 0))- 0]))), ((void*) ((&data_0[((NI) 0)]))), ((NI) 32));
}
