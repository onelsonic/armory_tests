﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__audio2__ogg__vorbis__data__Mapping
#define INC_kha__audio2__ogg__vorbis__data__Mapping
typedef struct _kha__audio2__ogg__vorbis__data__$Mapping *kha__audio2__ogg__vorbis__data__$Mapping;
typedef struct _kha__audio2__ogg__vorbis__data__Mapping *kha__audio2__ogg__vorbis__data__Mapping;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayBytes_Int.h>


struct _kha__audio2__ogg__vorbis__data__$Mapping {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* read;
};
struct _kha__audio2__ogg__vorbis__data__Mapping {
	hl_type *$type;
	int couplingSteps;
	hl__types__ArrayObj chan;
	int submaps;
	hl__types__ArrayBytes_Int submapFloor;
	hl__types__ArrayBytes_Int submapResidue;
};
#endif

