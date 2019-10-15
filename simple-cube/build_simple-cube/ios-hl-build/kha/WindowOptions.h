﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__WindowOptions
#define INC_kha__WindowOptions
typedef struct _kha__$WindowOptions *kha__$WindowOptions;
typedef struct _kha__WindowOptions *kha__WindowOptions;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _kha__$WindowOptions {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__WindowOptions {
	hl_type *$type;
	String title;
	int x;
	int y;
	int width;
	int height;
	int display;
	bool visible;
	int windowFeatures;
	int mode;
};
#endif

