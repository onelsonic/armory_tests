﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TTilesheetAction
#define INC_iron__data__TTilesheetAction
typedef struct _iron__data__$TTilesheetAction *iron__data__$TTilesheetAction;
typedef struct _iron__data__TTilesheetAction *iron__data__TTilesheetAction;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _iron__data__$TTilesheetAction {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TTilesheetAction {
	hl_type *$type;
	String name;
	int start;
	int end;
	bool loop;
};
#endif

