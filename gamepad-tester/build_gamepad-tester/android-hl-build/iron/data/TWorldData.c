﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/data/TWorldData.h>

void iron_data_TWorldData_new(iron__data__TWorldData r0,String r1,int r2,iron__data__TProbeData r3,kha__arrays__Float32ArrayPrivate r4,vdynamic* r5,vdynamic* r6,String r7) {
	r0->name = r1;
	r0->background_color = r2;
	r0->probe = r3;
	r0->sun_direction = r4;
	r0->turbidity = r5;
	r0->ground_albedo = r6;
	r0->envmap = r7;
	return;
}

