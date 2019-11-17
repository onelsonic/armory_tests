﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/graphics4/PipelineState.h>
void kha_graphics4_PipelineStateBase_new(kha__graphics4__PipelineStateBase);
void kha_graphics4_PipelineState_init(kha__graphics4__PipelineState);
#include <hl/natives.h>
#include <kha/graphics4/VertexStructure.h>
#include <kha/graphics4/VertexElement.h>
extern hl_type $t_kha_graphics4_VertexStructure;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type $t_dyn;
extern hl_type $t_bytes;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
int kha_graphics4_VertexStructure_size(kha__graphics4__VertexStructure);
kha__graphics4__VertexElement kha_graphics4_VertexStructure_get(kha__graphics4__VertexStructure,int);
int kha_graphics4_PipelineState_getBlendFunc(int);
extern hl_type $t_bool;
#include <kha/korehl/graphics4/ConstantLocation.h>
extern hl_type $t_kha_korehl_graphics4_ConstantLocation;
void kha_korehl_graphics4_ConstantLocation_new(kha__korehl__graphics4__ConstantLocation,vbyte*);
extern hl_type $t_vrt_b840ca7;
#include <kha/korehl/graphics4/TextureUnit.h>
extern hl_type $t_kha_korehl_graphics4_TextureUnit;
void kha_korehl_graphics4_TextureUnit_new(kha__korehl__graphics4__TextureUnit,vbyte*);

void kha_graphics4_PipelineState_new(kha__graphics4__PipelineState r0) {
	kha_graphics4_PipelineStateBase_new(((kha__graphics4__PipelineStateBase)r0));
	kha_graphics4_PipelineState_init(r0);
	return;
}

void kha_graphics4_PipelineState_init(kha__graphics4__PipelineState r0) {
	vbyte *r1;
	r1 = hl_kore_create_pipeline();
	r0->_pipeline = r1;
	return;
}

void kha_graphics4_PipelineState_delete(kha__graphics4__PipelineState r0) {
	vbyte *r2;
	r2 = r0->_pipeline;
	hl_kore_delete_pipeline(r2);
	return;
}

