﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__KravurImage
#define INC_kha__KravurImage
typedef struct _kha__$KravurImage *kha__$KravurImage;
typedef struct _kha__KravurImage *kha__KravurImage;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayObj.h>
#include <kha/Image.h>


struct _kha__$KravurImage {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	hl__types__ArrayBytes_Int charBlocks;
};
struct _kha__KravurImage {
	hl_type *$type;
	double mySize;
	hl__types__ArrayObj chars;
	kha__Image texture;
	int width;
	int height;
	double baseline;
};
#endif

