﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/audio2/ogg/vorbis/VorbisTools.h>
#include <hl/natives.h>
double kha_audio2_ogg_vorbis_VorbisTools_square(double);
void hl_types_ArrayBytes_Float___expand(hl__types__ArrayBytes_Float,int);
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
void hl_types_ArrayBytes_Int___expand(hl__types__ArrayBytes_Int,int);
extern kha__audio2__ogg__vorbis__$VorbisTools g$84d8ab9;
extern hl_type t$hl_types_ArrayBytes_Int;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$_dyn;
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
extern hl_type t$_i32;

int kha_audio2_ogg_vorbis_VorbisTools_pointCompare(kha__audio2__ogg__vorbis__data__IntPoint r0,kha__audio2__ogg__vorbis__data__IntPoint r1) {
	int r2, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	if( r2 >= r3 ) goto label$5a9200e_1_7;
	r2 = -1;
	return r2;
	label$5a9200e_1_7:
	r2 = r0->x;
	r3 = r1->x;
	if( r3 >= r2 ) goto label$5a9200e_1_12;
	r2 = 1;
	return r2;
	label$5a9200e_1_12:
	r2 = 0;
	return r2;
}

int kha_audio2_ogg_vorbis_VorbisTools_uintAsc(int r0,int r1) {
	bool r2;
	int r3;
	if( ((unsigned)r0) < ((unsigned)r1) ) goto label$5a9200e_2_3;
	r2 = false;
	goto label$5a9200e_2_4;
	label$5a9200e_2_3:
	r2 = true;
	label$5a9200e_2_4:
	if( !r2 ) goto label$5a9200e_2_7;
	r3 = -1;
	return r3;
	label$5a9200e_2_7:
	if( r0 == r1 ) goto label$5a9200e_2_10;
	r2 = false;
	goto label$5a9200e_2_11;
	label$5a9200e_2_10:
	r2 = true;
	label$5a9200e_2_11:
	if( !r2 ) goto label$5a9200e_2_14;
	r3 = 0;
	return r3;
	label$5a9200e_2_14:
	r3 = 1;
	return r3;
}

int kha_audio2_ogg_vorbis_VorbisTools_lookup1Values(int r0,int r1) {
	bool r8, r10;
	double r2, r4, r7, r9;
	int r3, r5, r6;
	r2 = (double)r0;
	r2 = hl_math_log(r2);
	r4 = (double)r1;
	r2 = r2 / r4;
	r2 = hl_math_exp(r2);
	r3 = (int)r2;
	r6 = 1;
	r5 = r3 + r6;
	r4 = (double)r5;
	r7 = (double)r1;
	r4 = hl_math_pow(r4,r7);
	r5 = (int)r4;
	if( r0 < r5 ) goto label$5a9200e_3_14;
	++r3;
	label$5a9200e_3_14:
	r6 = 1;
	r5 = r3 + r6;
	r7 = (double)r5;
	r9 = (double)r1;
	r7 = hl_math_pow(r7,r9);
	r9 = (double)r0;
	if( r7 > r9 ) goto label$5a9200e_3_23;
	r8 = false;
	goto label$5a9200e_3_24;
	label$5a9200e_3_23:
	r8 = true;
	label$5a9200e_3_24:
	r7 = (double)r3;
	r9 = (double)r1;
	r7 = hl_math_pow(r7,r9);
	r5 = (int)r7;
	if( r5 <= r0 ) goto label$5a9200e_3_31;
	r10 = false;
	goto label$5a9200e_3_32;
	label$5a9200e_3_31:
	r10 = true;
	label$5a9200e_3_32:
	return r3;
}

