/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/stdlib_base64.nim.c.o nimcache/release/chat2/stdlib_base64.nim.c */
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NIM_CHAR tyArray__2cWMSJoP9cqN4yIK0ILkQaQ[64];
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE NIM_CONST tyArray__2cWMSJoP9cqN4yIK0ILkQaQ cb64__Yyfw6lxoVbgtswIxGnGnUQ = {65,
66,
67,
68,
69,
70,
71,
72,
73,
74,
75,
76,
77,
78,
79,
80,
81,
82,
83,
84,
85,
86,
87,
88,
89,
90,
97,
98,
99,
100,
101,
102,
103,
104,
105,
106,
107,
108,
109,
110,
111,
112,
113,
114,
115,
116,
117,
118,
119,
120,
121,
122,
48,
49,
50,
51,
52,
53,
54,
55,
56,
57,
43,
47}
;
N_LIB_PRIVATE NIM_CONST tyArray__2cWMSJoP9cqN4yIK0ILkQaQ cb64safe__q0GCLBVULDDeEKBBmNHUGw = {65,
66,
67,
68,
69,
70,
71,
72,
73,
74,
75,
76,
77,
78,
79,
80,
81,
82,
83,
84,
85,
86,
87,
88,
89,
90,
97,
98,
99,
100,
101,
102,
103,
104,
105,
106,
107,
108,
109,
110,
111,
112,
113,
114,
115,
116,
117,
118,
119,
120,
121,
122,
48,
49,
50,
51,
52,
53,
54,
55,
56,
57,
45,
95}
;

#line 122 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/integerops.nim"
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res) {	NIM_BOOL result;	result = (NIM_BOOL)0;
#line 117 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/integerops.nim"
	{		NIM_BOOL T3_;
#line 117 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/integerops.nim"
		T3_ = (NIM_BOOL)0;
#line 117 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/integerops.nim"
		T3_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));		if (!(T3_)) goto LA4_;

#line 117 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/integerops.nim"
		T3_ = (b == ((NI) -1));		LA4_: ;
		if (!T3_) goto LA5_;

#line 118 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/integerops.nim"
		result = NIM_TRUE;	}
	goto LA1_;
	LA5_: ;
	{
#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/integerops.nim"

#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/integerops.nim"
		(*res) = (NI)(a / b);	}
	LA1_: ;
	return result;}

#line 167 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, encode__D4bDwZBUb9bAJslbVxAPmbg)(NimStringDesc* s_0, NIM_BOOL safe) {	NimStringDesc* result;	result = (NimStringDesc*)0;	{		NIM_CHAR* lookupTable;		NI TM__2L6xrRPz7CWDB3T1R9cDN5A_2;		NI TM__2L6xrRPz7CWDB3T1R9cDN5A_3;		NI TM__2L6xrRPz7CWDB3T1R9cDN5A_4;		NI inputIndexX60gensym57965010_;		NI outputIndexX60gensym57965011_;		NI inputEndsX60gensym57965012_;		NI TM__2L6xrRPz7CWDB3T1R9cDN5A_5;		NI TM__2L6xrRPz7CWDB3T1R9cDN5A_6;		NU32 nX60gensym57965013_;		NU32 bX60gensym57965014_;		NI paddingX60gensym57965018_;		NI TM__2L6xrRPz7CWDB3T1R9cDN5A_14;
#line 143 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 143 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
		{			if (!safe) goto LA4_;
			lookupTable = cb64safe__q0GCLBVULDDeEKBBmNHUGw;		}
		goto LA2_;
		LA4_: ;
		{			lookupTable = cb64__Yyfw6lxoVbgtswIxGnGnUQ;		}
		LA2_: ;

