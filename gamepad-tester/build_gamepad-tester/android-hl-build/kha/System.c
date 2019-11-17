﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/System.h>
extern kha__$System $g__kha_System;
void kha_SystemImpl_init(kha__SystemOptions,vclosure*);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
double kha_SystemImpl_getTime(void);
kha__Window kha_Window_get(int);
int kha_Window_get_width(kha__Window);
hl__types__ArrayObj kha_Window_get_all(void);
int kha_Window_get_height(kha__Window);

void kha_System_start(kha__SystemOptions r0,vclosure* r1) {
	String r2;
	kha__$System r3;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->title;
	r3 = (kha__$System)$g__kha_System;
	r3->theTitle = r2;
	kha_SystemImpl_init(r0,r1);
	return;
}

void kha_System_notifyOnFrames(vclosure* r0) {
	hl__types__ArrayObj r2;
	kha__$System r3;
	int r1;
	r3 = (kha__$System)$g__kha_System;
	r2 = r3->renderListeners;
	if( r2 == NULL ) hl_null_access();
	r1 = hl_types_ArrayObj_push(r2,((vdynamic*)r0));
	return;
}

void kha_System_notifyOnCutCopyPaste(vclosure* r0,vclosure* r1,vclosure* r2) {
	kha__$System r3;
	r3 = (kha__$System)$g__kha_System;
	r3->cutListener = r0;
	r3 = (kha__$System)$g__kha_System;
	r3->copyListener = r1;
	r3 = (kha__$System)$g__kha_System;
	r3->pasteListener = r2;
	return;
}

void kha_System_render(hl__types__ArrayObj r0) {
	hl__types__ArrayObj r3;
	vclosure *r6;
	kha__$System r4;
	vdynamic *r7;
	varray *r8;
	int r1, r5;
	r1 = 0;
	r4 = (kha__$System)$g__kha_System;
	r3 = r4->renderListeners;
	label$f550790_4_3:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r1 >= r5 ) goto label$f550790_4_18;
	r5 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r5) ) goto label$f550790_4_11;
	r6 = NULL;
	goto label$f550790_4_14;
	label$f550790_4_11:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r1];
	r6 = (vclosure*)r7;
	label$f550790_4_14:
	++r1;
	if( r6 == NULL ) hl_null_access();
	r6->hasValue ? ((void (*)(vdynamic*,hl__types__ArrayObj))r6->fun)((vdynamic*)r6->value,r0) : ((void (*)(hl__types__ArrayObj))r6->fun)(r0);
	goto label$f550790_4_3;
	label$f550790_4_18:
	return;
}

void kha_System_foreground() {
	hl__types__ArrayObj r2;
	vclosure *r5;
	kha__$System r3;
	vdynamic *r6;
	varray *r7;
	int r0, r4;
	r0 = 0;
	r3 = (kha__$System)$g__kha_System;
	r2 = r3->foregroundListeners;
	label$f550790_5_3:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->length;
	if( r0 >= r4 ) goto label$f550790_5_18;
	r4 = r2->length;
	if( ((unsigned)r0) < ((unsigned)r4) ) goto label$f550790_5_11;
	r5 = NULL;
	goto label$f550790_5_14;
	label$f550790_5_11:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r0];
	r5 = (vclosure*)r6;
	label$f550790_5_14:
	++r0;
	if( r5 == NULL ) hl_null_access();
	r5->hasValue ? ((void (*)(vdynamic*))r5->fun)((vdynamic*)r5->value) : ((void (*)(void))r5->fun)();
	goto label$f550790_5_3;
	label$f550790_5_18:
	return;
}

void kha_System_resume() {
	hl__types__ArrayObj r2;
	vclosure *r5;
	kha__$System r3;
	vdynamic *r6;
	varray *r7;
	int r0, r4;
	r0 = 0;
	r3 = (kha__$System)$g__kha_System;
	r2 = r3->resumeListeners;
	label$f550790_6_3:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->length;
	if( r0 >= r4 ) goto label$f550790_6_18;
	r4 = r2->length;
	if( ((unsigned)r0) < ((unsigned)r4) ) goto label$f550790_6_11;
	r5 = NULL;
	goto label$f550790_6_14;
	label$f550790_6_11:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r0];
	r5 = (vclosure*)r6;
	label$f550790_6_14:
	++r0;
	if( r5 == NULL ) hl_null_access();
	r5->hasValue ? ((void (*)(vdynamic*))r5->fun)((vdynamic*)r5->value) : ((void (*)(void))r5->fun)();
	goto label$f550790_6_3;
	label$f550790_6_18:
	return;
}