void kha_audio2_ogg_vorbis_VorbisTools_computeWindow(int r0,hl__types__ArrayBytes_Float r1) {
	double r7, r8, r10;
	vbyte *r11;
	int r2, r3, r5, r6, r9;
	r3 = 1;
	r2 = r0 >> r3;
	r3 = 0;
	r5 = r2;
	label$5a9200e_4_4:
	if( r3 >= r5 ) goto label$5a9200e_4_31;
	r6 = r3;
	++r3;
	if( r1 == NULL ) hl_null_access();
	r7 = 1.5707963267948966;
	r8 = (double)r6;
	r10 = 0.5;
	r8 = r8 + r10;
	r10 = (double)r2;
	r8 = r8 / r10;
	r10 = 0.5;
	r8 = r8 * r10;
	r10 = 3.1415926535897931;
	r8 = r8 * r10;
	r8 = hl_math_sin(r8);
	r8 = kha_audio2_ogg_vorbis_VorbisTools_square(r8);
	r7 = r7 * r8;
	r7 = hl_math_sin(r7);
	r9 = r1->length;
	if( ((unsigned)r6) < ((unsigned)r9) ) goto label$5a9200e_4_26;
	hl_types_ArrayBytes_Float___expand(r1,r6);
	label$5a9200e_4_26:
	r11 = r1->bytes;
	r9 = 3;
	r9 = r6 << r9;
	*(double*)(r11 + r9) = r7;
	goto label$5a9200e_4_4;
	label$5a9200e_4_31:
	return;
}

double kha_audio2_ogg_vorbis_VorbisTools_square(double r0) {
	double r1;
	r1 = r0 * r0;
	return r1;
}

