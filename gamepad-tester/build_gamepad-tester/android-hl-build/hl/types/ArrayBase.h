﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_hl__types__ArrayBase
#define INC_hl__types__ArrayBase
typedef struct _hl__types__$ArrayBase *hl__types__$ArrayBase;
typedef struct _hl__types__ArrayBase *hl__types__ArrayBase;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayBytes_hl_UI16.h>
#include <hl/types/ArrayBytes_Single.h>
#include <hl/types/ArrayBytes_Float.h>
#include <hl/types/ArrayAccess.h>


struct _hl__types__$ArrayBase {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* allocI32;
	vclosure* allocUI16;
	vclosure* allocF32;
	vclosure* allocF64;
};
struct _hl__types__ArrayBase {
	hl_type *$type;
	int length;
};
#endif
