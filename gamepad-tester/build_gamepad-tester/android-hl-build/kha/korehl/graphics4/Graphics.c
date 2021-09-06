﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/korehl/graphics4/Graphics.h>
#include <hl/natives.h>
#include <kha/korehl/graphics4/TextureUnit.h>
extern hl_type $t_kha_korehl_graphics4_TextureUnit;
extern hl_type $t_vrt_b840ca7;
void kha_graphics4_PipelineState_set(kha__graphics4__PipelineState);
#include <kha/korehl/graphics4/ConstantLocation.h>
extern hl_type $t_kha_korehl_graphics4_ConstantLocation;
extern hl_type $t_kha_Image;
extern hl_type $t_vrt_8a7100d;
extern hl_type $t_kha_graphics4_CubeMap;

void kha_korehl_graphics4_Graphics_new(kha__korehl__graphics4__Graphics r0,vvirtual* r1) {
	r0->target = r1;
	return;
}

void kha_korehl_graphics4_Graphics_clear(kha__korehl__graphics4__Graphics r0,vdynamic* r1,vdynamic* r2,vdynamic* r3) {
	float r8;
	int r4, r6, r7, r9;
	r4 = 0;
	if( !r1 ) goto label$cb1cbbc_2_5;
	r7 = 1;
	r6 = r4 | r7;
	r4 = r6;
	label$cb1cbbc_2_5:
	if( !r2 ) goto label$cb1cbbc_2_9;
	r7 = 2;
	r6 = r4 | r7;
	r4 = r6;
	label$cb1cbbc_2_9:
	if( !r3 ) goto label$cb1cbbc_2_13;
	r7 = 4;
	r6 = r4 | r7;
	r4 = r6;
	label$cb1cbbc_2_13:
	if( r1 ) goto label$cb1cbbc_2_16;
	r7 = 0;
	goto label$cb1cbbc_2_17;
	label$cb1cbbc_2_16:
	r7 = r1 ? r1->v.i : 0;
	label$cb1cbbc_2_17:
	r8 = r2 ? r2->v.f : 0;
	r9 = r3 ? r3->v.i : 0;
	hl_kore_graphics_clear(r4,r7,r8,r9);
	return;
}

void kha_korehl_graphics4_Graphics_viewport(kha__korehl__graphics4__Graphics r0,int r1,int r2,int r3,int r4) {
	hl_kore_graphics_viewport(r1,r2,r3,r4);
	return;
}

void kha_korehl_graphics4_Graphics_setVertexBuffer(kha__korehl__graphics4__Graphics r0,kha__graphics4__VertexBuffer r1) {
	vbyte *r3;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_buffer;
	hl_kore_graphics_set_vertexbuffer(r3);
	return;
}

