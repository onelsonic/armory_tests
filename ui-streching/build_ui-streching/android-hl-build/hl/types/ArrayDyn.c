﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayObj.h>
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
extern hl_type t$_dyn;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase,bool*);
String hl_types_ArrayDyn_toString(hl__types__ArrayDyn);
#include <hl/types/ArrayDynIterator.h>
extern hl_type t$hl_types_ArrayDynIterator;
void hl_types_ArrayDynIterator_new(hl__types__ArrayDynIterator,hl__types__ArrayBase);
extern hl_type t$vrt_ef76930;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern hl_type t$_i32;
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayBytes_Float.h>
extern hl_type t$hl_types_ArrayBytes_Int;
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
extern hl_type t$hl_types_ArrayBytes_Float;
hl__types__ArrayBytes_Float hl_types_ArrayBase_allocF64(vbyte*,int);
extern hl_type t$hl_types_ArrayDyn;

void hl_types_ArrayDyn_new(hl__types__ArrayDyn r0) {
	hl__types__ArrayObj r1;
	bool r3;
	r1 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r1);
	r0->array = ((hl__types__ArrayBase)r1);
	r3 = true;
	r0->allowReinterpret = r3;
	return;
}

int hl_types_ArrayDyn_get_length(hl__types__ArrayDyn r0) {
	hl__types__ArrayBase r2;
	int r1;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	return r1;
}

vdynamic* hl_types_ArrayDyn_getDyn(hl__types__ArrayDyn r0,int r1) {
	hl__types__ArrayBase r3;
	vdynamic *r2;
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	r2 = ((vdynamic* (*)(hl__types__ArrayBase,int))r3->$type->vobj_proto[0])(r3,r1);
	return r2;
}

void hl_types_ArrayDyn_setDyn(hl__types__ArrayDyn r0,int r1,vdynamic* r2) {
	hl__types__ArrayBase r4;
	r4 = r0->array;
	if( r4 == NULL ) hl_null_access();
	((void (*)(hl__types__ArrayBase,int,vdynamic*))r4->$type->vobj_proto[1])(r4,r1,r2);
	return;
}

void hl_types_ArrayDyn_blit(hl__types__ArrayDyn r0,int r1,hl__types__ArrayAccess r2,int r3,int r4) {
	hl__types__ArrayBase r6;
	r6 = r0->array;
	if( r6 == NULL ) hl_null_access();
	((void (*)(hl__types__ArrayBase,int,hl__types__ArrayAccess,int,int))r6->$type->vobj_proto[2])(r6,r1,r2,r3,r4);
	return;
}

hl__types__ArrayDyn hl_types_ArrayDyn_concat(hl__types__ArrayDyn r0,hl__types__ArrayDyn r1) {
	bool *r17;
	hl__types__ArrayObj r15;
	hl_type *r9;
	bool r16;
	hl__types__ArrayBase r2, r3;
	hl__types__ArrayDyn r4;
	vdynamic *r14;
	varray *r8, *r10;
	int r5, r6, r7, r11, r12, r13;
	r2 = r0->array;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->array;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->length;
	if( r3 == NULL ) hl_null_access();
	r7 = r3->length;
	r6 = r5 + r7;
	r9 = &t$_dyn;
	r8 = hl_alloc_array(r9,r6);
	r10 = r8;
	r7 = 0;
	r11 = r5;
	label$a6944e8_6_13:
	if( r7 >= r11 ) goto label$a6944e8_6_21;
	r12 = r7;
	++r7;
	if( r2 == NULL ) hl_null_access();
	r14 = ((vdynamic* (*)(hl__types__ArrayBase,int))r2->$type->vobj_proto[0])(r2,r12);
	((vdynamic**)(r10 + 1))[r12] = r14;
	goto label$a6944e8_6_13;
	label$a6944e8_6_21:
	r7 = 0;
	if( r3 == NULL ) hl_null_access();
	r11 = r3->length;
	label$a6944e8_6_24:
	if( r7 >= r11 ) goto label$a6944e8_6_33;
	r12 = r7;
	++r7;
	if( r3 == NULL ) hl_null_access();
	r14 = ((vdynamic* (*)(hl__types__ArrayBase,int))r3->$type->vobj_proto[0])(r3,r12);
	r13 = r12 + r5;
	((vdynamic**)(r10 + 1))[r13] = r14;
	goto label$a6944e8_6_24;
	label$a6944e8_6_33:
	r15 = hl_types_ArrayObj_alloc(r10);
	r16 = true;
	r17 = &r16;
	r4 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r15),r17);
	return r4;
}

