﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TTextureUnit
#define INC_iron__data__TTextureUnit
typedef struct _iron__data__$TTextureUnit *iron__data__$TTextureUnit;
typedef struct _iron__data__TTextureUnit *iron__data__TTextureUnit;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _iron__data__$TTextureUnit {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TTextureUnit {
	hl_type *$type;
	String name;
	vdynamic* is_image;
	String link;
};
#endif