void kha_korehl_graphics4_Graphics_setVertexBuffers(kha__korehl__graphics4__Graphics r0,hl__types__ArrayObj r1) {
	kha__graphics4__VertexBuffer r6;
	vdynamic *r7;
	varray *r8;
	int r4, r5;
	vbyte *r3, *r9, *r10, *r11;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->length;
	r5 = 0;
	if( r5 >= r4 ) goto label$cb1cbbc_5_15;
	r4 = 0;
	r5 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$cb1cbbc_5_9;
	r6 = NULL;
	goto label$cb1cbbc_5_12;
	label$cb1cbbc_5_9:
	r8 = r1->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (kha__graphics4__VertexBuffer)r7;
	label$cb1cbbc_5_12:
	if( r6 == NULL ) hl_null_access();
	r3 = r6->_buffer;
	goto label$cb1cbbc_5_16;
	label$cb1cbbc_5_15:
	r3 = NULL;
	label$cb1cbbc_5_16:
	r4 = r1->length;
	r5 = 1;
	if( r5 >= r4 ) goto label$cb1cbbc_5_30;
	r4 = 1;
	r5 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$cb1cbbc_5_24;
	r6 = NULL;
	goto label$cb1cbbc_5_27;
	label$cb1cbbc_5_24:
	r8 = r1->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (kha__graphics4__VertexBuffer)r7;
	label$cb1cbbc_5_27:
	if( r6 == NULL ) hl_null_access();
	r9 = r6->_buffer;
	goto label$cb1cbbc_5_31;
	label$cb1cbbc_5_30:
	r9 = NULL;
	label$cb1cbbc_5_31:
	r4 = r1->length;
	r5 = 2;
	if( r5 >= r4 ) goto label$cb1cbbc_5_45;
	r4 = 2;
	r5 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$cb1cbbc_5_39;
	r6 = NULL;
	goto label$cb1cbbc_5_42;
	label$cb1cbbc_5_39:
	r8 = r1->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (kha__graphics4__VertexBuffer)r7;
	label$cb1cbbc_5_42:
	if( r6 == NULL ) hl_null_access();
	r10 = r6->_buffer;
	goto label$cb1cbbc_5_46;
	label$cb1cbbc_5_45:
	r10 = NULL;
	label$cb1cbbc_5_46:
	r4 = r1->length;
	r5 = 3;
	if( r5 >= r4 ) goto label$cb1cbbc_5_60;
	r4 = 3;
	r5 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$cb1cbbc_5_54;
	r6 = NULL;
	goto label$cb1cbbc_5_57;
	label$cb1cbbc_5_54:
	r8 = r1->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (kha__graphics4__VertexBuffer)r7;
	label$cb1cbbc_5_57:
	if( r6 == NULL ) hl_null_access();
	r11 = r6->_buffer;
	goto label$cb1cbbc_5_61;
	label$cb1cbbc_5_60:
	r11 = NULL;
	label$cb1cbbc_5_61:
	r4 = r1->length;
	hl_kore_graphics_set_vertexbuffers(r3,r9,r10,r11,r4);
	return;
}

void kha_korehl_graphics4_Graphics_setIndexBuffer(kha__korehl__graphics4__Graphics r0,kha__graphics4__IndexBuffer r1) {
	vbyte *r3;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_buffer;
	hl_kore_graphics_set_indexbuffer(r3);
	return;
}

void kha_korehl_graphics4_Graphics_setCubeMap(kha__korehl__graphics4__Graphics r0,vvirtual* r1,kha__graphics4__CubeMap r2) {
	kha__korehl__graphics4__TextureUnit r5;
	vbyte *r4, *r6;
	if( r2 ) goto label$cb1cbbc_7_2;
	return;
	label$cb1cbbc_7_2:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->_texture;
	if( !r4 ) goto label$cb1cbbc_7_11;
	r5 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_unit;
	r6 = r2->_texture;
	hl_kore_graphics_set_cubemap_texture(r4,r6);
	goto label$cb1cbbc_7_16;
	label$cb1cbbc_7_11:
	r5 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_unit;
	r6 = r2->_renderTarget;
	hl_kore_graphics_set_cubemap_target(r4,r6);
	label$cb1cbbc_7_16:
	return;
}

void kha_korehl_graphics4_Graphics_setCubeMapDepth(kha__korehl__graphics4__Graphics r0,vvirtual* r1,kha__graphics4__CubeMap r2) {
	kha__korehl__graphics4__TextureUnit r5;
	vbyte *r4, *r6;
	if( r2 ) goto label$cb1cbbc_8_2;
	return;
	label$cb1cbbc_8_2:
	r5 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_unit;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->_renderTarget;
	hl_kore_graphics_set_cubemap_depth(r4,r6);
	return;
}

void kha_korehl_graphics4_Graphics_scissor(kha__korehl__graphics4__Graphics r0,int r1,int r2,int r3,int r4) {
	hl_kore_graphics_scissor(r1,r2,r3,r4);
	return;
}

