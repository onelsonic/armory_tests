﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_armory__system__Starter
#define INC_armory__system__Starter
typedef struct _armory__system__$Starter *armory__system__$Starter;
typedef struct _armory__system__Starter *armory__system__Starter;
#include <_std/String.h>
#include <iron/RenderPath.h>
#include <armory/system/Starter.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <kha/graphics2/Graphics.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	int p1;
	bool p2;
	bool p3;
	bool p4;
	int p5;
	int p6;
	int p7;
	bool p8;
	vclosure* p9;
} Enumt$ctx_7680ad9;
struct _armory__system__$Starter {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int tasks;
	vclosure* drawLoading;
	int numAssets;
	vclosure* main;
};
struct _armory__system__Starter {
	hl_type *$type;
};
#endif

