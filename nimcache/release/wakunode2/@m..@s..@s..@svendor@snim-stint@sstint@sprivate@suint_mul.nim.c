/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v2/node -o nimcache/release/wakunode2/@m..@s..@s..@svendor@snim-stint@sstint@sprivate@suint_mul.nim.c.o nimcache/release/wakunode2/@m..@s..@s..@svendor@snim-stint@sstint@sprivate@suint_mul.nim.c */
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
typedef struct tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g;
typedef struct tyObject_UintImpl__3RPAuTAh9bcIRq9bgsNKRahA tyObject_UintImpl__3RPAuTAh9bcIRq9bgsNKRahA;
struct tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g {NU64 lo;
NU64 hi;
};
struct tyObject_UintImpl__3RPAuTAh9bcIRq9bgsNKRahA {tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g lo;
tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g hi;
};
static N_INLINE(NU64, lo__efY4IwWvSzRt9c47LqGNVZAuint_mul)(NU64 x_0);
static N_INLINE(NU64, hi__efY4IwWvSzRt9c47LqGNVZA_2uint_mul)(NU64 x_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, extPrecMul__3j9aAELx8YtNMW0EwyRHEnQ)(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g* result, NU64 u, NU64 v);
static N_INLINE(void, inc__swguZXqoV0IqjU09bX7neeguint_addsub)(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g* x_0);
static N_INLINE(void, pluseq___bxrm0UcFINbvpb9cx688ySwuint_addsub)(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g* x_0, tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g y_0);
static N_INLINE(NU64, toSubtype__fKl7Mxo1VN34AGpJN6awlQconversion)(NIM_BOOL b);
static N_INLINE(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g, one__7mIPSMgb4KryhjfgE9bm9cVwinitialization)(void);
static N_INLINE(NU64, one__GHrrTPkKKUWzNxC0A70leQinitialization)(void);

