﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TMaterialData
#define INC_iron__data__TMaterialData
typedef struct _iron__data__$TMaterialData *iron__data__$TMaterialData;
typedef struct _iron__data__TMaterialData *iron__data__TMaterialData;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <iron/data/TShaderOverride.h>


struct _iron__data__$TMaterialData {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TMaterialData {
	hl_type *$type;
	String name;
	String shader;
	hl__types__ArrayObj contexts;
	String skip_context;
	iron__data__TShaderOverride override_context;
};
#endif

