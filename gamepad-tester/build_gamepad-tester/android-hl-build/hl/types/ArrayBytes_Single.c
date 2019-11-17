﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/ArrayBytes_Single.h>
extern hl_type $t_f32;
extern hl_type $t_hl_types_ArrayBytes_Single;
void hl_types_ArrayBytes_Single_new(hl__types__ArrayBytes_Single);
#include <hl/natives.h>
#include <_std/String.h>
#include <_std/StringBuf.h>
extern hl_type $t_StringBuf;
void StringBuf_new(StringBuf);
void StringBuf_add(StringBuf,vdynamic*);
String StringBuf_toString(StringBuf);
void hl_types_ArrayBytes_Single___expand(hl__types__ArrayBytes_Single,int);
#include <haxe/io/Error.h>
extern hl_type $t_hl_types_ArrayAccess;
extern venum* $g_haxe_io_Error_OutsideBounds;
vbyte* hl__Bytes_Bytes_Impl__sub(vbyte*,int,int);
extern hl_type $t_i32;
extern hl_type $t_fun_56a2bdf;
extern hl_type $t_fun_1f6ee54;
void StringBuf_addChar(StringBuf,int);
int hl_types_ArrayBytes_Single_indexOf(hl__types__ArrayBytes_Single,float,vdynamic*);
#include <hl/types/BytesIterator_Single.h>
extern hl_type $t_hl_types_BytesIterator_Single;
void hl_types_BytesIterator_Single_new(hl__types__BytesIterator_Single,hl__types__ArrayBytes_Single);
extern hl_type $t_vrt_ffb231e;
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayDyn.h>
extern hl_type $t_hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase,bool*);
extern hl_type $t_dyn;
extern hl_type $t_fun_df79850;
extern String $s_Invalid_array_index_;
String String___alloc__(vbyte*,int);
String String___add__(String,String);

int hl_types_ArrayBytes_Single_sort__$2(vclosure* r0,double r1,double r2) {
	float r3, r4;
	int r5;
	r3 = (float)r1;
	r4 = (float)r2;
	r5 = r0->hasValue ? ((int (*)(vdynamic*,float,float))r0->fun)((vdynamic*)r0->value,r3,r4) : ((int (*)(float,float))r0->fun)(r3,r4);
	return r5;
}

int hl_types_ArrayBytes_Single_sort__$1(vclosure* r0,int r1,int r2) {
	float r3, r4;
	r3 = (float)r1;
	r4 = (float)r2;
	r1 = r0->hasValue ? ((int (*)(vdynamic*,float,float))r0->fun)((vdynamic*)r0->value,r3,r4) : ((int (*)(float,float))r0->fun)(r3,r4);
	return r1;
}

int hl_types_ArrayBytes_Single_sortDyn__$1(vclosure* r0,float r1,float r2) {
	vdynamic *r3, *r4;
	int r5;
	r3 = hl_alloc_dynamic(&$t_f32);
	r3->v.f = r1;
	r4 = hl_alloc_dynamic(&$t_f32);
	r4->v.f = r2;
	r5 = r0->hasValue ? ((int (*)(vdynamic*,vdynamic*,vdynamic*))r0->fun)((vdynamic*)r0->value,r3,r4) : ((int (*)(vdynamic*,vdynamic*))r0->fun)(r3,r4);
	return r5;
}

hl__types__ArrayBytes_Single hl_types_ArrayBytes_Single_concat(hl__types__ArrayBytes_Single r0,hl__types__ArrayBytes_Single r1) {
	hl__types__ArrayBytes_Single r2;
	vbyte *r6, *r7, *r8, *r9, *r10, *r13;
	int r4, r5, r11, r12, r14;
	r2 = (hl__types__ArrayBytes_Single)hl_alloc_obj(&$t_hl_types_ArrayBytes_Single);
	hl_types_ArrayBytes_Single_new(r2);
	r4 = r0->length;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r4 = r4 + r5;
	r2->size = r4;
	r2->length = r4;
	r6 = r0->bytes;
	r4 = r2->length;
	r5 = 2;
	r4 = r4 << r5;
	r7 = hl_alloc_bytes(r4);
	r2->bytes = r7;
	r8 = r0->bytes;
	r4 = r0->length;
	r5 = 2;
	r4 = r4 << r5;
	r9 = r2->bytes;
	r5 = 0;
	r10 = r0->bytes;
	r11 = 0;
	hl_bytes_blit(r9,r5,r10,r11,r4);
	r9 = r0->bytes;
	r10 = r2->bytes;
	r13 = r1->bytes;
	r11 = 0;
	r12 = r1->length;
	r14 = 2;
	r12 = r12 << r14;
	hl_bytes_blit(r10,r4,r13,r11,r12);
	return r2;
}

