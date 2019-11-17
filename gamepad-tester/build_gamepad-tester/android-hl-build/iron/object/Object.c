﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/object/Object.h>
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
void iron_object_Transform_applyParentInverse(iron__object__Transform);
#include <iron/Scene.h>
#include <iron/Trait.h>
extern iron__$Scene $g__iron_Scene;
bool hl_types_ArrayObj_remove(hl__types__ArrayObj,vdynamic*);
void iron_object_Animation_remove(iron__object__Animation);
void iron_Trait_remove(iron__Trait);
int String___compare(String,vdynamic*);
#include <kha/graphics4/VertexBuffer.h>
#include <kha/Image.h>
#include <kha/graphics4/PipelineState.h>
#include <kha/math/FastMatrix3.h>
#include <kha/math/FastMatrix4.h>
#include <kha/graphics4/IndexBuffer.h>
#include <kha/arrays/Float32ArrayPrivate.h>
#include <kha/graphics4/CubeMap.h>
#include <kha/graphics2/Graphics.h>
void iron_App_removeInit(vclosure*);
void iron_App_removeUpdate(vclosure*);
void iron_App_removeLateUpdate(vclosure*);
void iron_App_removeRender(vclosure*);
void iron_App_removeRender2D(vclosure*);
hl__Class Type_getClass(vdynamic*);
#include <iron/data/Armature.h>
#include <iron/object/BoneAnimation.h>
extern hl_type $t_iron_object_BoneAnimation;
extern hl_type $t_iron_object_Animation;
void iron_object_BoneAnimation_addBoneChild(iron__object__BoneAnimation,String,iron__object__Object);
#include <iron/object/ObjectAnimation.h>
extern hl_type $t_fun_2452a93;
void iron_Scene_notifyOnInit(iron__Scene,vclosure*);
extern hl_type $t_iron_object_ObjectAnimation;
void iron_object_ObjectAnimation_new(iron__object__ObjectAnimation,iron__object__Object,hl__types__ArrayObj);
extern iron__object__$Object $g__iron_object_Object;
extern hl_type $t_iron_object_Object;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type $t_iron_Trait;
extern String $s_;
extern hl_type $t_iron_object_Transform;
void iron_object_Transform_new(iron__object__Transform,iron__object__Object);

