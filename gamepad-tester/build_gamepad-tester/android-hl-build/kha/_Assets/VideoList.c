﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/_Assets/VideoList.h>
#include <kha/Video.h>
vdynamic* Reflect_field(vdynamic*,String);
extern hl_type $t_kha_Video;
extern hl_type $t_dyn;
extern hl_type $t_String;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);

kha__Video kha__Assets_VideoList_get(kha___Assets__VideoList r0,String r1) {
	kha__Video r3;
	vdynamic *r2;
	r2 = Reflect_field(((vdynamic*)r0),r1);
	r3 = (kha__Video)hl_dyn_castp(&r2,&$t_dyn,&$t_kha_Video);
	return r3;
}

void kha__Assets_VideoList_new(kha___Assets__VideoList r0) {
	hl__types__ArrayObj r1;
	hl_type *r3;
	int r4;
	varray *r2;
	r3 = &$t_String;
	r4 = 0;
	r2 = hl_alloc_array(r3,r4);
	r1 = hl_types_ArrayObj_alloc(r2);
	r0->names = r1;
	return;
}
