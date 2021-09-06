﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/object/Uniforms.h>
#include <hl/types/ArrayObj.h>
#include <iron/object/Uniforms.h>
kha__Image armory_object_Uniforms_textureLink(iron__object__Object,iron__data__MaterialData,String);
extern hl_type $t_fun_620f373;
iron__math__Vec4 armory_object_Uniforms_vec3Link(iron__object__Object,iron__data__MaterialData,String);
extern hl_type $t_fun_03d60de;
vdynamic* armory_object_Uniforms_floatLink(iron__object__Object,iron__data__MaterialData,String);
extern hl_type $t_fun_f126611;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern iron__object__$Uniforms $g__iron_object_Uniforms;

void armory_object_Uniforms_register() {
	hl__types__ArrayObj r0;
	hl_type *r2;
	iron__object__$Uniforms r5;
	vclosure *r4, *r6, *r7;
	int r3;
	varray *r1;
	static vclosure cl$0 = { &$t_fun_620f373, armory_object_Uniforms_textureLink, 0 };
	static vclosure cl$1 = { &$t_fun_03d60de, armory_object_Uniforms_vec3Link, 0 };
	static vclosure cl$2 = { &$t_fun_f126611, armory_object_Uniforms_floatLink, 0 };
	r2 = &$t_fun_620f373;
	r3 = 1;
	r1 = hl_alloc_array(r2,r3);
	r4 = &cl$0;
	r3 = 0;
	((vclosure**)(r1 + 1))[r3] = r4;
	r0 = hl_types_ArrayObj_alloc(r1);
	r5 = (iron__object__$Uniforms)$g__iron_object_Uniforms;
	r5->externalTextureLinks = r0;
	r2 = &$t_fun_03d60de;
	r3 = 1;
	r1 = hl_alloc_array(r2,r3);
	r6 = &cl$1;
	r3 = 0;
	((vclosure**)(r1 + 1))[r3] = r6;
	r0 = hl_types_ArrayObj_alloc(r1);
	r5 = (iron__object__$Uniforms)$g__iron_object_Uniforms;
	r5->externalVec3Links = r0;
	r2 = &$t_fun_f126611;
	r3 = 1;
	r1 = hl_alloc_array(r2,r3);
	r7 = &cl$2;
	r3 = 0;
	((vclosure**)(r1 + 1))[r3] = r7;
	r0 = hl_types_ArrayObj_alloc(r1);
	r5 = (iron__object__$Uniforms)$g__iron_object_Uniforms;
	r5->externalFloatLinks = r0;
	return;
}

kha__Image armory_object_Uniforms_textureLink(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	kha__Image r3;
	r3 = NULL;
	return r3;
}

iron__math__Vec4 armory_object_Uniforms_vec3Link(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	iron__math__Vec4 r3;
	r3 = NULL;
	return r3;
}

vdynamic* armory_object_Uniforms_floatLink(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	vdynamic *r3;
	r3 = NULL;
	return r3;
}
