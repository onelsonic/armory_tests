﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__ParticleData
#define INC_iron__data__ParticleData
typedef struct _iron__data__$ParticleData *iron__data__$ParticleData;
typedef struct _iron__data__ParticleData *iron__data__ParticleData;
#include <_std/String.h>
#include <iron/data/ParticleData.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <iron/data/TParticleData.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
} Enumt$ctx_716d1cd;
struct _iron__data__$ParticleData {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* parse;
};
struct _iron__data__ParticleData {
	hl_type *$type;
	String name;
	iron__data__TParticleData raw;
};
#endif

