﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__ShaderData
#define INC_iron__data__ShaderData
typedef struct _iron__data__$ShaderData *iron__data__$ShaderData;
typedef struct _iron__data__ShaderData *iron__data__ShaderData;
#include <iron/data/TShaderData.h>
#include <hl/types/ArrayBytes_Int.h>
#include <iron/data/ShaderData.h>
#include <_std/String.h>
#include <iron/data/TShaderOverride.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <hl/types/ArrayObj.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TShaderData p0;
	vclosure* p1;
	hl__types__ArrayBytes_Int p2;
	int p3;
	iron__data__ShaderData p4;
} Enum$t_ctx_93df96f;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
	iron__data__TShaderOverride p2;
} Enum$t_ctx_84ae9f9;
struct _iron__data__$ShaderData {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* parse;
};
struct _iron__data__ShaderData {
	hl_type *$type;
	String name;
	iron__data__TShaderData raw;
	hl__types__ArrayObj contexts;
};
#endif
