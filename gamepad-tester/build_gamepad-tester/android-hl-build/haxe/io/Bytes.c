﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/io/Bytes.h>
#include <haxe/io/Error.h>
extern venum* $g_haxe_io_Error_OutsideBounds;
#include <haxe/io/Encoding.h>
#include <hl/natives.h>
extern venum* $g_haxe_io_Encoding_RawNative;
extern hl_type $t_String;
String String_fromUTF8(vbyte*);
String haxe_io_Bytes_toString(haxe__io__Bytes);
extern hl_type $t_haxe_io_Bytes;

void haxe_io_Bytes_new(haxe__io__Bytes r0,vbyte* r1,int r2) {
	r0->b = r1;
	r0->length = r2;
	return;
}

int haxe_io_Bytes_get(haxe__io__Bytes r0,int r1) {
	bool r2;
	vbyte *r5;
	int r3, r4;
	r4 = r0->length;
	if( ((unsigned)r1) >= ((unsigned)r4) ) goto label$f9d86ae_2_4;
	r2 = false;
	goto label$f9d86ae_2_5;
	label$f9d86ae_2_4:
	r2 = true;
	label$f9d86ae_2_5:
	if( !r2 ) goto label$f9d86ae_2_8;
	r3 = 0;
	return r3;
	label$f9d86ae_2_8:
	r5 = r0->b;
	r3 = *(unsigned char*)(r5 + r1);
	return r3;
}

void haxe_io_Bytes_set(haxe__io__Bytes r0,int r1,int r2) {
	venum *r6;
	bool r4;
	vbyte *r7;
	int r5;
	r5 = r0->length;
	if( ((unsigned)r1) >= ((unsigned)r5) ) goto label$f9d86ae_3_4;
	r4 = false;
	goto label$f9d86ae_3_5;
	label$f9d86ae_3_4:
	r4 = true;
	label$f9d86ae_3_5:
	if( !r4 ) goto label$f9d86ae_3_8;
	r6 = (venum*)$g_haxe_io_Error_OutsideBounds;
	hl_throw((vdynamic*)r6);
	label$f9d86ae_3_8:
	r7 = r0->b;
	*(unsigned char*)(r7 + r1) = (unsigned char)r2;
	return;
}

double haxe_io_Bytes_getFloat(haxe__io__Bytes r0,int r1) {
	bool r2;
	float r7;
	double r5;
	vbyte *r6;
	int r3, r4;
	r4 = 3;
	r3 = r1 + r4;
	r4 = r0->length;
	if( ((unsigned)r3) >= ((unsigned)r4) ) goto label$f9d86ae_4_6;
	r2 = false;
	goto label$f9d86ae_4_7;
	label$f9d86ae_4_6:
	r2 = true;
	label$f9d86ae_4_7:
	if( !r2 ) goto label$f9d86ae_4_10;
	r5 = 0.;
	return r5;
	label$f9d86ae_4_10:
	r6 = r0->b;
	r7 = *(float*)(r6 + r1);
	r5 = (double)r7;
	return r5;
}

String haxe_io_Bytes_getString(haxe__io__Bytes r0,int r1,int r2,venum* r3) {
	String r12;
	venum *r8, *r11;
	bool r7;
	vbyte *r9, *r10;
	int r5, r6;
	r6 = 0;
	if( r1 < r6 ) goto label$f9d86ae_5_11;
	r6 = 0;
	if( r2 < r6 ) goto label$f9d86ae_5_11;
	r5 = r1 + r2;
	r6 = r0->length;
	if( ((unsigned)r6) < ((unsigned)r5) ) goto label$f9d86ae_5_9;
	r7 = false;
	goto label$f9d86ae_5_10;
	label$f9d86ae_5_9:
	r7 = true;
	label$f9d86ae_5_10:
	if( !r7 ) goto label$f9d86ae_5_13;
	label$f9d86ae_5_11:
	r8 = (venum*)$g_haxe_io_Error_OutsideBounds;
	hl_throw((vdynamic*)r8);
	label$f9d86ae_5_13:
	r6 = 2;
	r5 = r2 + r6;
	r9 = hl_alloc_bytes(r5);
	r5 = 0;
	r10 = r0->b;
	hl_bytes_blit(r9,r5,r10,r1,r2);
	r6 = 0;
	*(unsigned char*)(r9 + r2) = (unsigned char)r6;
	r6 = 1;
	r5 = r2 + r6;
	r6 = 0;
	*(unsigned char*)(r9 + r5) = (unsigned char)r6;
	r11 = (venum*)$g_haxe_io_Encoding_RawNative;
	if( r3 != r11 ) goto label$f9d86ae_5_33;
	r12 = (String)hl_alloc_obj(&$t_String);
	r12->bytes = r9;
	r5 = 0;
	r5 = hl_ucs2length(r9,r5);
	r12->length = r5;
	return r12;
	label$f9d86ae_5_33:
	r12 = String_fromUTF8(r9);
	return r12;
}

vbyte* haxe_io_Bytes___string(haxe__io__Bytes r0) {
	String r2;
	vbyte *r1;
	r2 = haxe_io_Bytes_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String haxe_io_Bytes_toString(haxe__io__Bytes r0) {
	String r1;
	venum *r4;
	int r2, r3;
	r2 = 0;
	r3 = r0->length;
	r4 = NULL;
	r1 = haxe_io_Bytes_getString(r0,r2,r3,r4);
	return r1;
}

haxe__io__Bytes haxe_io_Bytes_alloc(int r0) {
	haxe__io__Bytes r5;
	int r2, r4;
	vbyte *r1;
	r1 = hl_alloc_bytes(r0);
	r2 = 0;
	r4 = 0;
	hl_bytes_fill(r1,r2,r0,r4);
	r5 = (haxe__io__Bytes)hl_alloc_obj(&$t_haxe_io_Bytes);
	haxe_io_Bytes_new(r5,r1,r0);
	return r5;
}