String hl_types_ArrayBytes_Single_join(hl__types__ArrayBytes_Single r0,String r1) {
	String r8;
	float r10;
	StringBuf r2;
	vdynamic *r11;
	vbyte *r9;
	int r4, r5, r6, r7;
	r2 = (StringBuf)hl_alloc_obj(&$t_StringBuf);
	StringBuf_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$7c04511_5_4:
	if( r4 >= r5 ) goto label$7c04511_5_20;
	r6 = r4;
	++r4;
	r7 = 0;
	if( r7 >= r6 ) goto label$7c04511_5_12;
	if( r2 == NULL ) hl_null_access();
	StringBuf_add(r2,((vdynamic*)r1));
	label$7c04511_5_12:
	r9 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r7 = 2;
	r7 = r6 << r7;
	r10 = *(float*)(r9 + r7);
	r11 = hl_alloc_dynamic(&$t_f32);
	r11->v.f = r10;
	StringBuf_add(r2,((vdynamic*)r11));
	goto label$7c04511_5_4;
	label$7c04511_5_20:
	if( r2 == NULL ) hl_null_access();
	r8 = StringBuf_toString(r2);
	return r8;
}

vdynamic* hl_types_ArrayBytes_Single_pop(hl__types__ArrayBytes_Single r0) {
	float r5;
	vdynamic *r3;
	vbyte *r4;
	int r1, r2, r6;
	r1 = r0->length;
	r2 = 0;
	if( r1 != r2 ) goto label$7c04511_6_5;
	r3 = NULL;
	return r3;
	label$7c04511_6_5:
	r1 = r0->length;
	--r1;
	r0->length = r1;
	r4 = r0->bytes;
	r1 = r0->length;
	r6 = 2;
	r6 = r1 << r6;
	r5 = *(float*)(r4 + r6);
	r3 = hl_alloc_dynamic(&$t_f32);
	r3->v.f = r5;
	return r3;
}

int hl_types_ArrayBytes_Single_push(hl__types__ArrayBytes_Single r0,float r1) {
	vbyte *r6;
	int r2, r4, r5;
	r2 = r0->length;
	r4 = r0->size;
	if( r4 != r2 ) goto label$7c04511_7_5;
	hl_types_ArrayBytes_Single___expand(r0,r2);
	goto label$7c04511_7_8;
	label$7c04511_7_5:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$7c04511_7_8:
	r6 = r0->bytes;
	r5 = 2;
	r5 = r2 << r5;
	*(float*)(r6 + r5) = r1;
	r4 = r0->length;
	return r4;
}

void hl_types_ArrayBytes_Single_reverse(hl__types__ArrayBytes_Single r0) {
	float r9, r12;
	vbyte *r7, *r8, *r11;
	int r1, r3, r4, r5, r6, r10;
	r1 = 0;
	r3 = r0->length;
	r4 = 1;
	r3 = r3 >> r4;
	label$7c04511_8_4:
	if( r1 >= r3 ) goto label$7c04511_8_29;
	r4 = r1;
	++r1;
	r5 = r0->length;
	r6 = 1;
	r5 = r5 - r6;
	r5 = r5 - r4;
	r7 = r0->bytes;
	r10 = 2;
	r10 = r4 << r10;
	r9 = *(float*)(r7 + r10);
	r8 = r0->bytes;
	r11 = r0->bytes;
	r10 = 2;
	r10 = r5 << r10;
	r12 = *(float*)(r11 + r10);
	r10 = 2;
	r10 = r4 << r10;
	*(float*)(r8 + r10) = r12;
	r8 = r0->bytes;
	r10 = 2;
	r10 = r5 << r10;
	*(float*)(r8 + r10) = r9;
	goto label$7c04511_8_4;
	label$7c04511_8_29:
	return;
}

vdynamic* hl_types_ArrayBytes_Single_shift(hl__types__ArrayBytes_Single r0) {
	float r7;
	vdynamic *r4;
	vbyte *r5, *r6, *r8, *r9, *r10;
	int r2, r3, r11, r12;
	r2 = r0->length;
	r3 = 0;
	if( r2 != r3 ) goto label$7c04511_9_5;
	r4 = NULL;
	return r4;
	label$7c04511_9_5:
	r5 = r0->bytes;
	r2 = 0;
	r3 = 2;
	r3 = r2 << r3;
	r7 = *(float*)(r5 + r3);
	r2 = r0->length;
	--r2;
	r0->length = r2;
	r6 = r0->bytes;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r2 = 1;
	r3 = 2;
	r2 = r2 << r3;
	r10 = r0->bytes;
	r3 = 0;
	r11 = r0->length;
	r12 = 2;
	r11 = r11 << r12;
	hl_bytes_blit(r6,r3,r8,r2,r11);
	r4 = hl_alloc_dynamic(&$t_f32);
	r4->v.f = r7;
	return r4;
}