String hl_types_ArrayDyn_join(hl__types__ArrayDyn r0,String r1) {
	String r2;
	hl__types__ArrayBase r3;
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	r2 = ((String (*)(hl__types__ArrayBase,String))r3->$type->vobj_proto[12])(r3,r1);
	return r2;
}

vdynamic* hl_types_ArrayDyn_pop(hl__types__ArrayDyn r0) {
	hl__types__ArrayBase r2;
	vdynamic *r1;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r1 = ((vdynamic* (*)(hl__types__ArrayBase))r2->$type->vobj_proto[4])(r2);
	return r1;
}

int hl_types_ArrayDyn_push(hl__types__ArrayDyn r0,vdynamic* r1) {
	hl__types__ArrayBase r3;
	int r2;
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	r2 = ((int (*)(hl__types__ArrayBase,vdynamic*))r3->$type->vobj_proto[3])(r3,r1);
	return r2;
}

void hl_types_ArrayDyn_reverse(hl__types__ArrayDyn r0) {
	hl__types__ArrayBase r2;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	((void (*)(hl__types__ArrayBase))r2->$type->vobj_proto[13])(r2);
	return;
}

void hl_types_ArrayDyn_resize(hl__types__ArrayDyn r0,int r1) {
	hl__types__ArrayBase r3;
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	((void (*)(hl__types__ArrayBase,int))r3->$type->vobj_proto[14])(r3,r1);
	return;
}

vdynamic* hl_types_ArrayDyn_shift(hl__types__ArrayDyn r0) {
	hl__types__ArrayBase r2;
	vdynamic *r1;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r1 = ((vdynamic* (*)(hl__types__ArrayBase))r2->$type->vobj_proto[5])(r2);
	return r1;
}

hl__types__ArrayDyn hl_types_ArrayDyn_slice(hl__types__ArrayDyn r0,int r1,vdynamic* r2) {
	bool *r6;
	bool r5;
	hl__types__ArrayBase r4;
	hl__types__ArrayDyn r3;
	r4 = r0->array;
	if( r4 == NULL ) hl_null_access();
	r4 = ((hl__types__ArrayBase (*)(hl__types__ArrayBase,int,vdynamic*))r4->$type->vobj_proto[10])(r4,r1,r2);
	r5 = true;
	r6 = &r5;
	r3 = hl_types_ArrayDyn_alloc(r4,r6);
	return r3;
}

void hl_types_ArrayDyn_sort(hl__types__ArrayDyn r0,vclosure* r1) {
	hl__types__ArrayBase r3;
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	((void (*)(hl__types__ArrayBase,vclosure*))r3->$type->vobj_proto[9])(r3,r1);
	return;
}

hl__types__ArrayDyn hl_types_ArrayDyn_splice(hl__types__ArrayDyn r0,int r1,int r2) {
	bool *r6;
	bool r5;
	hl__types__ArrayBase r4;
	hl__types__ArrayDyn r3;
	r4 = r0->array;
	if( r4 == NULL ) hl_null_access();
	r4 = ((hl__types__ArrayBase (*)(hl__types__ArrayBase,int,int))r4->$type->vobj_proto[11])(r4,r1,r2);
	r5 = true;
	r6 = &r5;
	r3 = hl_types_ArrayDyn_alloc(r4,r6);
	return r3;
}

