﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/graphics4/FragmentShader.h>
#include <hl/types/ArrayObj.h>
#include <kha/internal/BytesBlob.h>
void kha_graphics4_FragmentShader_initShader(kha__graphics4__FragmentShader,kha__internal__BytesBlob);
#include <haxe/io/Bytes.h>
#include <haxe/io/BytesDataImpl.h>
extern hl_type t$haxe_io_BytesDataImpl;
void haxe_io_BytesDataImpl_new(haxe__io__BytesDataImpl,vbyte*,int);
#include <hl/natives.h>
extern hl_type t$kha_graphics4_FragmentShader;

void kha_graphics4_FragmentShader_new(kha__graphics4__FragmentShader r0,hl__types__ArrayObj r1,hl__types__ArrayObj r2) {
	kha__internal__BytesBlob r6;
	vdynamic *r7;
	varray *r8;
	int r4, r5;
	if( r1 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r1->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$299b8db_1_6;
	r6 = NULL;
	goto label$299b8db_1_9;
	label$299b8db_1_6:
	r8 = r1->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (kha__internal__BytesBlob)r7;
	label$299b8db_1_9:
	kha_graphics4_FragmentShader_initShader(r0,r6);
	return;
}

void kha_graphics4_FragmentShader_initShader(kha__graphics4__FragmentShader r0,kha__internal__BytesBlob r1) {
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
	if( r4 ) goto label$299b8db_2_10;
	r5 = NULL;
	goto label$299b8db_2_11;
	label$299b8db_2_10:
	r5 = r4->bytes;
	label$299b8db_2_11:
	r6 = r1->bytes;
	r8 = (haxe__io__BytesDataImpl)hl_alloc_obj(&t$haxe_io_BytesDataImpl);
	if( r6 == NULL ) hl_null_access();
	r9 = r6->b;
	r7 = r6->length;
	haxe_io_BytesDataImpl_new(r8,r9,r7);
	r7 = r8->length;
	r9 = hl_kore_create_fragmentshader(r5,r7);
	r0->_shader = r9;
	return;
}

kha__graphics4__FragmentShader kha_graphics4_FragmentShader_fromSource(String r0) {
	kha__graphics4__FragmentShader r1;
	hl__types__ArrayObj r2, r3;
	int *r7;
	vbyte *r6, *r8;
	int r5, r9;
	r1 = (kha__graphics4__FragmentShader)hl_alloc_obj(&t$kha_graphics4_FragmentShader);
	r2 = NULL;
	r3 = NULL;
	kha_graphics4_FragmentShader_new(r1,r2,r3);
	r5 = 0;
	if( r0 == NULL ) hl_null_access();
	r6 = r0->bytes;
	r7 = &r5;
	r9 = 0;
	r8 = hl_utf16_to_utf8(r6,r9,r7);
	r8 = hl_kore_fragmentshader_from_source(r8);
	r1->_shader = r8;
	return r1;
}

