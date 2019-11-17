﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__TObj
#define INC_iron__data__TObj
typedef struct _iron__data__$TObj *iron__data__$TObj;
typedef struct _iron__data__TObj *iron__data__TObj;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/data/TTransform.h>
#include <hl/types/ArrayObj.h>
#include <kha/arrays/Float32ArrayPrivate.h>
#include <iron/data/TAnimation.h>


struct _iron__data__$TObj {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TObj {
	hl_type *$type;
	String type;
	String name;
	String data_ref;
	iron__data__TTransform transform;
	hl__types__ArrayObj material_refs;
	hl__types__ArrayObj particle_refs;
	vdynamic* is_particle;
	hl__types__ArrayObj children;
	String group_ref;
	hl__types__ArrayObj lods;
	vdynamic* lod_material;
	hl__types__ArrayObj traits;
	hl__types__ArrayObj properties;
	hl__types__ArrayObj constraints;
	kha__arrays__Float32ArrayPrivate dimensions;
	hl__types__ArrayObj object_actions;
	hl__types__ArrayObj bone_actions;
	iron__data__TAnimation anim;
	iron__data__TObj parent;
	String parent_bone;
	kha__arrays__Float32ArrayPrivate parent_bone_tail;
	kha__arrays__Float32ArrayPrivate parent_bone_tail_pose;
	vdynamic* parent_bone_connected;
	vdynamic* visible;
	vdynamic* visible_mesh;
	vdynamic* visible_shadow;
	vdynamic* mobile;
	vdynamic* spawn;
	vdynamic* local_only;
	String tilesheet_ref;
	String tilesheet_action_ref;
	vdynamic* sampled;
};
#endif

