﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__object__Constraint
#define INC_iron__object__Constraint
typedef struct _iron__object__$Constraint *iron__object__$Constraint;
typedef struct _iron__object__Constraint *iron__object__Constraint;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/data/TConstraint.h>
#include <iron/object/Transform.h>


struct _iron__object__$Constraint {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__object__Constraint {
	hl_type *$type;
	iron__data__TConstraint raw;
	iron__object__Transform target;
};
#endif
