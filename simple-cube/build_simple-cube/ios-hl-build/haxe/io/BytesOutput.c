﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/io/BytesOutput.h>
extern hl_type $t_haxe_io_BytesBuffer;
void haxe_io_BytesBuffer_new(haxe__io__BytesBuffer);
void haxe_io_BytesBuffer___expand(haxe__io__BytesBuffer,int);
#include <haxe/io/Bytes.h>
#include <haxe/io/Error.h>
extern venum* $g_haxe_io_Error_OutsideBounds;
void haxe_io_BytesBuffer___add(haxe__io__BytesBuffer,vbyte*,int,int);
haxe__io__Bytes haxe_io_BytesBuffer_getBytes(haxe__io__BytesBuffer);

void haxe_io_BytesOutput_new(haxe__io__BytesOutput r0) {
	haxe__io__BytesBuffer r1;
	r1 = (haxe__io__BytesBuffer)hl_alloc_obj(&$t_haxe_io_BytesBuffer);
	haxe_io_BytesBuffer_new(r1);
	r0->b = r1;
	return;
}

void haxe_io_BytesOutput_writeByte(haxe__io__BytesOutput r0,int r1) {
	haxe__io__BytesBuffer r2;
	vbyte *r6;
	int r4, r5;
	r2 = r0->b;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->pos;
	r5 = r2->size;
	if( r4 != r5 ) goto label$3ba53ec_2_7;
	r4 = 0;
	haxe_io_BytesBuffer___expand(r2,r4);
	label$3ba53ec_2_7:
	r6 = r2->b;
	r4 = r2->pos;
	r5 = r4;
	++r4;
	r2->pos = r4;
	*(unsigned char*)(r6 + r5) = (unsigned char)r1;
	return;
}

int haxe_io_BytesOutput_writeBytes(haxe__io__BytesOutput r0,haxe__io__Bytes r1,int r2,int r3) {
	haxe__io__BytesBuffer r8;
	venum *r7;
	vbyte *r9;
	int r5, r6;
	r6 = 0;
	if( r2 < r6 ) goto label$3ba53ec_3_8;
	r6 = 0;
	if( r3 < r6 ) goto label$3ba53ec_3_8;
	r5 = r2 + r3;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	if( r6 >= r5 ) goto label$3ba53ec_3_10;
	label$3ba53ec_3_8:
	r7 = (venum*)$g_haxe_io_Error_OutsideBounds;
	hl_throw((vdynamic*)r7);
	label$3ba53ec_3_10:
	r8 = r0->b;
	if( r8 == NULL ) hl_null_access();
	r9 = r1->b;
	haxe_io_BytesBuffer___add(r8,r9,r2,r3);
	return r3;
}

haxe__io__Bytes haxe_io_BytesOutput_getBytes(haxe__io__BytesOutput r0) {
	haxe__io__BytesBuffer r2;
	haxe__io__Bytes r1;
	r2 = r0->b;
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_io_BytesBuffer_getBytes(r2);
	return r1;
}

