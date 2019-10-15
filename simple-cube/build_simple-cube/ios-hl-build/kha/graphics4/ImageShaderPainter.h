﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__graphics4__ImageShaderPainter
#define INC_kha__graphics4__ImageShaderPainter
typedef struct _kha__graphics4__$ImageShaderPainter *kha__graphics4__$ImageShaderPainter;
typedef struct _kha__graphics4__ImageShaderPainter *kha__graphics4__ImageShaderPainter;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/graphics4/PipelineCache.h>
#include <kha/graphics4/VertexStructure.h>
#include <kha/graphics4/VertexBuffer.h>
#include <kha/arrays/Float32ArrayPrivate.h>
#include <kha/graphics4/IndexBuffer.h>
#include <kha/Image.h>
#include <kha/math/FastMatrix4.h>
#include <hl/types/ArrayObj.h>
#include <kha/graphics4/PipelineState.h>
#include <kha/math/FastMatrix3.h>
#include <kha/graphics4/CubeMap.h>


struct _kha__graphics4__$ImageShaderPainter {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	kha__graphics4__PipelineCache standardImagePipeline;
	kha__graphics4__VertexStructure structure;
	int bufferIndex;
	kha__graphics4__VertexBuffer rectVertexBuffer;
	kha__arrays__Float32ArrayPrivate rectVertices;
	kha__graphics4__IndexBuffer indexBuffer;
	kha__Image lastTexture;
	vclosure* initShaders;
};
struct _kha__graphics4__ImageShaderPainter {
	hl_type *$type;
	kha__math__FastMatrix4 projectionMatrix;
	bool bilinear;
	bool bilinearMipmaps;
	vvirtual* g;
	kha__graphics4__PipelineCache myPipeline;
};
#endif