void iron_object_Object_addChild(iron__object__Object r0,iron__object__Object r1,bool* r2) {
	hl__types__ArrayObj r7;
	bool r3;
	iron__object__Transform r8;
	iron__object__Object r5;
	int r6;
	if( r2 ) goto label$f9f94e9_1_3;
	r3 = false;
	goto label$f9f94e9_1_4;
	label$f9f94e9_1_3:
	r3 = *r2;
	label$f9f94e9_1_4:
	if( r1 == NULL ) hl_null_access();
	r5 = r1->parent;
	if( r5 != r0 ) goto label$f9f94e9_1_8;
	return;
	label$f9f94e9_1_8:
	r7 = r0->children;
	if( r7 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_push(r7,((vdynamic*)r1));
	r1->parent = r0;
	if( !r3 ) goto label$f9f94e9_1_16;
	r8 = r1->transform;
	if( r8 == NULL ) hl_null_access();
	iron_object_Transform_applyParentInverse(r8);
	label$f9f94e9_1_16:
	return;
}

void iron_object_Object_remove(iron__object__Object r0) {
	hl__types__ArrayObj r5;
	iron__$Scene r4;
	iron__Scene r3;
	bool r2;
	iron__Trait r12;
	vdynamic *r10;
	iron__object__Object r9;
	varray *r11;
	int r7, r8;
	iron__object__Animation r6;
	r2 = r0->isEmpty;
	if( !r2 ) goto label$f9f94e9_2_11;
	r4 = (iron__$Scene)$g__iron_Scene;
	r3 = r4->active;
	if( !r3 ) goto label$f9f94e9_2_11;
	r4 = (iron__$Scene)$g__iron_Scene;
	r3 = r4->active;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->empties;
	if( r5 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_remove(r5,((vdynamic*)r0));
	label$f9f94e9_2_11:
	r6 = r0->animation;
	if( !r6 ) goto label$f9f94e9_2_16;
	r6 = r0->animation;
	if( r6 == NULL ) hl_null_access();
	iron_object_Animation_remove(r6);
	label$f9f94e9_2_16:
	r5 = r0->children;
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	r8 = 0;
	if( r8 >= r7 ) goto label$f9f94e9_2_35;
	r5 = r0->children;
	if( r5 == NULL ) hl_null_access();
	r7 = 0;
	r8 = r5->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$f9f94e9_2_29;
	r9 = NULL;
	goto label$f9f94e9_2_32;
	label$f9f94e9_2_29:
	r11 = r5->array;
	r10 = ((vdynamic**)(r11 + 1))[r7];
	r9 = (iron__object__Object)r10;
	label$f9f94e9_2_32:
	if( r9 == NULL ) hl_null_access();
	((void (*)(iron__object__Object))r9->$type->vobj_proto[0])(r9);
	goto label$f9f94e9_2_16;
	label$f9f94e9_2_35:
	r5 = r0->traits;
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	r8 = 0;
	if( r8 >= r7 ) goto label$f9f94e9_2_54;
	r5 = r0->traits;
	if( r5 == NULL ) hl_null_access();
	r7 = 0;
	r8 = r5->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$f9f94e9_2_48;
	r12 = NULL;
	goto label$f9f94e9_2_51;
	label$f9f94e9_2_48:
	r11 = r5->array;
	r10 = ((vdynamic**)(r11 + 1))[r7];
	r12 = (iron__Trait)r10;
	label$f9f94e9_2_51:
	if( r12 == NULL ) hl_null_access();
	iron_Trait_remove(r12);
	goto label$f9f94e9_2_35;
	label$f9f94e9_2_54:
	r9 = r0->parent;
	if( !r9 ) goto label$f9f94e9_2_63;
	r9 = r0->parent;
	if( r9 == NULL ) hl_null_access();
	r5 = r9->children;
	if( r5 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_remove(r5,((vdynamic*)r0));
	r9 = NULL;
	r0->parent = r9;
	label$f9f94e9_2_63:
	return;
}

iron__object__Object iron_object_Object_getChild(iron__object__Object r0,String r1) {
	String r2;
	hl__types__ArrayObj r5;
	iron__object__Object r7, r9;
	vdynamic *r3;
	varray *r8;
	int r4, r6;
	r2 = r0->name;
	if( r2 != r1 && (!r2 || !r1 || String___compare(r2,(vdynamic*)r1) != 0) ) goto label$f9f94e9_3_3;
	return r0;
	label$f9f94e9_3_3:
	r4 = 0;
	r5 = r0->children;
	label$f9f94e9_3_5:
	if( r5 == NULL ) hl_null_access();
	r6 = r5->length;
	if( r4 >= r6 ) goto label$f9f94e9_3_22;
	r6 = r5->length;
	if( ((unsigned)r4) < ((unsigned)r6) ) goto label$f9f94e9_3_13;
	r7 = NULL;
	goto label$f9f94e9_3_16;
	label$f9f94e9_3_13:
	r8 = r5->array;
	r3 = ((vdynamic**)(r8 + 1))[r4];
	r7 = (iron__object__Object)r3;
	label$f9f94e9_3_16:
	++r4;
	if( r7 == NULL ) hl_null_access();
	r9 = iron_object_Object_getChild(r7,r1);
	if( !r9 ) goto label$f9f94e9_3_21;
	return r9;
	label$f9f94e9_3_21:
	goto label$f9f94e9_3_5;
	label$f9f94e9_3_22:
	r7 = NULL;
	return r7;
}

void iron_object_Object_addTrait(iron__object__Object r0,iron__Trait r1) {
	hl__types__ArrayObj r3;
	vclosure *r6;
	vdynamic *r7;
	varray *r8;
	int r2, r5;
	r3 = r0->traits;
	if( r3 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_push(r3,((vdynamic*)r1));
	if( r1 == NULL ) hl_null_access();
	r1->object = r0;
	r3 = r1->_add;
	if( !r3 ) goto label$f9f94e9_4_27;
	r2 = 0;
	r3 = r1->_add;
	label$f9f94e9_4_9:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r2 >= r5 ) goto label$f9f94e9_4_24;
	r5 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r5) ) goto label$f9f94e9_4_17;
	r6 = NULL;
	goto label$f9f94e9_4_20;
	label$f9f94e9_4_17:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r2];
	r6 = (vclosure*)r7;
	label$f9f94e9_4_20:
	++r2;
	if( r6 == NULL ) hl_null_access();
	r6->hasValue ? ((void (*)(vdynamic*))r6->fun)((vdynamic*)r6->value) : ((void (*)(void))r6->fun)();
	goto label$f9f94e9_4_9;
	label$f9f94e9_4_24:
	if( r1 == NULL ) hl_null_access();
	r3 = NULL;
	r1->_add = r3;
	label$f9f94e9_4_27:
	return;
}

