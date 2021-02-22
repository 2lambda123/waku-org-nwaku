/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@swaku@sv2@sprotocol@swaku_message.nim.c.o nimcache/release/chat2/@m..@s..@swaku@sv2@sprotocol@swaku_message.nim.c */
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
typedef struct tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A;
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ tySequence__6H5Oh5UUvVCLiakt9aTwtUQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Result__FV8OekT7wN9c7aWgCdYVUqQ tyObject_Result__FV8OekT7wN9c7aWgCdYVUqQ;
typedef struct tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA;
typedef struct tyObject_Result__VR7l4DJaL9cSFn6dTxK0gOQ tyObject_Result__VR7l4DJaL9cSFn6dTxK0gOQ;
typedef struct NimStringDesc NimStringDesc;
struct tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A {tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* payload;
NU32 contentTopic;
NU32 version;
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
struct TGenericSeq {NI len;
NI reserved;
};
typedef NU8 tyEnum_ProtoError__mWP6pHyhcb4SJ8Wo5U9bwfg;
struct tyObject_Result__FV8OekT7wN9c7aWgCdYVUqQ {NIM_BOOL o;
union{
struct {tyEnum_ProtoError__mWP6pHyhcb4SJ8Wo5U9bwfg e;
} _o_1;
struct {tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A v;
} _o_2;
};
};
typedef NU8 tySet_tyEnum_ProtoFlags__34NlqR9bQ2hXegI29bJO9bfbA;
struct tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA {tySet_tyEnum_ProtoFlags__34NlqR9bQ2hXegI29bJO9bfbA options;
tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* buffer;
NI offset;
NI length;
};
struct tyObject_Result__VR7l4DJaL9cSFn6dTxK0gOQ {NIM_BOOL o;
union{
struct {tyEnum_ProtoError__mWP6pHyhcb4SJ8Wo5U9bwfg e;
} _o_1;
struct {NIM_BOOL v;
} _o_2;
};
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ {  TGenericSeq Sup;  NU8 data[SEQ_DECL_SIZE];};N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, initProtoBuffer__fbykHZzk6a9bvfYMmTBqn3Q)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* data_0, NI offset, tySet_tyEnum_ProtoFlags__34NlqR9bQ2hXegI29bJO9bfbA options, tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA* Result);
N_LIB_PRIVATE N_NIMCALL(tyObject_Result__VR7l4DJaL9cSFn6dTxK0gOQ, getField__TmmAJk0OXMd3CniSvMNDvQ)(tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA* data_0, NI field, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** output);
N_LIB_PRIVATE N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_LIB_PRIVATE N_NIMCALL(tyObject_Result__VR7l4DJaL9cSFn6dTxK0gOQ, getField__eM4SWQCct7umnPKykFxfQw)(tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA* data_0, NI field, NU32* output);
N_LIB_PRIVATE N_NIMCALL(void, genericSeqAssign)(void* dest_0, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, initProtoBuffer__WvyuU9b9b5JbJrzKXmuwx4ng)(tySet_tyEnum_ProtoFlags__34NlqR9bQ2hXegI29bJO9bfbA options, tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA* Result);
N_LIB_PRIVATE N_NIMCALL(void, write__4tkJJWHqmkKO9cj2FvJ9cDoQ)(tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA* pb, NI field, NU8* value_0, NI value_0Len_0);
N_LIB_PRIVATE N_NIMCALL(void, write__7RqInMwO9bCuNjT2529bV9cpg)(tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA* pb, NI field, NU32 value_0);
N_LIB_PRIVATE TNimType NTI__snKUdUhXg9ahkzpl1ubVZ0A_;
extern TNimType NTI__6H5Oh5UUvVCLiakt9aTwtUQ_;
extern TNimType NTI__JrFyJbYm9b5I4hJ9cWDqvfYA_;
STRING_LITERAL(TM__CavI8KpGjSIMhRRRT9cCkhA_3, "\'e\' is not accessible using discriminant \'o\' of type \'Result\'", 61);
STRING_LITERAL(TM__CavI8KpGjSIMhRRRT9cCkhA_4, "\'v\' is not accessible using discriminant \'o\' of type \'Result\'", 61);
extern TNimType* nimTypeRoot;

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