void hl_types_ArrayBytes_Single_blit(hl__types__ArrayBytes_Single r0,int r1,hl__types__ArrayAccess r2,int r3,int r4) {
	venum *r9;
	hl__types__ArrayBytes_Single r5;
	vbyte *r10, *r11, *r12, *r13, *r15;
	int r7, r8, r14, r16, r17;
	r5 = (hl__types__ArrayBytes_Single)hl_dyn_castp(&r2,&$t_hl_types_ArrayAccess,&$t_hl_types_ArrayBytes_Single);
	r8 = 0;
	if( r1 < r8 ) goto label$7c04511_10_14;
	r8 = 0;
	if( r3 < r8 ) goto label$7c04511_10_14;
	r8 = 0;
	if( r4 < r8 ) goto label$7c04511_10_14;
	r7 = r1 + r4;
	r8 = r0->length;
	if( r8 < r7 ) goto label$7c04511_10_14;
	r7 = r3 + r4;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->length;
	if( r8 >= r7 ) goto label$7c04511_10_16;
	label$7c04511_10_14:
	r9 = (venum*)$g_haxe_io_Error_OutsideBounds;
	hl_throw((vdynamic*)r9);
	label$7c04511_10_16:
	r10 = r0->bytes;
	r11 = r0->bytes;
	r8 = 2;
	r7 = r1 << r8;
	r12 = r5->bytes;
	r13 = r0->bytes;
	r14 = 2;
	r8 = r3 << r14;
	r15 = r0->bytes;
	r17 = 2;
	r16 = r4 << r17;
	hl_bytes_blit(r10,r7,r12,r8,r16);
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_Single_slice(hl__types__ArrayBytes_Single r0,int r1,vdynamic* r2) {
	hl__types__ArrayBytes_Single r8;
	vbyte *r9, *r10, *r11, *r12;
	int r4, r5, r6, r7, r13, r14;
	r5 = 0;
	if( r1 >= r5 ) goto label$7c04511_11_9;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$7c04511_11_9;
	r4 = 0;
	r1 = r4;
	label$7c04511_11_9:
	if( r2 ) goto label$7c04511_11_12;
	r5 = r0->length;
	goto label$7c04511_11_20;
	label$7c04511_11_12:
	r5 = r2 ? r2->v.i : 0;
	r6 = 0;
	if( r5 >= r6 ) goto label$7c04511_11_17;
	r6 = r0->length;
	r5 = r5 + r6;
	label$7c04511_11_17:
	r6 = r0->length;
	if( r6 >= r5 ) goto label$7c04511_11_20;
	r5 = r0->length;
	label$7c04511_11_20:
	r5 = r5 - r1;
	r7 = 0;
	if( r5 >= r7 ) goto label$7c04511_11_26;
	r8 = (hl__types__ArrayBytes_Single)hl_alloc_obj(&$t_hl_types_ArrayBytes_Single);
	hl_types_ArrayBytes_Single_new(r8);
	return ((hl__types__ArrayBase)r8);
	label$7c04511_11_26:
	r8 = (hl__types__ArrayBytes_Single)hl_alloc_obj(&$t_hl_types_ArrayBytes_Single);
	hl_types_ArrayBytes_Single_new(r8);
	r8->size = r5;
	r8->length = r5;
	r9 = r0->bytes;
	r10 = r0->bytes;
	r7 = 2;
	r6 = r1 << r7;
	r11 = r0->bytes;
	r14 = 2;
	r13 = r5 << r14;
	r12 = hl__Bytes_Bytes_Impl__sub(r9,r6,r13);
	r8->bytes = r12;
	return ((hl__types__ArrayBase)r8);
}

void hl_types_ArrayBytes_Single_sort(hl__types__ArrayBytes_Single r0,vclosure* r1) {
	hl_type *r3, *r4;
	vclosure *r8, *r9;
	int r6, r7;
	vbyte *r5;
	r3 = &$t_f32;
	r4 = &$t_i32;
	if( hl_same_type(r3,r4) != 0 ) {} else goto label$7c04511_12_12;
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	if( r1 ) goto label$7c04511_12_9;
	r8 = NULL;
	goto label$7c04511_12_10;
	label$7c04511_12_9:
	r8 = hl_alloc_closure_ptr(&$t_fun_56a2bdf,hl_types_ArrayBytes_Single_sort__$1,r1);
	label$7c04511_12_10:
	hl_bsort_i32(r5,r6,r7,r8);
	goto label$7c04511_12_20;
	label$7c04511_12_12:
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	if( r1 ) goto label$7c04511_12_18;
	r9 = NULL;
	goto label$7c04511_12_19;
	label$7c04511_12_18:
	r9 = hl_alloc_closure_ptr(&$t_fun_1f6ee54,hl_types_ArrayBytes_Single_sort__$2,r1);
	label$7c04511_12_19:
	hl_bsort_f64(r5,r6,r7,r9);
	label$7c04511_12_20:
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_Single_splice(hl__types__ArrayBytes_Single r0,int r1,int r2) {
	hl__types__ArrayBytes_Single r6;
	vbyte *r7, *r8, *r9, *r10, *r13, *r14, *r15, *r17;
	int r4, r5, r11, r12, r16, r18, r19;
	r5 = 0;
	if( r2 >= r5 ) goto label$7c04511_13_5;
	r6 = (hl__types__ArrayBytes_Single)hl_alloc_obj(&$t_hl_types_ArrayBytes_Single);
	hl_types_ArrayBytes_Single_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$7c04511_13_5:
	r5 = 0;
	if( r1 >= r5 ) goto label$7c04511_13_14;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$7c04511_13_14;
	r4 = 0;
	r1 = r4;
	label$7c04511_13_14:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$7c04511_13_21;
	r4 = 0;
	r1 = r4;
	r4 = 0;
	r2 = r4;
	goto label$7c04511_13_31;
	label$7c04511_13_21:
	r4 = r1 + r2;
	r5 = r0->length;
	if( r5 >= r4 ) goto label$7c04511_13_31;
	r4 = r0->length;
	r4 = r4 - r1;
	r2 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$7c04511_13_31;
	r4 = 0;
	r2 = r4;
	label$7c04511_13_31:
	r5 = 0;
	if( r2 != r5 ) goto label$7c04511_13_36;
	r6 = (hl__types__ArrayBytes_Single)hl_alloc_obj(&$t_hl_types_ArrayBytes_Single);
	hl_types_ArrayBytes_Single_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$7c04511_13_36:
	r6 = (hl__types__ArrayBytes_Single)hl_alloc_obj(&$t_hl_types_ArrayBytes_Single);
	hl_types_ArrayBytes_Single_new(r6);
	r7 = r0->bytes;
	r8 = r0->bytes;
	r5 = 2;
	r4 = r1 << r5;
	r9 = r0->bytes;
	r12 = 2;
	r11 = r2 << r12;
	r10 = hl__Bytes_Bytes_Impl__sub(r7,r4,r11);
	r6->bytes = r10;
	r6->length = r2;
	r6->size = r2;
	r5 = r1 + r2;
	r10 = r0->bytes;
	r13 = r0->bytes;
	r12 = 2;
	r11 = r1 << r12;
	r14 = r0->bytes;
	r15 = r0->bytes;
	r16 = 2;
	r12 = r5 << r16;
	r17 = r0->bytes;
	r18 = r0->length;
	r18 = r18 - r5;
	r19 = 2;
	r18 = r18 << r19;
	hl_bytes_blit(r10,r11,r14,r12,r18);
	r16 = r0->length;
	r16 = r16 - r2;
	r0->length = r16;
	return ((hl__types__ArrayBase)r6);
}

String hl_types_ArrayBytes_Single_toString(hl__types__ArrayBytes_Single r0) {
	String r11;
	float r9;
	StringBuf r1;
	vdynamic *r10;
	vbyte *r8;
	int r3, r4, r5, r6, r7;
	r1 = (StringBuf)hl_alloc_obj(&$t_StringBuf);
	StringBuf_new(r1);
	r3 = 91;
	StringBuf_addChar(r1,r3);
	r3 = 0;
	r4 = r0->length;
	label$7c04511_14_6:
	if( r3 >= r4 ) goto label$7c04511_14_23;
	r5 = r3;
	++r3;
	r7 = 0;
	if( r7 >= r5 ) goto label$7c04511_14_15;
	if( r1 == NULL ) hl_null_access();
	r6 = 44;
	StringBuf_addChar(r1,r6);
	label$7c04511_14_15:
	r8 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r7 = 2;
	r7 = r5 << r7;
	r9 = *(float*)(r8 + r7);
	r10 = hl_alloc_dynamic(&$t_f32);
	r10->v.f = r9;
	StringBuf_add(r1,((vdynamic*)r10));
	goto label$7c04511_14_6;
	label$7c04511_14_23:
	if( r1 == NULL ) hl_null_access();
	r3 = 93;
	StringBuf_addChar(r1,r3);
	r11 = StringBuf_toString(r1);
	return r11;
}

void hl_types_ArrayBytes_Single_unshift(hl__types__ArrayBytes_Single r0,float r1) {
	vbyte *r5, *r6, *r7, *r8, *r9;
	int r3, r4, r10, r11, r12;
	r3 = r0->length;
	r4 = r0->size;
	if( r3 != r4 ) goto label$7c04511_15_6;
	r3 = r0->length;
	hl_types_ArrayBytes_Single___expand(r0,r3);
	goto label$7c04511_15_9;
	label$7c04511_15_6:
	r3 = r0->length;
	++r3;
	r0->length = r3;
	label$7c04511_15_9:
	r5 = r0->bytes;
	r6 = r0->bytes;
	r3 = 1;
	r4 = 2;
	r3 = r3 << r4;
	r7 = r0->bytes;
	r9 = r0->bytes;
	r10 = 0;
	r11 = r0->length;
	r12 = 1;
	r11 = r11 - r12;
	r12 = 2;
	r11 = r11 << r12;
	hl_bytes_blit(r5,r3,r9,r10,r11);
	r8 = r0->bytes;
	r4 = 0;
	r10 = 2;
	r10 = r4 << r10;
	*(float*)(r8 + r10) = r1;
	return;
}

void hl_types_ArrayBytes_Single_insert(hl__types__ArrayBytes_Single r0,int r1,float r2) {
	vbyte *r6, *r7, *r8, *r9, *r11, *r12;
	int r4, r5, r10, r13, r14, r15;
	r5 = 0;
	if( r1 >= r5 ) goto label$7c04511_16_10;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$7c04511_16_9;
	r4 = 0;
	r1 = r4;
	label$7c04511_16_9:
	goto label$7c04511_16_14;
	label$7c04511_16_10:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$7c04511_16_14;
	r4 = r0->length;
	r1 = r4;
	label$7c04511_16_14:
	r4 = r0->length;
	r5 = r0->size;
	if( r4 != r5 ) goto label$7c04511_16_20;
	r4 = r0->length;
	hl_types_ArrayBytes_Single___expand(r0,r4);
	goto label$7c04511_16_23;
	label$7c04511_16_20:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$7c04511_16_23:
	r6 = r0->bytes;
	r7 = r0->bytes;
	r5 = 1;
	r4 = r1 + r5;
	r5 = 2;
	r4 = r4 << r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r10 = 2;
	r5 = r1 << r10;
	r11 = r0->bytes;
	r14 = r0->length;
	r14 = r14 - r1;
	r15 = 1;
	r14 = r14 - r15;
	r15 = 2;
	r14 = r14 << r15;
	hl_bytes_blit(r6,r4,r8,r5,r14);
	r12 = r0->bytes;
	r13 = 2;
	r13 = r1 << r13;
	*(float*)(r12 + r13) = r2;
	return;
}

bool hl_types_ArrayBytes_Single_remove(hl__types__ArrayBytes_Single r0,float r1) {
	bool r7;
	vdynamic *r3;
	vbyte *r8, *r9, *r10, *r11, *r13;
	int r2, r5, r6, r12, r14, r15;
	r3 = NULL;
	r2 = hl_types_ArrayBytes_Single_indexOf(r0,r1,r3);
	r6 = 0;
	if( r2 >= r6 ) goto label$7c04511_17_6;
	r7 = false;
	return r7;
	label$7c04511_17_6:
	r5 = r0->length;
	--r5;
	r0->length = r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r6 = 2;
	r5 = r2 << r6;
	r10 = r0->bytes;
	r11 = r0->bytes;
	r12 = 1;
	r6 = r2 + r12;
	r12 = 2;
	r6 = r6 << r12;
	r13 = r0->bytes;
	r14 = r0->length;
	r14 = r14 - r2;
	r15 = 2;
	r14 = r14 << r15;
	hl_bytes_blit(r8,r5,r10,r6,r14);
	r7 = true;
	return r7;
}

int hl_types_ArrayBytes_Single_indexOf(hl__types__ArrayBytes_Single r0,float r1,vdynamic* r2) {
	float r8;
	vbyte *r7;
	int r3, r4, r5, r6, r9;
	if( r2 ) goto label$7c04511_18_3;
	r3 = 0;
	goto label$7c04511_18_4;
	label$7c04511_18_3:
	r3 = r2 ? r2->v.i : 0;
	label$7c04511_18_4:
	r5 = 0;
	if( r3 >= r5 ) goto label$7c04511_18_13;
	r5 = r0->length;
	r4 = r3 + r5;
	r3 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$7c04511_18_13;
	r4 = 0;
	r3 = r4;
	label$7c04511_18_13:
	r4 = r3;
	r5 = r0->length;
	label$7c04511_18_15:
	if( r4 >= r5 ) goto label$7c04511_18_26;
	r6 = r4;
	++r4;
	r7 = r0->bytes;
	r9 = 2;
	r9 = r6 << r9;
	r8 = *(float*)(r7 + r9);
	if( r8 != r1 ) goto label$7c04511_18_25;
	return r6;
	label$7c04511_18_25:
	goto label$7c04511_18_15;
	label$7c04511_18_26:
	r4 = -1;
	return r4;
}

int hl_types_ArrayBytes_Single_lastIndexOf(hl__types__ArrayBytes_Single r0,float r1,vdynamic* r2) {
	float r8;
	vbyte *r7;
	int r3, r4, r5, r6;
	r3 = r0->length;
	if( !r2 ) goto label$7c04511_19_4;
	r4 = r2 ? r2->v.i : 0;
	goto label$7c04511_19_6;
	label$7c04511_19_4:
	r5 = 1;
	r4 = r3 - r5;
	label$7c04511_19_6:
	if( r4 < r3 ) goto label$7c04511_19_11;
	r6 = 1;
	r5 = r3 - r6;
	r4 = r5;
	goto label$7c04511_19_15;
	label$7c04511_19_11:
	r6 = 0;
	if( r4 >= r6 ) goto label$7c04511_19_15;
	r5 = r4 + r3;
	r4 = r5;
	label$7c04511_19_15:
	r6 = 0;
	if( r4 < r6 ) goto label$7c04511_19_26;
	r7 = r0->bytes;
	r6 = 2;
	r6 = r4 << r6;
	r8 = *(float*)(r7 + r6);
	if( r8 != r1 ) goto label$7c04511_19_24;
	return r4;
	label$7c04511_19_24:
	--r4;
	goto label$7c04511_19_15;
	label$7c04511_19_26:
	r5 = -1;
	return r5;
}

hl__types__ArrayBytes_Single hl_types_ArrayBytes_Single_copy(hl__types__ArrayBytes_Single r0) {
	hl__types__ArrayBytes_Single r1;
	vbyte *r4, *r5, *r7, *r8, *r9;
	int r3, r6, r10, r11;
	r1 = (hl__types__ArrayBytes_Single)hl_alloc_obj(&$t_hl_types_ArrayBytes_Single);
	hl_types_ArrayBytes_Single_new(r1);
	r3 = r0->length;
	r1->size = r3;
	r1->length = r3;
	r4 = r0->bytes;
	r3 = r0->length;
	r6 = 2;
	r3 = r3 << r6;
	r5 = hl_alloc_bytes(r3);
	r1->bytes = r5;
	r7 = r0->bytes;
	r8 = r1->bytes;
	r3 = 0;
	r9 = r0->bytes;
	r6 = 0;
	r10 = r0->length;
	r11 = 2;
	r10 = r10 << r11;
	hl_bytes_blit(r8,r3,r9,r6,r10);
	return r1;
}

vvirtual* hl_types_ArrayBytes_Single_iterator(hl__types__ArrayBytes_Single r0) {
	vvirtual *r3;
	hl__types__BytesIterator_Single r1;
	r1 = (hl__types__BytesIterator_Single)hl_alloc_obj(&$t_hl_types_BytesIterator_Single);
	hl_types_BytesIterator_Single_new(r1,r0);
	r3 = hl_to_virtual(&$t_vrt_ffb231e,(vdynamic*)r1);
	return r3;
}

hl__types__ArrayDyn hl_types_ArrayBytes_Single_map(hl__types__ArrayBytes_Single r0,vclosure* r1) {
	bool *r14;
	hl__types__ArrayObj r2;
	bool r13;
	float r10;
	hl__types__ArrayDyn r12;
	vdynamic *r9;
	vbyte *r8;
	varray *r7;
	int r4, r5, r6, r11;
	r2 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r2);
	r4 = r0->length;
	r5 = 0;
	if( r5 >= r4 ) goto label$7c04511_22_9;
	r4 = r0->length;
	r5 = 1;
	r4 = r4 - r5;
	hl_types_ArrayObj___expand(r2,r4);
	label$7c04511_22_9:
	r4 = 0;
	r5 = r0->length;
	label$7c04511_22_11:
	if( r4 >= r5 ) goto label$7c04511_22_25;
	r6 = r4;
	++r4;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->array;
	r8 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r11 = 2;
	r11 = r6 << r11;
	r10 = *(float*)(r8 + r11);
	r9 = r1->hasValue ? ((vdynamic* (*)(vdynamic*,float))r1->fun)((vdynamic*)r1->value,r10) : ((vdynamic* (*)(float))r1->fun)(r10);
	((vdynamic**)(r7 + 1))[r6] = r9;
	goto label$7c04511_22_11;
	label$7c04511_22_25:
	r13 = true;
	r14 = &r13;
	r12 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r2),r14);
	return r12;
}

