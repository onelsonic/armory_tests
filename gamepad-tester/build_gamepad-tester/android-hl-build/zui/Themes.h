﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_zui__Themes
#define INC_zui__Themes
typedef struct _zui__$Themes *zui__$Themes;
typedef struct _zui__Themes *zui__Themes;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _zui__$Themes {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vvirtual* dark;
	vvirtual* light;
};
struct _zui__Themes {
	hl_type *$type;
};
#endif
