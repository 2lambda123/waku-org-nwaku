/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v2/node -o nimcache/release/wakunode2/stdlib_locks.nim.c.o nimcache/release/wakunode2/stdlib_locks.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <pthread.h>
#include <sys/types.h>
                          #include <pthread.h>
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
typedef long tyArray__xDUyu9aScDpt0JZLU6q9aEZQ[5];
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
N_LIB_PRIVATE TNimType NTI__9bxnxao7MiiLOwO9aLAh9a3og_;
extern TNimType* nimTypeRoot;

#line 39 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/core/locks.nim"
N_LIB_PRIVATE N_NIMCALL(void, acquire__9bDG9bIkA6DtNcXVdL7bnLvg)(pthread_mutex_t* lock) {
#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/core/locks.nim"

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/core/locks.nim"
	pthread_mutex_lock(lock);
}

#line 43 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/core/locks.nim"
N_LIB_PRIVATE N_NIMCALL(void, release__9bDG9bIkA6DtNcXVdL7bnLvg_2)(pthread_mutex_t* lock) {
#line 45 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/core/locks.nim"

#line 45 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/core/locks.nim"
	pthread_mutex_unlock(lock);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_locksDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode TM__05xOtLU9bCAYnon4m09bcBlg_0[1];NTI__9bxnxao7MiiLOwO9aLAh9a3og_.size = sizeof(pthread_mutex_t);
NTI__9bxnxao7MiiLOwO9aLAh9a3og_.kind = 18;
NTI__9bxnxao7MiiLOwO9aLAh9a3og_.base = 0;
NTI__9bxnxao7MiiLOwO9aLAh9a3og_.flags = 3;
NTI__9bxnxao7MiiLOwO9aLAh9a3og_.name = "SysLockObj";
NTI__9bxnxao7MiiLOwO9aLAh9a3og_.nextType = nimTypeRoot; nimTypeRoot=&NTI__9bxnxao7MiiLOwO9aLAh9a3og_;
NTI__9bxnxao7MiiLOwO9aLAh9a3og_.node = &TM__05xOtLU9bCAYnon4m09bcBlg_0[0];
}

