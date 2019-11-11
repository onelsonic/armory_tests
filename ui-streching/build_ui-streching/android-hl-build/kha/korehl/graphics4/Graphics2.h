﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__korehl__graphics4__Graphics2
#define INC_kha__korehl__graphics4__Graphics2
typedef struct _kha__korehl__graphics4__$Graphics2 *kha__korehl__graphics4__$Graphics2;
typedef struct _kha__korehl__graphics4__Graphics2 *kha__korehl__graphics4__Graphics2;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/graphics4/Graphics2.h>
#include <kha/graphics2/Graphics.h>
#include <kha/graphics4/PipelineState.h>
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayBytes_Float.h>
#include <kha/Kravur.h>
#include <kha/math/FastMatrix4.h>
#include <kha/graphics4/ImageShaderPainter.h>
#include <kha/graphics4/ColoredShaderPainter.h>
#include <kha/graphics4/TextShaderPainter.h>
#include <kha/graphics4/VertexBuffer.h>
#include <kha/Image.h>
#include <kha/math/FastMatrix3.h>
#include <kha/graphics4/IndexBuffer.h>
#include <kha/arrays/Float32ArrayPrivate.h>
#include <kha/graphics4/CubeMap.h>
#include <haxe/ds/ObjectMap.h>


struct _kha__korehl__graphics4__$Graphics2 {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__korehl__graphics4__Graphics2 {
	hl_type *$type;
	kha__graphics4__PipelineState pipe;
	hl__types__ArrayObj transformations;
	int transformationIndex;
	hl__types__ArrayBytes_Float opacities;
	int myFontSize;
	int myColor;
	kha__Kravur myFont;
	kha__math__FastMatrix4 projectionMatrix;
	kha__graphics4__ImageShaderPainter imagePainter;
	kha__graphics4__ColoredShaderPainter coloredPainter;
	kha__graphics4__TextShaderPainter textPainter;
	vvirtual* canvas;
	vvirtual* g;
	int myImageScaleQuality;
	haxe__ds__ObjectMap pipelineCache;
	kha__graphics4__PipelineState lastPipeline;
};
#endif