hl__types__ArrayBytes_Single hl_types_ArrayBytes_Single_filter(hl__types__ArrayBytes_Single r0,vclosure* r1) {
	bool r11;
	hl__types__ArrayBytes_Single r2;
	float r9;
	vbyte *r8;
	int r4, r5, r6, r7, r10;
	r2 = (hl__types__ArrayBytes_Single)hl_alloc_obj(&$t_hl_types_ArrayBytes_Single);
	hl_types_ArrayBytes_Single_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$7c04511_23_4:
	if( r4 >= r5 ) goto label$7c04511_23_18;
	r6 = r4;
	++r4;
	r8 = r0->bytes;
	r10 = 2;
	r10 = r6 << r10;
	r9 = *(float*)(r8 + r10);
	if( r1 == NULL ) hl_null_access();
	r11 = r1->hasValue ? ((bool (*)(vdynamic*,float))r1->fun)((vdynamic*)r1->value,r9) : ((bool (*)(float))r1->fun)(r9);
	if( !r11 ) goto label$7c04511_23_17;
	if( r2 == NULL ) hl_null_access();
	r7 = hl_types_ArrayBytes_Single_push(r2,r9);
	label$7c04511_23_17:
	goto label$7c04511_23_4;
	label$7c04511_23_18:
	return r2;
}

