﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TMaterialContext
#define INC_iron__data__TMaterialContext
typedef struct _iron__data__$TMaterialContext *iron__data__$TMaterialContext;
typedef struct _iron__data__TMaterialContext *iron__data__TMaterialContext;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>


struct _iron__data__$TMaterialContext {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TMaterialContext {
	hl_type *$type;
	String name;
	hl__types__ArrayObj bind_constants;
	hl__types__ArrayObj bind_textures;
};
#endif

