﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/RenderTarget.h>
extern String $s_;

void iron_RenderTarget_new(iron__RenderTarget r0,iron__RenderTargetRaw r1) {
	String r5;
	kha__graphics4__CubeMap r3;
	kha__Image r4;
	bool r2;
	r2 = false;
	r0->isCubeMap = r2;
	r2 = false;
	r0->is3D = r2;
	r2 = false;
	r0->hasDepth = r2;
	r3 = NULL;
	r0->cubeMap = r3;
	r4 = NULL;
	r0->image = r4;
	r5 = (String)$s_;
	r0->depthStencilFrom = r5;
	r0->raw = r1;
	return;
}
