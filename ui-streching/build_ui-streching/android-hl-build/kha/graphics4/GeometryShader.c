﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/graphics4/GeometryShader.h>
#include <hl/types/ArrayObj.h>
#include <kha/internal/BytesBlob.h>
void kha_graphics4_GeometryShader_initShader(kha__graphics4__GeometryShader,kha__internal__BytesBlob);
#include <haxe/io/Bytes.h>
#include <haxe/io/BytesDataImpl.h>
extern hl_type t$haxe_io_BytesDataImpl;
void haxe_io_BytesDataImpl_new(haxe__io__BytesDataImpl,vbyte*,int);
#include <hl/natives.h>

void kha_graphics4_GeometryShader_new(kha__graphics4__GeometryShader r0,hl__types__ArrayObj r1,hl__types__ArrayObj r2) {
	kha__internal__BytesBlob r6;
	vdynamic *r7;
	varray *r8;
	int r4, r5;
	if( r1 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$c3ade35_1_6;
	r6 = NULL;
	goto label$c3ade35_1_9;
	label$c3ade35_1_6:
	r8 = r1->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (kha__internal__BytesBlob)r7;
	label$c3ade35_1_9:
	kha_graphics4_GeometryShader_initShader(r0,r6);
	return;
}

void kha_graphics4_GeometryShader_initShader(kha__graphics4__GeometryShader r0,kha__internal__BytesBlob r1) {
	haxe__io__Bytes r2, r6;
	haxe__io__BytesDataImpl r4, r8;
	int r7;
	vbyte *r5, *r9;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->bytes;
	r4 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r2 == NULL ) hl_null_access();
	r5 = r2->b;
	r7 = r2->length;
	haxe_io_BytesDataImpl_new(r4,r5,r7);
	if( r4 ) goto label$c3ade35_2_10;
	r5 = NULL;
	goto label$c3ade35_2_11;
	label$c3ade35_2_10:
	r5 = r4->bytes;
	label$c3ade35_2_11:
	r6 = r1->bytes;
	r8 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r6 == NULL ) hl_null_access();
	r9 = r6->b;
	r7 = r6->length;
	haxe_io_BytesDataImpl_new(r8,r9,r7);
	r7 = r8->length;
	r9 = hl_kore_create_geometryshader(r5,r7);
	r0->_shader = r9;
	return;
}

