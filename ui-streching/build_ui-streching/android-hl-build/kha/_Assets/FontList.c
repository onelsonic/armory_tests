﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/_Assets/FontList.h>
#include <hl/types/ArrayObj.h>
extern hl_type t$vrt_5860716;
extern String s$font_default;
extern hl_type t$String;
#include <hl/natives.h>
extern String s$font_default_ttf;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$hl_types_ArrayObj;
extern String s$font;

void kha__Assets_FontList_new(kha___Assets__FontList r0) {
	String r2;
	hl__types__ArrayObj r3;
	vvirtual *r1;
	hl_type *r5;
	kha__Kravur r7;
	int r6;
	varray *r4;
	r1 = hl_alloc_virtual(&t$vrt_5860716);
	r2 = (String)s$font_default;
	if( hl_vfields(r1)[1] ) *(String*)(hl_vfields(r1)[1]) = (String)r2; else hl_dyn_setp(r1->value,150958933/*name*/,&t$String,r2);
	r5 = &t$String;
	r6 = 1;
	r4 = hl_alloc_array(r5,r6);
	r2 = (String)s$font_default_ttf;
	r6 = 0;
	((String*)(r4 + 1))[r6] = r2;
	r3 = hl_types_ArrayObj_alloc(r4);
	if( hl_vfields(r1)[0] ) *(hl__types__ArrayObj*)(hl_vfields(r1)[0]) = (hl__types__ArrayObj)r3; else hl_dyn_setp(r1->value,10018423/*files*/,&t$hl_types_ArrayObj,r3);
	r2 = (String)s$font;
	if( hl_vfields(r1)[2] ) *(String*)(hl_vfields(r1)[2]) = (String)r2; else hl_dyn_setp(r1->value,218690500/*type*/,&t$String,r2);
	r0->font_defaultDescription = ((vdynamic*)r1);
	r7 = NULL;
	r0->font_default = r7;
	return;
}

