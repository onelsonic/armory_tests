﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__MaterialContext
#define INC_iron__data__MaterialContext
typedef struct _iron__data__$MaterialContext *iron__data__$MaterialContext;
typedef struct _iron__data__MaterialContext *iron__data__MaterialContext;
#include <iron/data/TMaterialContext.h>
#include <hl/types/ArrayBytes_Int.h>
#include <iron/data/TBindTexture.h>
#include <iron/data/MaterialContext.h>
#include <kha/Image.h>
#include <hl/types/ArrayObj.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TMaterialContext p0;
	vclosure* p1;
	hl__types__ArrayBytes_Int p2;
	int p3;
	iron__data__TBindTexture p4;
	iron__data__MaterialContext p5;
} Enum$t_ctx_bff41cf;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TMaterialContext p0;
	vclosure* p1;
	hl__types__ArrayBytes_Int p2;
	iron__data__TBindTexture p3;
	kha__Image p4;
	iron__data__MaterialContext p5;
	hl__types__ArrayObj p6;
	hl__types__ArrayBytes_Int p7;
	int p8;
} Enum$t_ctx_bc67316;
struct _iron__data__$MaterialContext {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	int num;
};
struct _iron__data__MaterialContext {
	hl_type *$type;
	iron__data__TMaterialContext raw;
	hl__types__ArrayObj textures;
	int id;
};
#endif