void kha_System_pause() {
	hl__types__ArrayObj r2;
	vclosure *r5;
	kha__$System r3;
	vdynamic *r6;
	varray *r7;
	int r0, r4;
	r0 = 0;
	r3 = (kha__$System)$g__kha_System;
	r2 = r3->pauseListeners;
	label$f550790_7_3:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->length;
	if( r0 >= r4 ) goto label$f550790_7_18;
	r4 = r2->length;
	if( ((unsigned)r0) < ((unsigned)r4) ) goto label$f550790_7_11;
	r5 = NULL;
	goto label$f550790_7_14;
	label$f550790_7_11:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r0];
	r5 = (vclosure*)r6;
	label$f550790_7_14:
	++r0;
	if( r5 == NULL ) hl_null_access();
	r5->hasValue ? ((void (*)(vdynamic*))r5->fun)((vdynamic*)r5->value) : ((void (*)(void))r5->fun)();
	goto label$f550790_7_3;
	label$f550790_7_18:
	return;
}

void kha_System_background() {
	hl__types__ArrayObj r2;
	vclosure *r5;
	kha__$System r3;
	vdynamic *r6;
	varray *r7;
	int r0, r4;
	r0 = 0;
	r3 = (kha__$System)$g__kha_System;
	r2 = r3->backgroundListeners;
	label$f550790_8_3:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->length;
	if( r0 >= r4 ) goto label$f550790_8_18;
	r4 = r2->length;
	if( ((unsigned)r0) < ((unsigned)r4) ) goto label$f550790_8_11;
	r5 = NULL;
	goto label$f550790_8_14;
	label$f550790_8_11:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r0];
	r5 = (vclosure*)r6;
	label$f550790_8_14:
	++r0;
	if( r5 == NULL ) hl_null_access();
	r5->hasValue ? ((void (*)(vdynamic*))r5->fun)((vdynamic*)r5->value) : ((void (*)(void))r5->fun)();
	goto label$f550790_8_3;
	label$f550790_8_18:
	return;
}

void kha_System_shutdown() {
	hl__types__ArrayObj r2;
	vclosure *r5;
	kha__$System r3;
	vdynamic *r6;
	varray *r7;
	int r0, r4;
	r0 = 0;
	r3 = (kha__$System)$g__kha_System;
	r2 = r3->shutdownListeners;
	label$f550790_9_3:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->length;
	if( r0 >= r4 ) goto label$f550790_9_18;
	r4 = r2->length;
	if( ((unsigned)r0) < ((unsigned)r4) ) goto label$f550790_9_11;
	r5 = NULL;
	goto label$f550790_9_14;
	label$f550790_9_11:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r0];
	r5 = (vclosure*)r6;
	label$f550790_9_14:
	++r0;
	if( r5 == NULL ) hl_null_access();
	r5->hasValue ? ((void (*)(vdynamic*))r5->fun)((vdynamic*)r5->value) : ((void (*)(void))r5->fun)();
	goto label$f550790_9_3;
	label$f550790_9_18:
	return;
}

void kha_System_dropFiles(String r0) {
	hl__types__ArrayObj r3;
	vclosure *r6;
	kha__$System r4;
	vdynamic *r7;
	varray *r8;
	int r1, r5;
	r1 = 0;
	r4 = (kha__$System)$g__kha_System;
	r3 = r4->dropFilesListeners;
	label$f550790_10_3:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r1 >= r5 ) goto label$f550790_10_18;
	r5 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r5) ) goto label$f550790_10_11;
	r6 = NULL;
	goto label$f550790_10_14;
	label$f550790_10_11:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r1];
	r6 = (vclosure*)r7;
	label$f550790_10_14:
	++r1;
	if( r6 == NULL ) hl_null_access();
	r6->hasValue ? ((void (*)(vdynamic*,String))r6->fun)((vdynamic*)r6->value,r0) : ((void (*)(String))r6->fun)(r0);
	goto label$f550790_10_3;
	label$f550790_10_18:
	return;
}

double kha_System_get_time() {
	double r0;
	r0 = kha_SystemImpl_getTime();
	return r0;
}

int kha_System_windowWidth(int* r0) {
	kha__Window r3;
	int r1, r2;
	if( r0 ) goto label$f550790_12_3;
	r1 = 0;
	goto label$f550790_12_4;
	label$f550790_12_3:
	r1 = *r0;
	label$f550790_12_4:
	r3 = kha_Window_get(r1);
	if( r3 == NULL ) hl_null_access();
	r2 = kha_Window_get_width(r3);
	return r2;
}

int kha_System_windowHeight(int* r0) {
	hl__types__ArrayObj r3;
	kha__Window r5;
	vdynamic *r6;
	varray *r7;
	int r1, r2, r4;
	if( r0 ) goto label$f550790_13_3;
	r1 = 0;
	goto label$f550790_13_4;
	label$f550790_13_3:
	r1 = *r0;
	label$f550790_13_4:
	r3 = kha_Window_get_all();
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r4) ) goto label$f550790_13_10;
	r5 = NULL;
	goto label$f550790_13_13;
	label$f550790_13_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r1];
	r5 = (kha__Window)r6;
	label$f550790_13_13:
	if( r5 == NULL ) hl_null_access();
	r2 = kha_Window_get_height(r5);
	return r2;
}