void hl_types_ArrayBytes_Single_resize(hl__types__ArrayBytes_Single r0,int r1) {
	vbyte *r5, *r6, *r7;
	int r3, r4, r8, r9;
	r3 = r0->length;
	if( r3 >= r1 ) goto label$7c04511_24_6;
	r4 = 1;
	r3 = r1 - r4;
	hl_types_ArrayBytes_Single___expand(r0,r3);
	goto label$7c04511_24_20;
	label$7c04511_24_6:
	r3 = r0->length;
	if( r1 >= r3 ) goto label$7c04511_24_20;
	r5 = r0->bytes;
	r6 = r0->bytes;
	r4 = 2;
	r3 = r1 << r4;
	r7 = r0->bytes;
	r8 = r0->length;
	r8 = r8 - r1;
	r9 = 2;
	r8 = r8 << r9;
	r9 = 0;
	hl_bytes_fill(r5,r3,r8,r9);
	r0->length = r1;
	label$7c04511_24_20:
	return;
}

vdynamic* hl_types_ArrayBytes_Single_getDyn(hl__types__ArrayBytes_Single r0,int r1) {
	bool r2;
	float r5;
	vdynamic *r6;
	vbyte *r4;
	int r3;
	r3 = r0->length;
	if( r1 >= r3 ) goto label$7c04511_25_4;
	r2 = false;
	goto label$7c04511_25_5;
	label$7c04511_25_4:
	r2 = true;
	label$7c04511_25_5:
	if( !r2 ) goto label$7c04511_25_10;
	r4 = r0->bytes;
	r5 = 0.;
	r6 = hl_alloc_dynamic(&$t_f32);
	r6->v.f = r5;
	return r6;
	label$7c04511_25_10:
	r4 = r0->bytes;
	r3 = 2;
	r3 = r1 << r3;
	r5 = *(float*)(r4 + r3);
	r6 = hl_alloc_dynamic(&$t_f32);
	r6->v.f = r5;
	return r6;
}