vbyte* hl_types_ArrayDyn___string(hl__types__ArrayDyn r0) {
	String r2;
	vbyte *r1;
	r2 = hl_types_ArrayDyn_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String hl_types_ArrayDyn_toString(hl__types__ArrayDyn r0) {
	String r1;
	hl__types__ArrayBase r2;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r1 = ((String (*)(hl__types__ArrayBase))r2->$type->vobj_proto[15])(r2);
	return r1;
}

void hl_types_ArrayDyn_unshift(hl__types__ArrayDyn r0,vdynamic* r1) {
	hl__types__ArrayBase r3;
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	((void (*)(hl__types__ArrayBase,vdynamic*))r3->$type->vobj_proto[6])(r3,r1);
	return;
}

void hl_types_ArrayDyn_insert(hl__types__ArrayDyn r0,int r1,vdynamic* r2) {
	hl__types__ArrayBase r4;
	r4 = r0->array;
	if( r4 == NULL ) hl_null_access();
	((void (*)(hl__types__ArrayBase,int,vdynamic*))r4->$type->vobj_proto[7])(r4,r1,r2);
	return;
}

bool hl_types_ArrayDyn_remove(hl__types__ArrayDyn r0,vdynamic* r1) {
	bool r2;
	hl__types__ArrayBase r3;
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	r2 = ((bool (*)(hl__types__ArrayBase,vdynamic*))r3->$type->vobj_proto[8])(r3,r1);
	return r2;
}

int hl_types_ArrayDyn_indexOf(hl__types__ArrayDyn r0,vdynamic* r1,vdynamic* r2) {
	hl__types__ArrayBase r5;
	vdynamic *r7;
	int r3, r4, r6;
	r3 = r2 ? r2->v.i : 0;
	r5 = r0->array;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->length;
	r5 = r0->array;
	label$a6944e8_21_5:
	if( r3 >= r4 ) goto label$a6944e8_21_13;
	if( r5 == NULL ) hl_null_access();
	r7 = ((vdynamic* (*)(hl__types__ArrayBase,int))r5->$type->vobj_proto[0])(r5,r3);
	{ int i = hl_dyn_compare((vdynamic*)r7,(vdynamic*)r1); if( i != 0 ) goto label$a6944e8_21_11; };
	return r3;
	label$a6944e8_21_11:
	++r3;
	goto label$a6944e8_21_5;
	label$a6944e8_21_13:
	r6 = -1;
	return r6;
}

int hl_types_ArrayDyn_lastIndexOf(hl__types__ArrayDyn r0,vdynamic* r1,vdynamic* r2) {
	hl__types__ArrayBase r4;
	vdynamic *r8;
	int r3, r5, r6, r7;
	r4 = r0->array;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	if( !r2 ) goto label$a6944e8_22_6;
	r5 = r2 ? r2->v.i : 0;
	goto label$a6944e8_22_8;
	label$a6944e8_22_6:
	r6 = 1;
	r5 = r3 - r6;
	label$a6944e8_22_8:
	if( r5 < r3 ) goto label$a6944e8_22_13;
	r7 = 1;
	r6 = r3 - r7;
	r5 = r6;
	goto label$a6944e8_22_17;
	label$a6944e8_22_13:
	r7 = 0;
	if( r5 >= r7 ) goto label$a6944e8_22_17;
	r6 = r5 + r3;
	r5 = r6;
	label$a6944e8_22_17:
	r7 = 0;
	if( r5 < r7 ) goto label$a6944e8_22_27;
	r4 = r0->array;
	if( r4 == NULL ) hl_null_access();
	r8 = ((vdynamic* (*)(hl__types__ArrayBase,int))r4->$type->vobj_proto[0])(r4,r5);
	{ int i = hl_dyn_compare((vdynamic*)r8,(vdynamic*)r1); if( i != 0 ) goto label$a6944e8_22_25; };
	return r5;
	label$a6944e8_22_25:
	--r5;
	goto label$a6944e8_22_17;
	label$a6944e8_22_27:
	r6 = -1;
	return r6;
}

hl__types__ArrayDyn hl_types_ArrayDyn_copy(hl__types__ArrayDyn r0) {
	bool *r13;
	hl__types__ArrayObj r11;
	hl_type *r5;
	bool r12;
	hl__types__ArrayBase r2;
	hl__types__ArrayDyn r10;
	vdynamic *r9;
	varray *r4, *r6;
	int r1, r3, r7, r8;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	r5 = &t$_dyn;
	r4 = hl_alloc_array(r5,r1);
	r6 = r4;
	r3 = 0;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->length;
	label$a6944e8_23_10:
	if( r3 >= r7 ) goto label$a6944e8_23_19;
	r8 = r3;
	++r3;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r9 = ((vdynamic* (*)(hl__types__ArrayBase,int))r2->$type->vobj_proto[0])(r2,r8);
	((vdynamic**)(r6 + 1))[r8] = r9;
	goto label$a6944e8_23_10;
	label$a6944e8_23_19:
	r11 = hl_types_ArrayObj_alloc(r6);
	r12 = true;
	r13 = &r12;
	r10 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r11),r13);
	return r10;
}

