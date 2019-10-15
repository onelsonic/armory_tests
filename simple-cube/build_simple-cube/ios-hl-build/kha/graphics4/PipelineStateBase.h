﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__graphics4__PipelineStateBase
#define INC_kha__graphics4__PipelineStateBase
typedef struct _kha__graphics4__$PipelineStateBase *kha__graphics4__$PipelineStateBase;
typedef struct _kha__graphics4__PipelineStateBase *kha__graphics4__PipelineStateBase;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <kha/graphics4/VertexShader.h>
#include <kha/graphics4/FragmentShader.h>
#include <kha/graphics4/GeometryShader.h>
#include <kha/graphics4/TessellationControlShader.h>
#include <kha/graphics4/TessellationEvaluationShader.h>
#include <kha/graphics4/StencilValue.h>


struct _kha__graphics4__$PipelineStateBase {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__graphics4__PipelineStateBase {
	hl_type *$type;
	hl__types__ArrayObj inputLayout;
	kha__graphics4__VertexShader vertexShader;
	kha__graphics4__FragmentShader fragmentShader;
	kha__graphics4__GeometryShader geometryShader;
	kha__graphics4__TessellationControlShader tessellationControlShader;
	kha__graphics4__TessellationEvaluationShader tessellationEvaluationShader;
	int cullMode;
	bool depthWrite;
	int depthMode;
	int stencilMode;
	int stencilBothPass;
	int stencilDepthFail;
	int stencilFail;
	venum* stencilReferenceValue;
	int stencilReadMask;
	int stencilWriteMask;
	int blendSource;
	int blendDestination;
	int blendOperation;
	int alphaBlendSource;
	int alphaBlendDestination;
	int alphaBlendOperation;
	hl__types__ArrayObj colorWriteMasksRed;
	hl__types__ArrayObj colorWriteMasksGreen;
	hl__types__ArrayObj colorWriteMasksBlue;
	hl__types__ArrayObj colorWriteMasksAlpha;
	bool conservativeRasterization;
};
#endif