void kha_graphics4_PipelineState_linkWithStructures2(kha__graphics4__PipelineState r0,kha__graphics4__VertexStructure r1,kha__graphics4__VertexStructure r2,kha__graphics4__VertexStructure r3,kha__graphics4__VertexStructure r4,int r5) {
	String r31;
	kha__graphics4__FragmentShader r10;
	hl__types__ArrayObj r14, r19;
	hl_type *r16;
	bool r23;
	kha__graphics4__TessellationControlShader r12;
	kha__graphics4__VertexShader r9;
	kha__graphics4__VertexElement r29;
	kha__graphics4__TessellationEvaluationShader r13;
	kha__graphics4__GeometryShader r11;
	int *r33;
	vdynamic *r25;
	kha__graphics4__VertexStructure r18;
	int r17, r20, r21, r22, r24, r26, r27, r28, r30, r32;
	varray *r15;
	vbyte *r7, *r8, *r34, *r35, *r36;
	r7 = r0->_pipeline;
	r9 = r0->vertexShader;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->_shader;
	hl_kore_pipeline_set_vertex_shader(r7,r8);
	r7 = r0->_pipeline;
	r10 = r0->fragmentShader;
	if( r10 == NULL ) hl_null_access();
	r8 = r10->_shader;
	hl_kore_pipeline_set_fragment_shader(r7,r8);
	r11 = r0->geometryShader;
	if( !r11 ) goto label$16082cb_4_17;
	r7 = r0->_pipeline;
	r11 = r0->geometryShader;
	if( r11 == NULL ) hl_null_access();
	r8 = r11->_shader;
	hl_kore_pipeline_set_geometry_shader(r7,r8);
	label$16082cb_4_17:
	r12 = r0->tessellationControlShader;
	if( !r12 ) goto label$16082cb_4_24;
	r7 = r0->_pipeline;
	r12 = r0->tessellationControlShader;
	if( r12 == NULL ) hl_null_access();
	r8 = r12->_shader;
	hl_kore_pipeline_set_tesscontrol_shader(r7,r8);
	label$16082cb_4_24:
	r13 = r0->tessellationEvaluationShader;
	if( !r13 ) goto label$16082cb_4_31;
	r7 = r0->_pipeline;
	r13 = r0->tessellationEvaluationShader;
	if( r13 == NULL ) hl_null_access();
	r8 = r13->_shader;
	hl_kore_pipeline_set_tesseval_shader(r7,r8);
	label$16082cb_4_31:
	r16 = &$t_kha_graphics4_VertexStructure;
	r17 = 4;
	r15 = hl_alloc_array(r16,r17);
	r17 = 0;
	((kha__graphics4__VertexStructure*)(r15 + 1))[r17] = r1;
	r17 = 1;
	((kha__graphics4__VertexStructure*)(r15 + 1))[r17] = r2;
	r17 = 2;
	((kha__graphics4__VertexStructure*)(r15 + 1))[r17] = r3;
	r17 = 3;
	((kha__graphics4__VertexStructure*)(r15 + 1))[r17] = r4;
	r14 = hl_types_ArrayObj_alloc(r15);
	r16 = &$t_dyn;
	r17 = 0;
	r15 = hl_alloc_array(r16,r17);
	r19 = hl_types_ArrayObj_alloc(r15);
	r17 = 0;
	r20 = r5;
	label$16082cb_4_49:
	if( r17 >= r20 ) goto label$16082cb_4_136;
	r21 = r17;
	++r17;
	if( r14 == NULL ) hl_null_access();
	r24 = r14->length;
	if( ((unsigned)r21) < ((unsigned)r24) ) goto label$16082cb_4_58;
	r18 = NULL;
	goto label$16082cb_4_61;
	label$16082cb_4_58:
	r15 = r14->array;
	r25 = ((vdynamic**)(r15 + 1))[r21];
	r18 = (kha__graphics4__VertexStructure)r25;
	label$16082cb_4_61:
	if( r18 == NULL ) hl_null_access();
	r23 = r18->instanced;
	r7 = hl_kore_create_vertexstructure(r23);
	if( r19 == NULL ) hl_null_access();
	if( r7 == NULL ) r25 = NULL; else {
		r25 = hl_alloc_dynamic(&$t_bytes);
		r25->v.ptr = r7;
	}
	r22 = hl_types_ArrayObj_push(r19,r25);
	r22 = 0;
	r26 = r14->length;
	if( ((unsigned)r21) < ((unsigned)r26) ) goto label$16082cb_4_72;
	r18 = NULL;
	goto label$16082cb_4_75;
	label$16082cb_4_72:
	r15 = r14->array;
	r25 = ((vdynamic**)(r15 + 1))[r21];
	r18 = (kha__graphics4__VertexStructure)r25;
	label$16082cb_4_75:
	if( r18 == NULL ) hl_null_access();
	r24 = kha_graphics4_VertexStructure_size(r18);
	label$16082cb_4_77:
	if( r22 >= r24 ) goto label$16082cb_4_135;
	r26 = r22;
	++r22;
	r27 = 0;
	if( r14 == NULL ) hl_null_access();
	r30 = r14->length;
	if( ((unsigned)r21) < ((unsigned)r30) ) goto label$16082cb_4_87;
	r18 = NULL;
	goto label$16082cb_4_90;
	label$16082cb_4_87:
	r15 = r14->array;
	r25 = ((vdynamic**)(r15 + 1))[r21];
	r18 = (kha__graphics4__VertexStructure)r25;
	label$16082cb_4_90:
	if( r18 == NULL ) hl_null_access();
	r29 = kha_graphics4_VertexStructure_get(r18,r26);
	if( r29 == NULL ) hl_null_access();
	r28 = r29->data;
	switch(r28) {
		default:
			goto label$16082cb_4_116;
		case 0:
			r28 = 1;
			r27 = r28;
			goto label$16082cb_4_116;
		case 1:
			r28 = 2;
			r27 = r28;
			goto label$16082cb_4_116;
		case 2:
			r28 = 3;
			r27 = r28;
			goto label$16082cb_4_116;
		case 3:
			r28 = 4;
			r27 = r28;
			goto label$16082cb_4_116;
		case 4:
			r28 = 5;
			r27 = r28;
			goto label$16082cb_4_116;
		case 5:
			r28 = 6;
			r27 = r28;
			goto label$16082cb_4_116;
		case 6:
			r28 = 7;
			r27 = r28;
	}
	label$16082cb_4_116:
	r28 = 0;
	r32 = r14->length;
	if( ((unsigned)r21) < ((unsigned)r32) ) goto label$16082cb_4_121;
	r18 = NULL;
	goto label$16082cb_4_124;
	label$16082cb_4_121:
	r15 = r14->array;
	r25 = ((vdynamic**)(r15 + 1))[r21];
	r18 = (kha__graphics4__VertexStructure)r25;
	label$16082cb_4_124:
	if( r18 == NULL ) hl_null_access();
	r29 = kha_graphics4_VertexStructure_get(r18,r26);
	if( r29 == NULL ) hl_null_access();
	r31 = r29->name;
	if( r31 == NULL ) hl_null_access();
	r8 = r31->bytes;
	r33 = &r28;
	r30 = 0;
	r35 = hl_utf16_to_utf8(r8,r30,r33);
	hl_kore_vertexstructure_add(r7,r35,r27);
	goto label$16082cb_4_77;
	label$16082cb_4_135:
	goto label$16082cb_4_49;
	label$16082cb_4_136:
	r7 = r0->_pipeline;
	if( r19 == NULL ) hl_null_access();
	r17 = 0;
	r20 = r19->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$16082cb_4_143;
	r8 = NULL;
	goto label$16082cb_4_146;
	label$16082cb_4_143:
	r15 = r19->array;
	r25 = ((vdynamic**)(r15 + 1))[r17];
	r8 = (vbyte*)hl_dyn_castp(&r25,&$t_dyn,&$t_bytes);
	label$16082cb_4_146:
	r20 = 1;
	if( r20 >= r5 ) goto label$16082cb_4_157;
	r17 = 1;
	r20 = r19->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$16082cb_4_153;
	r34 = NULL;
	goto label$16082cb_4_156;
	label$16082cb_4_153:
	r15 = r19->array;
	r25 = ((vdynamic**)(r15 + 1))[r17];
	r34 = (vbyte*)hl_dyn_castp(&r25,&$t_dyn,&$t_bytes);
	label$16082cb_4_156:
	goto label$16082cb_4_158;
	label$16082cb_4_157:
	r34 = NULL;
	label$16082cb_4_158:
	r20 = 2;
	if( r20 >= r5 ) goto label$16082cb_4_169;
	r17 = 2;
	r20 = r19->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$16082cb_4_165;
	r35 = NULL;
	goto label$16082cb_4_168;
	label$16082cb_4_165:
	r15 = r19->array;
	r25 = ((vdynamic**)(r15 + 1))[r17];
	r35 = (vbyte*)hl_dyn_castp(&r25,&$t_dyn,&$t_bytes);
	label$16082cb_4_168:
	goto label$16082cb_4_170;
	label$16082cb_4_169:
	r35 = NULL;
	label$16082cb_4_170:
	r20 = 3;
	if( r20 >= r5 ) goto label$16082cb_4_181;
	r17 = 3;
	r20 = r19->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$16082cb_4_177;
	r36 = NULL;
	goto label$16082cb_4_180;
	label$16082cb_4_177:
	r15 = r19->array;
	r25 = ((vdynamic**)(r15 + 1))[r17];
	r36 = (vbyte*)hl_dyn_castp(&r25,&$t_dyn,&$t_bytes);
	label$16082cb_4_180:
	goto label$16082cb_4_182;
	label$16082cb_4_181:
	r36 = NULL;
	label$16082cb_4_182:
	hl_kore_pipeline_compile(r7,r8,r34,r35,r36);
	return;
}

