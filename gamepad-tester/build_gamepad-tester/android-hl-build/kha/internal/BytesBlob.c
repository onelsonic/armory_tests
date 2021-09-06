﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/internal/BytesBlob.h>
extern hl_type $t_kha_internal_BytesBlob;
haxe__io__Bytes haxe_io_Bytes_alloc(int);
void haxe_io_Bytes_set(haxe__io__Bytes,int,int);
int haxe_io_Bytes_get(haxe__io__Bytes,int);
String kha_internal_BytesBlob_toString(kha__internal__BytesBlob);
String haxe_io_Bytes_toString(haxe__io__Bytes);

void kha_internal_BytesBlob_new(kha__internal__BytesBlob r0,haxe__io__Bytes r1) {
	r0->bytes = r1;
	return;
}

kha__internal__BytesBlob kha_internal_BytesBlob_fromBytes(haxe__io__Bytes r0) {
	kha__internal__BytesBlob r1;
	r1 = (kha__internal__BytesBlob)hl_alloc_obj(&$t_kha_internal_BytesBlob);
	kha_internal_BytesBlob_new(r1,r0);
	return r1;
}

kha__internal__BytesBlob kha_internal_BytesBlob_alloc(int r0) {
	haxe__io__Bytes r2;
	kha__internal__BytesBlob r1;
	r1 = (kha__internal__BytesBlob)hl_alloc_obj(&$t_kha_internal_BytesBlob);
	r2 = haxe_io_Bytes_alloc(r0);
	kha_internal_BytesBlob_new(r1,r2);
	return r1;
}

int kha_internal_BytesBlob_get_length(kha__internal__BytesBlob r0) {
	haxe__io__Bytes r2;
	int r1;
	r2 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	return r1;
}

void kha_internal_BytesBlob_writeU8(kha__internal__BytesBlob r0,int r1,int r2) {
	haxe__io__Bytes r4;
	r4 = r0->bytes;
	if( r4 == NULL ) hl_null_access();
	haxe_io_Bytes_set(r4,r1,r2);
	return;
}

int kha_internal_BytesBlob_readU8(kha__internal__BytesBlob r0,int r1) {
	haxe__io__Bytes r3;
	int r2;
	r3 = r0->bytes;
	if( r3 == NULL ) hl_null_access();
	r2 = haxe_io_Bytes_get(r3,r1);
	++r1;
	return r2;
}

vbyte* kha_internal_BytesBlob___string(kha__internal__BytesBlob r0) {
	String r2;
	vbyte *r1;
	r2 = kha_internal_BytesBlob_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

String kha_internal_BytesBlob_toString(kha__internal__BytesBlob r0) {
	String r1;
	haxe__io__Bytes r2;
	r2 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_io_Bytes_toString(r2);
	return r1;
}

haxe__io__Bytes kha_internal_BytesBlob_toBytes(kha__internal__BytesBlob r0) {
	haxe__io__Bytes r1;
	r1 = r0->bytes;
	return r1;
}