void hl_types_ArrayBytes_Single_setDyn(hl__types__ArrayBytes_Single r0,int r1,vdynamic* r2) {
	bool r4;
	float r7;
	vbyte *r6;
	int r5;
	r5 = r0->length;
	if( r1 >= r5 ) goto label$7c04511_26_4;
	r4 = false;
	goto label$7c04511_26_5;
	label$7c04511_26_4:
	r4 = true;
	label$7c04511_26_5:
	if( !r4 ) goto label$7c04511_26_7;
	hl_types_ArrayBytes_Single___expand(r0,r1);
	label$7c04511_26_7:
	r6 = r0->bytes;
	r7 = (float)hl_dyn_castf(&r2,&$t_dyn);
	r5 = 2;
	r5 = r1 << r5;
	*(float*)(r6 + r5) = r7;
	return;
}

int hl_types_ArrayBytes_Single_pushDyn(hl__types__ArrayBytes_Single r0,vdynamic* r1) {
	float r3;
	int r2;
	r3 = (float)hl_dyn_castf(&r1,&$t_dyn);
	r2 = hl_types_ArrayBytes_Single_push(r0,r3);
	return r2;
}

vdynamic* hl_types_ArrayBytes_Single_popDyn(hl__types__ArrayBytes_Single r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_Single_pop(r0);
	return ((vdynamic*)r1);
}

