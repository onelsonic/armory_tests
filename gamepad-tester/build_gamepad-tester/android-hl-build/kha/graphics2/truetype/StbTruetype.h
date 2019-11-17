﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__graphics2__truetype__StbTruetype
#define INC_kha__graphics2__truetype__StbTruetype
typedef struct _kha__graphics2__truetype__$StbTruetype *kha__graphics2__truetype__$StbTruetype;
typedef struct _kha__graphics2__truetype__StbTruetype *kha__graphics2__truetype__StbTruetype;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/internal/BytesBlob.h>
#include <kha/graphics2/truetype/Stbtt_fontinfo.h>
#include <kha/graphics2/truetype/Stbtt_vertex.h>
#include <kha/graphics2/truetype/Stbtt_temp_rect.h>
#include <hl/types/ArrayObj.h>
#include <kha/graphics2/truetype/Stbtt_temp_glyph_h_metrics.h>
#include <kha/graphics2/truetype/Stbtt_temp_font_v_metrics.h>
#include <kha/graphics2/truetype/Stbtt__active_edge.h>
#include <hl/types/ArrayBytes_Float.h>
#include <kha/graphics2/truetype/Stbtt__bitmap.h>
#include <kha/graphics2/truetype/Stbtt__edge.h>
#include <hl/types/ArrayBytes_Int.h>
#include <kha/graphics2/truetype/VectorOfIntPointer.h>


struct _kha__graphics2__truetype__$StbTruetype {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* stbtt__find_table;
	vclosure* stbtt_InitFont;
	vclosure* stbtt_FindGlyphIndex;
	vclosure* stbtt_setvertex;
	vclosure* stbtt__GetGlyfOffset;
	vclosure* stbtt_GetGlyphBox;
	vclosure* stbtt__close_shape;
	vclosure* copyVertices;
	vclosure* stbtt_GetGlyphShape;
	vclosure* stbtt_GetGlyphHMetrics;
	vclosure* stbtt_GetFontVMetrics;
	vclosure* stbtt_ScaleForPixelHeight;
	vclosure* stbtt_GetGlyphBitmapBoxSubpixel;
	vclosure* stbtt_GetGlyphBitmapBox;
	vclosure* stbtt__new_active;
	vclosure* stbtt__handle_clipped_edge;
	vclosure* stbtt__fill_active_edges_new;
	vclosure* stbtt__rasterize_sorted_edges;
	vclosure* STBTT__COMPARE;
	vclosure* stbtt__sort_edges_ins_sort;
	vclosure* stbtt__sort_edges_quicksort;
	vclosure* stbtt__sort_edges;
	vclosure* stbtt__rasterize;
	vclosure* stbtt__add_point;
	vclosure* stbtt__tesselate_curve;
	vclosure* stbtt_FlattenCurves;
	vclosure* stbtt_Rasterize;
	vclosure* stbtt_MakeGlyphBitmapSubpixel;
	vclosure* stbtt_MakeGlyphBitmap;
	vclosure* stbtt_BakeFontBitmap;
};
struct _kha__graphics2__truetype__StbTruetype {
	hl_type *$type;
};
#endif

