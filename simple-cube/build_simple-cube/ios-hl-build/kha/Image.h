﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__Image
#define INC_kha__Image
typedef struct _kha__$Image *kha__$Image;
typedef struct _kha__Image *kha__Image;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Bytes.h>
#include <hl/types/ArrayObj.h>
#include <kha/graphics4/VertexBuffer.h>
#include <kha/graphics4/PipelineState.h>
#include <kha/math/FastMatrix3.h>
#include <kha/math/FastMatrix4.h>
#include <kha/graphics4/IndexBuffer.h>
#include <kha/arrays/Float32ArrayPrivate.h>
#include <kha/graphics4/CubeMap.h>


struct _kha__$Image {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* create;
	vclosure* create3D;
	vclosure* createRenderTarget;
	vclosure* fromBytes3D;
	vclosure* getRenderTargetFormat;
	vclosure* getDepthBufferBits;
	vclosure* getStencilBufferBits;
	vclosure* getTextureFormat;
	vclosure* create2;
	vclosure* create3;
	vclosure* fromFile;
	bool nonPow2Supported;
	vclosure* get_nonPow2Supported;
};
struct _kha__Image {
	hl_type *$type;
	vbyte* _texture;
	vbyte* _renderTarget;
	int format;
	bool readable;
	vvirtual* graphics4;
	vvirtual* g4;
	int width;
	int height;
	int depth;
	vvirtual* $_f9;
	vvirtual* $_f10;
};
#endif

