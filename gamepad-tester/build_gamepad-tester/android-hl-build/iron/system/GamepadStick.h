﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__system__GamepadStick
#define INC_iron__system__GamepadStick
typedef struct _iron__system__$GamepadStick *iron__system__$GamepadStick;
typedef struct _iron__system__GamepadStick *iron__system__GamepadStick;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _iron__system__$GamepadStick {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__system__GamepadStick {
	hl_type *$type;
	double x;
	double y;
	double lastX;
	double lastY;
	bool moved;
	double movementX;
	double movementY;
};
#endif

