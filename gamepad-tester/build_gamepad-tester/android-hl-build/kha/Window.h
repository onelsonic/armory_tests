﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__Window
#define INC_kha__Window
typedef struct _kha__$Window *kha__$Window;
typedef struct _kha__Window *kha__Window;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>


struct _kha__$Window {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hl__types__ArrayObj windows;
	vclosure* get;
	vclosure* get_all;
};
struct _kha__Window {
	hl_type *$type;
	int num;
};
#endif