#line 19 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
static N_INLINE(NU64, lo__efY4IwWvSzRt9c47LqGNVZAuint_mul)(NU64 x_0) {	NU64 result;	result = (NU64)0;
#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	result = (NU64)(x_0 & 4294967295ULL);	return result;}

#line 26 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
static N_INLINE(NU64, hi__efY4IwWvSzRt9c47LqGNVZA_2uint_mul)(NU64 x_0) {	NU64 result;	result = (NU64)0;
#line 29 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 29 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	result = (NU64)((NU64)(x_0) >> (NU64)(((NI) 32)));	return result;}

#line 75 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
N_LIB_PRIVATE N_NIMCALL(void, extPrecMul__3j9aAELx8YtNMW0EwyRHEnQ)(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g* result, NU64 u, NU64 v) {	NU64 x0X60gensym59168333_;	NU64 x1X60gensym59168334_;	NU64 x2X60gensym59168335_;	NU64 x3X60gensym59168336_;	NU64 ulX60gensym59168337_;	NU64 uhX60gensym59168338_;	NU64 vlX60gensym59168339_;	NU64 vhX60gensym59168340_;	NU64 T1_;	NU64 T6_;	NU64 T7_;	x0X60gensym59168333_ = (NU64)0;	x1X60gensym59168334_ = (NU64)0;	x2X60gensym59168335_ = (NU64)0;	x3X60gensym59168336_ = (NU64)0;
#line 57 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 57 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	ulX60gensym59168337_ = lo__efY4IwWvSzRt9c47LqGNVZAuint_mul(u);
#line 58 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 58 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	uhX60gensym59168338_ = hi__efY4IwWvSzRt9c47LqGNVZA_2uint_mul(u);
#line 59 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 59 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	vlX60gensym59168339_ = lo__efY4IwWvSzRt9c47LqGNVZAuint_mul(v);
#line 60 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 60 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	vhX60gensym59168340_ = hi__efY4IwWvSzRt9c47LqGNVZA_2uint_mul(v);
#line 62 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 62 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	x0X60gensym59168333_ = (NU64)((NU64)(ulX60gensym59168337_) * (NU64)(vlX60gensym59168339_));
#line 63 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 63 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	x1X60gensym59168334_ = (NU64)((NU64)(ulX60gensym59168337_) * (NU64)(vhX60gensym59168340_));
#line 64 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 64 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	x2X60gensym59168335_ = (NU64)((NU64)(uhX60gensym59168338_) * (NU64)(vlX60gensym59168339_));
#line 65 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 65 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	x3X60gensym59168336_ = (NU64)((NU64)(uhX60gensym59168338_) * (NU64)(vhX60gensym59168340_));
#line 67 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 67 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 67 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	T1_ = (NU64)0;	T1_ = hi__efY4IwWvSzRt9c47LqGNVZA_2uint_mul(x0X60gensym59168333_);	x1X60gensym59168334_ += T1_;
#line 68 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	x1X60gensym59168334_ += x2X60gensym59168335_;
#line 69 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	{
#line 69 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		if (!((NU64)(x1X60gensym59168334_) < (NU64)(x2X60gensym59168335_))) goto LA4_;

#line 70 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		x3X60gensym59168336_ += 4294967296ULL;	}
	LA4_: ;

#line 72 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 72 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 72 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 72 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	T6_ = (NU64)0;	T6_ = hi__efY4IwWvSzRt9c47LqGNVZA_2uint_mul(x1X60gensym59168334_);	(*result).hi = (NU64)((NU64)(x3X60gensym59168336_) + (NU64)(T6_));
#line 73 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 73 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 73 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 73 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 73 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	T7_ = (NU64)0;	T7_ = lo__efY4IwWvSzRt9c47LqGNVZAuint_mul(x0X60gensym59168333_);	(*result).lo = (NU64)((NU64)((NU64)(x1X60gensym59168334_) << (NU64)(((NI) 32))) | T7_);}

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

#line 12 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/conversion.nim"
static N_INLINE(NU64, toSubtype__fKl7Mxo1VN34AGpJN6awlQconversion)(NIM_BOOL b) {	NU64 result;	result = (NU64)0;
#line 13 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/conversion.nim"
	result = ((NU64) (b));	return result;}

#line 20 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"
static N_INLINE(void, pluseq___bxrm0UcFINbvpb9cx688ySwuint_addsub)(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g* x_0, tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g y_0) {	NU64 T1_;
#line 23 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"
	(*x_0).lo += y_0.lo;
#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"
	T1_ = (NU64)0;	T1_ = toSubtype__fKl7Mxo1VN34AGpJN6awlQconversion(((NU64)((*x_0).lo) < (NU64)(y_0.lo)));	(*x_0).hi += (NU64)((NU64)(T1_) + (NU64)(y_0.hi));}

#line 15 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/initialization.nim"
static N_INLINE(NU64, one__GHrrTPkKKUWzNxC0A70leQinitialization)(void) {	NU64 result;	result = (NU64)0;
#line 16 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/initialization.nim"
	result = 1ULL;	return result;}

#line 18 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/initialization.nim"
static N_INLINE(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g, one__7mIPSMgb4KryhjfgE9bm9cVwinitialization)(void) {	tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g result;	nimZeroMem((void*)(&result), sizeof(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g));
#line 19 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/initialization.nim"

#line 19 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/initialization.nim"
	result.lo = one__GHrrTPkKKUWzNxC0A70leQinitialization();	return result;}

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"
static N_INLINE(void, inc__swguZXqoV0IqjU09bX7neeguint_addsub)(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g* x_0) {	tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g T1_;
#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"

#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"

#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"
	T1_ = one__7mIPSMgb4KryhjfgE9bm9cVwinitialization();
#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_addsub.nim"
	pluseq___bxrm0UcFINbvpb9cx688ySwuint_addsub(x_0, T1_);
}

#line 141 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
N_LIB_PRIVATE N_NIMCALL(void, extPrecMul__vOPa86RDryHp0lB9bNTb6KQ)(tyObject_UintImpl__3RPAuTAh9bcIRq9bgsNKRahA* result, tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g u, tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g v) {	tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g z1X60gensym60690514_;	nimZeroMem((void*)(&z1X60gensym60690514_), sizeof(tyObject_UintImpl__7gzUBTJUlPE55RUsMXYp5g));
#line 113 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 113 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	extPrecMul__3j9aAELx8YtNMW0EwyRHEnQ((&(*result).lo), u.lo, v.lo);

#line 114 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 114 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	extPrecMul__3j9aAELx8YtNMW0EwyRHEnQ((&(*result).hi), u.hi, v.hi);

#line 118 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 118 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	extPrecMul__3j9aAELx8YtNMW0EwyRHEnQ((&z1X60gensym60690514_), u.hi, v.lo);

#line 119 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	(*result).lo.hi += z1X60gensym60690514_.lo;
#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	{
#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		if (!((NU64)((*result).lo.hi) < (NU64)(z1X60gensym60690514_.lo))) goto LA3_;

#line 121 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 121 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		inc__swguZXqoV0IqjU09bX7neeguint_addsub((&(*result).hi));
	}
	LA3_: ;

#line 123 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	(*result).hi.lo += z1X60gensym60690514_.hi;
#line 124 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	{
#line 124 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		if (!((NU64)((*result).hi.lo) < (NU64)(z1X60gensym60690514_.hi))) goto LA7_;

#line 125 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		(*result).hi.hi += ((NI) 1);	}
	LA7_: ;

#line 128 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 128 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	extPrecMul__3j9aAELx8YtNMW0EwyRHEnQ((&z1X60gensym60690514_), u.lo, v.hi);

#line 129 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	(*result).lo.hi += z1X60gensym60690514_.lo;
#line 130 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	{
#line 130 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		if (!((NU64)((*result).lo.hi) < (NU64)(z1X60gensym60690514_.lo))) goto LA11_;

#line 131 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"

#line 131 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		inc__swguZXqoV0IqjU09bX7neeguint_addsub((&(*result).hi));
	}
	LA11_: ;

#line 133 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	(*result).hi.lo += z1X60gensym60690514_.hi;
#line 143 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
	{
#line 134 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		if (!((NU64)((*result).hi.lo) < (NU64)(z1X60gensym60690514_.hi))) goto LA15_;

#line 135 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stint/stint/private/uint_mul.nim"
		(*result).hi.hi += ((NI) 1);	}
	LA15_: ;
}