vdynamic* hl_types_ArrayBytes_Single_shiftDyn(hl__types__ArrayBytes_Single r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_Single_shift(r0);
	return ((vdynamic*)r1);
}

void hl_types_ArrayBytes_Single_unshiftDyn(hl__types__ArrayBytes_Single r0,vdynamic* r1) {
	float r3;
	r3 = (float)hl_dyn_castf(&r1,&$t_dyn);
	hl_types_ArrayBytes_Single_unshift(r0,r3);
	return;
}

void hl_types_ArrayBytes_Single_insertDyn(hl__types__ArrayBytes_Single r0,int r1,vdynamic* r2) {
	float r4;
	r4 = (float)hl_dyn_castf(&r2,&$t_dyn);
	hl_types_ArrayBytes_Single_insert(r0,r1,r4);
	return;
}

bool hl_types_ArrayBytes_Single_removeDyn(hl__types__ArrayBytes_Single r0,vdynamic* r1) {
	bool r2;
	float r3;
	r3 = (float)hl_dyn_castf(&r1,&$t_dyn);
	r2 = hl_types_ArrayBytes_Single_remove(r0,r3);
	return r2;
}

void hl_types_ArrayBytes_Single_sortDyn(hl__types__ArrayBytes_Single r0,vclosure* r1) {
	vclosure *r3;
	if( r1 ) goto label$7c04511_33_3;
	r3 = NULL;
	goto label$7c04511_33_4;
	label$7c04511_33_3:
	r3 = hl_alloc_closure_ptr(&$t_fun_df79850,hl_types_ArrayBytes_Single_sortDyn__$1,r1);
	label$7c04511_33_4:
	hl_types_ArrayBytes_Single_sort(r0,r3);
	return;
}