#line 21 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
N_LIB_PRIVATE N_NIMCALL(void, init__4jzYhj7U7a9btL2NYw9cV81g)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* buffer, tyObject_Result__FV8OekT7wN9c7aWgCdYVUqQ* Result) {	tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A msg;	tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA pb;	tyObject_Result__VR7l4DJaL9cSFn6dTxK0gOQ vX60gensym157260234_;	tyObject_Result__VR7l4DJaL9cSFn6dTxK0gOQ vX60gensym157270214_;	tyObject_Result__VR7l4DJaL9cSFn6dTxK0gOQ vX60gensym157280214_;{	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	(*Result)._o_1.e = 0;	break;
	case NIM_TRUE:
	unsureAsgnRef((void**)&(*Result)._o_2.v.payload, NIM_NIL);	(*Result)._o_2.v.contentTopic = 0;	(*Result)._o_2.v.version = 0;	break;
	} 
	(*Result).o = 0;
#line 22 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	nimZeroMem((void*)(&msg), sizeof(tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A));
#line 22 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	chckNil((void*)(&msg));	nimZeroMem((void*)(&msg), sizeof(tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A));	nimZeroMem((void*)(&pb), sizeof(tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA));
#line 23 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"

#line 23 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	initProtoBuffer__fbykHZzk6a9bvfYMmTBqn3Q(buffer, ((NI) 0), 0, (&pb));

#line 25 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"

#line 657 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 25 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	vX60gensym157260234_ = getField__TmmAJk0OXMd3CniSvMNDvQ((&pb), ((NI) 1), (&msg.payload));
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
	{
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		if (!!(vX60gensym157260234_.o)) goto LA3_;

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)Result);		switch ((*Result).o) {
		case NIM_FALSE:
		(*Result)._o_1.e = 0;		break;
		case NIM_TRUE:
		unsureAsgnRef((void**)&(*Result)._o_2.v.payload, NIM_NIL);		(*Result)._o_2.v.contentTopic = 0;		(*Result)._o_2.v.version = 0;		break;
		} 
		(*Result).o = 0;		(*Result).o = NIM_FALSE;		if (!(((1 &(1U<<((NU)(vX60gensym157260234_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__CavI8KpGjSIMhRRRT9cCkhA_3)); }		(*Result)._o_1.e = vX60gensym157260234_._o_1.e;		goto BeforeRet_;
	}
	LA3_: ;
	if (!(((2 &(1U<<((NU)(vX60gensym157260234_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__CavI8KpGjSIMhRRRT9cCkhA_4)); }	(void)(vX60gensym157260234_._o_2.v);

#line 26 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"

#line 657 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 26 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	vX60gensym157270214_ = getField__eM4SWQCct7umnPKykFxfQw((&pb), ((NI) 2), (&msg.contentTopic));
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
	{
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		if (!!(vX60gensym157270214_.o)) goto LA7_;

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)Result);		switch ((*Result).o) {
		case NIM_FALSE:
		(*Result)._o_1.e = 0;		break;
		case NIM_TRUE:
		unsureAsgnRef((void**)&(*Result)._o_2.v.payload, NIM_NIL);		(*Result)._o_2.v.contentTopic = 0;		(*Result)._o_2.v.version = 0;		break;
		} 
		(*Result).o = 0;		(*Result).o = NIM_FALSE;		if (!(((1 &(1U<<((NU)(vX60gensym157270214_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__CavI8KpGjSIMhRRRT9cCkhA_3)); }		(*Result)._o_1.e = vX60gensym157270214_._o_1.e;		goto BeforeRet_;
	}
	LA7_: ;
	if (!(((2 &(1U<<((NU)(vX60gensym157270214_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__CavI8KpGjSIMhRRRT9cCkhA_4)); }	(void)(vX60gensym157270214_._o_2.v);

#line 27 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"

#line 657 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 27 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	vX60gensym157280214_ = getField__eM4SWQCct7umnPKykFxfQw((&pb), ((NI) 3), (&msg.version));
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
	{
#line 658 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		if (!!(vX60gensym157280214_.o)) goto LA11_;

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"

#line 662 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)Result);		switch ((*Result).o) {
		case NIM_FALSE:
		(*Result)._o_1.e = 0;		break;
		case NIM_TRUE:
		unsureAsgnRef((void**)&(*Result)._o_2.v.payload, NIM_NIL);		(*Result)._o_2.v.contentTopic = 0;		(*Result)._o_2.v.version = 0;		break;
		} 
		(*Result).o = 0;		(*Result).o = NIM_FALSE;		if (!(((1 &(1U<<((NU)(vX60gensym157280214_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__CavI8KpGjSIMhRRRT9cCkhA_3)); }		(*Result)._o_1.e = vX60gensym157280214_._o_1.e;		goto BeforeRet_;
	}
	LA11_: ;
	if (!(((2 &(1U<<((NU)(vX60gensym157280214_.o)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__CavI8KpGjSIMhRRRT9cCkhA_4)); }	(void)(vX60gensym157280214_._o_2.v);
	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	(*Result)._o_1.e = 0;	break;
	case NIM_TRUE:
	unsureAsgnRef((void**)&(*Result)._o_2.v.payload, NIM_NIL);	(*Result)._o_2.v.contentTopic = 0;	(*Result)._o_2.v.version = 0;	break;
	} 
	(*Result).o = 0;	(*Result).o = NIM_TRUE;	genericSeqAssign((&(*Result)._o_2.v.payload), msg.payload, (&NTI__6H5Oh5UUvVCLiakt9aTwtUQ_));	(*Result)._o_2.v.contentTopic = msg.contentTopic;	(*Result)._o_2.v.version = msg.version;	}BeforeRet_: ;
}

#line 31 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
N_LIB_PRIVATE N_NIMCALL(void, encode__iQo9bIBTBPAEDpRAygQm8Tg)(tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A message, tyObject_ProtoBuffer__40iIOZrE3YoWDkFgicA1eA* Result) {
#line 32 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"

#line 32 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	initProtoBuffer__WvyuU9b9b5JbJrzKXmuwx4ng(0, Result);

#line 34 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"

#line 34 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	write__4tkJJWHqmkKO9cj2FvJ9cDoQ(Result, ((NI) 1), message.payload->data, (message.payload ? message.payload->Sup.len : 0));

#line 35 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"

#line 35 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	write__7RqInMwO9bCuNjT2529bV9cpg(Result, ((NI) 2), message.contentTopic);

#line 36 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"

#line 36 "/home/runner/work/nim-waku/nim-waku/waku/v2/protocol/waku_message.nim"
	write__7RqInMwO9bCuNjT2529bV9cpg(Result, ((NI) 3), message.version);
}
N_LIB_PRIVATE N_NIMCALL(void, waku_waku_messageDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode* TM__CavI8KpGjSIMhRRRT9cCkhA_2_3[3];
static TNimNode TM__CavI8KpGjSIMhRRRT9cCkhA_0[4];NTI__snKUdUhXg9ahkzpl1ubVZ0A_.size = sizeof(tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A);
NTI__snKUdUhXg9ahkzpl1ubVZ0A_.kind = 18;
NTI__snKUdUhXg9ahkzpl1ubVZ0A_.base = 0;
NTI__snKUdUhXg9ahkzpl1ubVZ0A_.flags = 2;
NTI__snKUdUhXg9ahkzpl1ubVZ0A_.name = "WakuMessage";
NTI__snKUdUhXg9ahkzpl1ubVZ0A_.nextType = nimTypeRoot; nimTypeRoot=&NTI__snKUdUhXg9ahkzpl1ubVZ0A_;
TM__CavI8KpGjSIMhRRRT9cCkhA_2_3[0] = &TM__CavI8KpGjSIMhRRRT9cCkhA_0[1];
TM__CavI8KpGjSIMhRRRT9cCkhA_0[1].kind = 1;
TM__CavI8KpGjSIMhRRRT9cCkhA_0[1].offset = offsetof(tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A, payload);
TM__CavI8KpGjSIMhRRRT9cCkhA_0[1].typ = (&NTI__6H5Oh5UUvVCLiakt9aTwtUQ_);
TM__CavI8KpGjSIMhRRRT9cCkhA_0[1].name = "payload";
TM__CavI8KpGjSIMhRRRT9cCkhA_2_3[1] = &TM__CavI8KpGjSIMhRRRT9cCkhA_0[2];
TM__CavI8KpGjSIMhRRRT9cCkhA_0[2].kind = 1;
TM__CavI8KpGjSIMhRRRT9cCkhA_0[2].offset = offsetof(tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A, contentTopic);
TM__CavI8KpGjSIMhRRRT9cCkhA_0[2].typ = (&NTI__JrFyJbYm9b5I4hJ9cWDqvfYA_);
TM__CavI8KpGjSIMhRRRT9cCkhA_0[2].name = "contentTopic";
TM__CavI8KpGjSIMhRRRT9cCkhA_2_3[2] = &TM__CavI8KpGjSIMhRRRT9cCkhA_0[3];
TM__CavI8KpGjSIMhRRRT9cCkhA_0[3].kind = 1;
TM__CavI8KpGjSIMhRRRT9cCkhA_0[3].offset = offsetof(tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A, version);
TM__CavI8KpGjSIMhRRRT9cCkhA_0[3].typ = (&NTI__JrFyJbYm9b5I4hJ9cWDqvfYA_);
TM__CavI8KpGjSIMhRRRT9cCkhA_0[3].name = "version";
TM__CavI8KpGjSIMhRRRT9cCkhA_0[0].len = 3; TM__CavI8KpGjSIMhRRRT9cCkhA_0[0].kind = 2; TM__CavI8KpGjSIMhRRRT9cCkhA_0[0].sons = &TM__CavI8KpGjSIMhRRRT9cCkhA_2_3[0];
NTI__snKUdUhXg9ahkzpl1ubVZ0A_.node = &TM__CavI8KpGjSIMhRRRT9cCkhA_0[0];
}

