﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__object__MeshObject
#define INC_iron__object__MeshObject
typedef struct _iron__object__$MeshObject *iron__object__$MeshObject;
typedef struct _iron__object__MeshObject *iron__object__MeshObject;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/graphics4/PipelineState.h>
#include <iron/object/Object.h>
#include <iron/data/TObj.h>
#include <iron/object/Transform.h>
#include <hl/types/ArrayObj.h>
#include <iron/object/Animation.h>
#include <haxe/ds/StringMap.h>
#include <iron/data/MeshData.h>
#include <iron/object/Tilesheet.h>


struct _iron__object__$MeshObject {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	kha__graphics4__PipelineState lastPipeline;
};
struct _iron__object__MeshObject {
	hl_type *$type;
	int uid;
	double urandom;
	iron__data__TObj raw;
	String name;
	iron__object__Transform transform;
	hl__types__ArrayObj constraints;
	hl__types__ArrayObj traits;
	iron__object__Object parent;
	hl__types__ArrayObj children;
	hl__types__ArrayObj lods;
	iron__object__Animation animation;
	bool visible;
	bool visibleMesh;
	bool visibleShadow;
	bool culled;
	bool culledMesh;
	bool culledShadow;
	haxe__ds__StringMap properties;
	bool isEmpty;
	iron__data__MeshData data;
	hl__types__ArrayObj materials;
	int materialIndex;
	hl__types__ArrayObj particleSystems;
	hl__types__ArrayObj particleChildren;
	iron__object__MeshObject particleOwner;
	int particleIndex;
	double cameraDistance;
	double screenSize;
	bool frustumCulling;
	iron__object__Tilesheet tilesheet;
	String skip_context;
	String force_context;
};
#endif

