﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__Scene
#define INC_iron__Scene
typedef struct _iron__$Scene *iron__$Scene;
typedef struct _iron__Scene *iron__Scene;
#include <_std/String.h>
#include <iron/Scene.h>
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayBytes_Int.h>
#include <iron/object/Object.h>
#include <iron/data/TObj.h>
#include <iron/data/Armature.h>
#include <iron/data/TSceneFormat.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <iron/object/Transform.h>
#include <hl/types/ArrayDyn.h>
#include <iron/object/CameraObject.h>
#include <iron/data/WorldData.h>
#include <haxe/ds/StringMap.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	vclosure* p1;
	iron__Scene p2;
} Enumt$ctx_d0fbc4f;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayObj p0;
	vclosure* p1;
	hl__types__ArrayBytes_Int p2;
} Enumt$ctx_f5a6c69;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__object__Object p0;
	iron__data__TObj p1;
	vclosure* p2;
	hl__types__ArrayObj p3;
	hl__types__ArrayBytes_Int p4;
	int p5;
	iron__Scene p6;
} Enumt$ctx_8aa5291;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	iron__data__Armature p1;
	hl__types__ArrayObj p2;
	iron__object__Object p3;
	iron__data__TObj p4;
	vclosure* p5;
	iron__Scene p6;
} Enumt$ctx_4787021;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TObj p0;
	vclosure* p1;
	iron__Scene p2;
} Enumt$ctx_1b2e85d;
typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	iron__object__Object p1;
	hl__types__ArrayBytes_Int p2;
	hl__types__ArrayObj p3;
} Enumt$ctx_a5ec823;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TObj p0;
	iron__object__Object p1;
	iron__data__TObj p2;
	vclosure* p3;
	String p4;
	iron__Scene p5;
	hl__types__ArrayObj p6;
	hl__types__ArrayBytes_Int p7;
	int p8;
} Enumt$ctx_a0cb5a1;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TObj p0;
	iron__object__Object p1;
	iron__data__TObj p2;
	vclosure* p3;
	String p4;
	iron__Scene p5;
	hl__types__ArrayObj p6;
	String p7;
	String p8;
	hl__types__ArrayObj p9;
} Enumt$ctx_08ff263;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TObj p0;
	iron__object__Object p1;
	vclosure* p2;
	iron__Scene p3;
} Enumt$ctx_a119f26;
typedef struct {
	HL__ENUM_CONSTRUCT__
	bool p0;
	hl__types__ArrayBytes_Int p1;
	int p2;
	hl__types__ArrayObj p3;
	iron__Scene p4;
} Enumt$ctx_5de6072;
typedef struct {
	HL__ENUM_CONSTRUCT__
	bool p0;
	hl__types__ArrayBytes_Int p1;
	int p2;
	hl__types__ArrayObj p3;
	iron__data__TObj p4;
	vclosure* p5;
} Enumt$ctx_162fc66;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__object__Object p0;
	vclosure* p1;
	iron__Scene p2;
} Enumt$ctx_fbd2a35;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__object__Object p0;
	vclosure* p1;
	iron__data__TSceneFormat p2;
	iron__Scene p3;
} Enumt$ctx_cdff214;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TSceneFormat p0;
	iron__Scene p1;
	hl__types__ArrayBytes_Int p2;
	int p3;
	hl__types__ArrayObj p4;
} Enumt$ctx_4df65cd;
typedef struct {
	HL__ENUM_CONSTRUCT__
	hl__types__ArrayBytes_Int p0;
	int p1;
	hl__types__ArrayObj p2;
	vclosure* p3;
	iron__data__TObj p4;
} Enumt$ctx_7165f68;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TSceneFormat p0;
	vclosure* p1;
} Enumt$ctx_b88e235;
struct _iron__$Scene {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	iron__Scene active;
	iron__object__Object global;
	int uidCounter;
	vclosure* create;
	bool framePassed;
	vclosure* setActive;
	vclosure* getObj;
	vclosure* traverseObjs;
	vclosure* generateTransform;
	vclosure* createTraits;
	vclosure* parseArg;
	vclosure* createConstraints;
	vclosure* createTraitClassInstance;
};
struct _iron__Scene {
	hl_type *$type;
	int uid;
	iron__data__TSceneFormat raw;
	iron__object__Object root;
	iron__object__Object sceneParent;
	iron__object__CameraObject camera;
	iron__data__WorldData world;
	hl__types__ArrayObj meshes;
	hl__types__ArrayObj lights;
	hl__types__ArrayObj cameras;
	hl__types__ArrayObj speakers;
	hl__types__ArrayObj empties;
	hl__types__ArrayObj animations;
	hl__types__ArrayObj armatures;
	haxe__ds__StringMap groups;
	haxe__ds__StringMap embedded;
	bool ready;
	hl__types__ArrayObj traitInits;
	hl__types__ArrayObj traitRemoves;
};
#endif

