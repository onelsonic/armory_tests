﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__object__Transform
#define INC_iron__object__Transform
typedef struct _iron__object__$Transform *iron__object__$Transform;
typedef struct _iron__object__Transform *iron__object__Transform;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/math/Mat4.h>
#include <iron/math/Vec4.h>
#include <iron/math/Quat.h>
#include <iron/object/Object.h>


struct _iron__object__$Transform {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	iron__math__Mat4 temp;
};
struct _iron__object__Transform {
	hl_type *$type;
	iron__math__Mat4 world;
	bool localOnly;
	iron__math__Mat4 local;
	iron__math__Vec4 loc;
	iron__math__Quat rot;
	iron__math__Vec4 scale;
	float scaleWorld;
	iron__math__Mat4 worldUnpack;
	bool dirty;
	iron__object__Object object;
	iron__math__Vec4 dim;
	float radius;
	iron__math__Mat4 boneParent;
	float _eulerX;
	float _eulerY;
	float _eulerZ;
	iron__math__Vec4 dloc;
	iron__math__Quat drot;
	iron__math__Vec4 dscale;
	float _deulerX;
	float _deulerY;
	float _deulerZ;
};
#endif

