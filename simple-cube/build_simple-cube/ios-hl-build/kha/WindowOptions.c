﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/WindowOptions.h>
extern hl_type $t_i32;

void kha_WindowOptions_new(kha__WindowOptions r0,String r1,vdynamic* r2,vdynamic* r3,vdynamic* r4,vdynamic* r5,vdynamic* r6,vdynamic* r7,vdynamic* r8,vdynamic* r9) {
	String r13;
	bool r11;
	int r10, r12;
	if( r2 ) goto label$815e4ea_1_3;
	r10 = -1;
	r2 = hl_alloc_dynamic(&$t_i32);
	r2->v.i = r10;
	label$815e4ea_1_3:
	if( r3 ) goto label$815e4ea_1_6;
	r10 = -1;
	r3 = hl_alloc_dynamic(&$t_i32);
	r3->v.i = r10;
	label$815e4ea_1_6:
	if( r4 ) goto label$815e4ea_1_9;
	r10 = 800;
	r4 = hl_alloc_dynamic(&$t_i32);
	r4->v.i = r10;
	label$815e4ea_1_9:
	if( r5 ) goto label$815e4ea_1_12;
	r10 = 600;
	r5 = hl_alloc_dynamic(&$t_i32);
	r5->v.i = r10;
	label$815e4ea_1_12:
	if( r6 ) goto label$815e4ea_1_15;
	r10 = -1;
	r6 = hl_alloc_dynamic(&$t_i32);
	r6->v.i = r10;
	label$815e4ea_1_15:
	if( r7 ) goto label$815e4ea_1_18;
	r11 = true;
	r7 = hl_alloc_dynbool(r11);
	label$815e4ea_1_18:
	if( r9 ) goto label$815e4ea_1_21;
	r10 = 0;
	r9 = hl_alloc_dynamic(&$t_i32);
	r9->v.i = r10;
	label$815e4ea_1_21:
	r10 = 0;
	r0->mode = r10;
	r10 = 1;
	r12 = 4;
	r10 = r10 | r12;
	r12 = 2;
	r10 = r10 | r12;
	r0->windowFeatures = r10;
	r11 = true;
	r0->visible = r11;
	r10 = -1;
	r0->display = r10;
	r10 = 600;
	r0->height = r10;
	r10 = 800;
	r0->width = r10;
	r10 = -1;
	r0->y = r10;
	r10 = -1;
	r0->x = r10;
	r13 = NULL;
	r0->title = r13;
	r0->title = r1;
	r10 = r2 ? r2->v.i : 0;
	r0->x = r10;
	r10 = r3 ? r3->v.i : 0;
	r0->y = r10;
	r10 = r4 ? r4->v.i : 0;
	r0->width = r10;
	r10 = r5 ? r5->v.i : 0;
	r0->height = r10;
	r10 = r6 ? r6->v.i : 0;
	r0->display = r10;
	r11 = r7 ? r7->v.b : 0;
	r0->visible = r11;
	if( r8 ) goto label$815e4ea_1_63;
	r10 = 1;
	r12 = 4;
	r10 = r10 | r12;
	r12 = 2;
	r10 = r10 | r12;
	goto label$815e4ea_1_64;
	label$815e4ea_1_63:
	r10 = r8 ? r8->v.i : 0;
	label$815e4ea_1_64:
	r0->windowFeatures = r10;
	r10 = r9 ? r9->v.i : 0;
	r0->mode = r10;
	return;
}

