/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
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
#undef powerpc
#undef unix
typedef struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tyTuple_UpiOGlu5Ux6DLM73wSrdpg tyTuple_UpiOGlu5Ux6DLM73wSrdpg;
typedef struct tyTuple_5L3fCt9bX0gyEcO30ervPLw tyTuple_5L3fCt9bX0gyEcO30ervPLw;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
typedef struct tySequence_4eQHGndY6XBYpFOH09apV8Q tySequence_4eQHGndY6XBYpFOH09apV8Q;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tyTuple_UV3llMMYFckfui8YMBuUZA tyTuple_UV3llMMYFckfui8YMBuUZA;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU8 tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ;
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg;
struct tyTuple_UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef tyTuple_UpiOGlu5Ux6DLM73wSrdpg tyArray_qZhGNNJ69c1k4POIQ9apOotg[21];
typedef NU8 tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tySet_tyEnum_TInfoOSProp_thetQwB9agpeQ13qFmAcWhg;
struct tyTuple_5L3fCt9bX0gyEcO30ervPLw {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
tySet_tyEnum_TInfoOSProp_thetQwB9agpeQ13qFmAcWhg Field12;
};
typedef tyTuple_5L3fCt9bX0gyEcO30ervPLw tyArray_kpCg3iRCi52ls5qmpTQ6jw[27];
typedef NU8 tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ;
typedef NU8 tyEnum_TInfoOSProp_thetQwB9agpeQ13qFmAcWhg;
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw {
  RootObj Sup;
NI counter;
tySequence_4eQHGndY6XBYpFOH09apV8Q* data;
tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyTuple_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  tyTuple_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_UpH3CWy69aOHB2xkQBDirlg_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw*, nstnewStringTable)(tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ)(NimStringDesc* symbol, NimStringDesc* value);
N_LIB_PRIVATE N_NIMCALL(void, nstPut)(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key, NimStringDesc* val);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDefined_BNPf2mtM9a7JF7UKiCAngvg)(NimStringDesc* symbol);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsthasKey)(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc**, nstTake)(tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, lookupSymbol_P9buDVDzBybAj9b6sfnhhrtw)(NimStringDesc* symbol);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* gSymbols_tS4f2TwBfIz6zIuFAktH6g;
extern TNimType NTI_pkhT5bYRU9ayIZ9cBuuCx4Xw_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag;
extern tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ;
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_3, "nimrod", 6);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_4, "true", 4);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_5, "nimhygiene", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_6, "niminheritable", 14);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_7, "nimmixin", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_8, "nimeffects", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_9, "nimbabel", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_10, "nimcomputedgoto", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_11, "nimunion", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_12, "nimnewshared", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_13, "nimrequiresnimframe", 19);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_14, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_15, "nimalias", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_16, "nimlocks", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_17, "nimnode", 7);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_18, "nimnomagic64", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_19, "nimvarargstyped", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_20, "nimtypedescfixed", 16);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_21, "nimKnowsNimvm", 13);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_22, "nimArrIdx", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_23, "nimImmediateDeprecated", 22);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_24, "nimNewShiftOps", 14);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_25, "nimDistros", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_26, "nimHasCppDefine", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_27, "nimGenericInOutFlags", 20);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_28, "nimNoArrayToCstringConversion", 29);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_29, "nimNewRoof", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_30, "nimHasRunnableExamples", 22);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_31, "nimNewDot", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_32, "nimHasNilChecks", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_33, "false", 5);
extern NIM_CONST tyArray_qZhGNNJ69c1k4POIQ9apOotg CPU_uYXopJX8pM87pQDCtmgWfQ;
extern NIM_CONST tyArray_kpCg3iRCi52ls5qmpTQ6jw OS_Jx0qy9c9bSo4fGkMxUfUaAaw;
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_34, "x86", 3);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_35, "itanium", 7);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_36, "x8664", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_37, "posix", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_38, "unix", 4);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_39, "linux", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_40, "bsd", 3);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_41, "emulatedthreadvars", 18);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_42, "msdos", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_43, "mswindows", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_44, "win32", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_45, "macintosh", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_46, "sunos", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_47, "littleendian", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_48, "bigendian", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_49, "cpu8", 4);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_50, "cpu16", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_51, "cpu32", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_52, "cpu64", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_53, "nimrawsetjmp", 12);
static N_NIMCALL(void, TM_UpH3CWy69aOHB2xkQBDirlg_2)(void) {
	nimGCvisit((void*)gSymbols_tS4f2TwBfIz6zIuFAktH6g, 0);
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NIMCALL(void, defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ)(NimStringDesc* symbol, NimStringDesc* value) {
	nstPut(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol, value);
}

N_LIB_PRIVATE N_NIMCALL(void, initDefines_O9ckEyGFpDSawDK9aVPhf2MA)(void) {
	asgnRef((void**) (&gSymbols_tS4f2TwBfIz6zIuFAktH6g), nstnewStringTable(((tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 2)));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_5), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_6), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_7), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_8), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_9), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_10), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_11), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_12), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_13), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_14), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_15), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_16), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_17), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_18), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_19), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_20), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_21), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_22), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_23), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_25), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_26), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_27), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_28), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_29), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_30), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_31), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
	defineSymbol_DT9a7sm7XF3GNutC9by7wzRQ(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_32), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4));
}

