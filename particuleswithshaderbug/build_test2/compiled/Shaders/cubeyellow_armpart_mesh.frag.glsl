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
uniform bool receiveShadow;
uniform float pointBias;
uniform vec2 lightProj;
uniform samplerCubeShadow shadowMapPoint[1];
uniform float envmapStrength;
void main() {
	vec3 n = normalize(wnormal);
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	basecol = vec3(0.7960463166236877, 0.8000000715255737, 0.0023758169263601303);
	roughness = 0.5;
	metallic = 0.0;
	occlusion = 1.0;
	specular = 0.5;
	vec3 direct = vec3(0.0);
	float visibility = 1.0;
	vec3 ld = pointPos - wposition;
	vec3 l = normalize(ld);
	float dotNL = max(dot(n, l), 0.0);
	if (receiveShadow) {
	const float s = shadowmapCubePcfSize;
	float compare = lpToDepth(ld, lightProj) - pointBias * 1.5;
	#ifdef _InvY
	l.y = -l.y;
	#endif
	visibility = texture(shadowMapPoint[0], vec4(-l + n * pointBias * 20, compare)).r;
	}
	direct += basecol * dotNL * pointCol * attenuate(distance(wposition, pointPos)) * visibility;
	fragColor = vec4(direct + basecol * 0.5 * envmapStrength, 1.0);
	fragColor.rgb = pow(fragColor.rgb, vec3(1.0 / 2.2));
}
