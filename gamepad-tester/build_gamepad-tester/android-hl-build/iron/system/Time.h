﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__system__Time
#define INC_iron__system__Time
typedef struct _iron__system__$Time *iron__system__$Time;
typedef struct _iron__system__Time *iron__system__Time;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _iron__system__$Time {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	double scale;
	double last;
	double realDelta;
	vclosure* update;
};
struct _iron__system__Time {
	hl_type *$type;
};
#endif
