﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__math__Mat3
#define INC_iron__math__Mat3
typedef struct _iron__math__$Mat3 *iron__math__$Mat3;
typedef struct _iron__math__Mat3 *iron__math__Mat3;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/math/FastMatrix3.h>


struct _iron__math__$Mat3 {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__math__Mat3 {
	hl_type *$type;
	kha__math__FastMatrix3 self;
};
#endif

