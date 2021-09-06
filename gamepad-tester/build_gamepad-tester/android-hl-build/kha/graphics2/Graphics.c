﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/graphics2/Graphics.h>
#include <kha/Image.h>
int kha_Image_get_width(kha__Image);
int kha_Image_get_height(kha__Image);
#include <kha/Kravur.h>
#include <kha/math/FastMatrix3.h>
void kha_graphics2_Graphics_setTransformation(kha__graphics2__Graphics,kha__math__FastMatrix3);
#include <hl/natives.h>
extern hl_type $t_kha_math_FastMatrix3;
void kha_math_FastMatrix3_new(kha__math__FastMatrix3,float,float,float,float,float,float,float,float,float);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
hl__types__ArrayBytes_Float hl_types_ArrayBase_allocF64(vbyte*,int);

void kha_graphics2_Graphics_begin(kha__graphics2__Graphics r0,bool* r1,vdynamic* r2) {
	bool r3;
	if( r1 ) goto label$521acff_1_3;
	r3 = true;
	goto label$521acff_1_4;
	label$521acff_1_3:
	r3 = *r1;
	label$521acff_1_4:
	return;
}

void kha_graphics2_Graphics_end(kha__graphics2__Graphics r0) {
	return;
}

void kha_graphics2_Graphics_drawScaledImage(kha__graphics2__Graphics r0,kha__Image r1,float r2,float r3,float r4,float r5) {
	float r8, r9, r10, r11;
	int r7;
	r7 = 0;
	r8 = (float)r7;
	r7 = 0;
	r9 = (float)r7;
	if( r1 == NULL ) hl_null_access();
	r7 = kha_Image_get_width(r1);
	r10 = (float)r7;
	r7 = kha_Image_get_height(r1);
	r11 = (float)r7;
	((void (*)(kha__graphics2__Graphics,kha__Image,float,float,float,float,float,float,float,float))r0->$type->vobj_proto[2])(r0,r1,r8,r9,r10,r11,r2,r3,r4,r5);
	return;
}

void kha_graphics2_Graphics_drawScaledSubImage(kha__graphics2__Graphics r0,kha__Image r1,float r2,float r3,float r4,float r5,float r6,float r7,float r8,float r9) {
	return;
}

void kha_graphics2_Graphics_drawRect(kha__graphics2__Graphics r0,double r1,double r2,double r3,double r4,double* r5) {
	double r6;
	if( r5 ) goto label$521acff_5_3;
	r6 = 1.;
	goto label$521acff_5_4;
	label$521acff_5_3:
	r6 = *r5;
	label$521acff_5_4:
	return;
}

void kha_graphics2_Graphics_fillRect(kha__graphics2__Graphics r0,double r1,double r2,double r3,double r4) {
	return;
}

void kha_graphics2_Graphics_drawString(kha__graphics2__Graphics r0,String r1,double r2,double r3) {
	return;
}

void kha_graphics2_Graphics_drawLine(kha__graphics2__Graphics r0,double r1,double r2,double r3,double r4,double* r5) {
	double r6;
	if( r5 ) goto label$521acff_8_3;
	r6 = 1.;
	goto label$521acff_8_4;
	label$521acff_8_3:
	r6 = *r5;
	label$521acff_8_4:
	return;
}

void kha_graphics2_Graphics_fillTriangle(kha__graphics2__Graphics r0,double r1,double r2,double r3,double r4,double r5,double r6) {
	return;
}

int kha_graphics2_Graphics_get_color(kha__graphics2__Graphics r0) {
	int r1;
	r1 = -16777216;
	return r1;
}

int kha_graphics2_Graphics_set_color(kha__graphics2__Graphics r0,int r1) {
	int r2;
	r2 = -16777216;
	return r2;
}

kha__Kravur kha_graphics2_Graphics_get_font(kha__graphics2__Graphics r0) {
	kha__Kravur r1;
	r1 = NULL;
	return r1;
}

