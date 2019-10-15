#version 450
#include "compiled.inc"
#include "std/math.glsl"
#include "std/brdf.glsl"
#include "std/shadows.glsl"
in vec3 wnormal;
in vec3 wposition;
out vec4 fragColor;
uniform vec3 pointPos;
uniform vec3 pointCol;
uniform float pointBias;
uniform vec2 lightProj;
uniform samplerCube shadowMapPoint[1];
uniform float envmapStrength;
void main() {
vec3 n = normalize(wnormal);
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	basecol = vec3(0.800000011920929, 0.800000011920929, 0.800000011920929);
	roughness = 0.4000000059604645;
	metallic = 0.0;
	occlusion = 1.0;
	specular = 0.5;
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
	visibility = float(texture(shadowMapPoint[0], vec3(-l + n * pointBias * 20)).r > compare);
	direct += basecol * dotNL * pointCol * attenuate(distance(wposition, pointPos)) * visibility;
	fragColor = vec4(direct + basecol * 0.5 * envmapStrength, 1.0);
	fragColor.rgb = pow(fragColor.rgb, vec3(1.0 / 2.2));
}
