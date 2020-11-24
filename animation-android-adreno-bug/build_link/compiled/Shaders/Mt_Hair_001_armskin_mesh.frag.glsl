#version 450
#include "compiled.inc"
#include "std/math.glsl"
#include "std/brdf.glsl"
#include "std/shirr.glsl"
in vec3 wnormal;
in vec3 wposition;
out vec4 fragColor;
uniform vec3 pointPos;
uniform vec3 pointCol;
uniform vec4 shirr[7];
uniform float envmapStrength;
void main() {
	vec3 n = normalize(wnormal);
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	basecol = vec3(0.7529424428939819, 0.3662526309490204, 0.07227189838886261);
	roughness = 1.0;
	metallic = 0.0;
	occlusion = 1.0;
	specular = 0.0;
	vec3 direct = vec3(0.0);
	float visibility = 1.0;
	vec3 ld = pointPos - wposition;
	vec3 l = normalize(ld);
	float dotNL = max(dot(n, l), 0.0);
	direct += basecol * dotNL * pointCol * attenuate(distance(wposition, pointPos)) * visibility;
	fragColor = vec4(direct + basecol * shIrradiance(n, shirr) * envmapStrength, 1.0);
	fragColor.rgb = pow(fragColor.rgb, vec3(1.0 / 2.2));
}
