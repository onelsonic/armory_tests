﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TShaderOverride
#define INC_iron__data__TShaderOverride
typedef struct _iron__data__$TShaderOverride *iron__data__$TShaderOverride;
typedef struct _iron__data__TShaderOverride *iron__data__TShaderOverride;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _iron__data__$TShaderOverride {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TShaderOverride {
	hl_type *$type;
	String cull_mode;
	String addressing;
	String filter;
	String shared_sampler;
};
#endif

