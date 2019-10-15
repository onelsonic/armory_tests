﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/Shaders.h>
#include <hl/types/ArrayObj.h>
#include <haxe/io/Bytes.h>
#include <kha/internal/BytesBlob.h>
extern hl_type $t_hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
extern kha__$Shaders $g__kha_Shaders;
extern String $s_Material_mesh_fragData;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
String String___add__(String,String);
vdynamic* Reflect_field(vdynamic*,String);
String Std_string(vdynamic*);
vdynamic* haxe_Unserializer_run(String);
extern hl_type $t_haxe_io_Bytes;
extern hl_type $t_dyn;
kha__internal__BytesBlob kha_internal_BytesBlob_fromBytes(haxe__io__Bytes);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern hl_type $t_kha_graphics4_FragmentShader;
extern hl_type $t_String;
extern String $s_Material_mesh_frag_essl;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void kha_graphics4_FragmentShader_new(kha__graphics4__FragmentShader,hl__types__ArrayObj,hl__types__ArrayObj);
extern String $s_Material_mesh_vertData;
extern hl_type $t_kha_graphics4_VertexShader;
extern String $s_Material_mesh_vert_essl;
void kha_graphics4_VertexShader_new(kha__graphics4__VertexShader,hl__types__ArrayObj,hl__types__ArrayObj);
extern String $s_Material_shadowmap_fragData;
extern String $s_Material_shadowmap_frag_essl;
extern String $s_Material_shadowmap_vertData;
extern String $s_Material_shadowmap_vert_essl;
extern String $s_painter_colored_fragData;
extern String $s_painter_colored_frag_essl;
extern String $s_painter_colored_vertData;
extern String $s_painter_colored_vert_essl;
extern String $s_painter_image_fragData;
extern String $s_painter_image_frag_essl;
extern String $s_painter_image_vertData;
extern String $s_painter_image_vert_essl;
extern String $s_painter_text_fragData;
extern String $s_painter_text_frag_essl;
extern String $s_painter_text_vertData;
extern String $s_painter_text_vert_essl;
extern String $s_painter_video_fragData;
extern String $s_painter_video_frag_essl;
extern String $s_painter_video_vertData;
extern String $s_painter_video_vert_essl;
extern String $s_pass_copy_fragData;
extern String $s_pass_copy_frag_essl;
extern String $s_pass_vertData;
extern String $s_pass_vert_essl;

