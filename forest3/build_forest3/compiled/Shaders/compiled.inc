#ifndef _COMPILED_GLSL_
#define _COMPILED_GLSL_
#define _ShadowMap
#define _CToneFilmic
#define _CLUT
#if defined(HLSL) || defined(METAL)
#define _InvY
#endif
#define _FlipY
const float PI = 3.1415926535;
const float PI2 = PI * 2.0;
const vec2 shadowmapSize = vec2(1024, 1024);
const float shadowmapCubePcfSize = 0.001;
const int shadowmapCascades = 1;
const int skinMaxBones = 8;

#endif // _COMPILED_GLSL_
