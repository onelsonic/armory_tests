﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/input/Pen.h>
extern kha__input__$Pen g$_kha_input_Pen;
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$_dyn;

void kha_input_Pen_new(kha__input__Pen r0) {
	kha__input__$Pen r1;
	r1 = (kha__input__$Pen)g$_kha_input_Pen;
	r1->instance = r0;
	return;
}

void kha_input_Pen_sendDownEvent(kha__input__Pen r0,int r1,int r2,int r3,double r4) {
	hl__types__ArrayObj r6;
	vclosure *r11;
	vdynamic *r9;
	varray *r10;
	int r7, r8;
	r6 = r0->windowDownListeners;
	if( !r6 ) goto label$5e97cd2_2_27;
	r7 = 0;
	r6 = r0->windowDownListeners;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r8) ) goto label$5e97cd2_2_9;
	r6 = NULL;
	goto label$5e97cd2_2_12;
	label$5e97cd2_2_9:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r1];
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r9,&t$_dyn,&t$hl_types_ArrayObj);
	label$5e97cd2_2_12:
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( r7 >= r8 ) goto label$5e97cd2_2_27;
	r8 = r6->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$5e97cd2_2_20;
	r11 = NULL;
	goto label$5e97cd2_2_23;
	label$5e97cd2_2_20:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r7];
	r11 = (vclosure*)r9;
	label$5e97cd2_2_23:
	++r7;
	if( r11 == NULL ) hl_null_access();
	r11->hasValue ? ((void (*)(vdynamic*,int,int,double))r11->fun)((vdynamic*)r11->value,r2,r3,r4) : ((void (*)(int,int,double))r11->fun)(r2,r3,r4);
	goto label$5e97cd2_2_12;
	label$5e97cd2_2_27:
	return;
}

void kha_input_Pen_sendUpEvent(kha__input__Pen r0,int r1,int r2,int r3,double r4) {
	hl__types__ArrayObj r6;
	vclosure *r11;
	vdynamic *r9;
	varray *r10;
	int r7, r8;
	r6 = r0->windowUpListeners;
	if( !r6 ) goto label$5e97cd2_3_27;
	r7 = 0;
	r6 = r0->windowUpListeners;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r8) ) goto label$5e97cd2_3_9;
	r6 = NULL;
	goto label$5e97cd2_3_12;
	label$5e97cd2_3_9:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r1];
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r9,&t$_dyn,&t$hl_types_ArrayObj);
	label$5e97cd2_3_12:
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( r7 >= r8 ) goto label$5e97cd2_3_27;
	r8 = r6->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$5e97cd2_3_20;
	r11 = NULL;
	goto label$5e97cd2_3_23;
	label$5e97cd2_3_20:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r7];
	r11 = (vclosure*)r9;
	label$5e97cd2_3_23:
	++r7;
	if( r11 == NULL ) hl_null_access();
	r11->hasValue ? ((void (*)(vdynamic*,int,int,double))r11->fun)((vdynamic*)r11->value,r2,r3,r4) : ((void (*)(int,int,double))r11->fun)(r2,r3,r4);
	goto label$5e97cd2_3_12;
	label$5e97cd2_3_27:
	return;
}

void kha_input_Pen_sendMoveEvent(kha__input__Pen r0,int r1,int r2,int r3,double r4) {
	hl__types__ArrayObj r6;
	vclosure *r11;
	vdynamic *r9;
	varray *r10;
	int r7, r8;
	r6 = r0->windowMoveListeners;
	if( !r6 ) goto label$5e97cd2_4_27;
	r7 = 0;
	r6 = r0->windowMoveListeners;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r8) ) goto label$5e97cd2_4_9;
	r6 = NULL;
	goto label$5e97cd2_4_12;
	label$5e97cd2_4_9:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r1];
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r9,&t$_dyn,&t$hl_types_ArrayObj);
	label$5e97cd2_4_12:
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( r7 >= r8 ) goto label$5e97cd2_4_27;
	r8 = r6->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$5e97cd2_4_20;
	r11 = NULL;
	goto label$5e97cd2_4_23;
	label$5e97cd2_4_20:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r7];
	r11 = (vclosure*)r9;
	label$5e97cd2_4_23:
	++r7;
	if( r11 == NULL ) hl_null_access();
	r11->hasValue ? ((void (*)(vdynamic*,int,int,double))r11->fun)((vdynamic*)r11->value,r2,r3,r4) : ((void (*)(int,int,double))r11->fun)(r2,r3,r4);
	goto label$5e97cd2_4_12;
	label$5e97cd2_4_27:
	return;
}

