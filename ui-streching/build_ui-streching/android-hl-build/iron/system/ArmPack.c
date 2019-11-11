﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/system/ArmPack.h>
#include <haxe/io/Encoding.h>
#include <haxe/io/Bytes.h>
#include <haxe/io/Eof.h>
extern String s$;
int haxe_io_BytesInput_readByte(haxe__io__BytesInput);
extern hl_type t$_i32;
vdynamic* iron_system_ArmPack_readMap(haxe__io__BytesInput,int,String,String);
vdynamic* iron_system_ArmPack_readArray(haxe__io__BytesInput,int,String,String);
#include <haxe/io/Input.h>
String haxe_io_Input_readString(haxe__io__Input,int,venum*);
haxe__io__Bytes haxe_io_Input_read(haxe__io__Input,int);
int haxe_io_Input_readUInt16(haxe__io__Input);
int haxe_io_Input_readInt32(haxe__io__Input);
double haxe_io_Input_readFloat(haxe__io__Input);
extern hl_type t$_f64;
int haxe_io_Input_readInt8(haxe__io__Input);
int haxe_io_Input_readInt16(haxe__io__Input);
extern haxe__io__$Eof g$_haxe_io_Eof;
bool hl_BaseType_check(hl__BaseType,vdynamic*);
#include <kha/arrays/Float32ArrayPrivate.h>
#include <kha/arrays/Uint32ArrayPrivate.h>
#include <kha/arrays/Int16ArrayPrivate.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayObj.h>
int haxe_io_BytesInput_set_position(haxe__io__BytesInput,int);
extern hl_type t$kha_arrays_Float32ArrayPrivate;
void kha_arrays_Float32ArrayPrivate_new(kha__arrays__Float32ArrayPrivate);
#include <hl/natives.h>
extern hl_type t$kha_arrays_Uint32ArrayPrivate;
void kha_arrays_Uint32ArrayPrivate_new(kha__arrays__Uint32ArrayPrivate);
extern hl_type t$kha_arrays_Int16ArrayPrivate;
void kha_arrays_Int16ArrayPrivate_new(kha__arrays__Int16ArrayPrivate);
extern hl_type t$_dyn;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
#include <hl/types/ArrayBase.h>
hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase,bool*);
int hl_types_ArrayDyn_push(hl__types__ArrayDyn,vdynamic*);
hl__Class iron_system_ArmPack_getClass(String,String);
vdynamic* Type_createEmptyInstance(hl__Class);
String Std_string(vdynamic*);
void Reflect_setField(vdynamic*,String,vdynamic*);
#include <iron/data/TSceneFormat.h>
#include <iron/data/TTilesheetAction.h>
#include <iron/data/TAnimation.h>
#include <iron/data/TBindConstant.h>
#include <iron/data/TBindTexture.h>
#include <iron/data/TCameraData.h>
#include <iron/data/TObj.h>
#include <iron/data/TShaderConstant.h>
#include <iron/data/TConstraint.h>
#include <iron/data/TMaterialContext.h>
#include <iron/data/TShaderContext.h>
#include <iron/data/TGroup.h>
#include <iron/data/TIndexArray.h>
#include <iron/data/TLightData.h>
#include <iron/data/TLod.h>
#include <iron/data/TMaterialData.h>
#include <iron/data/TMeshData.h>
#include <iron/data/TShaderOverride.h>
#include <iron/data/TParticleData.h>
#include <iron/data/TParticleReference.h>
#include <iron/data/TProbeData.h>
#include <iron/data/TProperty.h>
#include <iron/data/TShaderData.h>
#include <iron/data/TSkin.h>
#include <iron/data/TSpeakerData.h>
#include <iron/data/TTerrainData.h>
#include <iron/data/TTextureUnit.h>
#include <iron/data/TTilesheetData.h>
#include <iron/data/TTrack.h>
#include <iron/data/TTrait.h>
#include <iron/data/TTransform.h>
#include <iron/data/TVertexArray.h>
#include <iron/data/TVertexElement.h>
#include <iron/data/TWorldData.h>
extern iron__data__$TSceneFormat g$_iron_data_TSceneFormat;
extern iron__data__$TTilesheetAction g$_iron_data_TTilesheetAction;
extern iron__data__$TAnimation g$_iron_data_TAnimation;
extern iron__data__$TBindConstant g$_iron_data_TBindConstant;
extern iron__data__$TBindTexture g$_iron_data_TBindTexture;
extern iron__data__$TCameraData g$_iron_data_TCameraData;
extern iron__data__$TObj g$_iron_data_TObj;
extern iron__data__$TShaderConstant g$_iron_data_TShaderConstant;
extern iron__data__$TConstraint g$_iron_data_TConstraint;
extern String s$material_datas;
int String___compare(String,vdynamic*);
extern iron__data__$TMaterialContext g$_iron_data_TMaterialContext;
extern iron__data__$TShaderContext g$_iron_data_TShaderContext;
extern iron__data__$TGroup g$_iron_data_TGroup;
extern iron__data__$TIndexArray g$_iron_data_TIndexArray;
extern iron__data__$TLightData g$_iron_data_TLightData;
extern iron__data__$TLod g$_iron_data_TLod;
extern iron__data__$TMaterialData g$_iron_data_TMaterialData;
extern iron__data__$TMeshData g$_iron_data_TMeshData;
extern iron__data__$TShaderOverride g$_iron_data_TShaderOverride;
extern iron__data__$TParticleData g$_iron_data_TParticleData;
extern iron__data__$TParticleReference g$_iron_data_TParticleReference;
extern iron__data__$TProbeData g$_iron_data_TProbeData;
extern iron__data__$TProperty g$_iron_data_TProperty;
extern iron__data__$TShaderData g$_iron_data_TShaderData;
extern iron__data__$TSkin g$_iron_data_TSkin;
extern iron__data__$TSpeakerData g$_iron_data_TSpeakerData;
extern iron__data__$TTerrainData g$_iron_data_TTerrainData;
extern iron__data__$TTextureUnit g$_iron_data_TTextureUnit;
extern iron__data__$TTilesheetData g$_iron_data_TTilesheetData;
extern iron__data__$TTrack g$_iron_data_TTrack;
extern iron__data__$TTrait g$_iron_data_TTrait;
extern iron__data__$TTransform g$_iron_data_TTransform;
extern iron__data__$TVertexArray g$_iron_data_TVertexArray;
extern iron__data__$TVertexElement g$_iron_data_TVertexElement;
extern iron__data__$TWorldData g$_iron_data_TWorldData;

