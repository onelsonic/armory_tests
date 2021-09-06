﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_armory__renderpath__Inc
#define INC_armory__renderpath__Inc
typedef struct _armory__renderpath__$Inc *armory__renderpath__$Inc;
typedef struct _armory__renderpath__Inc *armory__renderpath__Inc;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/RenderPath.h>
#include <iron/object/LightObject.h>


struct _armory__renderpath__$Inc {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	iron__RenderPath path;
	double superSample;
	int pointIndex;
	int spotIndex;
	vclosure* init;
	vclosure* bindShadowMap;
	vclosure* shadowMapName;
	vclosure* getShadowMap;
	vclosure* drawShadowMap;
};
struct _armory__renderpath__Inc {
	hl_type *$type;
};
#endif
