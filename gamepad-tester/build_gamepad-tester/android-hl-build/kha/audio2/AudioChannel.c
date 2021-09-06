﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/audio2/AudioChannel.h>
#include <hl/natives.h>
void kha_audio2_Audio1__playAgain(kha__audio2__AudioChannel);

void kha_audio2_AudioChannel_nextSamples(kha__audio2__AudioChannel r0,kha__arrays__Float32ArrayPrivate r1,int r2,int r3) {
	bool r5;
	float r13;
	kha__arrays__Float32ArrayPrivate r11;
	vbyte *r10;
	int r6, r7, r8, r9, r12, r14, r15;
	r5 = r0->paused;
	if( r5 ) goto label$c06472f_1_4;
	r5 = r0->stopped;
	if( !r5 ) goto label$c06472f_1_17;
	label$c06472f_1_4:
	r6 = 0;
	r7 = r2;
	label$c06472f_1_6:
	if( r6 >= r7 ) goto label$c06472f_1_16;
	r8 = r6;
	++r6;
	if( r1 == NULL ) hl_null_access();
	r10 = r1->self;
	r12 = 0;
	r13 = (float)r12;
	hl_kore_float32array_set(r10,r8,r13);
	goto label$c06472f_1_6;
	label$c06472f_1_16:
	return;
	label$c06472f_1_17:
	r6 = 0;
	label$c06472f_1_18:
	if( r6 >= r2 ) goto label$c06472f_1_61;
	r7 = 0;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r8 = r11->length;
	r9 = r0->myPosition;
	r8 = r8 - r9;
	r9 = r2 - r6;
	if( r8 >= r9 ) goto label$c06472f_1_30;
	r12 = r8;
	goto label$c06472f_1_31;
	label$c06472f_1_30:
	r12 = r9;
	label$c06472f_1_31:
	if( r7 >= r12 ) goto label$c06472f_1_48;
	++r7;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->self;
	r14 = r0->myPosition;
	r15 = r14;
	++r14;
	r0->myPosition = r14;
	r13 = hl_kore_float32array_get(r10,r15);
	if( r1 == NULL ) hl_null_access();
	r10 = r1->self;
	r14 = r6;
	++r6;
	hl_kore_float32array_set(r10,r14,r13);
	goto label$c06472f_1_31;
	label$c06472f_1_48:
	r7 = r0->myPosition;
	r11 = r0->data;
	if( r11 == NULL ) hl_null_access();
	r8 = r11->length;
	if( r7 < r8 ) goto label$c06472f_1_60;
	r7 = 0;
	r0->myPosition = r7;
	r5 = r0->looping;
	if( r5 ) goto label$c06472f_1_60;
	r5 = true;
	r0->stopped = r5;
	goto label$c06472f_1_61;
	label$c06472f_1_60:
	goto label$c06472f_1_18;
	label$c06472f_1_61:
	if( r6 >= r2 ) goto label$c06472f_1_71;
	if( r1 == NULL ) hl_null_access();
	r10 = r1->self;
	r7 = r6;
	++r6;
	r8 = 0;
	r13 = (float)r8;
	hl_kore_float32array_set(r10,r7,r13);
	goto label$c06472f_1_61;
	label$c06472f_1_71:
	return;
}

void kha_audio2_AudioChannel_play(kha__audio2__AudioChannel r0) {
	bool r1;
	r1 = false;
	r0->paused = r1;
	r1 = false;
	r0->stopped = r1;
	kha_audio2_Audio1__playAgain(r0);
	return;
}

double kha_audio2_AudioChannel_get_volume(kha__audio2__AudioChannel r0) {
	double r1;
	r1 = r0->myVolume;
	return r1;
}

double kha_audio2_AudioChannel_set_volume(kha__audio2__AudioChannel r0,double r1) {
	r0->myVolume = r1;
	return r1;
}

bool kha_audio2_AudioChannel_get_finished(kha__audio2__AudioChannel r0) {
	bool r1;
	r1 = r0->stopped;
	return r1;
}

void kha_audio2_AudioChannel_new(kha__audio2__AudioChannel r0,bool r1) {
	bool r2;
	kha__arrays__Float32ArrayPrivate r5;
	double r4;
	int r3;
	r2 = false;
	r0->looping = r2;
	r2 = false;
	r0->stopped = r2;
	r2 = false;
	r0->paused = r2;
	r3 = 0;
	r0->myPosition = r3;
	r4 = 1.;
	r0->myVolume = r4;
	r5 = NULL;
	r0->data = r5;
	r0->looping = r1;
	return;
}
