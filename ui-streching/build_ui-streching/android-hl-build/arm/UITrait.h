﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_arm__UITrait
#define INC_arm__UITrait
typedef struct _arm__$UITrait *arm__$UITrait;
typedef struct _arm__UITrait *arm__UITrait;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/Trait.h>
#include <iron/object/Object.h>
#include <hl/types/ArrayObj.h>
#include <zui/Zui.h>


struct _arm__$UITrait {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _arm__UITrait {
	hl_type *$type;
	iron__object__Object object;
	hl__types__ArrayObj _add;
	hl__types__ArrayObj _init;
	hl__types__ArrayObj _remove;
	hl__types__ArrayObj _update;
	hl__types__ArrayObj _lateUpdate;
	hl__types__ArrayObj _render;
	hl__types__ArrayObj _render2D;
	zui__Zui ui;
	iron__object__Object cube;
	iron__object__Object plane;
	bool move;
};
#endif