#line 87 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 87 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 82 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 82 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 87 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
		if (nimMulInt((s_0 ? s_0->Sup.len : 0), ((NI) 4), &TM__2L6xrRPz7CWDB3T1R9cDN5A_2)) { raiseOverflow(); };		if (((NI) 3) == 0){ raiseDivByZero(); }		if (nimDivInt((NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_2), ((NI) 3), &TM__2L6xrRPz7CWDB3T1R9cDN5A_3)) { raiseOverflow(); };		if (nimAddInt((NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_3), ((NI) 6), &TM__2L6xrRPz7CWDB3T1R9cDN5A_4)) { raiseOverflow(); };		if (((NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_4)) < ((NI) 0) || ((NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_4)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_4), ((NI) 0), ((NI) IL64(9223372036854775807))); }		result = setLengthStr(result, ((NI) ((NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_4))));
#line 90 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
		inputIndexX60gensym57965010_ = ((NI) 0);
#line 91 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
		outputIndexX60gensym57965011_ = ((NI) 0);
#line 92 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 92 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 92 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 92 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 92 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
		if (((NI) 3) == 0){ raiseDivByZero(); }		if (nimModInt((s_0 ? s_0->Sup.len : 0), ((NI) 3), &TM__2L6xrRPz7CWDB3T1R9cDN5A_5)) { raiseOverflow(); };		if (nimSubInt((s_0 ? s_0->Sup.len : 0), (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_5), &TM__2L6xrRPz7CWDB3T1R9cDN5A_6)) { raiseOverflow(); };		inputEndsX60gensym57965012_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_6);		nX60gensym57965013_ = (NU32)0;		bX60gensym57965014_ = (NU32)0;		{
#line 109 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			while (1) {				NI TM__2L6xrRPz7CWDB3T1R9cDN5A_7;				NI TM__2L6xrRPz7CWDB3T1R9cDN5A_8;				NI TM__2L6xrRPz7CWDB3T1R9cDN5A_9;				NI TM__2L6xrRPz7CWDB3T1R9cDN5A_10;				NI TM__2L6xrRPz7CWDB3T1R9cDN5A_11;				NI TM__2L6xrRPz7CWDB3T1R9cDN5A_12;				NI TM__2L6xrRPz7CWDB3T1R9cDN5A_13;
#line 109 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 109 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if (!!((inputIndexX60gensym57965010_ == inputEndsX60gensym57965012_))) goto LA8;

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if ((NU)(inputIndexX60gensym57965010_) >= (NU)(s_0 ? s_0->Sup.len : 0)){ raiseIndexError2(inputIndexX60gensym57965010_,(s_0 ? s_0->Sup.len : 0)-1); }				bX60gensym57965014_ = ((NU32) (((NU8)(s_0->data[inputIndexX60gensym57965010_]))));
#line 110 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 110 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				nX60gensym57965013_ = (NU32)((NU64)(bX60gensym57965014_) << (NU64)(((NI) 16)));
#line 110 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if (nimAddInt(inputIndexX60gensym57965010_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_7)) { raiseOverflow(); };				inputIndexX60gensym57965010_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_7);
#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if ((NU)(inputIndexX60gensym57965010_) >= (NU)(s_0 ? s_0->Sup.len : 0)){ raiseIndexError2(inputIndexX60gensym57965010_,(s_0 ? s_0->Sup.len : 0)-1); }				bX60gensym57965014_ = ((NU32) (((NU8)(s_0->data[inputIndexX60gensym57965010_]))));
#line 111 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 111 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 111 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				nX60gensym57965013_ = (NU32)(nX60gensym57965013_ | (NU32)((NU64)(bX60gensym57965014_) << (NU64)(((NI) 8))));
#line 111 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if (nimAddInt(inputIndexX60gensym57965010_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_8)) { raiseOverflow(); };				inputIndexX60gensym57965010_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_8);
#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if ((NU)(inputIndexX60gensym57965010_) >= (NU)(s_0 ? s_0->Sup.len : 0)){ raiseIndexError2(inputIndexX60gensym57965010_,(s_0 ? s_0->Sup.len : 0)-1); }				bX60gensym57965014_ = ((NU32) (((NU8)(s_0->data[inputIndexX60gensym57965010_]))));
#line 112 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 112 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 112 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				nX60gensym57965013_ = (NU32)(nX60gensym57965013_ | (NU32)((NU64)(bX60gensym57965014_) << (NU64)(((NI) 0))));
#line 112 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if (nimAddInt(inputIndexX60gensym57965010_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_9)) { raiseOverflow(); };				inputIndexX60gensym57965010_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_9);				if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 113 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if ((NU)((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 18))) & ((NU32) 63))) > (NU)(63)){ raiseIndexError2((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 18))) & ((NU32) 63)), 63); }				result->data[outputIndexX60gensym57965011_] = lookupTable[((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 18))) & ((NU32) 63)))- 0];
#line 113 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_10)) { raiseOverflow(); };				outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_10);				if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 114 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if ((NU)((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 12))) & ((NU32) 63))) > (NU)(63)){ raiseIndexError2((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 12))) & ((NU32) 63)), 63); }				result->data[outputIndexX60gensym57965011_] = lookupTable[((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 12))) & ((NU32) 63)))- 0];
#line 114 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_11)) { raiseOverflow(); };				outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_11);				if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 115 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if ((NU)((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 6))) & ((NU32) 63))) > (NU)(63)){ raiseIndexError2((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 6))) & ((NU32) 63)), 63); }				result->data[outputIndexX60gensym57965011_] = lookupTable[((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 6))) & ((NU32) 63)))- 0];
#line 115 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_12)) { raiseOverflow(); };				outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_12);				if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 116 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if ((NU)((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 0))) & ((NU32) 63))) > (NU)(63)){ raiseIndexError2((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 0))) & ((NU32) 63)), 63); }				result->data[outputIndexX60gensym57965011_] = lookupTable[((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 0))) & ((NU32) 63)))- 0];
#line 116 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
				if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_13)) { raiseOverflow(); };				outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_13);			} LA8: ;
		}