void kha_audio2_ogg_vorbis_VorbisTools_computeBitReverse(int r0,hl__types__ArrayBytes_Int r1) {
	hl__types__ArrayBytes_Int r2;
	int r4, r5, r6, r8, r9, r10, r11, r12, r13, r14;
	vbyte *r3;
	r4 = 64;
	r3 = hl_alloc_bytes(r4);
	r4 = 0;
	r5 = 0;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 1;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 2;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 2;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 3;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 3;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 3;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 3;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 4;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 4;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 4;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 4;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 4;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 4;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 4;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r5 = 4;
	r6 = 2;
	r6 = r4 << r6;
	*(int*)(r3 + r6) = r5;
	++r4;
	r4 = 16;
	r2 = hl_types_ArrayBase_allocI32(r3,r4);
	r5 = 16384;
	if( r0 >= r5 ) goto label$5a9200e_6_129;
	r5 = 16;
	if( r0 >= r5 ) goto label$5a9200e_6_99;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->length;
	if( ((unsigned)r0) < ((unsigned)r5) ) goto label$5a9200e_6_94;
	r4 = 0;
	goto label$5a9200e_6_98;
	label$5a9200e_6_94:
	r3 = r2->bytes;
	r5 = 2;
	r5 = r0 << r5;
	r4 = *(int*)(r3 + r5);
	label$5a9200e_6_98:
	goto label$5a9200e_6_128;
	label$5a9200e_6_99:
	r5 = 512;
	if( r0 >= r5 ) goto label$5a9200e_6_115;
	r4 = 5;
	if( r2 == NULL ) hl_null_access();
	r6 = 5;
	r5 = r0 >> r6;
	r6 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$5a9200e_6_109;
	r5 = 0;
	goto label$5a9200e_6_113;
	label$5a9200e_6_109:
	r3 = r2->bytes;
	r6 = 2;
	r6 = r5 << r6;
	r5 = *(int*)(r3 + r6);
	label$5a9200e_6_113:
	r4 = r4 + r5;
	goto label$5a9200e_6_128;
	label$5a9200e_6_115:
	r4 = 10;
	if( r2 == NULL ) hl_null_access();
	r6 = 10;
	r5 = r0 >> r6;
	r6 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$5a9200e_6_123;
	r5 = 0;
	goto label$5a9200e_6_127;
	label$5a9200e_6_123:
	r3 = r2->bytes;
	r6 = 2;
	r6 = r5 << r6;
	r5 = *(int*)(r3 + r6);
	label$5a9200e_6_127:
	r4 = r4 + r5;
	label$5a9200e_6_128:
	goto label$5a9200e_6_194;
	label$5a9200e_6_129:
	r5 = 16777216;
	if( r0 >= r5 ) goto label$5a9200e_6_161;
	r5 = 524288;
	if( r0 >= r5 ) goto label$5a9200e_6_147;
	r4 = 15;
	if( r2 == NULL ) hl_null_access();
	r6 = 15;
	r5 = r0 >> r6;
	r6 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$5a9200e_6_141;
	r5 = 0;
	goto label$5a9200e_6_145;
	label$5a9200e_6_141:
	r3 = r2->bytes;
	r6 = 2;
	r6 = r5 << r6;
	r5 = *(int*)(r3 + r6);
	label$5a9200e_6_145:
	r4 = r4 + r5;
	goto label$5a9200e_6_160;
	label$5a9200e_6_147:
	r4 = 20;
	if( r2 == NULL ) hl_null_access();
	r6 = 20;
	r5 = r0 >> r6;
	r6 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$5a9200e_6_155;
	r5 = 0;
	goto label$5a9200e_6_159;
	label$5a9200e_6_155:
	r3 = r2->bytes;
	r6 = 2;
	r6 = r5 << r6;
	r5 = *(int*)(r3 + r6);
	label$5a9200e_6_159:
	r4 = r4 + r5;
	label$5a9200e_6_160:
	goto label$5a9200e_6_194;
	label$5a9200e_6_161:
	r5 = 536870912;
	if( r0 >= r5 ) goto label$5a9200e_6_177;
	r4 = 25;
	if( r2 == NULL ) hl_null_access();
	r6 = 25;
	r5 = r0 >> r6;
	r6 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$5a9200e_6_171;
	r5 = 0;
	goto label$5a9200e_6_175;
	label$5a9200e_6_171:
	r3 = r2->bytes;
	r6 = 2;
	r6 = r5 << r6;
	r5 = *(int*)(r3 + r6);
	label$5a9200e_6_175:
	r4 = r4 + r5;
	goto label$5a9200e_6_194;
	label$5a9200e_6_177:
	r5 = 0x80000000;
	if( r0 >= r5 ) goto label$5a9200e_6_193;
	r4 = 30;
	if( r2 == NULL ) hl_null_access();
	r6 = 30;
	r5 = r0 >> r6;
	r6 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$5a9200e_6_187;
	r5 = 0;
	goto label$5a9200e_6_191;
	label$5a9200e_6_187:
	r3 = r2->bytes;
	r6 = 2;
	r6 = r5 << r6;
	r5 = *(int*)(r3 + r6);
	label$5a9200e_6_191:
	r4 = r4 + r5;
	goto label$5a9200e_6_194;
	label$5a9200e_6_193:
	r4 = 0;
	label$5a9200e_6_194:
	r5 = 1;
	r4 = r4 - r5;
	r6 = 3;
	r5 = r0 >> r6;
	r6 = 0;
	r8 = r5;
	label$5a9200e_6_200:
	if( r6 >= r8 ) goto label$5a9200e_6_265;
	r9 = r6;
	++r6;
	r12 = -1431655766;
	r11 = r9 & r12;
	r12 = 1;
	r11 = ((unsigned)r11) >> r12;
	r13 = 1431655765;
	r12 = r9 & r13;
	r13 = 1;
	r12 = r12 << r13;
	r11 = r11 | r12;
	r10 = r11;
	r12 = -858993460;
	r11 = r11 & r12;
	r12 = 2;
	r11 = ((unsigned)r11) >> r12;
	r13 = 858993459;
	r12 = r10 & r13;
	r13 = 2;
	r12 = r12 << r13;
	r11 = r11 | r12;
	r10 = r11;
	r12 = -252645136;
	r11 = r11 & r12;
	r12 = 4;
	r11 = ((unsigned)r11) >> r12;
	r13 = 252645135;
	r12 = r10 & r13;
	r13 = 4;
	r12 = r12 << r13;
	r11 = r11 | r12;
	r10 = r11;
	r12 = -16711936;
	r11 = r11 & r12;
	r12 = 8;
	r11 = ((unsigned)r11) >> r12;
	r13 = 16711935;
	r12 = r10 & r13;
	r13 = 8;
	r12 = r12 << r13;
	r11 = r11 | r12;
	r10 = r11;
	if( r1 == NULL ) hl_null_access();
	r13 = 16;
	r12 = ((unsigned)r10) >> r13;
	r14 = 16;
	r13 = r10 << r14;
	r12 = r12 | r13;
	r13 = 32;
	r13 = r13 - r4;
	r14 = 3;
	r13 = r13 + r14;
	r12 = ((unsigned)r12) >> r13;
	r13 = 2;
	r12 = r12 << r13;
	r13 = r1->length;
	if( ((unsigned)r9) < ((unsigned)r13) ) goto label$5a9200e_6_260;
	hl_types_ArrayBytes_Int___expand(r1,r9);
	label$5a9200e_6_260:
	r3 = r1->bytes;
	r13 = 2;
	r13 = r9 << r13;
	*(int*)(r3 + r13) = r12;
	goto label$5a9200e_6_200;
	label$5a9200e_6_265:
	return;
}