vdynamic* iron_system_ArmPack_read(haxe__io__BytesInput r0,String r1,String r2) {
	String r3;
	venum *r8;
	haxe__io__Bytes r10;
	bool r9;
	double r11;
	haxe__io__Eof r13;
	haxe__io__$Eof r12;
	vdynamic *r4;
	int r5, r6, r7;
	hl_trap_ctx trap$0;
	if( r1 ) goto label$50b0613_1_3;
	r3 = (String)s$;
	r1 = r3;
	label$50b0613_1_3:
	if( r2 ) goto label$50b0613_1_6;
	r3 = (String)s$;
	r2 = r3;
	label$50b0613_1_6:
	hl_trap(trap$0,r4,label$50b0613_1_129);
	if( r0 == NULL ) hl_null_access();
	r5 = haxe_io_BytesInput_readByte(r0);
	switch(r5) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
		case 191:
		case 193:
		case 199:
		case 200:
		case 201:
		case 203:
		case 207:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
			r7 = 128;
			if( r5 >= r7 ) goto label$50b0613_1_15;
			r4 = hl_alloc_dynamic(&t$_i32);
			r4->v.i = r5;
			hl_endtrap(trap$0);
			return r4;
			label$50b0613_1_15:
			r7 = 144;
			if( r5 >= r7 ) goto label$50b0613_1_22;
			r6 = 15;
			r6 = r6 & r5;
			r4 = iron_system_ArmPack_readMap(r0,r6,r1,r2);
			hl_endtrap(trap$0);
			return r4;
			label$50b0613_1_22:
			r7 = 160;
			if( r5 >= r7 ) goto label$50b0613_1_29;
			r6 = 15;
			r6 = r6 & r5;
			r4 = iron_system_ArmPack_readArray(r0,r6,r1,r2);
			hl_endtrap(trap$0);
			return r4;
			label$50b0613_1_29:
			r7 = 192;
			if( r5 >= r7 ) goto label$50b0613_1_37;
			r6 = 31;
			r6 = r6 & r5;
			r8 = NULL;
			r3 = haxe_io_Input_readString(((haxe__io__Input)r0),r6,r8);
			hl_endtrap(trap$0);
			return ((vdynamic*)r3);
			label$50b0613_1_37:
			r7 = 223;
			if( r7 >= r5 ) goto label$50b0613_1_44;
			r6 = -256;
			r6 = r6 | r5;
			r4 = hl_alloc_dynamic(&t$_i32);
			r4->v.i = r6;
			hl_endtrap(trap$0);
			return r4;
			label$50b0613_1_44:
			goto label$50b0613_1_127;
		case 192:
			r4 = NULL;
			hl_endtrap(trap$0);
			return r4;
		case 194:
			r9 = false;
			r4 = hl_alloc_dynbool(r9);
			hl_endtrap(trap$0);
			return r4;
		case 195:
			r9 = true;
			r4 = hl_alloc_dynbool(r9);
			hl_endtrap(trap$0);
			return r4;
		case 196:
			r6 = haxe_io_BytesInput_readByte(r0);
			r10 = haxe_io_Input_read(((haxe__io__Input)r0),r6);
			hl_endtrap(trap$0);
			return ((vdynamic*)r10);
		case 197:
			r6 = haxe_io_Input_readUInt16(((haxe__io__Input)r0));
			r10 = haxe_io_Input_read(((haxe__io__Input)r0),r6);
			hl_endtrap(trap$0);
			return ((vdynamic*)r10);
		case 198:
			r6 = haxe_io_Input_readInt32(((haxe__io__Input)r0));
			r10 = haxe_io_Input_read(((haxe__io__Input)r0),r6);
			hl_endtrap(trap$0);
			return ((vdynamic*)r10);
		case 202:
			r11 = haxe_io_Input_readFloat(((haxe__io__Input)r0));
			r4 = hl_alloc_dynamic(&t$_f64);
			r4->v.d = r11;
			hl_endtrap(trap$0);
			return r4;
		case 204:
			r6 = haxe_io_BytesInput_readByte(r0);
			r4 = hl_alloc_dynamic(&t$_i32);
			r4->v.i = r6;
			hl_endtrap(trap$0);
			return r4;
		case 205:
			r6 = haxe_io_Input_readUInt16(((haxe__io__Input)r0));
			r4 = hl_alloc_dynamic(&t$_i32);
			r4->v.i = r6;
			hl_endtrap(trap$0);
			return r4;
		case 206:
			r6 = haxe_io_Input_readInt32(((haxe__io__Input)r0));
			r4 = hl_alloc_dynamic(&t$_i32);
			r4->v.i = r6;
			hl_endtrap(trap$0);
			return r4;
		case 208:
			r6 = haxe_io_Input_readInt8(((haxe__io__Input)r0));
			r4 = hl_alloc_dynamic(&t$_i32);
			r4->v.i = r6;
			hl_endtrap(trap$0);
			return r4;
		case 209:
			r6 = haxe_io_Input_readInt16(((haxe__io__Input)r0));
			r4 = hl_alloc_dynamic(&t$_i32);
			r4->v.i = r6;
			hl_endtrap(trap$0);
			return r4;
		case 210:
			r6 = haxe_io_Input_readInt32(((haxe__io__Input)r0));
			r4 = hl_alloc_dynamic(&t$_i32);
			r4->v.i = r6;
			hl_endtrap(trap$0);
			return r4;
		case 217:
			r6 = haxe_io_BytesInput_readByte(r0);
			r8 = NULL;
			r3 = haxe_io_Input_readString(((haxe__io__Input)r0),r6,r8);
			hl_endtrap(trap$0);
			return ((vdynamic*)r3);
		case 218:
			r6 = haxe_io_Input_readUInt16(((haxe__io__Input)r0));
			r8 = NULL;
			r3 = haxe_io_Input_readString(((haxe__io__Input)r0),r6,r8);
			hl_endtrap(trap$0);
			return ((vdynamic*)r3);
		case 219:
			r6 = haxe_io_Input_readInt32(((haxe__io__Input)r0));
			r8 = NULL;
			r3 = haxe_io_Input_readString(((haxe__io__Input)r0),r6,r8);
			hl_endtrap(trap$0);
			return ((vdynamic*)r3);
		case 220:
			r6 = haxe_io_Input_readUInt16(((haxe__io__Input)r0));
			r4 = iron_system_ArmPack_readArray(r0,r6,r1,r2);
			hl_endtrap(trap$0);
			return r4;
		case 221:
			r6 = haxe_io_Input_readInt32(((haxe__io__Input)r0));
			r4 = iron_system_ArmPack_readArray(r0,r6,r1,r2);
			hl_endtrap(trap$0);
			return r4;
		case 222:
			r6 = haxe_io_Input_readUInt16(((haxe__io__Input)r0));
			r4 = iron_system_ArmPack_readMap(r0,r6,r1,r2);
			hl_endtrap(trap$0);
			return r4;
		case 223:
			r6 = haxe_io_Input_readInt32(((haxe__io__Input)r0));
			r4 = iron_system_ArmPack_readMap(r0,r6,r1,r2);
			hl_endtrap(trap$0);
			return r4;
	}
	label$50b0613_1_127:
	hl_endtrap(trap$0);
	goto label$50b0613_1_135;
	label$50b0613_1_129:
	r12 = (haxe__io__$Eof)g$_haxe_io_Eof;
	r9 = hl_BaseType_check(((hl__BaseType)r12),r4);
	if( !r9 ) goto label$50b0613_1_134;
	r13 = (haxe__io__Eof)r4;
	goto label$50b0613_1_135;
	label$50b0613_1_134:
	hl_rethrow((vdynamic*)r4);
	label$50b0613_1_135:
	r4 = NULL;
	return r4;
}