void kha_korehl_graphics4_Graphics_disableScissor(kha__korehl__graphics4__Graphics r0) {
	hl_kore_graphics_disable_scissor();
	return;
}

bool kha_korehl_graphics4_Graphics_renderTargetsInvertedY(kha__korehl__graphics4__Graphics r0) {
	bool r1;
	r1 = hl_kore_graphics_render_targets_inverted_y();
	return r1;
}

int kha_korehl_graphics4_Graphics_getTextureAddressing(kha__korehl__graphics4__Graphics r0,int r1) {
	int r2;
	switch(r1) {
		default:
			goto label$cb1cbbc_12_8;
		case 0:
			r2 = 0;
			return r2;
		case 1:
			r2 = 1;
			return r2;
		case 2:
			r2 = 2;
			return r2;
	}
	label$cb1cbbc_12_8:
	r2 = 0;
	return r2;
}

int kha_korehl_graphics4_Graphics_getTextureFilter(kha__korehl__graphics4__Graphics r0,int r1) {
	int r2;
	switch(r1) {
		default:
			goto label$cb1cbbc_13_8;
		case 0:
			r2 = 0;
			return r2;
		case 1:
			r2 = 1;
			return r2;
		case 2:
			r2 = 2;
			return r2;
	}
	label$cb1cbbc_13_8:
	r2 = 0;
	return r2;
}

int kha_korehl_graphics4_Graphics_getTextureMipMapFilter(kha__korehl__graphics4__Graphics r0,int r1) {
	int r2;
	switch(r1) {
		default:
			goto label$cb1cbbc_14_8;
		case 0:
			r2 = 0;
			return r2;
		case 1:
			r2 = 1;
			return r2;
		case 2:
			r2 = 2;
			return r2;
	}
	label$cb1cbbc_14_8:
	r2 = 0;
	return r2;
}

void kha_korehl_graphics4_Graphics_setTextureParameters(kha__korehl__graphics4__Graphics r0,vvirtual* r1,int r2,int r3,int r4,int r5,int r6) {
	kha__korehl__graphics4__TextureUnit r9;
	int r10, r11, r12, r13, r14;
	vbyte *r8;
	r9 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r9 == NULL ) hl_null_access();
	r8 = r9->_unit;
	r10 = kha_korehl_graphics4_Graphics_getTextureAddressing(r0,r2);
	r11 = kha_korehl_graphics4_Graphics_getTextureAddressing(r0,r3);
	r12 = kha_korehl_graphics4_Graphics_getTextureFilter(r0,r4);
	r13 = kha_korehl_graphics4_Graphics_getTextureFilter(r0,r5);
	r14 = kha_korehl_graphics4_Graphics_getTextureMipMapFilter(r0,r6);
	hl_kore_graphics_set_texture_parameters(r8,r10,r11,r12,r13,r14);
	return;
}

void kha_korehl_graphics4_Graphics_setTexture3DParameters(kha__korehl__graphics4__Graphics r0,vvirtual* r1,int r2,int r3,int r4,int r5,int r6,int r7) {
	kha__korehl__graphics4__TextureUnit r10;
	int r11, r12, r13, r14, r15, r16;
	vbyte *r9;
	r10 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r10 == NULL ) hl_null_access();
	r9 = r10->_unit;
	r11 = kha_korehl_graphics4_Graphics_getTextureAddressing(r0,r2);
	r12 = kha_korehl_graphics4_Graphics_getTextureAddressing(r0,r3);
	r13 = kha_korehl_graphics4_Graphics_getTextureAddressing(r0,r4);
	r14 = kha_korehl_graphics4_Graphics_getTextureFilter(r0,r5);
	r15 = kha_korehl_graphics4_Graphics_getTextureFilter(r0,r6);
	r16 = kha_korehl_graphics4_Graphics_getTextureMipMapFilter(r0,r7);
	hl_kore_graphics_set_texture3d_parameters(r9,r11,r12,r13,r14,r15,r16);
	return;
}

