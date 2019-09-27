#version 450
#include "compiled.inc"
#include "std/math.glsl"
#include "std/brdf.glsl"
#include "std/shadows.glsl"
#include "std/shirr.glsl"
in vec2 texCoord;
in mat3 TBN;
in vec3 wposition;
out vec4 fragColor;
uniform sampler2D ImageTexture;
uniform sampler2D ImageTexture_002;
uniform vec3 pointPos;
uniform vec3 pointCol;
uniform float pointBias;
uniform vec2 lightProj;
uniform samplerCubeShadow shadowMapPoint[1];
uniform float envmapStrength;
void main() {
	vec4 ImageTexture_texread_store = texture(ImageTexture, texCoord.xy);
	ImageTexture_texread_store.rgb = pow(ImageTexture_texread_store.rgb, vec3(2.2));
	vec4 ImageTexture_002_texread_store = texture(ImageTexture_002, texCoord.xy);
	vec3 n = (None) * 2.0 - 1.0;
	n = normalize(TBN * n);
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	vec3 ImageTexture_Color_res = ImageTexture_texread_store.rgb;
	vec3 ImageTexture_002_Color_res = ImageTexture_002_texread_store.rgb;
	basecol = ImageTexture_Color_res;
	roughness = ImageTexture_002_Color_res.x;
	metallic = 0.0;
	occlusion = 1.0;
	specular = 1.0;
	vec3 direct = vec3(0.0);
	float visibility = 1.0;
	vec3 ld = pointPos - wposition;
	vec3 l = normalize(ld);
	float dotNL = max(dot(n, l), 0.0);
	const float s = shadowmapCubePcfSize;
	float compare = lpToDepth(ld, lightProj) - pointBias * 1.5;
	#ifdef HLSL
	l.y = -l.y;
	#endif
	visibility = texture(shadowMapPoint[0], vec4(-l + n * pointBias * 20, compare)).r;
	direct += basecol * dotNL * pointCol * attenuate(distance(wposition, pointPos)) * visibility;
	fragColor = vec4(direct + basecol * shIrradiance(n) * envmapStrength, 1.0);
	fragColor.rgb = pow(fragColor.rgb, vec3(1.0 / 2.2));
}