void iron_object_Object_removeTrait(iron__object__Object r0,iron__Trait r1) {
	hl__types__ArrayObj r3;
	bool r11;
	vclosure *r6, *r9, *r10;
	vdynamic *r7;
	varray *r8;
	int r4, r5;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_init;
	if( !r3 ) goto label$f9f94e9_5_22;
	r4 = 0;
	r3 = r1->_init;
	label$f9f94e9_5_5:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r4 >= r5 ) goto label$f9f94e9_5_19;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f9f94e9_5_13;
	r6 = NULL;
	goto label$f9f94e9_5_16;
	label$f9f94e9_5_13:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (vclosure*)r7;
	label$f9f94e9_5_16:
	++r4;
	iron_App_removeInit(r6);
	goto label$f9f94e9_5_5;
	label$f9f94e9_5_19:
	if( r1 == NULL ) hl_null_access();
	r3 = NULL;
	r1->_init = r3;
	label$f9f94e9_5_22:
	r3 = r1->_update;
	if( !r3 ) goto label$f9f94e9_5_43;
	r4 = 0;
	r3 = r1->_update;
	label$f9f94e9_5_26:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r4 >= r5 ) goto label$f9f94e9_5_40;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f9f94e9_5_34;
	r6 = NULL;
	goto label$f9f94e9_5_37;
	label$f9f94e9_5_34:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (vclosure*)r7;
	label$f9f94e9_5_37:
	++r4;
	iron_App_removeUpdate(r6);
	goto label$f9f94e9_5_26;
	label$f9f94e9_5_40:
	if( r1 == NULL ) hl_null_access();
	r3 = NULL;
	r1->_update = r3;
	label$f9f94e9_5_43:
	r3 = r1->_lateUpdate;
	if( !r3 ) goto label$f9f94e9_5_64;
	r4 = 0;
	r3 = r1->_lateUpdate;
	label$f9f94e9_5_47:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r4 >= r5 ) goto label$f9f94e9_5_61;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f9f94e9_5_55;
	r6 = NULL;
	goto label$f9f94e9_5_58;
	label$f9f94e9_5_55:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (vclosure*)r7;
	label$f9f94e9_5_58:
	++r4;
	iron_App_removeLateUpdate(r6);
	goto label$f9f94e9_5_47;
	label$f9f94e9_5_61:
	if( r1 == NULL ) hl_null_access();
	r3 = NULL;
	r1->_lateUpdate = r3;
	label$f9f94e9_5_64:
	r3 = r1->_render;
	if( !r3 ) goto label$f9f94e9_5_85;
	r4 = 0;
	r3 = r1->_render;
	label$f9f94e9_5_68:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r4 >= r5 ) goto label$f9f94e9_5_82;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f9f94e9_5_76;
	r9 = NULL;
	goto label$f9f94e9_5_79;
	label$f9f94e9_5_76:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r9 = (vclosure*)r7;
	label$f9f94e9_5_79:
	++r4;
	iron_App_removeRender(r9);
	goto label$f9f94e9_5_68;
	label$f9f94e9_5_82:
	if( r1 == NULL ) hl_null_access();
	r3 = NULL;
	r1->_render = r3;
	label$f9f94e9_5_85:
	r3 = r1->_render2D;
	if( !r3 ) goto label$f9f94e9_5_106;
	r4 = 0;
	r3 = r1->_render2D;
	label$f9f94e9_5_89:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r4 >= r5 ) goto label$f9f94e9_5_103;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f9f94e9_5_97;
	r10 = NULL;
	goto label$f9f94e9_5_100;
	label$f9f94e9_5_97:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r10 = (vclosure*)r7;
	label$f9f94e9_5_100:
	++r4;
	iron_App_removeRender2D(r10);
	goto label$f9f94e9_5_89;
	label$f9f94e9_5_103:
	if( r1 == NULL ) hl_null_access();
	r3 = NULL;
	r1->_render2D = r3;
	label$f9f94e9_5_106:
	r3 = r1->_remove;
	if( !r3 ) goto label$f9f94e9_5_128;
	r4 = 0;
	r3 = r1->_remove;
	label$f9f94e9_5_110:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r4 >= r5 ) goto label$f9f94e9_5_125;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f9f94e9_5_118;
	r6 = NULL;
	goto label$f9f94e9_5_121;
	label$f9f94e9_5_118:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (vclosure*)r7;
	label$f9f94e9_5_121:
	++r4;
	if( r6 == NULL ) hl_null_access();
	r6->hasValue ? ((void (*)(vdynamic*))r6->fun)((vdynamic*)r6->value) : ((void (*)(void))r6->fun)();
	goto label$f9f94e9_5_110;
	label$f9f94e9_5_125:
	if( r1 == NULL ) hl_null_access();
	r3 = NULL;
	r1->_remove = r3;
	label$f9f94e9_5_128:
	r3 = r0->traits;
	if( r3 == NULL ) hl_null_access();
	r11 = hl_types_ArrayObj_remove(r3,((vdynamic*)r1));
	return;
}

