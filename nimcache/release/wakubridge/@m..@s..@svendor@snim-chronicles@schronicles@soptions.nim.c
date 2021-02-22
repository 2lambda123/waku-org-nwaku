/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/common -o nimcache/release/wakubridge/@m..@s..@svendor@snim-chronicles@schronicles@soptions.nim.c.o nimcache/release/wakubridge/@m..@s..@svendor@snim-chronicles@schronicles@soptions.nim.c */
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 tyEnum_LogLevel__9bciZEQ8iC1G2PermjsuXmA;
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
N_LIB_PRIVATE TNimType NTI__9bciZEQ8iC1G2PermjsuXmA_;
extern TNimType* nimTypeRoot;
N_LIB_PRIVATE N_NIMCALL(void, chronicles_optionsDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode* TM__m4MDmOQGCUZTBk9aDmG9cxOg_2_8[8];
NI TM__m4MDmOQGCUZTBk9aDmG9cxOg_4;
static char* NIM_CONST TM__m4MDmOQGCUZTBk9aDmG9cxOg_3[8] = {
"NONE", 
"TRACE", 
"DEBUG", 
"INFO", 
"NOTICE", 
"WARN", 
"ERROR", 
"FATAL"};
static TNimNode TM__m4MDmOQGCUZTBk9aDmG9cxOg_0[9];NTI__9bciZEQ8iC1G2PermjsuXmA_.size = sizeof(tyEnum_LogLevel__9bciZEQ8iC1G2PermjsuXmA);
NTI__9bciZEQ8iC1G2PermjsuXmA_.kind = 14;
NTI__9bciZEQ8iC1G2PermjsuXmA_.base = 0;
NTI__9bciZEQ8iC1G2PermjsuXmA_.flags = 3;
NTI__9bciZEQ8iC1G2PermjsuXmA_.name = "LogLevel";
NTI__9bciZEQ8iC1G2PermjsuXmA_.nextType = nimTypeRoot; nimTypeRoot=&NTI__9bciZEQ8iC1G2PermjsuXmA_;
for (TM__m4MDmOQGCUZTBk9aDmG9cxOg_4 = 0; TM__m4MDmOQGCUZTBk9aDmG9cxOg_4 < 8; TM__m4MDmOQGCUZTBk9aDmG9cxOg_4++) {
TM__m4MDmOQGCUZTBk9aDmG9cxOg_0[TM__m4MDmOQGCUZTBk9aDmG9cxOg_4+0].kind = 1;
TM__m4MDmOQGCUZTBk9aDmG9cxOg_0[TM__m4MDmOQGCUZTBk9aDmG9cxOg_4+0].offset = TM__m4MDmOQGCUZTBk9aDmG9cxOg_4;
TM__m4MDmOQGCUZTBk9aDmG9cxOg_0[TM__m4MDmOQGCUZTBk9aDmG9cxOg_4+0].name = TM__m4MDmOQGCUZTBk9aDmG9cxOg_3[TM__m4MDmOQGCUZTBk9aDmG9cxOg_4];
TM__m4MDmOQGCUZTBk9aDmG9cxOg_2_8[TM__m4MDmOQGCUZTBk9aDmG9cxOg_4] = &TM__m4MDmOQGCUZTBk9aDmG9cxOg_0[TM__m4MDmOQGCUZTBk9aDmG9cxOg_4+0];
}
TM__m4MDmOQGCUZTBk9aDmG9cxOg_0[8].len = 8; TM__m4MDmOQGCUZTBk9aDmG9cxOg_0[8].kind = 2; TM__m4MDmOQGCUZTBk9aDmG9cxOg_0[8].sons = &TM__m4MDmOQGCUZTBk9aDmG9cxOg_2_8[0];
NTI__9bciZEQ8iC1G2PermjsuXmA_.node = &TM__m4MDmOQGCUZTBk9aDmG9cxOg_0[8];
}

