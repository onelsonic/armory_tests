﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TConstraint
#define INC_iron__data__TConstraint
typedef struct _iron__data__$TConstraint *iron__data__$TConstraint;
typedef struct _iron__data__TConstraint *iron__data__TConstraint;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _iron__data__$TConstraint {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TConstraint {
	hl_type *$type;
	String name;
	String type;
	String bone;
	String target;
	vdynamic* use_x;
	vdynamic* use_y;
	vdynamic* use_z;
	vdynamic* invert_x;
	vdynamic* invert_y;
	vdynamic* invert_z;
	vdynamic* use_offset;
	vdynamic* influence;
};
#endif