vdynamic* iron_system_ArmPack_readArray(haxe__io__BytesInput r0,int r1,String r2,String r3) {
	bool *r26;
	String r4;
	kha__arrays__Int16ArrayPrivate r19, r20;
	hl__types__ArrayObj r24;
	hl_type *r23;
	bool r25;
	float r15;
	kha__arrays__Float32ArrayPrivate r9, r10;
	hl__types__ArrayDyn r21;
	kha__arrays__Uint32ArrayPrivate r17, r18;
	double r14;
	vdynamic *r16;
	varray *r22;
	vbyte *r11;
	int r5, r7, r8, r12, r13;
	if( r2 ) goto label$50b0613_2_3;
	r4 = (String)s$;
	r2 = r4;
	label$50b0613_2_3:
	if( r3 ) goto label$50b0613_2_6;
	r4 = (String)s$;
	r3 = r4;
	label$50b0613_2_6:
	if( r0 == NULL ) hl_null_access();
	r5 = haxe_io_BytesInput_readByte(r0);
	r7 = r0->pos;
	r8 = 1;
	r7 = r7 - r8;
	r7 = haxe_io_BytesInput_set_position(r0,r7);
	r8 = 202;
	if( r5 != r8 ) goto label$50b0613_2_40;
	r7 = r0->pos;
	r8 = 1;
	r7 = r7 + r8;
	r7 = haxe_io_BytesInput_set_position(r0,r7);
	r9 = (kha__arrays__Float32ArrayPrivate)hl_alloc_obj(&t$kha_arrays_Float32ArrayPrivate);
	kha_arrays_Float32ArrayPrivate_new(r9);
	r9->length = r1;
	r8 = 0;
	if( r8 >= r1 ) goto label$50b0613_2_25;
	r11 = hl_kore_float32array_alloc(r1);
	r9->self = r11;
	label$50b0613_2_25:
	r10 = r9;
	r7 = 0;
	r8 = r1;
	label$50b0613_2_28:
	if( r7 >= r8 ) goto label$50b0613_2_39;
	r12 = r7;
	++r7;
	if( r0 == NULL ) hl_null_access();
	r14 = haxe_io_Input_readFloat(((haxe__io__Input)r0));
	r15 = (float)r14;
	if( r10 == NULL ) hl_null_access();
	r11 = r10->self;
	hl_kore_float32array_set(r11,r12,r15);
	goto label$50b0613_2_28;
	label$50b0613_2_39:
	return ((vdynamic*)r10);
	label$50b0613_2_40:
	r8 = 210;
	if( r5 != r8 ) goto label$50b0613_2_67;
	r7 = r0->pos;
	r8 = 1;
	r7 = r7 + r8;
	r7 = haxe_io_BytesInput_set_position(r0,r7);
	r17 = (kha__arrays__Uint32ArrayPrivate)hl_alloc_obj(&t$kha_arrays_Uint32ArrayPrivate);
	kha_arrays_Uint32ArrayPrivate_new(r17);
	r17->length = r1;
	r8 = 0;
	if( r8 >= r1 ) goto label$50b0613_2_53;
	r11 = hl_kore_uint32array_alloc(r1);
	r17->self = r11;
	label$50b0613_2_53:
	r18 = r17;
	r7 = 0;
	r8 = r1;
	label$50b0613_2_56:
	if( r7 >= r8 ) goto label$50b0613_2_66;
	r12 = r7;
	++r7;
	if( r0 == NULL ) hl_null_access();
	r13 = haxe_io_Input_readInt32(((haxe__io__Input)r0));
	if( r18 == NULL ) hl_null_access();
	r11 = r18->self;
	hl_kore_uint32array_set(r11,r12,r13);
	goto label$50b0613_2_56;
	label$50b0613_2_66:
	return ((vdynamic*)r18);
	label$50b0613_2_67:
	r8 = 209;
	if( r5 != r8 ) goto label$50b0613_2_94;
	r7 = r0->pos;
	r8 = 1;
	r7 = r7 + r8;
	r7 = haxe_io_BytesInput_set_position(r0,r7);
	r19 = (kha__arrays__Int16ArrayPrivate)hl_alloc_obj(&t$kha_arrays_Int16ArrayPrivate);
	kha_arrays_Int16ArrayPrivate_new(r19);
	r19->length = r1;
	r8 = 0;
	if( r8 >= r1 ) goto label$50b0613_2_80;
	r11 = hl_kore_int16array_alloc(r1);
	r19->self = r11;
	label$50b0613_2_80:
	r20 = r19;
	r7 = 0;
	r8 = r1;
	label$50b0613_2_83:
	if( r7 >= r8 ) goto label$50b0613_2_93;
	r12 = r7;
	++r7;
	if( r0 == NULL ) hl_null_access();
	r13 = haxe_io_Input_readInt16(((haxe__io__Input)r0));
	if( r20 == NULL ) hl_null_access();
	r11 = r20->self;
	hl_kore_int16array_set(r11,r12,r13);
	goto label$50b0613_2_83;
	label$50b0613_2_93:
	return ((vdynamic*)r20);
	label$50b0613_2_94:
	r23 = &t$_dyn;
	r7 = 0;
	r22 = hl_alloc_array(r23,r7);
	r24 = hl_types_ArrayObj_alloc(r22);
	r25 = true;
	r26 = &r25;
	r21 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r24),r26);
	r7 = 0;
	r8 = r1;
	label$50b0613_2_103:
	if( r7 >= r8 ) goto label$50b0613_2_110;
	++r7;
	if( r21 == NULL ) hl_null_access();
	r16 = iron_system_ArmPack_read(r0,r2,r3);
	r13 = hl_types_ArrayDyn_push(r21,r16);
	goto label$50b0613_2_103;
	label$50b0613_2_110:
	return ((vdynamic*)r21);
}