void kha_graphics4_PipelineState_compile(kha__graphics4__PipelineState r0) {
	hl__types__ArrayObj r18;
	venum *r3;
	bool r15, r21, r24, r25, r26, r27;
	vdynamic *r22;
	kha__graphics4__VertexStructure r28, r29, r30, r31;
	varray *r23;
	vbyte *r6;
	int r1, r4, r5, r7, r8, r9, r10, r11, r12, r13, r14, r16, r17, r19, r20;
	r1 = 0;
	r3 = r0->stencilReferenceValue;
	if( r3 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r3);
	r5 = 1;
	if( r4 != r5 ) goto label$16082cb_5_8;
	r4 = ((kha_graphics4_StencilValue_Static*)r3)->p0;
	r1 = r4;
	label$16082cb_5_8:
	r6 = r0->_pipeline;
	r4 = r0->cullMode;
	r5 = r0->depthMode;
	r7 = r0->stencilMode;
	r8 = r0->stencilBothPass;
	r9 = r0->stencilDepthFail;
	r10 = r0->stencilFail;
	r11 = r0->blendSource;
	r11 = kha_graphics4_PipelineState_getBlendFunc(r11);
	r12 = r0->blendDestination;
	r12 = kha_graphics4_PipelineState_getBlendFunc(r12);
	r13 = r0->alphaBlendSource;
	r13 = kha_graphics4_PipelineState_getBlendFunc(r13);
	r14 = r0->alphaBlendDestination;
	r14 = kha_graphics4_PipelineState_getBlendFunc(r14);
	r15 = r0->depthWrite;
	r16 = r0->stencilReadMask;
	r17 = r0->stencilWriteMask;
	r18 = r0->colorWriteMasksRed;
	if( r18 == NULL ) hl_null_access();
	r19 = 0;
	r20 = r18->length;
	if( ((unsigned)r19) < ((unsigned)r20) ) goto label$16082cb_5_33;
	r21 = false;
	goto label$16082cb_5_36;
	label$16082cb_5_33:
	r23 = r18->array;
	r22 = ((vdynamic**)(r23 + 1))[r19];
	r21 = (bool)hl_dyn_casti(&r22,&$t_dyn,&$t_bool);
	label$16082cb_5_36:
	r18 = r0->colorWriteMasksGreen;
	if( r18 == NULL ) hl_null_access();
	r19 = 0;
	r20 = r18->length;
	if( ((unsigned)r19) < ((unsigned)r20) ) goto label$16082cb_5_43;
	r24 = false;
	goto label$16082cb_5_46;
	label$16082cb_5_43:
	r23 = r18->array;
	r22 = ((vdynamic**)(r23 + 1))[r19];
	r24 = (bool)hl_dyn_casti(&r22,&$t_dyn,&$t_bool);
	label$16082cb_5_46:
	r18 = r0->colorWriteMasksBlue;
	if( r18 == NULL ) hl_null_access();
	r19 = 0;
	r20 = r18->length;
	if( ((unsigned)r19) < ((unsigned)r20) ) goto label$16082cb_5_53;
	r25 = false;
	goto label$16082cb_5_56;
	label$16082cb_5_53:
	r23 = r18->array;
	r22 = ((vdynamic**)(r23 + 1))[r19];
	r25 = (bool)hl_dyn_casti(&r22,&$t_dyn,&$t_bool);
	label$16082cb_5_56:
	r18 = r0->colorWriteMasksAlpha;
	if( r18 == NULL ) hl_null_access();
	r19 = 0;
	r20 = r18->length;
	if( ((unsigned)r19) < ((unsigned)r20) ) goto label$16082cb_5_63;
	r26 = false;
	goto label$16082cb_5_66;
	label$16082cb_5_63:
	r23 = r18->array;
	r22 = ((vdynamic**)(r23 + 1))[r19];
	r26 = (bool)hl_dyn_casti(&r22,&$t_dyn,&$t_bool);
	label$16082cb_5_66:
	r27 = r0->conservativeRasterization;
	hl_kore_pipeline_set_states(r6,r4,r5,r7,r8,r9,r10,r11,r12,r13,r14,r15,r1,r16,r17,r21,r24,r25,r26,r27);
	r18 = r0->inputLayout;
	if( r18 == NULL ) hl_null_access();
	r4 = r18->length;
	r5 = 0;
	if( r5 >= r4 ) goto label$16082cb_5_84;
	r18 = r0->inputLayout;
	if( r18 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r18->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$16082cb_5_80;
	r28 = NULL;
	goto label$16082cb_5_83;
	label$16082cb_5_80:
	r23 = r18->array;
	r22 = ((vdynamic**)(r23 + 1))[r4];
	r28 = (kha__graphics4__VertexStructure)r22;
	label$16082cb_5_83:
	goto label$16082cb_5_85;
	label$16082cb_5_84:
	r28 = NULL;
	label$16082cb_5_85:
	r18 = r0->inputLayout;
	if( r18 == NULL ) hl_null_access();
	r4 = r18->length;
	r5 = 1;
	if( r5 >= r4 ) goto label$16082cb_5_101;
	r18 = r0->inputLayout;
	if( r18 == NULL ) hl_null_access();
	r4 = 1;
	r5 = r18->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$16082cb_5_97;
	r29 = NULL;
	goto label$16082cb_5_100;
	label$16082cb_5_97:
	r23 = r18->array;
	r22 = ((vdynamic**)(r23 + 1))[r4];
	r29 = (kha__graphics4__VertexStructure)r22;
	label$16082cb_5_100:
	goto label$16082cb_5_102;
	label$16082cb_5_101:
	r29 = NULL;
	label$16082cb_5_102:
	r18 = r0->inputLayout;
	if( r18 == NULL ) hl_null_access();
	r4 = r18->length;
	r5 = 2;
	if( r5 >= r4 ) goto label$16082cb_5_118;
	r18 = r0->inputLayout;
	if( r18 == NULL ) hl_null_access();
	r4 = 2;
	r5 = r18->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$16082cb_5_114;
	r30 = NULL;
	goto label$16082cb_5_117;
	label$16082cb_5_114:
	r23 = r18->array;
	r22 = ((vdynamic**)(r23 + 1))[r4];
	r30 = (kha__graphics4__VertexStructure)r22;
	label$16082cb_5_117:
	goto label$16082cb_5_119;
	label$16082cb_5_118:
	r30 = NULL;
	label$16082cb_5_119:
	r18 = r0->inputLayout;
	if( r18 == NULL ) hl_null_access();
	r4 = r18->length;
	r5 = 3;
	if( r5 >= r4 ) goto label$16082cb_5_135;
	r18 = r0->inputLayout;
	if( r18 == NULL ) hl_null_access();
	r4 = 3;
	r5 = r18->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$16082cb_5_131;
	r31 = NULL;
	goto label$16082cb_5_134;
	label$16082cb_5_131:
	r23 = r18->array;
	r22 = ((vdynamic**)(r23 + 1))[r4];
	r31 = (kha__graphics4__VertexStructure)r22;
	label$16082cb_5_134:
	goto label$16082cb_5_136;
	label$16082cb_5_135:
	r31 = NULL;
	label$16082cb_5_136:
	r18 = r0->inputLayout;
	if( r18 == NULL ) hl_null_access();
	r4 = r18->length;
	kha_graphics4_PipelineState_linkWithStructures2(r0,r28,r29,r30,r31,r4);
	return;
}

vvirtual* kha_graphics4_PipelineState_getConstantLocation(kha__graphics4__PipelineState r0,String r1) {
	vvirtual *r11;
	kha__korehl__graphics4__ConstantLocation r7;
	int *r6;
	int r4, r10;
	vbyte *r2, *r5, *r8, *r9;
	r2 = r0->_pipeline;
	r4 = 0;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->bytes;
	r6 = &r4;
	r7 = (kha__korehl__graphics4__ConstantLocation)hl_alloc_obj(&$t_kha_korehl_graphics4_ConstantLocation);
	r10 = 0;
	r9 = hl_utf16_to_utf8(r5,r10,r6);
	r8 = hl_kore_pipeline_get_constantlocation(r2,r9);
	kha_korehl_graphics4_ConstantLocation_new(r7,r8);
	if( r7 ) goto label$16082cb_6_13;
	r11 = NULL;
	goto label$16082cb_6_17;
	label$16082cb_6_13:
	r11 = r7->$_f1;
	if( r11 ) goto label$16082cb_6_17;
	r11 = hl_to_virtual(&$t_vrt_b840ca7,(vdynamic*)r7);
	r7->$_f1 = r11;
	label$16082cb_6_17:
	return r11;
}

vvirtual* kha_graphics4_PipelineState_getTextureUnit(kha__graphics4__PipelineState r0,String r1) {
	vvirtual *r11;
	kha__korehl__graphics4__TextureUnit r7;
	int *r6;
	int r4, r10;
	vbyte *r2, *r5, *r8, *r9;
	r2 = r0->_pipeline;
	r4 = 0;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->bytes;
	r6 = &r4;
	r7 = (kha__korehl__graphics4__TextureUnit)hl_alloc_obj(&$t_kha_korehl_graphics4_TextureUnit);
	r10 = 0;
	r9 = hl_utf16_to_utf8(r5,r10,r6);
	r8 = hl_kore_pipeline_get_textureunit(r2,r9);
	kha_korehl_graphics4_TextureUnit_new(r7,r8);
	if( r7 ) goto label$16082cb_7_13;
	r11 = NULL;
	goto label$16082cb_7_17;
	label$16082cb_7_13:
	r11 = r7->$_f1;
	if( r11 ) goto label$16082cb_7_17;
	r11 = hl_to_virtual(&$t_vrt_b840ca7,(vdynamic*)r7);
	r7->$_f1 = r11;
	label$16082cb_7_17:
	return r11;
}

int kha_graphics4_PipelineState_getBlendFunc(int r0) {
	int r1;
	switch(r0) {
		default:
			r1 = 0;
			return r1;
		case 0:
		case 1:
			r1 = 0;
			return r1;
		case 2:
			r1 = 1;
			return r1;
		case 3:
			r1 = 2;
			return r1;
		case 4:
			r1 = 3;
			return r1;
		case 5:
			r1 = 4;
			return r1;
		case 6:
			r1 = 5;
			return r1;
		case 7:
			r1 = 6;
			return r1;
		case 8:
			r1 = 7;
			return r1;
		case 9:
			r1 = 8;
			return r1;
		case 10:
			r1 = 9;
			return r1;
	}
}

void kha_graphics4_PipelineState_set(kha__graphics4__PipelineState r0) {
	vbyte *r2;
	r2 = r0->_pipeline;
	hl_kore_pipeline_set(r2);
	return;
}

