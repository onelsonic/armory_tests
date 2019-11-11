﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TCameraData
#define INC_iron__data__TCameraData
typedef struct _iron__data__$TCameraData *iron__data__$TCameraData;
typedef struct _iron__data__TCameraData *iron__data__TCameraData;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/arrays/Float32ArrayPrivate.h>


struct _iron__data__$TCameraData {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TCameraData {
	hl_type *$type;
	String name;
	float near_plane;
	float far_plane;
	float fov;
	kha__arrays__Float32ArrayPrivate clear_color;
	vdynamic* aspect;
	vdynamic* frustum_culling;
	kha__arrays__Float32ArrayPrivate ortho;
};
#endif