void kha_korehl_graphics4_Graphics_setTextureCompareMode(kha__korehl__graphics4__Graphics r0,vvirtual* r1,bool r2) {
	kha__korehl__graphics4__TextureUnit r5;
	vbyte *r4;
	r5 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_unit;
	hl_kore_graphics_set_texture_compare_mode(r4,r2);
	return;
}

void kha_korehl_graphics4_Graphics_setCubeMapCompareMode(kha__korehl__graphics4__Graphics r0,vvirtual* r1,bool r2) {
	kha__korehl__graphics4__TextureUnit r5;
	vbyte *r4;
	r5 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_unit;
	hl_kore_graphics_set_cube_map_compare_mode(r4,r2);
	return;
}

void kha_korehl_graphics4_Graphics_setTexture(kha__korehl__graphics4__Graphics r0,vvirtual* r1,kha__Image r2) {
	kha__korehl__graphics4__TextureUnit r5;
	vbyte *r4, *r6;
	if( r2 ) goto label$cb1cbbc_19_2;
	return;
	label$cb1cbbc_19_2:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->_texture;
	if( !r4 ) goto label$cb1cbbc_19_11;
	r5 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_unit;
	r6 = r2->_texture;
	hl_kore_graphics_set_texture(r4,r6);
	goto label$cb1cbbc_19_16;
	label$cb1cbbc_19_11:
	r5 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_unit;
	r6 = r2->_renderTarget;
	hl_kore_graphics_set_render_target(r4,r6);
	label$cb1cbbc_19_16:
	return;
}

void kha_korehl_graphics4_Graphics_setTextureDepth(kha__korehl__graphics4__Graphics r0,vvirtual* r1,kha__Image r2) {
	kha__korehl__graphics4__TextureUnit r5;
	vbyte *r4, *r6;
	if( r2 ) goto label$cb1cbbc_20_2;
	return;
	label$cb1cbbc_20_2:
	r5 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_unit;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->_renderTarget;
	hl_kore_graphics_set_texture_depth(r4,r6);
	return;
}

void kha_korehl_graphics4_Graphics_setImageTexture(kha__korehl__graphics4__Graphics r0,vvirtual* r1,kha__Image r2) {
	kha__korehl__graphics4__TextureUnit r5;
	vbyte *r4, *r6;
	r5 = (kha__korehl__graphics4__TextureUnit)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_TextureUnit);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_unit;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->_texture;
	hl_kore_graphics_set_image_texture(r4,r6);
	return;
}

void kha_korehl_graphics4_Graphics_setPipeline(kha__korehl__graphics4__Graphics r0,kha__graphics4__PipelineState r1) {
	if( r1 == NULL ) hl_null_access();
	kha_graphics4_PipelineState_set(r1);
	return;
}

void kha_korehl_graphics4_Graphics_setBool(kha__korehl__graphics4__Graphics r0,vvirtual* r1,bool r2) {
	kha__korehl__graphics4__ConstantLocation r5;
	vbyte *r4;
	r5 = (kha__korehl__graphics4__ConstantLocation)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_ConstantLocation);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_location;
	hl_kore_graphics_set_bool(r4,r2);
	return;
}

void kha_korehl_graphics4_Graphics_setInt(kha__korehl__graphics4__Graphics r0,vvirtual* r1,int r2) {
	kha__korehl__graphics4__ConstantLocation r5;
	vbyte *r4;
	r5 = (kha__korehl__graphics4__ConstantLocation)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_ConstantLocation);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_location;
	hl_kore_graphics_set_int(r4,r2);
	return;
}

void kha_korehl_graphics4_Graphics_setFloat(kha__korehl__graphics4__Graphics r0,vvirtual* r1,float r2) {
	kha__korehl__graphics4__ConstantLocation r5;
	vbyte *r4;
	r5 = (kha__korehl__graphics4__ConstantLocation)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_ConstantLocation);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_location;
	hl_kore_graphics_set_float(r4,r2);
	return;
}