kha__Kravur kha_graphics2_Graphics_set_font(kha__graphics2__Graphics r0,kha__Kravur r1) {
	kha__Kravur r2;
	r2 = NULL;
	return r2;
}

int kha_graphics2_Graphics_get_fontSize(kha__graphics2__Graphics r0) {
	int r1;
	r1 = r0->myFontSize;
	return r1;
}

int kha_graphics2_Graphics_set_fontSize(kha__graphics2__Graphics r0,int r1) {
	r0->myFontSize = r1;
	return r1;
}

kha__math__FastMatrix3 kha_graphics2_Graphics_popTransformation(kha__graphics2__Graphics r0) {
	hl__types__ArrayObj r4;
	vdynamic *r6;
	kha__math__FastMatrix3 r5;
	varray *r7;
	int r1, r2;
	r1 = r0->transformationIndex;
	--r1;
	r0->transformationIndex = r1;
	r4 = r0->transformations;
	if( r4 == NULL ) hl_null_access();
	r1 = r0->transformationIndex;
	r2 = r4->length;
	if( ((unsigned)r1) < ((unsigned)r2) ) goto label$521acff_16_10;
	r5 = NULL;
	goto label$521acff_16_13;
	label$521acff_16_10:
	r7 = r4->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (kha__math__FastMatrix3)r6;
	label$521acff_16_13:
	kha_graphics2_Graphics_setTransformation(r0,r5);
	r4 = r0->transformations;
	if( r4 == NULL ) hl_null_access();
	r1 = r0->transformationIndex;
	r2 = 1;
	r1 = r1 + r2;
	r2 = r4->length;
	if( ((unsigned)r1) < ((unsigned)r2) ) goto label$521acff_16_23;
	r5 = NULL;
	goto label$521acff_16_26;
	label$521acff_16_23:
	r7 = r4->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (kha__math__FastMatrix3)r6;
	label$521acff_16_26:
	return r5;
}