iron__Trait iron_object_Object_getTrait(iron__object__Object r0,hl__Class r1) {
	hl__Class r8;
	hl__types__ArrayObj r3;
	iron__Trait r5;
	vdynamic *r6;
	varray *r7;
	int r2, r4;
	r2 = 0;
	r3 = r0->traits;
	label$f9f94e9_6_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r2 >= r4 ) goto label$f9f94e9_6_18;
	r4 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$f9f94e9_6_10;
	r5 = NULL;
	goto label$f9f94e9_6_13;
	label$f9f94e9_6_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r2];
	r5 = (iron__Trait)r6;
	label$f9f94e9_6_13:
	++r2;
	r8 = Type_getClass(((vdynamic*)r5));
	if( r8 != r1 ) goto label$f9f94e9_6_17;
	return r5;
	label$f9f94e9_6_17:
	goto label$f9f94e9_6_2;
	label$f9f94e9_6_18:
	r5 = NULL;
	return r5;
}

iron__object__BoneAnimation iron_object_Object_getParentArmature(iron__object__Object r0,String r1) {
	String r11;
	hl__types__ArrayObj r3;
	iron__$Scene r5;
	iron__Scene r4;
	iron__data__Armature r10;
	iron__object__BoneAnimation r12;
	vdynamic *r8;
	varray *r9;
	iron__object__Animation r7;
	int r2, r6;
	r2 = 0;
	r5 = (iron__$Scene)$g__iron_Scene;
	r4 = r5->active;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->animations;
	label$f9f94e9_7_5:
	if( r3 == NULL ) hl_null_access();
	r6 = r3->length;
	if( r2 >= r6 ) goto label$f9f94e9_7_27;
	r6 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r6) ) goto label$f9f94e9_7_13;
	r7 = NULL;
	goto label$f9f94e9_7_16;
	label$f9f94e9_7_13:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r2];
	r7 = (iron__object__Animation)r8;
	label$f9f94e9_7_16:
	++r2;
	if( r7 == NULL ) hl_null_access();
	r10 = r7->armature;
	if( !r10 ) goto label$f9f94e9_7_26;
	r10 = r7->armature;
	if( r10 == NULL ) hl_null_access();
	r11 = r10->name;
	if( r11 != r1 && (!r11 || !r1 || String___compare(r11,(vdynamic*)r1) != 0) ) goto label$f9f94e9_7_26;
	r12 = (iron__object__BoneAnimation)hl_dyn_castp(&r7,&$t_iron_object_Animation,&$t_iron_object_BoneAnimation);
	return r12;
	label$f9f94e9_7_26:
	goto label$f9f94e9_7_5;
	label$f9f94e9_7_27:
	r12 = NULL;
	return r12;
}

void iron_object_Object_setupAnimation__$1(iron__object__Object r0) {
	String r2;
	iron__data__TObj r5;
	iron__object__Object r3;
	iron__object__BoneAnimation r1;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->parent;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->name;
	r1 = iron_object_Object_getParentArmature(r0,r2);
	if( !r1 ) goto label$f9f94e9_8_11;
	if( r1 == NULL ) hl_null_access();
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r2 = r5->parent_bone;
	iron_object_BoneAnimation_addBoneChild(r1,r2,r0);
	label$f9f94e9_8_11:
	return;
}