void kha_korehl_graphics4_Graphics_setFloat2(kha__korehl__graphics4__Graphics r0,vvirtual* r1,float r2,float r3) {
	kha__korehl__graphics4__ConstantLocation r6;
	vbyte *r5;
	r6 = (kha__korehl__graphics4__ConstantLocation)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_ConstantLocation);
	if( r6 == NULL ) hl_null_access();
	r5 = r6->_location;
	hl_kore_graphics_set_float2(r5,r2,r3);
	return;
}

void kha_korehl_graphics4_Graphics_setFloat3(kha__korehl__graphics4__Graphics r0,vvirtual* r1,float r2,float r3,float r4) {
	kha__korehl__graphics4__ConstantLocation r7;
	vbyte *r6;
	r7 = (kha__korehl__graphics4__ConstantLocation)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_ConstantLocation);
	if( r7 == NULL ) hl_null_access();
	r6 = r7->_location;
	hl_kore_graphics_set_float3(r6,r2,r3,r4);
	return;
}

void kha_korehl_graphics4_Graphics_setFloat4(kha__korehl__graphics4__Graphics r0,vvirtual* r1,float r2,float r3,float r4,float r5) {
	kha__korehl__graphics4__ConstantLocation r8;
	vbyte *r7;
	r8 = (kha__korehl__graphics4__ConstantLocation)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_ConstantLocation);
	if( r8 == NULL ) hl_null_access();
	r7 = r8->_location;
	hl_kore_graphics_set_float4(r7,r2,r3,r4,r5);
	return;
}

void kha_korehl_graphics4_Graphics_setFloats(kha__korehl__graphics4__Graphics r0,vvirtual* r1,kha__arrays__Float32ArrayPrivate r2) {
	kha__korehl__graphics4__ConstantLocation r5;
	int r7;
	vbyte *r4, *r6;
	r5 = (kha__korehl__graphics4__ConstantLocation)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_ConstantLocation);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_location;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->self;
	r7 = r2->length;
	hl_kore_graphics_set_floats(r4,r6,r7);
	return;
}

void kha_korehl_graphics4_Graphics_setMatrix(kha__korehl__graphics4__Graphics r0,vvirtual* r1,kha__math__FastMatrix4 r2) {
	kha__korehl__graphics4__ConstantLocation r5;
	float r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21;
	vbyte *r4;
	r5 = (kha__korehl__graphics4__ConstantLocation)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_ConstantLocation);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_location;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->_00;
	r7 = r2->_10;
	r8 = r2->_20;
	r9 = r2->_30;
	r10 = r2->_01;
	r11 = r2->_11;
	r12 = r2->_21;
	r13 = r2->_31;
	r14 = r2->_02;
	r15 = r2->_12;
	r16 = r2->_22;
	r17 = r2->_32;
	r18 = r2->_03;
	r19 = r2->_13;
	r20 = r2->_23;
	r21 = r2->_33;
	hl_kore_graphics_set_matrix(r4,r6,r7,r8,r9,r10,r11,r12,r13,r14,r15,r16,r17,r18,r19,r20,r21);
	return;
}

void kha_korehl_graphics4_Graphics_setMatrix3(kha__korehl__graphics4__Graphics r0,vvirtual* r1,kha__math__FastMatrix3 r2) {
	kha__korehl__graphics4__ConstantLocation r5;
	float r6, r7, r8, r9, r10, r11, r12, r13, r14;
	vbyte *r4;
	r5 = (kha__korehl__graphics4__ConstantLocation)hl_dyn_castp(&r1,&$t_vrt_b840ca7,&$t_kha_korehl_graphics4_ConstantLocation);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->_location;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->_00;
	r7 = r2->_10;
	r8 = r2->_20;
	r9 = r2->_01;
	r10 = r2->_11;
	r11 = r2->_21;
	r12 = r2->_02;
	r13 = r2->_12;
	r14 = r2->_22;
	hl_kore_graphics_set_matrix3(r4,r6,r7,r8,r9,r10,r11,r12,r13,r14);
	return;
}