void kha_graphics2_Graphics_pushRotation(kha__graphics2__Graphics r0,float r1,float r2,float r3) {
	hl__types__ArrayObj r52;
	float r5, r7, r8, r9, r10, r11, r12, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41, r42, r43, r44, r45, r46, r47, r48, r49, r50, r51, r58, r59, r60, r61, r62, r63, r64, r65, r66, r67, r68, r69, r70, r71, r72, r73;
	double r13;
	vdynamic *r55;
	kha__math__FastMatrix3 r54, r57;
	varray *r56;
	int r4, r53;
	r4 = 1;
	r5 = (float)r4;
	r4 = 0;
	r7 = (float)r4;
	r4 = 0;
	r8 = (float)r4;
	r4 = 1;
	r9 = (float)r4;
	r4 = 0;
	r10 = (float)r4;
	r4 = 0;
	r11 = (float)r4;
	r4 = 1;
	r12 = (float)r4;
	r13 = (double)r1;
	r13 = hl_math_cos(r13);
	r14 = (float)r13;
	r13 = (double)r1;
	r13 = hl_math_sin(r13);
	r13 = -r13;
	r15 = (float)r13;
	r4 = 0;
	r16 = (float)r4;
	r13 = (double)r1;
	r13 = hl_math_sin(r13);
	r17 = (float)r13;
	r13 = (double)r1;
	r13 = hl_math_cos(r13);
	r18 = (float)r13;
	r4 = 0;
	r19 = (float)r4;
	r4 = 0;
	r20 = (float)r4;
	r4 = 0;
	r21 = (float)r4;
	r4 = 1;
	r22 = (float)r4;
	r23 = r5 * r14;
	r24 = r7 * r17;
	r23 = r23 + r24;
	r24 = r2 * r20;
	r23 = r23 + r24;
	r24 = r5 * r15;
	r25 = r7 * r18;
	r24 = r24 + r25;
	r25 = r2 * r21;
	r24 = r24 + r25;
	r25 = r5 * r16;
	r26 = r7 * r19;
	r25 = r25 + r26;
	r26 = r2 * r22;
	r25 = r25 + r26;
	r26 = r8 * r14;
	r27 = r9 * r17;
	r26 = r26 + r27;
	r27 = r3 * r20;
	r26 = r26 + r27;
	r27 = r8 * r15;
	r28 = r9 * r18;
	r27 = r27 + r28;
	r28 = r3 * r21;
	r27 = r27 + r28;
	r28 = r8 * r16;
	r29 = r9 * r19;
	r28 = r28 + r29;
	r29 = r3 * r22;
	r28 = r28 + r29;
	r29 = r10 * r14;
	r30 = r11 * r17;
	r29 = r29 + r30;
	r30 = r12 * r20;
	r29 = r29 + r30;
	r30 = r10 * r15;
	r31 = r11 * r18;
	r30 = r30 + r31;
	r31 = r12 * r21;
	r30 = r30 + r31;
	r31 = r10 * r16;
	r32 = r11 * r19;
	r31 = r31 + r32;
	r32 = r12 * r22;
	r31 = r31 + r32;
	r4 = 1;
	r32 = (float)r4;
	r4 = 0;
	r33 = (float)r4;
	r34 = -r2;
	r4 = 0;
	r35 = (float)r4;
	r4 = 1;
	r36 = (float)r4;
	r37 = -r3;
	r4 = 0;
	r38 = (float)r4;
	r4 = 0;
	r39 = (float)r4;
	r4 = 1;
	r40 = (float)r4;
	r41 = r23 * r32;
	r42 = r24 * r35;
	r41 = r41 + r42;
	r42 = r25 * r38;
	r41 = r41 + r42;
	r42 = r23 * r33;
	r43 = r24 * r36;
	r42 = r42 + r43;
	r43 = r25 * r39;
	r42 = r42 + r43;
	r43 = r23 * r34;
	r44 = r24 * r37;
	r43 = r43 + r44;
	r44 = r25 * r40;
	r43 = r43 + r44;
	r44 = r26 * r32;
	r45 = r27 * r35;
	r44 = r44 + r45;
	r45 = r28 * r38;
	r44 = r44 + r45;
	r45 = r26 * r33;
	r46 = r27 * r36;
	r45 = r45 + r46;
	r46 = r28 * r39;
	r45 = r45 + r46;
	r46 = r26 * r34;
	r47 = r27 * r37;
	r46 = r46 + r47;
	r47 = r28 * r40;
	r46 = r46 + r47;
	r47 = r29 * r32;
	r48 = r30 * r35;
	r47 = r47 + r48;
	r48 = r31 * r38;
	r47 = r47 + r48;
	r48 = r29 * r33;
	r49 = r30 * r36;
	r48 = r48 + r49;
	r49 = r31 * r39;
	r48 = r48 + r49;
	r49 = r29 * r34;
	r50 = r30 * r37;
	r49 = r49 + r50;
	r50 = r31 * r40;
	r49 = r49 + r50;
	r52 = r0->transformations;
	if( r52 == NULL ) hl_null_access();
	r4 = r0->transformationIndex;
	r53 = r52->length;
	if( ((unsigned)r4) < ((unsigned)r53) ) goto label$521acff_17_150;
	r54 = NULL;
	goto label$521acff_17_153;
	label$521acff_17_150:
	r56 = r52->array;
	r55 = ((vdynamic**)(r56 + 1))[r4];
	r54 = (kha__math__FastMatrix3)r55;
	label$521acff_17_153:
	if( r54 == NULL ) hl_null_access();
	r51 = r54->_00;
	r50 = r41 * r51;
	r58 = r54->_01;
	r51 = r42 * r58;
	r50 = r50 + r51;
	r58 = r54->_02;
	r51 = r43 * r58;
	r50 = r50 + r51;
	r58 = r54->_10;
	r51 = r41 * r58;
	r59 = r54->_11;
	r58 = r42 * r59;
	r51 = r51 + r58;
	r59 = r54->_12;
	r58 = r43 * r59;
	r51 = r51 + r58;
	r59 = r54->_20;
	r58 = r41 * r59;
	r60 = r54->_21;
	r59 = r42 * r60;
	r58 = r58 + r59;
	r60 = r54->_22;
	r59 = r43 * r60;
	r58 = r58 + r59;
	r60 = r54->_00;
	r59 = r44 * r60;
	r61 = r54->_01;
	r60 = r45 * r61;
	r59 = r59 + r60;
	r61 = r54->_02;
	r60 = r46 * r61;
	r59 = r59 + r60;
	r61 = r54->_10;
	r60 = r44 * r61;
	r62 = r54->_11;
	r61 = r45 * r62;
	r60 = r60 + r61;
	r62 = r54->_12;
	r61 = r46 * r62;
	r60 = r60 + r61;
	r62 = r54->_20;
	r61 = r44 * r62;
	r63 = r54->_21;
	r62 = r45 * r63;
	r61 = r61 + r62;
	r63 = r54->_22;
	r62 = r46 * r63;
	r61 = r61 + r62;
	r63 = r54->_00;
	r62 = r47 * r63;
	r64 = r54->_01;
	r63 = r48 * r64;
	r62 = r62 + r63;
	r64 = r54->_02;
	r63 = r49 * r64;
	r62 = r62 + r63;
	r64 = r54->_10;
	r63 = r47 * r64;
	r65 = r54->_11;
	r64 = r48 * r65;
	r63 = r63 + r64;
	r65 = r54->_12;
	r64 = r49 * r65;
	r63 = r63 + r64;
	r65 = r54->_20;
	r64 = r47 * r65;
	r66 = r54->_21;
	r65 = r48 * r66;
	r64 = r64 + r65;
	r66 = r54->_22;
	r65 = r49 * r66;
	r64 = r64 + r65;
	r4 = r0->transformationIndex;
	++r4;
	r0->transformationIndex = r4;
	r4 = r0->transformationIndex;
	r52 = r0->transformations;
	if( r52 == NULL ) hl_null_access();
	r53 = r52->length;
	if( r4 != r53 ) goto label$521acff_17_257;
	r52 = r0->transformations;
	if( r52 == NULL ) hl_null_access();
	r57 = (kha__math__FastMatrix3)hl_alloc_obj(&$t_kha_math_FastMatrix3);
	r4 = 1;
	r65 = (float)r4;
	r4 = 0;
	r66 = (float)r4;
	r4 = 0;
	r67 = (float)r4;
	r4 = 0;
	r68 = (float)r4;
	r4 = 1;
	r69 = (float)r4;
	r4 = 0;
	r70 = (float)r4;
	r4 = 0;
	r71 = (float)r4;
	r4 = 0;
	r72 = (float)r4;
	r4 = 1;
	r73 = (float)r4;
	kha_math_FastMatrix3_new(r57,r65,r66,r67,r68,r69,r70,r71,r72,r73);
	r4 = hl_types_ArrayObj_push(r52,((vdynamic*)r57));
	label$521acff_17_257:
	r52 = r0->transformations;
	if( r52 == NULL ) hl_null_access();
	r4 = r0->transformationIndex;
	r53 = r52->length;
	if( ((unsigned)r4) < ((unsigned)r53) ) goto label$521acff_17_264;
	r57 = NULL;
	goto label$521acff_17_267;
	label$521acff_17_264:
	r56 = r52->array;
	r55 = ((vdynamic**)(r56 + 1))[r4];
	r57 = (kha__math__FastMatrix3)r55;
	label$521acff_17_267:
	if( r57 == NULL ) hl_null_access();
	r57->_00 = r50;
	r57->_10 = r51;
	r57->_20 = r58;
	r57->_01 = r59;
	r57->_11 = r60;
	r57->_21 = r61;
	r57->_02 = r62;
	r57->_12 = r63;
	r57->_22 = r64;
	r52 = r0->transformations;
	if( r52 == NULL ) hl_null_access();
	r4 = r0->transformationIndex;
	r53 = r52->length;
	if( ((unsigned)r4) < ((unsigned)r53) ) goto label$521acff_17_284;
	r57 = NULL;
	goto label$521acff_17_287;
	label$521acff_17_284:
	r56 = r52->array;
	r55 = ((vdynamic**)(r56 + 1))[r4];
	r57 = (kha__math__FastMatrix3)r55;
	label$521acff_17_287:
	kha_graphics2_Graphics_setTransformation(r0,r57);
	return;
}

