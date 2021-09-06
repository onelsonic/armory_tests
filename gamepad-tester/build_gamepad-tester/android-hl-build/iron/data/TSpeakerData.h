﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TSpeakerData
#define INC_iron__data__TSpeakerData
typedef struct _iron__data__$TSpeakerData *iron__data__$TSpeakerData;
typedef struct _iron__data__TSpeakerData *iron__data__TSpeakerData;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _iron__data__$TSpeakerData {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TSpeakerData {
	hl_type *$type;
	String name;
	String sound;
	bool muted;
	bool loop;
	bool stream;
	float volume;
	float pitch;
	float attenuation;
	bool play_on_start;
};
#endif