void kha_korehl_graphics4_Graphics_drawIndexedVertices(kha__korehl__graphics4__Graphics r0,int* r1,int* r2) {
	int r3, r4, r6;
	if( r1 ) goto label$cb1cbbc_32_3;
	r3 = 0;
	goto label$cb1cbbc_32_4;
	label$cb1cbbc_32_3:
	r3 = *r1;
	label$cb1cbbc_32_4:
	if( r2 ) goto label$cb1cbbc_32_7;
	r4 = -1;
	goto label$cb1cbbc_32_8;
	label$cb1cbbc_32_7:
	r4 = *r2;
	label$cb1cbbc_32_8:
	r6 = 0;
	if( r4 >= r6 ) goto label$cb1cbbc_32_12;
	hl_kore_graphics_draw_all_indexed_vertices();
	goto label$cb1cbbc_32_13;
	label$cb1cbbc_32_12:
	hl_kore_graphics_draw_indexed_vertices(r3,r4);
	label$cb1cbbc_32_13:
	return;
}

void kha_korehl_graphics4_Graphics_drawIndexedVerticesInstanced(kha__korehl__graphics4__Graphics r0,int r1,int* r2,int* r3) {
	int r4, r5, r7;
	if( r2 ) goto label$cb1cbbc_33_3;
	r4 = 0;
	goto label$cb1cbbc_33_4;
	label$cb1cbbc_33_3:
	r4 = *r2;
	label$cb1cbbc_33_4:
	if( r3 ) goto label$cb1cbbc_33_7;
	r5 = -1;
	goto label$cb1cbbc_33_8;
	label$cb1cbbc_33_7:
	r5 = *r3;
	label$cb1cbbc_33_8:
	r7 = 0;
	if( r5 >= r7 ) goto label$cb1cbbc_33_12;
	hl_kore_graphics_draw_all_indexed_vertices_instanced(r1);
	goto label$cb1cbbc_33_13;
	label$cb1cbbc_33_12:
	hl_kore_graphics_draw_indexed_vertices_instanced(r1,r4,r5);
	label$cb1cbbc_33_13:
	return;
}

