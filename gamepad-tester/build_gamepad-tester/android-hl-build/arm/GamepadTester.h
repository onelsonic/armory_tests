﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_arm__GamepadTester
#define INC_arm__GamepadTester
typedef struct _arm__$GamepadTester *arm__$GamepadTester;
typedef struct _arm__GamepadTester *arm__GamepadTester;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/Trait.h>
#include <iron/object/Object.h>
#include <hl/types/ArrayObj.h>
#include <armory/trait/internal/CanvasScript.h>
#include <iron/system/Gamepad.h>


struct _arm__$GamepadTester {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _arm__GamepadTester {
	hl_type *$type;
	iron__object__Object object;
	hl__types__ArrayObj _add;
	hl__types__ArrayObj _init;
	hl__types__ArrayObj _remove;
	hl__types__ArrayObj _update;
	hl__types__ArrayObj _lateUpdate;
	hl__types__ArrayObj _render;
	hl__types__ArrayObj _render2D;
	armory__trait__internal__CanvasScript canvas;
	iron__system__Gamepad gamepad;
	double inileftStickx;
	double inileftSticky;
	double inirightStickx;
	double inirightSticky;
	bool gamepadnotcalibrated;
};
#endif

