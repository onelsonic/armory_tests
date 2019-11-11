﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__Sound
#define INC_kha__Sound
typedef struct _kha__$Sound *kha__$Sound;
typedef struct _kha__Sound *kha__Sound;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Bytes.h>
#include <kha/arrays/Float32ArrayPrivate.h>


struct _kha__$Sound {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__Sound {
	hl_type *$type;
	haxe__io__Bytes compressedData;
	kha__arrays__Float32ArrayPrivate uncompressedData;
	double length;
	int channels;
	int sampleRate;
	vvirtual* f$5;
};
#endif