void kha_korehl_graphics4_Graphics_renderToTexture(kha__korehl__graphics4__Graphics r0,hl__types__ArrayObj r1) {
	kha__Image r6;
	vvirtual *r5;
	vdynamic *r10;
	varray *r11;
	vbyte *r4, *r7, *r12, *r13, *r14, *r15, *r16, *r17;
	int r3, r8, r9;
	if( !r1 ) goto label$cb1cbbc_34_116;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->length;
	r5 = r0->target;
	r6 = (kha__Image)hl_dyn_castp(&r5,&$t_vrt_8a7100d,&$t_kha_Image);
	if( r6 == NULL ) hl_null_access();
	r4 = r6->_renderTarget;
	r9 = 0;
	if( r9 >= r3 ) goto label$cb1cbbc_34_21;
	r8 = 0;
	r9 = r1->length;
	if( ((unsigned)r8) < ((unsigned)r9) ) goto label$cb1cbbc_34_14;
	r5 = NULL;
	goto label$cb1cbbc_34_17;
	label$cb1cbbc_34_14:
	r11 = r1->array;
	r10 = ((vdynamic**)(r11 + 1))[r8];
	r5 = hl_to_virtual(&$t_vrt_8a7100d,(vdynamic*)r10);
	label$cb1cbbc_34_17:
	r6 = (kha__Image)hl_dyn_castp(&r5,&$t_vrt_8a7100d,&$t_kha_Image);
	if( r6 == NULL ) hl_null_access();
	r7 = r6->_renderTarget;
	goto label$cb1cbbc_34_22;
	label$cb1cbbc_34_21:
	r7 = NULL;
	label$cb1cbbc_34_22:
	r9 = 1;
	if( r9 >= r3 ) goto label$cb1cbbc_34_36;
	r8 = 1;
	r9 = r1->length;
	if( ((unsigned)r8) < ((unsigned)r9) ) goto label$cb1cbbc_34_29;
	r5 = NULL;
	goto label$cb1cbbc_34_32;
	label$cb1cbbc_34_29:
	r11 = r1->array;
	r10 = ((vdynamic**)(r11 + 1))[r8];
	r5 = hl_to_virtual(&$t_vrt_8a7100d,(vdynamic*)r10);
	label$cb1cbbc_34_32:
	r6 = (kha__Image)hl_dyn_castp(&r5,&$t_vrt_8a7100d,&$t_kha_Image);
	if( r6 == NULL ) hl_null_access();
	r12 = r6->_renderTarget;
	goto label$cb1cbbc_34_37;
	label$cb1cbbc_34_36:
	r12 = NULL;
	label$cb1cbbc_34_37:
	r9 = 2;
	if( r9 >= r3 ) goto label$cb1cbbc_34_51;
	r8 = 2;
	r9 = r1->length;
	if( ((unsigned)r8) < ((unsigned)r9) ) goto label$cb1cbbc_34_44;
	r5 = NULL;
	goto label$cb1cbbc_34_47;
	label$cb1cbbc_34_44:
	r11 = r1->array;
	r10 = ((vdynamic**)(r11 + 1))[r8];
	r5 = hl_to_virtual(&$t_vrt_8a7100d,(vdynamic*)r10);
	label$cb1cbbc_34_47:
	r6 = (kha__Image)hl_dyn_castp(&r5,&$t_vrt_8a7100d,&$t_kha_Image);
	if( r6 == NULL ) hl_null_access();
	r13 = r6->_renderTarget;
	goto label$cb1cbbc_34_52;
	label$cb1cbbc_34_51:
	r13 = NULL;
	label$cb1cbbc_34_52:
	r9 = 3;
	if( r9 >= r3 ) goto label$cb1cbbc_34_66;
	r8 = 3;
	r9 = r1->length;
	if( ((unsigned)r8) < ((unsigned)r9) ) goto label$cb1cbbc_34_59;
	r5 = NULL;
	goto label$cb1cbbc_34_62;
	label$cb1cbbc_34_59:
	r11 = r1->array;
	r10 = ((vdynamic**)(r11 + 1))[r8];
	r5 = hl_to_virtual(&$t_vrt_8a7100d,(vdynamic*)r10);
	label$cb1cbbc_34_62:
	r6 = (kha__Image)hl_dyn_castp(&r5,&$t_vrt_8a7100d,&$t_kha_Image);
	if( r6 == NULL ) hl_null_access();
	r14 = r6->_renderTarget;
	goto label$cb1cbbc_34_67;
	label$cb1cbbc_34_66:
	r14 = NULL;
	label$cb1cbbc_34_67:
	r9 = 4;
	if( r9 >= r3 ) goto label$cb1cbbc_34_81;
	r8 = 4;
	r9 = r1->length;
	if( ((unsigned)r8) < ((unsigned)r9) ) goto label$cb1cbbc_34_74;
	r5 = NULL;
	goto label$cb1cbbc_34_77;
	label$cb1cbbc_34_74:
	r11 = r1->array;
	r10 = ((vdynamic**)(r11 + 1))[r8];
	r5 = hl_to_virtual(&$t_vrt_8a7100d,(vdynamic*)r10);
	label$cb1cbbc_34_77:
	r6 = (kha__Image)hl_dyn_castp(&r5,&$t_vrt_8a7100d,&$t_kha_Image);
	if( r6 == NULL ) hl_null_access();
	r15 = r6->_renderTarget;
	goto label$cb1cbbc_34_82;
	label$cb1cbbc_34_81:
	r15 = NULL;
	label$cb1cbbc_34_82:
	r9 = 5;
	if( r9 >= r3 ) goto label$cb1cbbc_34_96;
	r8 = 5;
	r9 = r1->length;
	if( ((unsigned)r8) < ((unsigned)r9) ) goto label$cb1cbbc_34_89;
	r5 = NULL;
	goto label$cb1cbbc_34_92;
	label$cb1cbbc_34_89:
	r11 = r1->array;
	r10 = ((vdynamic**)(r11 + 1))[r8];
	r5 = hl_to_virtual(&$t_vrt_8a7100d,(vdynamic*)r10);
	label$cb1cbbc_34_92:
	r6 = (kha__Image)hl_dyn_castp(&r5,&$t_vrt_8a7100d,&$t_kha_Image);
	if( r6 == NULL ) hl_null_access();
	r16 = r6->_renderTarget;
	goto label$cb1cbbc_34_97;
	label$cb1cbbc_34_96:
	r16 = NULL;
	label$cb1cbbc_34_97:
	r9 = 6;
	if( r9 >= r3 ) goto label$cb1cbbc_34_111;
	r8 = 6;
	r9 = r1->length;
	if( ((unsigned)r8) < ((unsigned)r9) ) goto label$cb1cbbc_34_104;
	r5 = NULL;
	goto label$cb1cbbc_34_107;
	label$cb1cbbc_34_104:
	r11 = r1->array;
	r10 = ((vdynamic**)(r11 + 1))[r8];
	r5 = hl_to_virtual(&$t_vrt_8a7100d,(vdynamic*)r10);
	label$cb1cbbc_34_107:
	r6 = (kha__Image)hl_dyn_castp(&r5,&$t_vrt_8a7100d,&$t_kha_Image);
	if( r6 == NULL ) hl_null_access();
	r17 = r6->_renderTarget;
	goto label$cb1cbbc_34_112;
	label$cb1cbbc_34_111:
	r17 = NULL;
	label$cb1cbbc_34_112:
	r9 = 1;
	r8 = r3 + r9;
	hl_kore_graphics_render_to_textures(r4,r7,r12,r13,r14,r15,r16,r17,r8);
	goto label$cb1cbbc_34_121;
	label$cb1cbbc_34_116:
	r5 = r0->target;
	r6 = (kha__Image)hl_dyn_castp(&r5,&$t_vrt_8a7100d,&$t_kha_Image);
	if( r6 == NULL ) hl_null_access();
	r4 = r6->_renderTarget;
	hl_kore_graphics_render_to_texture(r4);
	label$cb1cbbc_34_121:
	return;
}

void kha_korehl_graphics4_Graphics_begin(kha__korehl__graphics4__Graphics r0,hl__types__ArrayObj r1) {
	vvirtual *r3;
	r3 = r0->target;
	if( r3 ) goto label$cb1cbbc_35_4;
	hl_kore_graphics_restore_render_target();
	goto label$cb1cbbc_35_5;
	label$cb1cbbc_35_4:
	kha_korehl_graphics4_Graphics_renderToTexture(r0,r1);
	label$cb1cbbc_35_5:
	return;
}

void kha_korehl_graphics4_Graphics_beginFace(kha__korehl__graphics4__Graphics r0,int r1) {
	kha__graphics4__CubeMap r5;
	vvirtual *r4;
	vbyte *r3;
	r4 = r0->target;
	r5 = (kha__graphics4__CubeMap)hl_dyn_castp(&r4,&$t_vrt_8a7100d,&$t_kha_graphics4_CubeMap);
	if( r5 == NULL ) hl_null_access();
	r3 = r5->_renderTarget;
	hl_kore_graphics_render_to_face(r3,r1);
	return;
}

void kha_korehl_graphics4_Graphics_end(kha__korehl__graphics4__Graphics r0) {
	return;
}