vdynamic* iron_system_ArmPack_readMap(haxe__io__BytesInput r0,int r1,String r2,String r3) {
	String r4, r7;
	hl__Class r6;
	vdynamic *r5, *r11;
	int r9, r10;
	if( r2 ) goto label$50b0613_3_3;
	r4 = (String)s$;
	r2 = r4;
	label$50b0613_3_3:
	if( r3 ) goto label$50b0613_3_6;
	r4 = (String)s$;
	r3 = r4;
	label$50b0613_3_6:
	r6 = iron_system_ArmPack_getClass(r2,r3);
	r5 = Type_createEmptyInstance(r6);
	r9 = 0;
	r10 = r1;
	label$50b0613_3_10:
	if( r9 >= r10 ) goto label$50b0613_3_20;
	++r9;
	r4 = NULL;
	r7 = NULL;
	r11 = iron_system_ArmPack_read(r0,r4,r7);
	r4 = Std_string(r11);
	r11 = iron_system_ArmPack_read(r0,r4,r2);
	Reflect_setField(r5,r4,r11);
	goto label$50b0613_3_10;
	label$50b0613_3_20:
	return r5;
}

hl__Class iron_system_ArmPack_getClass(String r0,String r1) {
	String r15;
	iron__data__$TBindConstant r9;
	iron__data__$TTextureUnit r33;
	iron__data__$TShaderData r29;
	iron__data__$TMeshData r23;
	iron__data__$TSkin r30;
	iron__data__$TTilesheetAction r7;
	iron__data__$TProperty r28;
	iron__data__$TParticleData r25;
	iron__data__$TMaterialContext r16;
	iron__data__$TVertexArray r38;
	iron__data__$TCameraData r11;
	iron__data__$TTilesheetData r34;
	iron__data__$TTerrainData r32;
	iron__data__$TProbeData r27;
	iron__data__$TBindTexture r10;
	iron__data__$TWorldData r40;
	iron__data__$TSpeakerData r31;
	iron__data__$TParticleReference r26;
	iron__data__$TShaderOverride r24;
	iron__data__$TShaderContext r17;
	int r2, r3;
	iron__data__$TVertexElement r39;
	iron__data__$TTrait r36;
	iron__data__$TIndexArray r19;
	iron__data__$TTransform r37;
	iron__data__$TObj r12;
	iron__data__$TSceneFormat r6;
	iron__data__$TShaderConstant r13;
	iron__data__$TMaterialData r22;
	iron__data__$TAnimation r8;
	iron__data__$TGroup r18;
	iron__data__$TTrack r35;
	iron__data__$TLightData r20;
	iron__data__$TLod r21;
	iron__data__$TConstraint r14;
	vbyte *r4, *r5;
	if( !r0 ) goto label$50b0613_4_9;
	r2 = r0->length;
	r3 = 0;
	if( r2 != r3 ) goto label$50b0613_4_9;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_317;
	label$50b0613_4_9:
	if( !r0 ) goto label$50b0613_4_18;
	r2 = r0->length;
	r3 = 7;
	if( r2 != r3 ) goto label$50b0613_4_18;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("actions");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_319;
	label$50b0613_4_18:
	if( !r0 ) goto label$50b0613_4_27;
	r2 = r0->length;
	r3 = 4;
	if( r2 != r3 ) goto label$50b0613_4_27;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("anim");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_321;
	label$50b0613_4_27:
	if( !r0 ) goto label$50b0613_4_36;
	r2 = r0->length;
	r3 = 14;
	if( r2 != r3 ) goto label$50b0613_4_36;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("bind_constants");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_323;
	label$50b0613_4_36:
	if( !r0 ) goto label$50b0613_4_45;
	r2 = r0->length;
	r3 = 13;
	if( r2 != r3 ) goto label$50b0613_4_45;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("bind_textures");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_325;
	label$50b0613_4_45:
	if( !r0 ) goto label$50b0613_4_54;
	r2 = r0->length;
	r3 = 12;
	if( r2 != r3 ) goto label$50b0613_4_54;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("camera_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_327;
	label$50b0613_4_54:
	if( !r0 ) goto label$50b0613_4_63;
	r2 = r0->length;
	r3 = 8;
	if( r2 != r3 ) goto label$50b0613_4_63;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("children");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_329;
	label$50b0613_4_63:
	if( !r0 ) goto label$50b0613_4_72;
	r2 = r0->length;
	r3 = 9;
	if( r2 != r3 ) goto label$50b0613_4_72;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("constants");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_331;
	label$50b0613_4_72:
	if( !r0 ) goto label$50b0613_4_81;
	r2 = r0->length;
	r3 = 11;
	if( r2 != r3 ) goto label$50b0613_4_81;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("constraints");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_333;
	label$50b0613_4_81:
	if( !r0 ) goto label$50b0613_4_90;
	r2 = r0->length;
	r3 = 8;
	if( r2 != r3 ) goto label$50b0613_4_90;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("contexts");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_335;
	label$50b0613_4_90:
	if( !r0 ) goto label$50b0613_4_99;
	r2 = r0->length;
	r3 = 6;
	if( r2 != r3 ) goto label$50b0613_4_99;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("groups");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_341;
	label$50b0613_4_99:
	if( !r0 ) goto label$50b0613_4_108;
	r2 = r0->length;
	r3 = 12;
	if( r2 != r3 ) goto label$50b0613_4_108;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("index_arrays");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_343;
	label$50b0613_4_108:
	if( !r0 ) goto label$50b0613_4_117;
	r2 = r0->length;
	r3 = 11;
	if( r2 != r3 ) goto label$50b0613_4_117;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("light_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_345;
	label$50b0613_4_117:
	if( !r0 ) goto label$50b0613_4_126;
	r2 = r0->length;
	r3 = 4;
	if( r2 != r3 ) goto label$50b0613_4_126;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("lods");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_347;
	label$50b0613_4_126:
	if( !r0 ) goto label$50b0613_4_135;
	r2 = r0->length;
	r3 = 14;
	if( r2 != r3 ) goto label$50b0613_4_135;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("material_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_349;
	label$50b0613_4_135:
	if( !r0 ) goto label$50b0613_4_144;
	r2 = r0->length;
	r3 = 10;
	if( r2 != r3 ) goto label$50b0613_4_144;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("mesh_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_351;
	label$50b0613_4_144:
	if( !r0 ) goto label$50b0613_4_153;
	r2 = r0->length;
	r3 = 7;
	if( r2 != r3 ) goto label$50b0613_4_153;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("objects");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_353;
	label$50b0613_4_153:
	if( !r0 ) goto label$50b0613_4_162;
	r2 = r0->length;
	r3 = 16;
	if( r2 != r3 ) goto label$50b0613_4_162;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("override_context");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_355;
	label$50b0613_4_162:
	if( !r0 ) goto label$50b0613_4_171;
	r2 = r0->length;
	r3 = 14;
	if( r2 != r3 ) goto label$50b0613_4_171;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("particle_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_357;
	label$50b0613_4_171:
	if( !r0 ) goto label$50b0613_4_180;
	r2 = r0->length;
	r3 = 13;
	if( r2 != r3 ) goto label$50b0613_4_180;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("particle_refs");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_359;
	label$50b0613_4_180:
	if( !r0 ) goto label$50b0613_4_189;
	r2 = r0->length;
	r3 = 5;
	if( r2 != r3 ) goto label$50b0613_4_189;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("probe");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_361;
	label$50b0613_4_189:
	if( !r0 ) goto label$50b0613_4_198;
	r2 = r0->length;
	r3 = 11;
	if( r2 != r3 ) goto label$50b0613_4_198;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("probe_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_363;
	label$50b0613_4_198:
	if( !r0 ) goto label$50b0613_4_207;
	r2 = r0->length;
	r3 = 10;
	if( r2 != r3 ) goto label$50b0613_4_207;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("properties");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_365;
	label$50b0613_4_207:
	if( !r0 ) goto label$50b0613_4_216;
	r2 = r0->length;
	r3 = 12;
	if( r2 != r3 ) goto label$50b0613_4_216;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("shader_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_367;
	label$50b0613_4_216:
	if( !r0 ) goto label$50b0613_4_225;
	r2 = r0->length;
	r3 = 4;
	if( r2 != r3 ) goto label$50b0613_4_225;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("skin");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_369;
	label$50b0613_4_225:
	if( !r0 ) goto label$50b0613_4_234;
	r2 = r0->length;
	r3 = 13;
	if( r2 != r3 ) goto label$50b0613_4_234;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("speaker_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_371;
	label$50b0613_4_234:
	if( !r0 ) goto label$50b0613_4_243;
	r2 = r0->length;
	r3 = 13;
	if( r2 != r3 ) goto label$50b0613_4_243;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("terrain_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_373;
	label$50b0613_4_243:
	if( !r0 ) goto label$50b0613_4_252;
	r2 = r0->length;
	r3 = 13;
	if( r2 != r3 ) goto label$50b0613_4_252;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("texture_units");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_375;
	label$50b0613_4_252:
	if( !r0 ) goto label$50b0613_4_261;
	r2 = r0->length;
	r3 = 15;
	if( r2 != r3 ) goto label$50b0613_4_261;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("tilesheet_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_377;
	label$50b0613_4_261:
	if( !r0 ) goto label$50b0613_4_270;
	r2 = r0->length;
	r3 = 6;
	if( r2 != r3 ) goto label$50b0613_4_270;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("tracks");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_379;
	label$50b0613_4_270:
	if( !r0 ) goto label$50b0613_4_279;
	r2 = r0->length;
	r3 = 6;
	if( r2 != r3 ) goto label$50b0613_4_279;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("traits");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_381;
	label$50b0613_4_279:
	if( !r0 ) goto label$50b0613_4_288;
	r2 = r0->length;
	r3 = 9;
	if( r2 != r3 ) goto label$50b0613_4_288;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("transform");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_383;
	label$50b0613_4_288:
	if( !r0 ) goto label$50b0613_4_297;
	r2 = r0->length;
	r3 = 13;
	if( r2 != r3 ) goto label$50b0613_4_297;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("vertex_arrays");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_385;
	label$50b0613_4_297:
	if( !r0 ) goto label$50b0613_4_306;
	r2 = r0->length;
	r3 = 15;
	if( r2 != r3 ) goto label$50b0613_4_306;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("vertex_elements");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_387;
	label$50b0613_4_306:
	if( !r0 ) goto label$50b0613_4_315;
	r2 = r0->length;
	r3 = 11;
	if( r2 != r3 ) goto label$50b0613_4_315;
	r4 = r0->bytes;
	r5 = (vbyte*)USTR("world_datas");
	r2 = hl_string_compare(r4,r5,r2);
	r3 = 0;
	if( r2 == r3 ) goto label$50b0613_4_389;
	label$50b0613_4_315:
	r6 = (iron__data__$TSceneFormat)g$_iron_data_TSceneFormat;
	return ((hl__Class)r6);
	label$50b0613_4_317:
	r6 = (iron__data__$TSceneFormat)g$_iron_data_TSceneFormat;
	return ((hl__Class)r6);
	label$50b0613_4_319:
	r7 = (iron__data__$TTilesheetAction)g$_iron_data_TTilesheetAction;
	return ((hl__Class)r7);
	label$50b0613_4_321:
	r8 = (iron__data__$TAnimation)g$_iron_data_TAnimation;
	return ((hl__Class)r8);
	label$50b0613_4_323:
	r9 = (iron__data__$TBindConstant)g$_iron_data_TBindConstant;
	return ((hl__Class)r9);
	label$50b0613_4_325:
	r10 = (iron__data__$TBindTexture)g$_iron_data_TBindTexture;
	return ((hl__Class)r10);
	label$50b0613_4_327:
	r11 = (iron__data__$TCameraData)g$_iron_data_TCameraData;
	return ((hl__Class)r11);
	label$50b0613_4_329:
	r12 = (iron__data__$TObj)g$_iron_data_TObj;
	return ((hl__Class)r12);
	label$50b0613_4_331:
	r13 = (iron__data__$TShaderConstant)g$_iron_data_TShaderConstant;
	return ((hl__Class)r13);
	label$50b0613_4_333:
	r14 = (iron__data__$TConstraint)g$_iron_data_TConstraint;
	return ((hl__Class)r14);
	label$50b0613_4_335:
	r15 = (String)s$material_datas;
	if( r1 != r15 && (!r1 || !r15 || String___compare(r1,(vdynamic*)r15) != 0) ) goto label$50b0613_4_339;
	r16 = (iron__data__$TMaterialContext)g$_iron_data_TMaterialContext;
	return ((hl__Class)r16);
	label$50b0613_4_339:
	r17 = (iron__data__$TShaderContext)g$_iron_data_TShaderContext;
	return ((hl__Class)r17);
	label$50b0613_4_341:
	r18 = (iron__data__$TGroup)g$_iron_data_TGroup;
	return ((hl__Class)r18);
	label$50b0613_4_343:
	r19 = (iron__data__$TIndexArray)g$_iron_data_TIndexArray;
	return ((hl__Class)r19);
	label$50b0613_4_345:
	r20 = (iron__data__$TLightData)g$_iron_data_TLightData;
	return ((hl__Class)r20);
	label$50b0613_4_347:
	r21 = (iron__data__$TLod)g$_iron_data_TLod;
	return ((hl__Class)r21);
	label$50b0613_4_349:
	r22 = (iron__data__$TMaterialData)g$_iron_data_TMaterialData;
	return ((hl__Class)r22);
	label$50b0613_4_351:
	r23 = (iron__data__$TMeshData)g$_iron_data_TMeshData;
	return ((hl__Class)r23);
	label$50b0613_4_353:
	r12 = (iron__data__$TObj)g$_iron_data_TObj;
	return ((hl__Class)r12);
	label$50b0613_4_355:
	r24 = (iron__data__$TShaderOverride)g$_iron_data_TShaderOverride;
	return ((hl__Class)r24);
	label$50b0613_4_357:
	r25 = (iron__data__$TParticleData)g$_iron_data_TParticleData;
	return ((hl__Class)r25);
	label$50b0613_4_359:
	r26 = (iron__data__$TParticleReference)g$_iron_data_TParticleReference;
	return ((hl__Class)r26);
	label$50b0613_4_361:
	r27 = (iron__data__$TProbeData)g$_iron_data_TProbeData;
	return ((hl__Class)r27);
	label$50b0613_4_363:
	r27 = (iron__data__$TProbeData)g$_iron_data_TProbeData;
	return ((hl__Class)r27);
	label$50b0613_4_365:
	r28 = (iron__data__$TProperty)g$_iron_data_TProperty;
	return ((hl__Class)r28);
	label$50b0613_4_367:
	r29 = (iron__data__$TShaderData)g$_iron_data_TShaderData;
	return ((hl__Class)r29);
	label$50b0613_4_369:
	r30 = (iron__data__$TSkin)g$_iron_data_TSkin;
	return ((hl__Class)r30);
	label$50b0613_4_371:
	r31 = (iron__data__$TSpeakerData)g$_iron_data_TSpeakerData;
	return ((hl__Class)r31);
	label$50b0613_4_373:
	r32 = (iron__data__$TTerrainData)g$_iron_data_TTerrainData;
	return ((hl__Class)r32);
	label$50b0613_4_375:
	r33 = (iron__data__$TTextureUnit)g$_iron_data_TTextureUnit;
	return ((hl__Class)r33);
	label$50b0613_4_377:
	r34 = (iron__data__$TTilesheetData)g$_iron_data_TTilesheetData;
	return ((hl__Class)r34);
	label$50b0613_4_379:
	r35 = (iron__data__$TTrack)g$_iron_data_TTrack;
	return ((hl__Class)r35);
	label$50b0613_4_381:
	r36 = (iron__data__$TTrait)g$_iron_data_TTrait;
	return ((hl__Class)r36);
	label$50b0613_4_383:
	r37 = (iron__data__$TTransform)g$_iron_data_TTransform;
	return ((hl__Class)r37);
	label$50b0613_4_385:
	r38 = (iron__data__$TVertexArray)g$_iron_data_TVertexArray;
	return ((hl__Class)r38);
	label$50b0613_4_387:
	r39 = (iron__data__$TVertexElement)g$_iron_data_TVertexElement;
	return ((hl__Class)r39);
	label$50b0613_4_389:
	r40 = (iron__data__$TWorldData)g$_iron_data_TWorldData;
	return ((hl__Class)r40);
}

