﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_armory__renderpath__RenderPathForward
#define INC_armory__renderpath__RenderPathForward
typedef struct _armory__renderpath__$RenderPathForward *armory__renderpath__$RenderPathForward;
typedef struct _armory__renderpath__RenderPathForward *armory__renderpath__RenderPathForward;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/RenderPath.h>


struct _armory__renderpath__$RenderPathForward {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	iron__RenderPath path;
	vclosure* setTargetMeshes;
	vclosure* drawMeshes;
	vclosure* init;
	vclosure* commands;
};
struct _armory__renderpath__RenderPathForward {
	hl_type *$type;
};
#endif

