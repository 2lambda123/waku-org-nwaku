/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/common -o nimcache/release/wakubridge/@m..@s..@svendor@snim-chronicles@schronicles@sdynamic_scope.nim.c.o nimcache/release/wakubridge/@m..@s..@svendor@snim-chronicles@schronicles@sdynamic_scope.nim.c */
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
typedef struct tyObject_TextLineRecord__EhHqp0aF43SxfS6MTF9b0hA tyObject_TextLineRecord__EhHqp0aF43SxfS6MTF9b0hA;
typedef struct tyObject_BindingsFrame__jJ0xWkRSfs9byDsgkVtUjiA tyObject_BindingsFrame__jJ0xWkRSfs9byDsgkVtUjiA;
typedef struct tyObject_ScopeBindingBase__IuICMApeUbt9ayHqSiHrxLg tyObject_ScopeBindingBase__IuICMApeUbt9ayHqSiHrxLg;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct tyObject_BindingsFrame__jJ0xWkRSfs9byDsgkVtUjiA {tyObject_BindingsFrame__jJ0xWkRSfs9byDsgkVtUjiA* prev;
tyObject_ScopeBindingBase__IuICMApeUbt9ayHqSiHrxLg** bindings;
NI bindingsCount;
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
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_TextLineRecord__EhHqp0aF43SxfS6MTF9b0hA* x_0, tyObject_ScopeBindingBase__IuICMApeUbt9ayHqSiHrxLg* valueAddr, void* ClE_0);
void* ClE_0;
} tyProc__3IDqI9bNZlr2sElWp4fIKpA;
struct tyObject_ScopeBindingBase__IuICMApeUbt9ayHqSiHrxLg {  RootObj Sup;NimStringDesc* name;
tyProc__3IDqI9bNZlr2sElWp4fIKpA appender;
};
typedef N_CLOSURE_PTR(void, TM__w3SjR0Oul1Zrz9a9cnnRzdVg_2) (tyObject_TextLineRecord__EhHqp0aF43SxfS6MTF9b0hA* x_0, tyObject_ScopeBindingBase__IuICMApeUbt9ayHqSiHrxLg* valueAddr);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
extern NIM_THREADVAR tyObject_BindingsFrame__jJ0xWkRSfs9byDsgkVtUjiA* defaultChroniclesStreamTlsSlot__61tXtQ6Ec9cEDhyN6FSxpFg;

#line 11 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronicles/chronicles/dynamic_scope.nim"
N_LIB_PRIVATE N_NIMCALL(void, logAllDynamicProperties__2fo45m4EsDq89bdWxK19aOpQ)(tyObject_TextLineRecord__EhHqp0aF43SxfS6MTF9b0hA* r) {	tyObject_BindingsFrame__jJ0xWkRSfs9byDsgkVtUjiA* frame;
#line 15 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronicles/chronicles/dynamic_scope.nim"
	frame = defaultChroniclesStreamTlsSlot__61tXtQ6Ec9cEDhyN6FSxpFg;	{
#line 16 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronicles/chronicles/dynamic_scope.nim"
		while (1) {
#line 16 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronicles/chronicles/dynamic_scope.nim"

#line 16 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronicles/chronicles/dynamic_scope.nim"
			if (!!((frame == NIM_NIL))) goto LA2;
			{				NI i;				NI i_2;				i = (NI)0;
#line 106 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				i_2 = ((NI) 0);				{
#line 107 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
					while (1) {						tyObject_ScopeBindingBase__IuICMApeUbt9ayHqSiHrxLg* binding;						NI TM__w3SjR0Oul1Zrz9a9cnnRzdVg_3;
#line 107 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
						if (!(i_2 < (*frame).bindingsCount)) goto LA5;

#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronicles/chronicles/dynamic_scope.nim"
						i = i_2;
#line 18 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronicles/chronicles/dynamic_scope.nim"
						binding = (*frame).bindings[i];
#line 19 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronicles/chronicles/dynamic_scope.nim"
						(*binding).appender.ClE_0? (*binding).appender.ClP_0(r, binding, (*binding).appender.ClE_0):((TM__w3SjR0Oul1Zrz9a9cnnRzdVg_2)((*binding).appender.ClP_0))(r, binding);

#line 109 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
						if (nimAddInt(i_2, ((NI) 1), &TM__w3SjR0Oul1Zrz9a9cnnRzdVg_3)) { raiseOverflow(); };						i_2 = (NI)(TM__w3SjR0Oul1Zrz9a9cnnRzdVg_3);					} LA5: ;
				}
			}

#line 20 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronicles/chronicles/dynamic_scope.nim"
			frame = (*frame).prev;		} LA2: ;
	}
}