double kha_graphics2_Graphics_get_opacity(kha__graphics2__Graphics r0) {
	hl__types__ArrayBytes_Float r1, r3;
	double r5;
	vbyte *r6;
	int r2, r4;
	r1 = r0->opacities;
	if( r1 == NULL ) hl_null_access();
	r3 = r0->opacities;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	r4 = 1;
	r2 = r2 - r4;
	r4 = r1->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$521acff_18_11;
	r5 = 0.;
	goto label$521acff_18_15;
	label$521acff_18_11:
	r6 = r1->bytes;
	r4 = 3;
	r4 = r2 << r4;
	r5 = *(double*)(r6 + r4);
	label$521acff_18_15:
	return r5;
}

kha__graphics4__PipelineState kha_graphics2_Graphics_set_pipeline(kha__graphics2__Graphics r0,kha__graphics4__PipelineState r1) {
	((void (*)(kha__graphics2__Graphics,kha__graphics4__PipelineState))r0->$type->vobj_proto[13])(r0,r1);
	r0->pipe = r1;
	return r1;
}

void kha_graphics2_Graphics_new(kha__graphics2__Graphics r0) {
	kha__graphics4__PipelineState r20;
	hl__types__ArrayObj r1;
	hl_type *r3;
	hl__types__ArrayBytes_Float r16;
	float r6, r7, r8, r9, r10, r11, r12, r13, r14;
	double r18;
	kha__math__FastMatrix3 r5;
	vbyte *r17;
	int r4, r19;
	varray *r2;
	r3 = &$t_kha_math_FastMatrix3;
	r4 = 1;
	r2 = hl_alloc_array(r3,r4);
	r5 = (kha__math__FastMatrix3)hl_alloc_obj(&$t_kha_math_FastMatrix3);
	r4 = 1;
	r6 = (float)r4;
	r4 = 0;
	r7 = (float)r4;
	r4 = 0;
	r8 = (float)r4;
	r4 = 0;
	r9 = (float)r4;
	r4 = 1;
	r10 = (float)r4;
	r4 = 0;
	r11 = (float)r4;
	r4 = 0;
	r12 = (float)r4;
	r4 = 0;
	r13 = (float)r4;
	r4 = 1;
	r14 = (float)r4;
	kha_math_FastMatrix3_new(r5,r6,r7,r8,r9,r10,r11,r12,r13,r14);
	r4 = 0;
	((kha__math__FastMatrix3*)(r2 + 1))[r4] = r5;
	r1 = hl_types_ArrayObj_alloc(r2);
	r0->transformations = r1;
	r4 = 0;
	r0->transformationIndex = r4;
	r4 = 8;
	r17 = hl_alloc_bytes(r4);
	r4 = 0;
	r18 = 1.;
	r19 = 3;
	r19 = r4 << r19;
	*(double*)(r17 + r19) = r18;
	++r4;
	r4 = 1;
	r16 = hl_types_ArrayBase_allocF64(r17,r4);
	r0->opacities = r16;
	r4 = 12;
	r0->myFontSize = r4;
	r20 = NULL;
	r0->pipe = r20;
	return;
}

void kha_graphics2_Graphics_setTransformation(kha__graphics2__Graphics r0,kha__math__FastMatrix3 r1) {
	return;
}

void kha_graphics2_Graphics_setPipeline(kha__graphics2__Graphics r0,kha__graphics4__PipelineState r1) {
	return;
}
