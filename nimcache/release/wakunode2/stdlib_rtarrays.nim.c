/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v2/node -o nimcache/release/wakunode2/stdlib_rtarrays.nim.c.o nimcache/release/wakunode2/stdlib_rtarrays.nim.c */
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
typedef struct tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg;
typedef struct tySequence__9apztJSmgERYU8fZOjI4pOg tySequence__9apztJSmgERYU8fZOjI4pOg;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef int tyArray__hlIpJIfs8ECqDyETXoMStg[10];
struct tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg {NI L;
tySequence__9apztJSmgERYU8fZOjI4pOg* spart;
tyArray__hlIpJIfs8ECqDyETXoMStg apart;
};
struct TGenericSeq {NI len;
NI reserved;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef int tyUncheckedArray__XIqsTSIHvfp4MQW3uzOwlA[1];
struct tySequence__9apztJSmgERYU8fZOjI4pOg {  TGenericSeq Sup;  int data[SEQ_DECL_SIZE];};N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_NIMCALL(void, Marker_tySequence__9apztJSmgERYU8fZOjI4pOg)(void* p, NI op);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
extern TNimType NTI__nlCscttRCss70IBTyuBqnA_;
N_LIB_PRIVATE TNimType NTI__9apztJSmgERYU8fZOjI4pOg_;
extern TNimType* nimTypeRoot;
static N_NIMCALL(void, Marker_tySequence__9apztJSmgERYU8fZOjI4pOg)(void* p, NI op) {
	tySequence__9apztJSmgERYU8fZOjI4pOg* a;
	NI T1_;	a = (tySequence__9apztJSmgERYU8fZOjI4pOg*)p;
	T1_ = (NI)0;}

#line 27 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/collections/rtarrays.nim"
N_LIB_PRIVATE N_NIMCALL(void, initRtArray__dgRhxurJYSkIc9bzLmhcMfQ)(NI len, tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg* Result) {	NI T1_;	chckNil((void*)Result);	unsureAsgnRef((void**)&(*Result).spart, NIM_NIL);	T1_ = (NI)0;	for (T1_ = 0; T1_ < 10; T1_++) {	(*Result).apart[T1_] = 0;	}

#line 28 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/collections/rtarrays.nim"
	(*Result).L = len;
#line 29 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/collections/rtarrays.nim"
	{
#line 29 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/collections/rtarrays.nim"
		if (!(((NI) 10) < ((NI) ((*Result).L)))) goto LA4_;

#line 30 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/collections/rtarrays.nim"
		unsureAsgnRef((void**) (&(*Result).spart), (tySequence__9apztJSmgERYU8fZOjI4pOg*) newSeq((&NTI__9apztJSmgERYU8fZOjI4pOg_), len));	}
	LA4_: ;
}

#line 32 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/collections/rtarrays.nim"
N_LIB_PRIVATE N_NIMCALL(int*, getRawData__P13NCPA0zhaXrvo9bVrTd9bw)(tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg* x) {	int* result;	result = (int*)0;
#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/collections/rtarrays.nim"

#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/collections/rtarrays.nim"
	{
#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/collections/rtarrays.nim"
		if (!(((NI) 10) < ((NI) ((*x).L)))) goto LA3_;
		if ((NU)(((NI) 0)) >= (NU)((*x).spart ? (*x).spart->Sup.len : 0)){ raiseIndexError2(((NI) 0),((*x).spart ? (*x).spart->Sup.len : 0)-1); }		result = ((int*) ((&(*x).spart->data[((NI) 0)])));	}
	goto LA1_;
	LA3_: ;
	{		result = ((int*) ((&(*x).apart[(((NI) 0))- 0])));	}
	LA1_: ;
	return result;}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_rtarraysDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
NTI__9apztJSmgERYU8fZOjI4pOg_.size = sizeof(tySequence__9apztJSmgERYU8fZOjI4pOg*);
NTI__9apztJSmgERYU8fZOjI4pOg_.kind = 24;
NTI__9apztJSmgERYU8fZOjI4pOg_.base = (&NTI__nlCscttRCss70IBTyuBqnA_);
NTI__9apztJSmgERYU8fZOjI4pOg_.flags = 2;
NTI__9apztJSmgERYU8fZOjI4pOg_.name = "seq[cint]";
NTI__9apztJSmgERYU8fZOjI4pOg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__9apztJSmgERYU8fZOjI4pOg_;
NTI__9apztJSmgERYU8fZOjI4pOg_.marker = Marker_tySequence__9apztJSmgERYU8fZOjI4pOg;
}

