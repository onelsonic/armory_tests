﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__graphics4__VertexShader
#define INC_kha__graphics4__VertexShader
typedef struct _kha__graphics4__$VertexShader *kha__graphics4__$VertexShader;
typedef struct _kha__graphics4__VertexShader *kha__graphics4__VertexShader;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _kha__graphics4__$VertexShader {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* fromSource;
};
struct _kha__graphics4__VertexShader {
	hl_type *$type;
	vbyte* _shader;
};
#endif
