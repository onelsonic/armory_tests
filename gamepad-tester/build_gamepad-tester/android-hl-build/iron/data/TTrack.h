﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TTrack
#define INC_iron__data__TTrack
typedef struct _iron__data__$TTrack *iron__data__$TTrack;
typedef struct _iron__data__TTrack *iron__data__TTrack;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/arrays/Uint32ArrayPrivate.h>
#include <kha/arrays/Float32ArrayPrivate.h>


struct _iron__data__$TTrack {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TTrack {
	hl_type *$type;
	String target;
	kha__arrays__Uint32ArrayPrivate frames;
	kha__arrays__Float32ArrayPrivate values;
};
#endif
