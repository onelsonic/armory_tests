﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha___Assets__FontList
#define INC_kha___Assets__FontList
typedef struct _kha___Assets__$FontList *kha___Assets__$FontList;
typedef struct _kha___Assets__FontList *kha___Assets__FontList;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/Kravur.h>


struct _kha___Assets__$FontList {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha___Assets__FontList {
	hl_type *$type;
	kha__Kravur font_default;
	vdynamic* font_defaultDescription;
};
#endif