void hl_types_ArrayBytes_Single___expand(hl__types__ArrayBytes_Single r0,int r1) {
	String r5, r8;
	int *r6;
	vbyte *r7, *r11, *r12, *r13, *r14;
	int r3, r4, r9, r10, r15, r16;
	r4 = 0;
	if( r1 >= r4 ) goto label$7c04511_34_9;
	r5 = (String)$s_Invalid_array_index_;
	r3 = r1;
	r6 = &r3;
	r7 = hl_itos(r3,r6);
	r8 = String___alloc__(r7,r3);
	r5 = String___add__(r5,r8);
	hl_throw((vdynamic*)r5);
	label$7c04511_34_9:
	r4 = 1;
	r3 = r1 + r4;
	r9 = r0->size;
	if( r9 >= r3 ) goto label$7c04511_34_40;
	r4 = r0->size;
	r9 = 3;
	r4 = r4 * r9;
	r9 = 1;
	r4 = r4 >> r9;
	if( r4 >= r3 ) goto label$7c04511_34_20;
	r4 = r3;
	label$7c04511_34_20:
	r7 = r0->bytes;
	r10 = 2;
	r9 = r4 << r10;
	r11 = hl_alloc_bytes(r9);
	r12 = r0->bytes;
	r9 = r0->length;
	r10 = 2;
	r9 = r9 << r10;
	r10 = 0;
	r14 = r0->bytes;
	r15 = 0;
	hl_bytes_blit(r11,r10,r14,r15,r9);
	r13 = r0->bytes;
	r16 = 2;
	r15 = r4 << r16;
	r15 = r15 - r9;
	r16 = 0;
	hl_bytes_fill(r11,r9,r15,r16);
	r0->bytes = r11;
	r0->size = r4;
	label$7c04511_34_40:
	r0->length = r3;
	return;
}

