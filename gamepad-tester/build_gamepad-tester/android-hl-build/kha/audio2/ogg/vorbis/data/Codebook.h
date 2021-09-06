﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__audio2__ogg__vorbis__data__Codebook
#define INC_kha__audio2__ogg__vorbis__data__Codebook
typedef struct _kha__audio2__ogg__vorbis__data__$Codebook *kha__audio2__ogg__vorbis__data__$Codebook;
typedef struct _kha__audio2__ogg__vorbis__data__Codebook *kha__audio2__ogg__vorbis__data__Codebook;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayBytes_Float.h>


struct _kha__audio2__ogg__vorbis__data__$Codebook {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* read;
};
struct _kha__audio2__ogg__vorbis__data__Codebook {
	hl_type *$type;
	int dimensions;
	int entries;
	hl__types__ArrayBytes_Int codewordLengths;
	double minimumValue;
	double deltaValue;
	int valueBits;
	int lookupType;
	bool sequenceP;
	bool sparse;
	int lookupValues;
	hl__types__ArrayBytes_Float multiplicands;
	hl__types__ArrayBytes_Int codewords;
	hl__types__ArrayBytes_Int fastHuffman;
	hl__types__ArrayBytes_Int sortedCodewords;
	hl__types__ArrayBytes_Int sortedValues;
	int sortedEntries;
};
#endif
