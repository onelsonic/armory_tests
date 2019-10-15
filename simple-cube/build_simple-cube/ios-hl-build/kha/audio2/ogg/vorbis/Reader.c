﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/audio2/ogg/vorbis/Reader.h>
int haxe_io_BytesInput_set_position(haxe__io__BytesInput,int);
#include <kha/audio2/ogg/vorbis/VorbisDecoder.h>
#include <kha/arrays/Float32ArrayPrivate.h>
extern hl_type $t_haxe_io_BytesInput;
void haxe_io_BytesInput_new(haxe__io__BytesInput,haxe__io__Bytes,vdynamic*,vdynamic*);
#include <haxe/io/Input.h>
kha__audio2__ogg__vorbis__VorbisDecoder kha_audio2_ogg_vorbis_VorbisDecoder_start(haxe__io__Input);
extern hl_type $t_fun_d8cbd66;
void kha_audio2_ogg_vorbis_VorbisDecoder_setupSampleNumber(kha__audio2__ogg__vorbis__VorbisDecoder,vclosure*,int);
extern hl_type $t_kha_arrays_Float32ArrayPrivate;
void kha_arrays_Float32ArrayPrivate_new(kha__arrays__Float32ArrayPrivate);
#include <hl/natives.h>
int kha_audio2_ogg_vorbis_VorbisDecoder_read(kha__audio2__ogg__vorbis__VorbisDecoder,kha__arrays__Float32ArrayPrivate,int,int,int,bool);
void haxe_io_Output_writeFloat(haxe__io__Output,double);

void kha_audio2_ogg_vorbis_Reader_seekBytes(haxe__io__BytesInput r0,int r1) {
	int r2;
	if( r0 == NULL ) hl_null_access();
	r2 = haxe_io_BytesInput_set_position(r0,r1);
	return;
}

void kha_audio2_ogg_vorbis_Reader_readAll__$1(haxe__io__BytesInput r0,int r1) {
	kha_audio2_ogg_vorbis_Reader_seekBytes(r0,r1);
	return;
}

kha__audio2__ogg__vorbis__data__Header kha_audio2_ogg_vorbis_Reader_readAll(haxe__io__Bytes r0,haxe__io__Output r1,bool* r2) {
	kha__audio2__ogg__vorbis__VorbisDecoder r8;
	haxe__io__BytesInput r4;
	bool r3, r20;
	kha__audio2__ogg__vorbis__data__Header r11, r15;
	float r23;
	kha__arrays__Float32ArrayPrivate r16, r17;
	double r24;
	vclosure *r9;
	vdynamic *r5, *r6;
	vbyte *r19;
	int r10, r12, r13, r14, r18, r21, r22;
	if( r2 ) goto label$fec0647_3_3;
	r3 = false;
	goto label$fec0647_3_4;
	label$fec0647_3_3:
	r3 = *r2;
	label$fec0647_3_4:
	r4 = (haxe__io__BytesInput)hl_alloc_obj(&$t_haxe_io_BytesInput);
	r5 = NULL;
	r6 = NULL;
	haxe_io_BytesInput_new(r4,r0,r5,r6);
	r8 = kha_audio2_ogg_vorbis_VorbisDecoder_start(((haxe__io__Input)r4));
	if( r8 == NULL ) hl_null_access();
	r9 = hl_alloc_closure_ptr(&$t_fun_d8cbd66,kha_audio2_ogg_vorbis_Reader_readAll__$1,r4);
	if( r0 == NULL ) hl_null_access();
	r10 = r0->length;
	kha_audio2_ogg_vorbis_VorbisDecoder_setupSampleNumber(r8,r9,r10);
	r11 = r8->header;
	r10 = 0;
	r12 = 4096;
	if( r11 == NULL ) hl_null_access();
	r14 = r11->channel;
	r13 = r12 * r14;
	r16 = (kha__arrays__Float32ArrayPrivate)hl_alloc_obj(&$t_kha_arrays_Float32ArrayPrivate);
	kha_arrays_Float32ArrayPrivate_new(r16);
	r16->length = r13;
	r18 = 0;
	if( r18 >= r13 ) goto label$fec0647_3_27;
	r19 = hl_kore_float32array_alloc(r13);
	r16->self = r19;
	label$fec0647_3_27:
	r17 = r16;
	label$fec0647_3_28:
	r20 = true;
	if( !r20 ) goto label$fec0647_3_56;
	if( r8 == NULL ) hl_null_access();
	if( r11 == NULL ) hl_null_access();
	r18 = r11->channel;
	r21 = r11->sampleRate;
	r14 = kha_audio2_ogg_vorbis_VorbisDecoder_read(r8,r17,r12,r18,r21,r3);
	r18 = 0;
	r22 = r11->channel;
	r21 = r14 * r22;
	label$fec0647_3_39:
	if( r18 >= r21 ) goto label$fec0647_3_50;
	r22 = r18;
	++r18;
	if( r1 == NULL ) hl_null_access();
	if( r17 == NULL ) hl_null_access();
	r19 = r17->self;
	r23 = hl_kore_float32array_get(r19,r22);
	r24 = (double)r23;
	haxe_io_Output_writeFloat(r1,r24);
	goto label$fec0647_3_39;
	label$fec0647_3_50:
	r21 = 0;
	if( r14 != r21 ) goto label$fec0647_3_53;
	goto label$fec0647_3_56;
	label$fec0647_3_53:
	r18 = r10 + r14;
	r10 = r18;
	goto label$fec0647_3_28;
	label$fec0647_3_56:
	if( r8 == NULL ) hl_null_access();
	r15 = r8->header;
	return r15;
}

