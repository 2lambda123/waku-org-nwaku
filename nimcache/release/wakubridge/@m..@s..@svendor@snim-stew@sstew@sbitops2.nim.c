/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/common -o nimcache/release/wakubridge/@m..@s..@svendor@snim-stew@sstew@sbitops2.nim.c.o nimcache/release/wakubridge/@m..@s..@svendor@snim-stew@sstew@sbitops2.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
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

#line 173 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
N_LIB_PRIVATE N_NIMCALL(NI, log2truncBuiltin__Q9bJ2xbAkstwTwtdSZpZY9aw)(NU64 v) {	NI result;	int T1_;	result = (NI)0;
#line 174 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 174 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 174 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 174 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	T1_ = (int)0;	T1_ = __builtin_clzll(v);	result = ((NI) ((NU32)((NU32)(((NU32) 63)) - (NU32)(((unsigned int) (T1_))))));	return result;}

#line 36 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
N_LIB_PRIVATE N_NIMCALL(NU64, nextPow2Nim__zPN7vUTiaaqPlpy70XGnbQ)(NU64 x_0) {	NU64 result;	NU64 v;	result = (NU64)0;
#line 37 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 37 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 37 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	v = (NU64)((NU64)(x_0) - (NU64)(1ULL));
#line 40 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 40 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 40 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	v = (NU64)(v | (NU64)((NU64)(v) >> (NU64)(((NI) 1))));
#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	v = (NU64)(v | (NU64)((NU64)(v) >> (NU64)(((NI) 2))));
#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	v = (NU64)(v | (NU64)((NU64)(v) >> (NU64)(((NI) 4))));
#line 44 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 44 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 44 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	v = (NU64)(v | (NU64)((NU64)(v) >> (NU64)(((NI) 8))));
#line 46 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 46 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 46 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	v = (NU64)(v | (NU64)((NU64)(v) >> (NU64)(((NI) 16))));
#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	v = (NU64)(v | (NU64)((NU64)(v) >> (NU64)(((NI) 32))));
#line 50 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	result = (NU64)((NU64)(v) + (NU64)(1ULL));	return result;}

#line 171 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
N_LIB_PRIVATE N_NIMCALL(NI, log2truncBuiltin__2rrwrvTI9a1hu2zf2RbQswg)(NU32 v) {	NI result;	int T1_;	result = (NI)0;
#line 172 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 172 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 172 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"

#line 172 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/bitops2.nim"
	T1_ = (int)0;	T1_ = __builtin_clz(v);	result = ((NI) ((NU32)((NU32)(((NU32) 31)) - (NU32)(((unsigned int) (T1_))))));	return result;}
