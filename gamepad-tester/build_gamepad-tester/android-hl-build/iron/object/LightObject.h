﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__object__LightObject
#define INC_iron__object__LightObject
typedef struct _iron__object__$LightObject *iron__object__$LightObject;
typedef struct _iron__object__LightObject *iron__object__LightObject;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <iron/math/Mat4.h>
#include <iron/math/Vec4.h>
#include <iron/object/Object.h>
#include <iron/data/TObj.h>
#include <iron/object/Transform.h>
#include <iron/object/Animation.h>
#include <haxe/ds/StringMap.h>
#include <iron/data/LightData.h>
#include <kha/arrays/Float32ArrayPrivate.h>
#include <hl/types/ArrayBytes_Single.h>


struct _iron__object__$LightObject {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int cascadeCount;
	double cascadeSplitFactor;
	double cascadeBounds;
	hl__types__ArrayObj corners;
	iron__math__Mat4 m;
	iron__math__Vec4 eye;
	vclosure* setCorners;
};
struct _iron__object__LightObject {
	hl_type *$type;
	int uid;
	double urandom;
	iron__data__TObj raw;
	String name;
	iron__object__Transform transform;
	hl__types__ArrayObj constraints;
	hl__types__ArrayObj traits;
	iron__object__Object parent;
	hl__types__ArrayObj children;
	hl__types__ArrayObj lods;
	iron__object__Animation animation;
	bool visible;
	bool visibleMesh;
	bool visibleShadow;
	bool culled;
	bool culledMesh;
	bool culledShadow;
	haxe__ds__StringMap properties;
	bool isEmpty;
	iron__data__LightData data;
	kha__arrays__Float32ArrayPrivate cascadeData;
	hl__types__ArrayObj cascadeVP;
	hl__types__ArrayObj camSlicedP;
	hl__types__ArrayBytes_Single cascadeSplit;
	iron__math__Mat4 bias;
	iron__math__Mat4 V;
	iron__math__Mat4 P;
	iron__math__Mat4 VP;
	hl__types__ArrayObj frustumPlanes;
};
#endif
