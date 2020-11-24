#ifndef _COMPILED_GLSL_
#define _COMPILED_GLSL_
#define _Irr
#define _LDR
#define _SinglePoint
#if defined(HLSL) || defined(METAL)
#define _InvY
#endif
const float PI = 3.1415926535;
const float PI2 = PI * 2.0;
const vec2 shadowmapSize = vec2(0, 0);
const float shadowmapCubePcfSize = 0.001;
const int shadowmapCascades = 1;
const int compoChromaticType = 0;
const int skinMaxBones = 160;

#endif // _COMPILED_GLSL_