void iron_object_Object_setupAnimation(iron__object__Object r0,hl__types__ArrayObj r1) {
	String r3;
	iron__$Scene r6;
	iron__Scene r5;
	iron__object__ObjectAnimation r8;
	iron__data__TObj r4;
	vclosure *r7;
	r4 = r0->raw;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->parent_bone;
	if( !r3 ) goto label$f9f94e9_9_9;
	r6 = (iron__$Scene)$g__iron_Scene;
	r5 = r6->active;
	if( r5 == NULL ) hl_null_access();
	r7 = hl_alloc_closure_ptr(&$t_fun_2452a93,iron_object_Object_setupAnimation__$1,r0);
	iron_Scene_notifyOnInit(r5,r7);
	label$f9f94e9_9_9:
	if( r1 ) goto label$f9f94e9_9_11;
	return;
	label$f9f94e9_9_11:
	r8 = (iron__object__ObjectAnimation)hl_alloc_obj(&$t_iron_object_ObjectAnimation);
	iron_object_ObjectAnimation_new(r8,r0,r1);
	r0->animation = ((iron__object__Animation)r8);
	return;
}

double iron_object_Object_seededRandom() {
	double r3, r4;
	iron__object__$Object r1;
	int r0, r2;
	r1 = (iron__object__$Object)$g__iron_object_Object;
	r0 = r1->seed;
	r2 = 9301;
	r0 = r0 * r2;
	r2 = 49297;
	r0 = r0 + r2;
	r2 = 233280;
	r0 = r2 == 0 ? 0 : r0 % r2;
	r1 = (iron__object__$Object)$g__iron_object_Object;
	r1->seed = r0;
	r1 = (iron__object__$Object)$g__iron_object_Object;
	r0 = r1->seed;
	r3 = (double)r0;
	r4 = 233280.;
	r3 = r3 / r4;
	return r3;
}

void iron_object_Object_new(iron__object__Object r0) {
	String r9;
	hl__Class r16;
	hl__types__ArrayObj r4;
	haxe__ds__StringMap r2;
	hl_type *r6;
	iron__$Scene r18;
	iron__Scene r17;
	bool r1;
	iron__data__TObj r10;
	iron__object__Transform r14;
	double r13;
	iron__object__$Object r11;
	iron__object__Object r8;
	int r7, r12;
	varray *r5;
	iron__object__Animation r3;
	r1 = false;
	r0->isEmpty = r1;
	r2 = NULL;
	r0->properties = r2;
	r1 = false;
	r0->culledShadow = r1;
	r1 = false;
	r0->culledMesh = r1;
	r1 = false;
	r0->culled = r1;
	r1 = true;
	r0->visibleShadow = r1;
	r1 = true;
	r0->visibleMesh = r1;
	r1 = true;
	r0->visible = r1;
	r3 = NULL;
	r0->animation = r3;
	r4 = NULL;
	r0->lods = r4;
	r6 = &$t_iron_object_Object;
	r7 = 0;
	r5 = hl_alloc_array(r6,r7);
	r4 = hl_types_ArrayObj_alloc(r5);
	r0->children = r4;
	r8 = NULL;
	r0->parent = r8;
	r6 = &$t_iron_Trait;
	r7 = 0;
	r5 = hl_alloc_array(r6,r7);
	r4 = hl_types_ArrayObj_alloc(r5);
	r0->traits = r4;
	r4 = NULL;
	r0->constraints = r4;
	r9 = (String)$s_;
	r0->name = r9;
	r10 = NULL;
	r0->raw = r10;
	r11 = (iron__object__$Object)$g__iron_object_Object;
	r7 = r11->uidCounter;
	r12 = r7;
	++r7;
	r11->uidCounter = r7;
	r0->uid = r12;
	r13 = iron_object_Object_seededRandom();
	r0->urandom = r13;
	r14 = (iron__object__Transform)hl_alloc_obj(&$t_iron_object_Transform);
	iron_object_Transform_new(r14,r0);
	r0->transform = r14;
	r16 = Type_getClass(((vdynamic*)r0));
	r11 = (iron__object__$Object)$g__iron_object_Object;
	if( r16 == ((hl__Class)r11) ) goto label$f9f94e9_11_54;
	r1 = false;
	goto label$f9f94e9_11_55;
	label$f9f94e9_11_54:
	r1 = true;
	label$f9f94e9_11_55:
	r0->isEmpty = r1;
	r1 = r0->isEmpty;
	if( !r1 ) goto label$f9f94e9_11_67;
	r18 = (iron__$Scene)$g__iron_Scene;
	r17 = r18->active;
	if( !r17 ) goto label$f9f94e9_11_67;
	r18 = (iron__$Scene)$g__iron_Scene;
	r17 = r18->active;
	if( r17 == NULL ) hl_null_access();
	r4 = r17->empties;
	if( r4 == NULL ) hl_null_access();
	r7 = hl_types_ArrayObj_push(r4,((vdynamic*)r0));
	label$f9f94e9_11_67:
	return;
}