N_LIB_PRIVATE N_NIMCALL(void, undefSymbol_PImcc9cZdzO4H8cZYSjcIYg)(NimStringDesc* symbol) {
	nstPut(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_33));
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDefined_BNPf2mtM9a7JF7UKiCAngvg)(NimStringDesc* symbol) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		NimStringDesc** T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = nsthasKey(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol);
		if (!T3_) goto LA4_;
		T6_ = (NimStringDesc**)0;
		T6_ = nstTake(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol);
		result = !(eqStrings((*T6_), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_33)));
	}
	goto LA1_;
	LA4_: ;
	{
		NI T8_;
		T8_ = (NI)0;
		T8_ = nsuCmpIgnoreStyle(symbol, CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field0);
		if (!(T8_ == ((NI) 0))) goto LA9_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA9_: ;
	{
		NI T12_;
		T12_ = (NI)0;
		T12_ = nsuCmpIgnoreStyle(symbol, OS_Jx0qy9c9bSo4fGkMxUfUaAaw[(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)- 1].Field0);
		if (!(T12_ == ((NI) 0))) goto LA13_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA13_: ;
	{
		NimStringDesc* T16_;
		T16_ = (NimStringDesc*)0;
		T16_ = nsuNormalize(symbol);
		switch (hashString(T16_) & 31) {
		case 0: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_44))) goto LA25_;
break;
		case 1: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_43))) goto LA25_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_53))) goto LA34_;
break;
		case 2: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_51))) goto LA32_;
break;
		case 3: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_42))) goto LA24_;
break;
		case 6: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_40))) goto LA22_;
break;
		case 13: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_46))) goto LA27_;
break;
		case 15: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_34))) goto LA17_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_35))) goto LA18_;
break;
		case 19: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_38))) goto LA20_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_41))) goto LA23_;
break;
		case 20: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_48))) goto LA29_;
break;
		case 22: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_49))) goto LA30_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_50))) goto LA31_;
break;
		case 23: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_36))) goto LA19_;
break;
		case 25: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_52))) goto LA33_;
break;
		case 27: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_47))) goto LA28_;
break;
		case 30: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_37))) goto LA20_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_39))) goto LA21_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_45))) goto LA26_;
break;
		}
		goto LA35_;
		LA17_: ;
		{
			result = (targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag == ((tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) 1));
		}
		goto LA36_;
		LA18_: ;
		{
			result = (targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag == ((tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) 9));
		}
		goto LA36_;
		LA19_: ;
		{
			result = (targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag == ((tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) 10));
		}
		goto LA36_;
		LA20_: ;
		{
			result = ((15925232 &(1U<<((NU)(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA36_;
		LA21_: ;
		{
			result = ((4194320 &(1U<<((NU)(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA36_;
		LA22_: ;
		{
			result = ((7680 &(1U<<((NU)(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA36_;
		LA23_: ;
		{
			result = ((OS_Jx0qy9c9bSo4fGkMxUfUaAaw[(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)- 1].Field12 &(1U<<((NU)(((tyEnum_TInfoOSProp_thetQwB9agpeQ13qFmAcWhg) 3))&7U)))!=0);
		}
		goto LA36_;
		LA24_: ;
		{
			result = (targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ == ((tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) 1));
		}
		goto LA36_;
		LA25_: ;
		{
			result = (targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ == ((tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) 2));
		}
		goto LA36_;
		LA26_: ;
		{
			result = ((1572864 &(1U<<((NU)(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA36_;
		LA27_: ;
		{
			result = (targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ == ((tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) 7));
		}
		goto LA36_;
		LA28_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field2 == ((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0));
		}
		goto LA36_;
		LA29_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field2 == ((tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1));
		}
		goto LA36_;
		LA30_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 8));
		}
		goto LA36_;
		LA31_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 16));
		}
		goto LA36_;
		LA32_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 32));
		}
		goto LA36_;
		LA33_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 64));
		}
		goto LA36_;
		LA34_: ;
		{
			result = ((1056384 &(1U<<((NU)(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA36_;
		LA35_: ;
		{
		}
		LA36_: ;
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDefined_rrIlGPFUdgeaN36zhjolNA)(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* symbol) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = isDefined_BNPf2mtM9a7JF7UKiCAngvg((*symbol).s);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, lookupSymbol_P9buDVDzBybAj9b6sfnhhrtw)(NimStringDesc* symbol) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		NimStringDesc** T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = isDefined_BNPf2mtM9a7JF7UKiCAngvg(symbol);
		if (!T3_) goto LA4_;
		T6_ = (NimStringDesc**)0;
		T6_ = nstTake(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol);
		result = copyString((*T6_));
	}
	goto LA1_;
	LA4_: ;
	{
		result = copyString(NIM_NIL);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, lookupSymbol_nkM7rGGDtF7m9cAXTVU51ig)(tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* symbol) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = lookupSymbol_P9buDVDzBybAj9b6sfnhhrtw((*symbol).s);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit000)(void) {
nimRegisterGlobalMarker(TM_UpH3CWy69aOHB2xkQBDirlg_2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit000)(void) {
}
