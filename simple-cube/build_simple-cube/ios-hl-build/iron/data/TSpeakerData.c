﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/data/TSpeakerData.h>

void iron_data_TSpeakerData_new(iron__data__TSpeakerData r0,String r1,String r2,bool r3,bool r4,bool r5,float r6,float r7,float r8,bool r9) {
	r0->name = r1;
	r0->sound = r2;
	r0->muted = r3;
	r0->loop = r4;
	r0->stream = r5;
	r0->volume = r6;
	r0->pitch = r7;
	r0->attenuation = r8;
	r0->play_on_start = r9;
	return;
}

