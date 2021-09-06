﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/BytesIterator_Int.h>

void hl_types_BytesIterator_Int_new(hl__types__BytesIterator_Int r0,hl__types__ArrayBytes_Int r1) {
	r0->a = r1;
	return;
}

bool hl_types_BytesIterator_Int_hasNext(hl__types__BytesIterator_Int r0) {
	bool r1;
	hl__types__ArrayBytes_Int r4;
	int r2, r3;
	r2 = r0->pos;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	if( r2 < r3 ) goto label$f97a48a_2_7;
	r1 = false;
	goto label$f97a48a_2_8;
	label$f97a48a_2_7:
	r1 = true;
	label$f97a48a_2_8:
	return r1;
}

int hl_types_BytesIterator_Int_next(hl__types__BytesIterator_Int r0) {
	hl__types__ArrayBytes_Int r2;
	int r3, r4, r5;
	vbyte *r1;
	r2 = r0->a;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	r3 = r0->pos;
	r4 = r3;
	++r3;
	r0->pos = r3;
	r5 = 2;
	r5 = r4 << r5;
	r4 = *(int*)(r1 + r5);
	return r4;
}
