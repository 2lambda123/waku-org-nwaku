/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@svendor@snim-web3@sweb3@sethhexstrings.nim.c.o nimcache/release/chat2/@m..@s..@svendor@snim-web3@sweb3@sethhexstrings.nim.c */
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
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {NI a;
NI b;
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHex__ziyYRZOkaJBp9bZAA9cVEV2w)(NU64 x_0);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NimStringDesc*, X5BX5D___ogYTOKbgqbjPfyC123US1gsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x_0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
STRING_LITERAL(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_9, "0x", 2);

#line 2429 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
static N_INLINE(NimStringDesc*, X5BX5D___ogYTOKbgqbjPfyC123US1gsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x_0) {	NimStringDesc* result;	NI a;	NI L;	NI TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_4;	NI TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_5;	NI TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_6;	result = (NimStringDesc*)0;
#line 2436 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
	a = x_0.a;
#line 2437 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"

#line 2437 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"

#line 2437 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"

#line 2424 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"

#line 2424 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
	if (nimSubInt((s ? s->Sup.len : 0), x_0.b, &TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_4)) { raiseOverflow(); };	if (nimSubInt((NI)(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_4), a, &TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_5)) { raiseOverflow(); };	if (nimAddInt((NI)(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_5), ((NI) 1), &TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_6)) { raiseOverflow(); };	L = (NI)(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_6);
#line 2438 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"

#line 2438 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
	if ((L) < ((NI) 0) || (L) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(L, ((NI) 0), ((NI) IL64(9223372036854775807))); }
#line 2438 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
	result = mnewString(((NI) (L)));	{		NI i;		NI i_2;		i = (NI)0;
#line 106 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
		i_2 = ((NI) 0);		{
#line 107 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
			while (1) {				NI TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_7;				NI TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_8;
#line 107 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				if (!(i_2 < L)) goto LA3;

#line 2439 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
				i = i_2;				if ((NU)(i) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(i,(result ? result->Sup.len : 0)-1); }
#line 2439 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"

#line 2439 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
				if (nimAddInt(i, a, &TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_7)) { raiseOverflow(); };				if ((NU)((NI)(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_7)) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2((NI)(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_7),(s ? s->Sup.len : 0)-1); }				result->data[i] = s->data[(NI)(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_7)];
#line 109 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				if (nimAddInt(i_2, ((NI) 1), &TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_8)) { raiseOverflow(); };				i_2 = (NI)(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_8);			} LA3: ;
		}
	}
	return result;}

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

#line 459 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem)(NI a, NI b) {	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
#line 469 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system.nim"
	chckNil((void*)(&result));	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));	result.a = a;	result.b = b;	return result;}

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

#line 16 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, encodeQuantity__k83y8McHU9alX9aVpTaLFLXg)(NU64 value_0) {	NimStringDesc* result;	NimStringDesc* hValue;	NI cidxX60gensym110615113_;	NimStringDesc* T7_;	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T8_;	NimStringDesc* T9_;	result = (NimStringDesc*)0;
#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 10 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
	cidxX60gensym110615113_ = ((NI) 0);	{
#line 12 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
		while (1) {			NIM_BOOL T3_;			NimStringDesc* T4_;			NI TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_2;			NimStringDesc* T6_;			NI TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_3;
#line 12 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
			T3_ = (NIM_BOOL)0;
#line 12 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 12 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 12 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
			T4_ = (NimStringDesc*)0;			T4_ = toHex__ziyYRZOkaJBp9bZAA9cVEV2w(value_0);			if (nimSubInt((T4_ ? T4_->Sup.len : 0), ((NI) 1), &TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_2)) { raiseOverflow(); };			T3_ = (cidxX60gensym110615113_ < (NI)(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_2));			if (!(T3_)) goto LA5_;

#line 12 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
			T6_ = (NimStringDesc*)0;			T6_ = toHex__ziyYRZOkaJBp9bZAA9cVEV2w(value_0);			if ((NU)(cidxX60gensym110615113_) >= (NU)(T6_ ? T6_->Sup.len : 0)){ raiseIndexError2(cidxX60gensym110615113_,(T6_ ? T6_->Sup.len : 0)-1); }			T3_ = ((NU8)(T6_->data[cidxX60gensym110615113_]) == (NU8)(48));			LA5_: ;
			if (!T3_) goto LA2;

#line 13 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
			if (nimAddInt(cidxX60gensym110615113_, ((NI) 1), &TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_3)) { raiseOverflow(); };			cidxX60gensym110615113_ = (NI)(TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_3);		} LA2: ;
	}

#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
	T7_ = (NimStringDesc*)0;	T7_ = toHex__ziyYRZOkaJBp9bZAA9cVEV2w(value_0);
#line 14 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 14 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
	T8_ = dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem(cidxX60gensym110615113_, ((NI) 1));
#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
	hValue = X5BX5D___ogYTOKbgqbjPfyC123US1gsystem(T7_, T8_);
#line 18 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"

#line 18 "/home/runner/work/nim-waku/nim-waku/vendor/nim-web3/web3/ethhexstrings.nim"
	T9_ = (NimStringDesc*)0;	T9_ = rawNewString((hValue ? hValue->Sup.len : 0) + 2);appendString(T9_, ((NimStringDesc*) &TM__N9ceER69cF9bjaFb7y3k9a9bm9cg_9));appendString(T9_, hValue);	result = T9_;	return result;}
