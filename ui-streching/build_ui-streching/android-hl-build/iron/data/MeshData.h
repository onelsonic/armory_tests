﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__MeshData
#define INC_iron__data__MeshData
typedef struct _iron__data__$MeshData *iron__data__$MeshData;
typedef struct _iron__data__MeshData *iron__data__MeshData;
#include <_std/String.h>
#include <iron/data/MeshData.h>
#include <iron/data/TSceneFormat.h>
#include <iron/data/TMeshData.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <iron/data/Geometry.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
} Enumt$ctx_bea635b;
typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	iron__data__TSceneFormat p1;
	iron__data__TMeshData p2;
} Enumt$ctx_4c331a2;
struct _iron__data__$MeshData {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* parse;
};
struct _iron__data__MeshData {
	hl_type *$type;
	String name;
	iron__data__TMeshData raw;
	iron__data__TSceneFormat format;
	iron__data__Geometry geom;
	int refcount;
	String handle;
	float scalePos;
	float scaleTex;
	bool isSkinned;
};
#endif

