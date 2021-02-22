/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@swaku@sv2@snode@smessage_store@smessage_store.nim.c.o nimcache/release/chat2/@m..@s..@swaku@sv2@snode@smessage_store@smessage_store.nim.c */
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
typedef struct tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA;
typedef struct tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ;
typedef struct tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A;
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ tySequence__6H5Oh5UUvVCLiakt9aTwtUQ;
typedef struct tyObject_Result__WyXya2I9aOi6nTLz9crZs09bA tyObject_Result__WyXya2I9aOi6nTLz9crZs09bA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct RootObj RootObj;
typedef struct tyObject_MDigest__law9ct65KplMYBvtmjCQxbw tyObject_MDigest__law9ct65KplMYBvtmjCQxbw;
struct tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A {tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* payload;
NU32 contentTopic;
NU32 version;
};
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NU64 timestamp, tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A msg, void* ClE_0);
void* ClE_0;
} tyProc__c6k8LPV9ahjvDq4WHnknTfQ;
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
struct RootObj {TNimType* m_type;};
struct tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA {  RootObj Sup;};
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
struct tyObject_MDigest__law9ct65KplMYBvtmjCQxbw {tyArray__vEOa9c5qaE9ajWxR5R4zwfQg data;
};
struct tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ {tyObject_MDigest__law9ct65KplMYBvtmjCQxbw digest;
NF receivedTime;
};
struct tyObject_Result__WyXya2I9aOi6nTLz9crZs09bA {NIM_BOOL o;
union{
struct {NimStringDesc* e;
} _o_1;
};
};
struct tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA {NIM_BOOL o;
union{
struct {NimStringDesc* e;
} _o_1;
struct {NIM_BOOL v;
} _o_2;
};
};
struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ {  TGenericSeq Sup;  NU8 data[SEQ_DECL_SIZE];};N_LIB_PRIVATE N_NIMCALL(void, put__eAW44lTufVc5d4f1Uy9bl9bg)(tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA* db, tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ* cursor, tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A message, tyObject_Result__WyXya2I9aOi6nTLz9crZs09bA* Result);
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void, getAll__0UCN9b9bk27w19bOkAN56rAEg)(tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA* db, tyProc__c6k8LPV9ahjvDq4WHnknTfQ onData, tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA* Result);
static N_NIMCALL(void, Marker_tyRef__bvxr3PSY2I1MO2BtoJ2ytw)(void* p, NI op);
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTI__bg6yGWOWyOtBXK9b9b6blzKA_;
N_LIB_PRIVATE TNimType NTI__bvxr3PSY2I1MO2BtoJ2ytw_;
extern TNimType* nimTypeRoot;

#line 18 "/home/runner/work/nim-waku/nim-waku/waku/v2/node/message_store/message_store.nim"
N_LIB_PRIVATE N_NIMCALL(void, put__eAW44lTufVc5d4f1Uy9bl9bg)(tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA* db, tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ* cursor, tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A message, tyObject_Result__WyXya2I9aOi6nTLz9crZs09bA* Result) {	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);	break;
	case NIM_TRUE:
	break;
	} 
	(*Result).o = 0;}

#line 19 "/home/runner/work/nim-waku/nim-waku/waku/v2/node/message_store/message_store.nim"
N_LIB_PRIVATE N_NIMCALL(void, getAll__0UCN9b9bk27w19bOkAN56rAEg)(tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA* db, tyProc__c6k8LPV9ahjvDq4WHnknTfQ onData, tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA* Result) {	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);	break;
	case NIM_TRUE:
	(*Result)._o_2.v = 0;	break;
	} 
	(*Result).o = 0;}
static N_NIMCALL(void, Marker_tyRef__bvxr3PSY2I1MO2BtoJ2ytw)(void* p, NI op) {
	tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA* a;
	a = (tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA*)p;
}
N_LIB_PRIVATE N_NIMCALL(void, waku_message_storeDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode TM__WcMcrCOPz63qL9bfWqFIm5w_0[1];NTI__bg6yGWOWyOtBXK9b9b6blzKA_.size = sizeof(tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA);
NTI__bg6yGWOWyOtBXK9b9b6blzKA_.kind = 17;
NTI__bg6yGWOWyOtBXK9b9b6blzKA_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
NTI__bg6yGWOWyOtBXK9b9b6blzKA_.flags = 1;
NTI__bg6yGWOWyOtBXK9b9b6blzKA_.name = "MessageStore:ObjectType";
NTI__bg6yGWOWyOtBXK9b9b6blzKA_.nextType = nimTypeRoot; nimTypeRoot=&NTI__bg6yGWOWyOtBXK9b9b6blzKA_;
TM__WcMcrCOPz63qL9bfWqFIm5w_0[0].len = 0; TM__WcMcrCOPz63qL9bfWqFIm5w_0[0].kind = 2;
NTI__bg6yGWOWyOtBXK9b9b6blzKA_.node = &TM__WcMcrCOPz63qL9bfWqFIm5w_0[0];
NTI__bvxr3PSY2I1MO2BtoJ2ytw_.size = sizeof(tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA*);
NTI__bvxr3PSY2I1MO2BtoJ2ytw_.kind = 22;
NTI__bvxr3PSY2I1MO2BtoJ2ytw_.base = (&NTI__bg6yGWOWyOtBXK9b9b6blzKA_);
NTI__bvxr3PSY2I1MO2BtoJ2ytw_.name = "MessageStore";
NTI__bvxr3PSY2I1MO2BtoJ2ytw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__bvxr3PSY2I1MO2BtoJ2ytw_;
NTI__bvxr3PSY2I1MO2BtoJ2ytw_.marker = Marker_tyRef__bvxr3PSY2I1MO2BtoJ2ytw;
}