vvirtual* hl_types_ArrayDyn_iterator(hl__types__ArrayDyn r0) {
	vvirtual *r4;
	hl__types__ArrayBase r2;
	hl__types__ArrayDynIterator r1;
	r1 = (hl__types__ArrayDynIterator)hl_alloc_obj(&t$hl_types_ArrayDynIterator);
	r2 = r0->array;
	hl_types_ArrayDynIterator_new(r1,r2);
	r4 = hl_to_virtual(&t$vrt_ef76930,(vdynamic*)r1);
	return r4;
}

hl__types__ArrayDyn hl_types_ArrayDyn_map(hl__types__ArrayDyn r0,vclosure* r1) {
	bool *r14;
	hl__types__ArrayObj r12;
	hl_type *r6;
	bool r13;
	hl__types__ArrayBase r3;
	hl__types__ArrayDyn r11;
	vdynamic *r10;
	varray *r5, *r7;
	int r2, r4, r8, r9;
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	r6 = &t$_dyn;
	r5 = hl_alloc_array(r6,r2);
	r7 = r5;
	r4 = 0;
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	r8 = r3->length;
	label$a6944e8_25_10:
	if( r4 >= r8 ) goto label$a6944e8_25_21;
	r9 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r0->array;
	if( r3 == NULL ) hl_null_access();
	r10 = ((vdynamic* (*)(hl__types__ArrayBase,int))r3->$type->vobj_proto[0])(r3,r9);
	r10 = r1->hasValue ? ((vdynamic* (*)(vdynamic*,vdynamic*))r1->fun)((vdynamic*)r1->value,r10) : ((vdynamic* (*)(vdynamic*))r1->fun)(r10);
	((vdynamic**)(r7 + 1))[r9] = r10;
	goto label$a6944e8_25_10;
	label$a6944e8_25_21:
	r12 = hl_types_ArrayObj_alloc(r7);
	r13 = true;
	r14 = &r13;
	r11 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r12),r14);
	return r11;
}

hl__types__ArrayDyn hl_types_ArrayDyn_filter(hl__types__ArrayDyn r0,vclosure* r1) {
	bool *r12;
	hl__types__ArrayObj r2;
	bool r10;
	hl__types__ArrayBase r6;
	hl__types__ArrayDyn r11;
	vdynamic *r9;
	int r4, r5, r7, r8;
	r2 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r2);
	r4 = 0;
	r6 = r0->array;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->length;
	label$a6944e8_26_6:
	if( r4 >= r5 ) goto label$a6944e8_26_19;
	r7 = r4;
	++r4;
	r6 = r0->array;
	if( r6 == NULL ) hl_null_access();
	r9 = ((vdynamic* (*)(hl__types__ArrayBase,int))r6->$type->vobj_proto[0])(r6,r7);
	if( r1 == NULL ) hl_null_access();
	r10 = r1->hasValue ? ((bool (*)(vdynamic*,vdynamic*))r1->fun)((vdynamic*)r1->value,r9) : ((bool (*)(vdynamic*))r1->fun)(r9);
	if( !r10 ) goto label$a6944e8_26_18;
	if( r2 == NULL ) hl_null_access();
	r8 = hl_types_ArrayObj_push(r2,r9);
	label$a6944e8_26_18:
	goto label$a6944e8_26_6;
	label$a6944e8_26_19:
	r10 = true;
	r12 = &r10;
	r11 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r2),r12);
	return r11;
}

vdynamic* hl_types_ArrayDyn___get_field(hl__types__ArrayDyn r0,int r1) {
	hl__types__ArrayBase r4;
	vdynamic *r5;
	int r2, r3;
	r3 = -16280745;
	if( r1 != r3 ) goto label$a6944e8_27_7;
	r4 = r0->array;
	if( r4 == NULL ) hl_null_access();
	r2 = r4->length;
	r5 = hl_alloc_dynamic(&t$_i32);
	r5->v.i = r2;
	return r5;
	label$a6944e8_27_7:
	r5 = NULL;
	return r5;
}

