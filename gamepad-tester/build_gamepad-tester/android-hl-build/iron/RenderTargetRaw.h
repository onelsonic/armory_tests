﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__RenderTargetRaw
#define INC_iron__RenderTargetRaw
typedef struct _iron__$RenderTargetRaw *iron__$RenderTargetRaw;
typedef struct _iron__RenderTargetRaw *iron__RenderTargetRaw;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _iron__$RenderTargetRaw {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__RenderTargetRaw {
	hl_type *$type;
	String name;
	int width;
	int height;
	String format;
	vdynamic* scale;
	vdynamic* displayp;
	String depth_buffer;
	vdynamic* mipmaps;
	vdynamic* depth;
	vdynamic* is_image;
	vdynamic* is_cubemap;
};
#endif