void kha_audio2_ogg_vorbis_VorbisTools_computeTwiddleFactors(int r0,hl__types__ArrayBytes_Float r1,hl__types__ArrayBytes_Float r2,hl__types__ArrayBytes_Float r3) {
	double r12, r15;
	vbyte *r16;
	int r4, r5, r7, r8, r9, r10, r11, r13, r14, r17, r18;
	r5 = 2;
	r4 = r0 >> r5;
	r7 = 3;
	r5 = r0 >> r7;
	r7 = 0;
	r8 = 0;
	r9 = r4;
	label$5a9200e_7_7:
	if( r8 >= r9 ) goto label$5a9200e_7_90;
	r10 = r8;
	++r8;
	if( r1 == NULL ) hl_null_access();
	r13 = 4;
	r13 = r13 * r10;
	r12 = (double)r13;
	r15 = 3.1415926535897931;
	r12 = r12 * r15;
	r15 = (double)r0;
	r12 = r12 / r15;
	r12 = hl_math_cos(r12);
	r13 = r1->length;
	if( ((unsigned)r7) < ((unsigned)r13) ) goto label$5a9200e_7_23;
	hl_types_ArrayBytes_Float___expand(r1,r7);
	label$5a9200e_7_23:
	r16 = r1->bytes;
	r13 = 3;
	r13 = r7 << r13;
	*(double*)(r16 + r13) = r12;
	r13 = 1;
	r11 = r7 + r13;
	r13 = 4;
	r13 = r13 * r10;
	r12 = (double)r13;
	r15 = 3.1415926535897931;
	r12 = r12 * r15;
	r15 = (double)r0;
	r12 = r12 / r15;
	r12 = hl_math_sin(r12);
	r12 = -r12;
	r13 = r1->length;
	if( ((unsigned)r11) < ((unsigned)r13) ) goto label$5a9200e_7_41;
	hl_types_ArrayBytes_Float___expand(r1,r11);
	label$5a9200e_7_41:
	r16 = r1->bytes;
	r13 = 3;
	r13 = r11 << r13;
	*(double*)(r16 + r13) = r12;
	if( r2 == NULL ) hl_null_access();
	r14 = 1;
	r13 = r7 + r14;
	r12 = (double)r13;
	r15 = 3.1415926535897931;
	r12 = r12 * r15;
	r15 = (double)r0;
	r12 = r12 / r15;
	r15 = 2.;
	r12 = r12 / r15;
	r12 = hl_math_cos(r12);
	r15 = 0.5;
	r12 = r12 * r15;
	r13 = r2->length;
	if( ((unsigned)r7) < ((unsigned)r13) ) goto label$5a9200e_7_61;
	hl_types_ArrayBytes_Float___expand(r2,r7);
	label$5a9200e_7_61:
	r16 = r2->bytes;
	r13 = 3;
	r13 = r7 << r13;
	*(double*)(r16 + r13) = r12;
	r13 = 1;
	r11 = r7 + r13;
	r14 = 1;
	r13 = r7 + r14;
	r12 = (double)r13;
	r15 = 3.1415926535897931;
	r12 = r12 * r15;
	r15 = (double)r0;
	r12 = r12 / r15;
	r15 = 2.;
	r12 = r12 / r15;
	r12 = hl_math_sin(r12);
	r15 = 0.5;
	r12 = r12 * r15;
	r13 = r2->length;
	if( ((unsigned)r11) < ((unsigned)r13) ) goto label$5a9200e_7_82;
	hl_types_ArrayBytes_Float___expand(r2,r11);
	label$5a9200e_7_82:
	r16 = r2->bytes;
	r13 = 3;
	r13 = r11 << r13;
	*(double*)(r16 + r13) = r12;
	r13 = 2;
	r11 = r7 + r13;
	r7 = r11;
	goto label$5a9200e_7_7;
	label$5a9200e_7_90:
	r8 = 0;
	r9 = 0;
	r10 = r5;
	label$5a9200e_7_93:
	if( r9 >= r10 ) goto label$5a9200e_7_138;
	++r9;
	if( r3 == NULL ) hl_null_access();
	r14 = 2;
	r18 = 1;
	r17 = r8 + r18;
	r14 = r14 * r17;
	r12 = (double)r14;
	r15 = 3.1415926535897931;
	r12 = r12 * r15;
	r15 = (double)r0;
	r12 = r12 / r15;
	r12 = hl_math_cos(r12);
	r14 = r3->length;
	if( ((unsigned)r8) < ((unsigned)r14) ) goto label$5a9200e_7_110;
	hl_types_ArrayBytes_Float___expand(r3,r8);
	label$5a9200e_7_110:
	r16 = r3->bytes;
	r14 = 3;
	r14 = r8 << r14;
	*(double*)(r16 + r14) = r12;
	r14 = 1;
	r13 = r8 + r14;
	r14 = 2;
	r18 = 1;
	r17 = r8 + r18;
	r14 = r14 * r17;
	r12 = (double)r14;
	r15 = 3.1415926535897931;
	r12 = r12 * r15;
	r15 = (double)r0;
	r12 = r12 / r15;
	r12 = hl_math_sin(r12);
	r12 = -r12;
	r14 = r3->length;
	if( ((unsigned)r13) < ((unsigned)r14) ) goto label$5a9200e_7_130;
	hl_types_ArrayBytes_Float___expand(r3,r13);
	label$5a9200e_7_130:
	r16 = r3->bytes;
	r14 = 3;
	r14 = r13 << r14;
	*(double*)(r16 + r14) = r12;
	r14 = 2;
	r13 = r8 + r14;
	r8 = r13;
	goto label$5a9200e_7_93;
	label$5a9200e_7_138:
	return;
}

