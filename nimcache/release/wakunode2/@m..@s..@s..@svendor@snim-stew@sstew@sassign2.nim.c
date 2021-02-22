/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v2/node -o nimcache/release/wakunode2/@m..@s..@s..@svendor@snim-stew@sstew@sassign2.nim.c.o nimcache/release/wakunode2/@m..@s..@s..@svendor@snim-stew@sstew@sassign2.nim.c */
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
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__gpGJG5CoQzE64skFd9bPG7A)(NimStringDesc* msg) __attribute__((noreturn));
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, assignImpl__OmLpUUqeYw6Hqc9bPHaFu9bQ_2)(NU8* tgt, NI tgtLen_0, NU8* src, NI srcLen_0);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
STRING_LITERAL(TM__kbGkJAf7nkFyeTOInEnHrg_2, "Target and source lengths don\'t match: ", 39);
STRING_LITERAL(TM__kbGkJAf7nkFyeTOInEnHrg_3, " vs ", 4);

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

#line 217 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/sysstr.nim"
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
#line 218 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/sysstr.nim"
	{
#line 218 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/sysstr.nim"

#line 218 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/sysstr.nim"
		if (!!((src == NIM_NIL))) goto LA3_;

#line 219 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/sysstr.nim"

#line 219 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/sysstr.nim"

#line 219 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/sysstr.nim"
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));

#line 220 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/sysstr.nim"
		(*dest).Sup.len += (*src).Sup.len;	}
	LA3_: ;
}

#line 11 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
N_LIB_PRIVATE N_NIMCALL(void, assignImpl__OmLpUUqeYw6Hqc9bPHaFu9bQ_2)(NU8* tgt, NI tgtLen_0, NU8* src, NI srcLen_0) {
#line 14 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
	{		NI TM__kbGkJAf7nkFyeTOInEnHrg_4;
#line 14 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"

#line 14 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
		if (!(((NI) 0) < tgtLen_0)) goto LA3_;

#line 15 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
		if ((NU)(((NI) 0)) >= (NU)(tgtLen_0)){ raiseIndexError2(((NI) 0),tgtLen_0-1); }		if ((NU)(((NI) 0)) >= (NU)(srcLen_0)){ raiseIndexError2(((NI) 0),srcLen_0-1); }
#line 15 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"

#line 15 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
		if (nimMulInt(((NI) 1), tgtLen_0, &TM__kbGkJAf7nkFyeTOInEnHrg_4)) { raiseOverflow(); };		if (((NI)(TM__kbGkJAf7nkFyeTOInEnHrg_4)) < ((NI) 0) || ((NI)(TM__kbGkJAf7nkFyeTOInEnHrg_4)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__kbGkJAf7nkFyeTOInEnHrg_4), ((NI) 0), ((NI) IL64(9223372036854775807))); }
#line 15 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&tgt[((NI) 0)]))), ((void*) ((&src[((NI) 0)]))), ((NI) ((NI)(TM__kbGkJAf7nkFyeTOInEnHrg_4))));
	}
	LA3_: ;
}

#line 20 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
N_LIB_PRIVATE N_NIMCALL(void, assign__OmLpUUqeYw6Hqc9bPHaFu9bQ)(NU8* tgt, NI tgtLen_0, NU8* src, NI srcLen_0) {
#line 23 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
	{		NimStringDesc* T5_;		NimStringDesc* T6_;		NimStringDesc* T7_;
#line 23 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"

#line 23 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"

#line 23 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"

#line 23 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
		if (!!((tgtLen_0 == srcLen_0))) goto LA3_;

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"

#line 25 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
		T5_ = (NimStringDesc*)0;
#line 25 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"

#line 25 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
		T6_ = (NimStringDesc*)0;		T6_ = nimIntToStr(tgtLen_0);
#line 25 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"

#line 25 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
		T7_ = (NimStringDesc*)0;		T7_ = nimIntToStr(srcLen_0);		T5_ = rawNewString((T6_ ? T6_->Sup.len : 0) + (T7_ ? T7_->Sup.len : 0) + 43);appendString(T5_, ((NimStringDesc*) &TM__kbGkJAf7nkFyeTOInEnHrg_2));appendString(T5_, T6_);appendString(T5_, ((NimStringDesc*) &TM__kbGkJAf7nkFyeTOInEnHrg_3));appendString(T5_, T7_);
#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
		raiseAssert__gpGJG5CoQzE64skFd9bPG7A(T5_);
	}
	LA3_: ;

#line 27 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"

#line 27 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/assign2.nim"
	assignImpl__OmLpUUqeYw6Hqc9bPHaFu9bQ_2(tgt, tgtLen_0, src, srcLen_0);
}
