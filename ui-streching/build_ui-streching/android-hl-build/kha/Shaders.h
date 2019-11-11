﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__Shaders
#define INC_kha__Shaders
typedef struct _kha__$Shaders *kha__$Shaders;
typedef struct _kha__Shaders *kha__Shaders;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/graphics4/FragmentShader.h>
#include <kha/graphics4/VertexShader.h>


struct _kha__$Shaders {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	String Material_mesh_fragData0;
	String Material_mesh_fragData1;
	kha__graphics4__FragmentShader Material_mesh_frag;
	String armdefault_mesh_fragData0;
	String armdefault_mesh_fragData1;
	kha__graphics4__FragmentShader armdefault_mesh_frag;
	String armdefault_mesh_vertData0;
	String armdefault_mesh_vertData1;
	kha__graphics4__VertexShader armdefault_mesh_vert;
	String armdefault_shadowmap_fragData0;
	String armdefault_shadowmap_fragData1;
	kha__graphics4__FragmentShader armdefault_shadowmap_frag;
	String armdefault_shadowmap_vertData0;
	String armdefault_shadowmap_vertData1;
	kha__graphics4__VertexShader armdefault_shadowmap_vert;
	String painter_colored_fragData0;
	String painter_colored_fragData1;
	kha__graphics4__FragmentShader painter_colored_frag;
	String painter_colored_vertData0;
	String painter_colored_vertData1;
	kha__graphics4__VertexShader painter_colored_vert;
	String painter_image_fragData0;
	String painter_image_fragData1;
	kha__graphics4__FragmentShader painter_image_frag;
	String painter_image_vertData0;
	String painter_image_vertData1;
	kha__graphics4__VertexShader painter_image_vert;
	String painter_text_fragData0;
	String painter_text_fragData1;
	kha__graphics4__FragmentShader painter_text_frag;
	String painter_text_vertData0;
	String painter_text_vertData1;
	kha__graphics4__VertexShader painter_text_vert;
	String painter_video_fragData0;
	String painter_video_fragData1;
	kha__graphics4__FragmentShader painter_video_frag;
	String painter_video_vertData0;
	String painter_video_vertData1;
	kha__graphics4__VertexShader painter_video_vert;
	String pass_copy_fragData0;
	String pass_copy_fragData1;
	kha__graphics4__FragmentShader pass_copy_frag;
	String pass_vertData0;
	String pass_vertData1;
	kha__graphics4__VertexShader pass_vert;
	vclosure* init;
};
struct _kha__Shaders {
	hl_type *$type;
};
#endif

