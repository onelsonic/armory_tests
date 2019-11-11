﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__FramebufferOptions
#define INC_kha__FramebufferOptions
typedef struct _kha__$FramebufferOptions *kha__$FramebufferOptions;
typedef struct _kha__FramebufferOptions *kha__FramebufferOptions;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _kha__$FramebufferOptions {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__FramebufferOptions {
	hl_type *$type;
	int frequency;
	bool verticalSync;
	int colorBufferBits;
	int depthBufferBits;
	int stencilBufferBits;
	int samplesPerPixel;
};
#endif

