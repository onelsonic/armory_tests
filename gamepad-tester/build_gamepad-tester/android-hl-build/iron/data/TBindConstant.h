﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TBindConstant
#define INC_iron__data__TBindConstant
typedef struct _iron__data__$TBindConstant *iron__data__$TBindConstant;
typedef struct _iron__data__TBindConstant *iron__data__TBindConstant;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/arrays/Float32ArrayPrivate.h>


struct _iron__data__$TBindConstant {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TBindConstant {
	hl_type *$type;
	String name;
	kha__arrays__Float32ArrayPrivate vec4;
	kha__arrays__Float32ArrayPrivate vec3;
	kha__arrays__Float32ArrayPrivate vec2;
	vdynamic* _float;
	vdynamic* bool;
	vdynamic* _int;
};
#endif