vdynamic* hl_types_ArrayDyn___cast(hl__types__ArrayDyn r0,hl_type* r1) {
	hl_type *r3;
	bool r5;
	hl__types__ArrayBytes_Int r14;
	hl__types__ArrayBase r2;
	hl__types__ArrayBytes_Float r16;
	double r15;
	vdynamic *r4;
	int r8, r9, r10, r11, r12, r13;
	vbyte *r6, *r7;
	r2 = r0->array;
	r3 = r2 ? ((vdynamic*)r2)->t : &hlt_void;
	if( hl_same_type(r1,r3) != 0 ) {} else goto label$a6944e8_28_5;
	r2 = r0->array;
	return ((vdynamic*)r2);
	label$a6944e8_28_5:
	r5 = r0->allowReinterpret;
	if( r5 ) goto label$a6944e8_28_9;
	r4 = NULL;
	return r4;
	label$a6944e8_28_9:
	r3 = &t$hl_types_ArrayBytes_Int;
	if( hl_same_type(r1,r3) != 0 ) {} else goto label$a6944e8_28_43;
	r6 = NULL;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->length;
	r9 = 2;
	r8 = r8 << r9;
	r7 = hl_alloc_bytes(r8);
	r6 = r7;
	r8 = 0;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r9 = r2->length;
	label$a6944e8_28_23:
	if( r8 >= r9 ) goto label$a6944e8_28_35;
	r10 = r8;
	++r8;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r4 = ((vdynamic* (*)(hl__types__ArrayBase,int))r2->$type->vobj_proto[0])(r2,r10);
	r11 = (int)hl_dyn_casti(&r4,&t$_dyn,&t$_i32);
	r13 = 2;
	r13 = r10 << r13;
	*(int*)(r6 + r13) = r11;
	goto label$a6944e8_28_23;
	label$a6944e8_28_35:
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->length;
	r14 = hl_types_ArrayBase_allocI32(r6,r8);
	r0->array = ((hl__types__ArrayBase)r14);
	r5 = false;
	r0->allowReinterpret = r5;
	return ((vdynamic*)r14);
	label$a6944e8_28_43:
	r3 = &t$hl_types_ArrayBytes_Float;
	if( hl_same_type(r1,r3) != 0 ) {} else goto label$a6944e8_28_77;
	r6 = NULL;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->length;
	r9 = 3;
	r8 = r8 << r9;
	r7 = hl_alloc_bytes(r8);
	r6 = r7;
	r8 = 0;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r9 = r2->length;
	label$a6944e8_28_57:
	if( r8 >= r9 ) goto label$a6944e8_28_69;
	r10 = r8;
	++r8;
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r4 = ((vdynamic* (*)(hl__types__ArrayBase,int))r2->$type->vobj_proto[0])(r2,r10);
	r15 = (double)hl_dyn_castd(&r4,&t$_dyn);
	r12 = 3;
	r12 = r10 << r12;
	*(double*)(r6 + r12) = r15;
	goto label$a6944e8_28_57;
	label$a6944e8_28_69:
	r2 = r0->array;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->length;
	r16 = hl_types_ArrayBase_allocF64(r6,r8);
	r0->array = ((hl__types__ArrayBase)r16);
	r5 = false;
	r0->allowReinterpret = r5;
	return ((vdynamic*)r16);
	label$a6944e8_28_77:
	r4 = NULL;
	return r4;
}

int hl_types_ArrayDyn___compare(hl__types__ArrayDyn r0,vdynamic* r1) {
	hl__types__ArrayBase r2;
	int r3;
	r2 = r0->array;
	{ int i = hl_dyn_compare((vdynamic*)r1,(vdynamic*)r2); if( i != 0 ) goto label$a6944e8_29_4; };
	r3 = 0;
	return r3;
	label$a6944e8_29_4:
	r3 = hl_ptr_compare(((vdynamic*)r0),r1);
	return r3;
}

hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase r0,bool* r1) {
	bool r2;
	hl__types__ArrayDyn r3;
	if( r1 ) goto label$a6944e8_30_3;
	r2 = false;
	goto label$a6944e8_30_4;
	label$a6944e8_30_3:
	r2 = *r1;
	label$a6944e8_30_4:
	r3 = (hl__types__ArrayDyn)hl_alloc_obj(&t$hl_types_ArrayDyn);
	r3->array = r0;
	r3->allowReinterpret = r2;
	return r3;
}