void kha_audio2_ogg_vorbis_VorbisTools_drawLine(hl__types__ArrayBytes_Float r0,int r1,int r2,int r3,int r4,int r5) {
	hl__types__ArrayObj r7, r12;
	hl_type *r10;
	kha__audio2__ogg__vorbis__$VorbisTools r8;
	hl__types__ArrayBytes_Int r14;
	hl__types__ArrayBytes_Float r27;
	double r26, r29;
	vdynamic *r13;
	vbyte *r17;
	int r11, r15, r16, r18, r19, r20, r21, r22, r23, r24, r25, r28, r30, r31;
	varray *r9;
	r8 = (kha__audio2__ogg__vorbis__$VorbisTools)g$84d8ab9;
	r7 = r8->integerDivideTable;
	if( r7 ) goto label$5a9200e_8_75;
	r10 = &t$hl_types_ArrayBytes_Int;
	r11 = 0;
	r9 = hl_alloc_array(r10,r11);
	r7 = hl_types_ArrayObj_alloc(r9);
	if( r7 == NULL ) hl_null_access();
	r11 = 31;
	r13 = NULL;
	r14 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r13,&t$_dyn,&t$hl_types_ArrayBytes_Int);
	r15 = r7->length;
	if( ((unsigned)r11) < ((unsigned)r15) ) goto label$5a9200e_8_14;
	hl_types_ArrayObj___expand(r7,r11);
	label$5a9200e_8_14:
	r9 = r7->array;
	((hl__types__ArrayBytes_Int*)(r9 + 1))[r11] = r14;
	r8 = (kha__audio2__ogg__vorbis__$VorbisTools)g$84d8ab9;
	r8->integerDivideTable = r7;
	r11 = 0;
	label$5a9200e_8_19:
	r16 = 32;
	if( r11 >= r16 ) goto label$5a9200e_8_75;
	r15 = r11;
	++r11;
	r16 = 0;
	r17 = hl_alloc_bytes(r16);
	r16 = 0;
	r16 = 0;
	r14 = hl_types_ArrayBase_allocI32(r17,r16);
	if( r14 == NULL ) hl_null_access();
	r16 = 63;
	r13 = NULL;
	r18 = (int)hl_dyn_casti(&r13,&t$_dyn,&t$_i32);
	r19 = r14->length;
	if( ((unsigned)r16) < ((unsigned)r19) ) goto label$5a9200e_8_36;
	hl_types_ArrayBytes_Int___expand(r14,r16);
	label$5a9200e_8_36:
	r17 = r14->bytes;
	r19 = 2;
	r19 = r16 << r19;
	*(int*)(r17 + r19) = r18;
	r8 = (kha__audio2__ogg__vorbis__$VorbisTools)g$84d8ab9;
	r12 = r8->integerDivideTable;
	if( r12 == NULL ) hl_null_access();
	r18 = r12->length;
	if( ((unsigned)r15) < ((unsigned)r18) ) goto label$5a9200e_8_46;
	hl_types_ArrayObj___expand(r12,r15);
	label$5a9200e_8_46:
	r9 = r12->array;
	((hl__types__ArrayBytes_Int*)(r9 + 1))[r15] = r14;
	r16 = 1;
	label$5a9200e_8_49:
	r19 = 64;
	if( r16 >= r19 ) goto label$5a9200e_8_74;
	r18 = r16;
	++r16;
	r8 = (kha__audio2__ogg__vorbis__$VorbisTools)g$84d8ab9;
	r12 = r8->integerDivideTable;
	if( r12 == NULL ) hl_null_access();
	r20 = r12->length;
	if( ((unsigned)r15) < ((unsigned)r20) ) goto label$5a9200e_8_61;
	r14 = NULL;
	goto label$5a9200e_8_64;
	label$5a9200e_8_61:
	r9 = r12->array;
	r13 = ((vdynamic**)(r9 + 1))[r15];
	r14 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r13,&t$_dyn,&t$hl_types_ArrayBytes_Int);
	label$5a9200e_8_64:
	if( r14 == NULL ) hl_null_access();
	r20 = r18 == 0 ? 0 : r15 / r18;
	r21 = r14->length;
	if( ((unsigned)r18) < ((unsigned)r21) ) goto label$5a9200e_8_69;
	hl_types_ArrayBytes_Int___expand(r14,r18);
	label$5a9200e_8_69:
	r17 = r14->bytes;
	r21 = 2;
	r21 = r18 << r21;
	*(int*)(r17 + r21) = r20;
	goto label$5a9200e_8_49;
	label$5a9200e_8_74:
	goto label$5a9200e_8_19;
	label$5a9200e_8_75:
	r11 = r4 - r2;
	r15 = r3 - r1;
	r18 = 0;
	if( r11 >= r18 ) goto label$5a9200e_8_81;
	r16 = -r11;
	goto label$5a9200e_8_82;
	label$5a9200e_8_81:
	r16 = r11;
	label$5a9200e_8_82:
	r19 = r2;
	r20 = 0;
	r22 = 64;
	if( r15 >= r22 ) goto label$5a9200e_8_139;
	r22 = 32;
	if( r16 >= r22 ) goto label$5a9200e_8_139;
	r22 = 0;
	if( r11 >= r22 ) goto label$5a9200e_8_115;
	r8 = (kha__audio2__ogg__vorbis__$VorbisTools)g$84d8ab9;
	r7 = r8->integerDivideTable;
	if( r7 == NULL ) hl_null_access();
	r23 = r7->length;
	if( ((unsigned)r16) < ((unsigned)r23) ) goto label$5a9200e_8_97;
	r14 = NULL;
	goto label$5a9200e_8_100;
	label$5a9200e_8_97:
	r9 = r7->array;
	r13 = ((vdynamic**)(r9 + 1))[r16];
	r14 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r13,&t$_dyn,&t$hl_types_ArrayBytes_Int);
	label$5a9200e_8_100:
	if( r14 == NULL ) hl_null_access();
	r23 = r14->length;
	if( ((unsigned)r15) < ((unsigned)r23) ) goto label$5a9200e_8_105;
	r22 = 0;
	goto label$5a9200e_8_109;
	label$5a9200e_8_105:
	r17 = r14->bytes;
	r23 = 2;
	r23 = r15 << r23;
	r22 = *(int*)(r17 + r23);
	label$5a9200e_8_109:
	r22 = -r22;
	r21 = r22;
	r24 = 1;
	r23 = r22 - r24;
	r22 = r23;
	goto label$5a9200e_8_138;
	label$5a9200e_8_115:
	r8 = (kha__audio2__ogg__vorbis__$VorbisTools)g$84d8ab9;
	r7 = r8->integerDivideTable;
	if( r7 == NULL ) hl_null_access();
	r24 = r7->length;
	if( ((unsigned)r16) < ((unsigned)r24) ) goto label$5a9200e_8_122;
	r14 = NULL;
	goto label$5a9200e_8_125;
	label$5a9200e_8_122:
	r9 = r7->array;
	r13 = ((vdynamic**)(r9 + 1))[r16];
	r14 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r13,&t$_dyn,&t$hl_types_ArrayBytes_Int);
	label$5a9200e_8_125:
	if( r14 == NULL ) hl_null_access();
	r24 = r14->length;
	if( ((unsigned)r15) < ((unsigned)r24) ) goto label$5a9200e_8_130;
	r23 = 0;
	goto label$5a9200e_8_134;
	label$5a9200e_8_130:
	r17 = r14->bytes;
	r24 = 2;
	r24 = r15 << r24;
	r23 = *(int*)(r17 + r24);
	label$5a9200e_8_134:
	r21 = r23;
	r24 = 1;
	r23 = r23 + r24;
	r22 = r23;
	label$5a9200e_8_138:
	goto label$5a9200e_8_149;
	label$5a9200e_8_139:
	r23 = r15 == 0 ? 0 : r11 / r15;
	r21 = r23;
	r24 = 0;
	if( r11 >= r24 ) goto label$5a9200e_8_146;
	r24 = 1;
	r23 = r21 - r24;
	goto label$5a9200e_8_148;
	label$5a9200e_8_146:
	r24 = 1;
	r23 = r21 + r24;
	label$5a9200e_8_148:
	r22 = r23;
	label$5a9200e_8_149:
	r25 = 0;
	if( r21 >= r25 ) goto label$5a9200e_8_153;
	r24 = -r21;
	goto label$5a9200e_8_154;
	label$5a9200e_8_153:
	r24 = r21;
	label$5a9200e_8_154:
	r24 = r24 * r15;
	r23 = r16 - r24;
	r16 = r23;
	if( r5 >= r3 ) goto label$5a9200e_8_159;
	r3 = r5;
	label$5a9200e_8_159:
	if( r0 == NULL ) hl_null_access();
	r28 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r28) ) goto label$5a9200e_8_164;
	r26 = 0.;
	goto label$5a9200e_8_168;
	label$5a9200e_8_164:
	r17 = r0->bytes;
	r28 = 3;
	r28 = r1 << r28;
	r26 = *(double*)(r17 + r28);
	label$5a9200e_8_168:
	r8 = (kha__audio2__ogg__vorbis__$VorbisTools)g$84d8ab9;
	r27 = r8->INVERSE_DB_TABLE;
	if( r27 == NULL ) hl_null_access();
	r28 = r27->length;
	if( ((unsigned)r2) < ((unsigned)r28) ) goto label$5a9200e_8_175;
	r29 = 0.;
	goto label$5a9200e_8_179;
	label$5a9200e_8_175:
	r17 = r27->bytes;
	r28 = 3;
	r28 = r2 << r28;
	r29 = *(double*)(r17 + r28);
	label$5a9200e_8_179:
	r26 = r26 * r29;
	r25 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r25) ) goto label$5a9200e_8_183;
	hl_types_ArrayBytes_Float___expand(r0,r1);
	label$5a9200e_8_183:
	r17 = r0->bytes;
	r25 = 3;
	r25 = r1 << r25;
	*(double*)(r17 + r25) = r26;
	r24 = 1;
	r23 = r1 + r24;
	r24 = r3;
	label$5a9200e_8_190:
	if( r23 >= r24 ) goto label$5a9200e_8_233;
	r25 = r23;
	++r23;
	r28 = r20 + r16;
	r20 = r28;
	if( r28 < r15 ) goto label$5a9200e_8_202;
	r28 = r28 - r15;
	r20 = r28;
	r28 = r19 + r22;
	r19 = r28;
	goto label$5a9200e_8_204;
	label$5a9200e_8_202:
	r28 = r19 + r21;
	r19 = r28;
	label$5a9200e_8_204:
	if( r0 == NULL ) hl_null_access();
	r31 = r0->length;
	if( ((unsigned)r25) < ((unsigned)r31) ) goto label$5a9200e_8_209;
	r26 = 0.;
	goto label$5a9200e_8_213;
	label$5a9200e_8_209:
	r17 = r0->bytes;
	r31 = 3;
	r31 = r25 << r31;
	r26 = *(double*)(r17 + r31);
	label$5a9200e_8_213:
	r8 = (kha__audio2__ogg__vorbis__$VorbisTools)g$84d8ab9;
	r27 = r8->INVERSE_DB_TABLE;
	if( r27 == NULL ) hl_null_access();
	r31 = r27->length;
	if( ((unsigned)r19) < ((unsigned)r31) ) goto label$5a9200e_8_220;
	r29 = 0.;
	goto label$5a9200e_8_224;
	label$5a9200e_8_220:
	r17 = r27->bytes;
	r31 = 3;
	r31 = r19 << r31;
	r29 = *(double*)(r17 + r31);
	label$5a9200e_8_224:
	r26 = r26 * r29;
	r30 = r0->length;
	if( ((unsigned)r25) < ((unsigned)r30) ) goto label$5a9200e_8_228;
	hl_types_ArrayBytes_Float___expand(r0,r25);
	label$5a9200e_8_228:
	r17 = r0->bytes;
	r30 = 3;
	r30 = r25 << r30;
	*(double*)(r17 + r30) = r26;
	goto label$5a9200e_8_190;
	label$5a9200e_8_233:
	return;
}