#line 118 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 118 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 118 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
		if (((NI) 3) == 0){ raiseDivByZero(); }		if (nimModInt((s_0 ? s_0->Sup.len : 0), ((NI) 3), &TM__2L6xrRPz7CWDB3T1R9cDN5A_14)) { raiseOverflow(); };		paddingX60gensym57965018_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_14);
#line 119 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
		{			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_15;			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_16;			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_17;			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_18;			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_19;
#line 119 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (!(paddingX60gensym57965018_ == ((NI) 1))) goto LA11_;

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if ((NU)(inputIndexX60gensym57965010_) >= (NU)(s_0 ? s_0->Sup.len : 0)){ raiseIndexError2(inputIndexX60gensym57965010_,(s_0 ? s_0->Sup.len : 0)-1); }			bX60gensym57965014_ = ((NU32) (((NU8)(s_0->data[inputIndexX60gensym57965010_]))));
#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			nX60gensym57965013_ = (NU32)((NU64)(bX60gensym57965014_) << (NU64)(((NI) 16)));
#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(inputIndexX60gensym57965010_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_15)) { raiseOverflow(); };			inputIndexX60gensym57965010_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_15);			if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 121 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if ((NU)((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 18))) & ((NU32) 63))) > (NU)(63)){ raiseIndexError2((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 18))) & ((NU32) 63)), 63); }			result->data[outputIndexX60gensym57965011_] = lookupTable[((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 18))) & ((NU32) 63)))- 0];
#line 121 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_16)) { raiseOverflow(); };			outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_16);			if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 122 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if ((NU)((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 12))) & ((NU32) 63))) > (NU)(63)){ raiseIndexError2((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 12))) & ((NU32) 63)), 63); }			result->data[outputIndexX60gensym57965011_] = lookupTable[((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 12))) & ((NU32) 63)))- 0];
#line 122 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_17)) { raiseOverflow(); };			outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_17);			if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 123 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			result->data[outputIndexX60gensym57965011_] = 61;
#line 123 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_18)) { raiseOverflow(); };			outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_18);			if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 124 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			result->data[outputIndexX60gensym57965011_] = 61;
#line 124 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_19)) { raiseOverflow(); };			outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_19);		}
		goto LA9_;
		LA11_: ;
		{			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_20;			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_21;			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_22;			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_23;			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_24;			NI TM__2L6xrRPz7CWDB3T1R9cDN5A_25;
#line 126 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (!(paddingX60gensym57965018_ == ((NI) 2))) goto LA14_;

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if ((NU)(inputIndexX60gensym57965010_) >= (NU)(s_0 ? s_0->Sup.len : 0)){ raiseIndexError2(inputIndexX60gensym57965010_,(s_0 ? s_0->Sup.len : 0)-1); }			bX60gensym57965014_ = ((NU32) (((NU8)(s_0->data[inputIndexX60gensym57965010_]))));
#line 127 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 127 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			nX60gensym57965013_ = (NU32)((NU64)(bX60gensym57965014_) << (NU64)(((NI) 16)));
#line 127 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(inputIndexX60gensym57965010_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_20)) { raiseOverflow(); };			inputIndexX60gensym57965010_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_20);
#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if ((NU)(inputIndexX60gensym57965010_) >= (NU)(s_0 ? s_0->Sup.len : 0)){ raiseIndexError2(inputIndexX60gensym57965010_,(s_0 ? s_0->Sup.len : 0)-1); }			bX60gensym57965014_ = ((NU32) (((NU8)(s_0->data[inputIndexX60gensym57965010_]))));
#line 128 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 128 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 128 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			nX60gensym57965013_ = (NU32)(nX60gensym57965013_ | (NU32)((NU64)(bX60gensym57965014_) << (NU64)(((NI) 8))));
#line 128 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(inputIndexX60gensym57965010_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_21)) { raiseOverflow(); };			inputIndexX60gensym57965010_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_21);			if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 129 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if ((NU)((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 18))) & ((NU32) 63))) > (NU)(63)){ raiseIndexError2((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 18))) & ((NU32) 63)), 63); }			result->data[outputIndexX60gensym57965011_] = lookupTable[((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 18))) & ((NU32) 63)))- 0];
#line 129 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_22)) { raiseOverflow(); };			outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_22);			if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 130 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if ((NU)((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 12))) & ((NU32) 63))) > (NU)(63)){ raiseIndexError2((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 12))) & ((NU32) 63)), 63); }			result->data[outputIndexX60gensym57965011_] = lookupTable[((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 12))) & ((NU32) 63)))- 0];
#line 130 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_23)) { raiseOverflow(); };			outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_23);			if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 102 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"

#line 131 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if ((NU)((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 6))) & ((NU32) 63))) > (NU)(63)){ raiseIndexError2((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 6))) & ((NU32) 63)), 63); }			result->data[outputIndexX60gensym57965011_] = lookupTable[((NU32)((NU32)((NU32)(nX60gensym57965013_) >> (NU64)(((NI) 6))) & ((NU32) 63)))- 0];
#line 131 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_24)) { raiseOverflow(); };			outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_24);			if ((NU)(outputIndexX60gensym57965011_) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(outputIndexX60gensym57965011_,(result ? result->Sup.len : 0)-1); }
#line 132 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			result->data[outputIndexX60gensym57965011_] = 61;
#line 132 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
			if (nimAddInt(outputIndexX60gensym57965011_, ((NI) 1), &TM__2L6xrRPz7CWDB3T1R9cDN5A_25)) { raiseOverflow(); };			outputIndexX60gensym57965011_ = (NI)(TM__2L6xrRPz7CWDB3T1R9cDN5A_25);		}
		goto LA9_;
		LA14_: ;
		LA9_: ;

#line 134 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/pure/base64.nim"
		if ((outputIndexX60gensym57965011_) < ((NI) 0) || (outputIndexX60gensym57965011_) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(outputIndexX60gensym57965011_, ((NI) 0), ((NI) IL64(9223372036854775807))); }		result = setLengthStr(result, ((NI) (outputIndexX60gensym57965011_)));	}
	return result;}
