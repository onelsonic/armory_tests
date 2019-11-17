﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/math/Mat3.h>
extern hl_type $t_kha_math_FastMatrix3;
void kha_math_FastMatrix3_new(kha__math__FastMatrix3,float,float,float,float,float,float,float,float,float);

void iron_math_Mat3_new(iron__math__Mat3 r0,float r1,float r2,float r3,float r4,float r5,float r6,float r7,float r8,float r9) {
	kha__math__FastMatrix3 r10;
	r10 = (kha__math__FastMatrix3)hl_alloc_obj(&$t_kha_math_FastMatrix3);
	kha_math_FastMatrix3_new(r10,r1,r2,r3,r4,r5,r6,r7,r8,r9);
	r0->self = r10;
	return;
}

