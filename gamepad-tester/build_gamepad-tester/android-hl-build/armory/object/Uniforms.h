﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_armory__object__Uniforms
#define INC_armory__object__Uniforms
typedef struct _armory__object__$Uniforms *armory__object__$Uniforms;
typedef struct _armory__object__Uniforms *armory__object__Uniforms;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/object/Object.h>
#include <iron/data/MaterialData.h>
#include <kha/Image.h>
#include <iron/math/Vec4.h>


struct _armory__object__$Uniforms {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* _register;
	vclosure* textureLink;
	vclosure* vec3Link;
	vclosure* floatLink;
};
struct _armory__object__Uniforms {
	hl_type *$type;
};
#endif
