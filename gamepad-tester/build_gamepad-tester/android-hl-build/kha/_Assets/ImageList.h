﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha___Assets__ImageList
#define INC_kha___Assets__ImageList
typedef struct _kha___Assets__$ImageList *kha___Assets__$ImageList;
typedef struct _kha___Assets__ImageList *kha___Assets__ImageList;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>


struct _kha___Assets__$ImageList {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha___Assets__ImageList {
	hl_type *$type;
	hl__types__ArrayObj names;
};
#endif