void kha_Shaders_init() {
	String r4, r8;
	kha__graphics4__FragmentShader r11;
	hl__types__ArrayObj r0, r12;
	hl_type *r14;
	haxe__io__Bytes r9;
	kha__$Shaders r3;
	kha__graphics4__VertexShader r15;
	kha__internal__BytesBlob r10;
	int *r6;
	vdynamic *r2;
	varray *r13;
	vbyte *r7;
	int r5;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_Material_mesh_fragData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_13;
	r4 = NULL;
	goto label$227a041_1_14;
	label$227a041_1_13:
	r4 = Std_string(r2);
	label$227a041_1_14:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r11 = (kha__graphics4__FragmentShader)hl_alloc_obj(&$t_kha_graphics4_FragmentShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_Material_mesh_frag_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_FragmentShader_new(r11,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->Material_mesh_frag = r11;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_Material_mesh_vertData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_42;
	r4 = NULL;
	goto label$227a041_1_43;
	label$227a041_1_42:
	r4 = Std_string(r2);
	label$227a041_1_43:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r15 = (kha__graphics4__VertexShader)hl_alloc_obj(&$t_kha_graphics4_VertexShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_Material_mesh_vert_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_VertexShader_new(r15,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->Material_mesh_vert = r15;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_Material_shadowmap_fragData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_71;
	r4 = NULL;
	goto label$227a041_1_72;
	label$227a041_1_71:
	r4 = Std_string(r2);
	label$227a041_1_72:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r11 = (kha__graphics4__FragmentShader)hl_alloc_obj(&$t_kha_graphics4_FragmentShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_Material_shadowmap_frag_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_FragmentShader_new(r11,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->Material_shadowmap_frag = r11;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_Material_shadowmap_vertData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_100;
	r4 = NULL;
	goto label$227a041_1_101;
	label$227a041_1_100:
	r4 = Std_string(r2);
	label$227a041_1_101:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r15 = (kha__graphics4__VertexShader)hl_alloc_obj(&$t_kha_graphics4_VertexShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_Material_shadowmap_vert_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_VertexShader_new(r15,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->Material_shadowmap_vert = r15;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_painter_colored_fragData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_129;
	r4 = NULL;
	goto label$227a041_1_130;
	label$227a041_1_129:
	r4 = Std_string(r2);
	label$227a041_1_130:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r11 = (kha__graphics4__FragmentShader)hl_alloc_obj(&$t_kha_graphics4_FragmentShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_painter_colored_frag_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_FragmentShader_new(r11,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->painter_colored_frag = r11;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_painter_colored_vertData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_158;
	r4 = NULL;
	goto label$227a041_1_159;
	label$227a041_1_158:
	r4 = Std_string(r2);
	label$227a041_1_159:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r15 = (kha__graphics4__VertexShader)hl_alloc_obj(&$t_kha_graphics4_VertexShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_painter_colored_vert_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_VertexShader_new(r15,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->painter_colored_vert = r15;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_painter_image_fragData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_187;
	r4 = NULL;
	goto label$227a041_1_188;
	label$227a041_1_187:
	r4 = Std_string(r2);
	label$227a041_1_188:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r11 = (kha__graphics4__FragmentShader)hl_alloc_obj(&$t_kha_graphics4_FragmentShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_painter_image_frag_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_FragmentShader_new(r11,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->painter_image_frag = r11;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_painter_image_vertData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_216;
	r4 = NULL;
	goto label$227a041_1_217;
	label$227a041_1_216:
	r4 = Std_string(r2);
	label$227a041_1_217:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r15 = (kha__graphics4__VertexShader)hl_alloc_obj(&$t_kha_graphics4_VertexShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_painter_image_vert_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_VertexShader_new(r15,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->painter_image_vert = r15;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_painter_text_fragData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_245;
	r4 = NULL;
	goto label$227a041_1_246;
	label$227a041_1_245:
	r4 = Std_string(r2);
	label$227a041_1_246:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r11 = (kha__graphics4__FragmentShader)hl_alloc_obj(&$t_kha_graphics4_FragmentShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_painter_text_frag_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_FragmentShader_new(r11,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->painter_text_frag = r11;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_painter_text_vertData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_274;
	r4 = NULL;
	goto label$227a041_1_275;
	label$227a041_1_274:
	r4 = Std_string(r2);
	label$227a041_1_275:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r15 = (kha__graphics4__VertexShader)hl_alloc_obj(&$t_kha_graphics4_VertexShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_painter_text_vert_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_VertexShader_new(r15,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->painter_text_vert = r15;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_painter_video_fragData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_303;
	r4 = NULL;
	goto label$227a041_1_304;
	label$227a041_1_303:
	r4 = Std_string(r2);
	label$227a041_1_304:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r11 = (kha__graphics4__FragmentShader)hl_alloc_obj(&$t_kha_graphics4_FragmentShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_painter_video_frag_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_FragmentShader_new(r11,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->painter_video_frag = r11;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_painter_video_vertData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_332;
	r4 = NULL;
	goto label$227a041_1_333;
	label$227a041_1_332:
	r4 = Std_string(r2);
	label$227a041_1_333:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r15 = (kha__graphics4__VertexShader)hl_alloc_obj(&$t_kha_graphics4_VertexShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_painter_video_vert_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_VertexShader_new(r15,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->painter_video_vert = r15;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_pass_copy_fragData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_361;
	r4 = NULL;
	goto label$227a041_1_362;
	label$227a041_1_361:
	r4 = Std_string(r2);
	label$227a041_1_362:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r11 = (kha__graphics4__FragmentShader)hl_alloc_obj(&$t_kha_graphics4_FragmentShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_pass_copy_frag_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_FragmentShader_new(r11,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->pass_copy_frag = r11;
	r0 = (hl__types__ArrayObj)hl_alloc_obj(&$t_hl_types_ArrayObj);
	hl_types_ArrayObj_new(r0);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r4 = (String)$s_pass_vertData;
	r5 = 0;
	r6 = &r5;
	r7 = hl_itos(r5,r6);
	r8 = String___alloc__(r7,r5);
	r4 = String___add__(r4,r8);
	r2 = Reflect_field(((vdynamic*)r3),r4);
	if( r2 ) goto label$227a041_1_390;
	r4 = NULL;
	goto label$227a041_1_391;
	label$227a041_1_390:
	r4 = Std_string(r2);
	label$227a041_1_391:
	r2 = haxe_Unserializer_run(r4);
	r9 = (haxe__io__Bytes)hl_dyn_castp(&r2,&$t_dyn,&$t_haxe_io_Bytes);
	r10 = kha_internal_BytesBlob_fromBytes(r9);
	r5 = hl_types_ArrayObj_push(r0,((vdynamic*)r10));
	r15 = (kha__graphics4__VertexShader)hl_alloc_obj(&$t_kha_graphics4_VertexShader);
	r14 = &$t_String;
	r5 = 1;
	r13 = hl_alloc_array(r14,r5);
	r4 = (String)$s_pass_vert_essl;
	r5 = 0;
	((String*)(r13 + 1))[r5] = r4;
	r12 = hl_types_ArrayObj_alloc(r13);
	kha_graphics4_VertexShader_new(r15,r0,r12);
	r3 = (kha__$Shaders)$g__kha_Shaders;
	r3->pass_vert = r15;
	return;
}

