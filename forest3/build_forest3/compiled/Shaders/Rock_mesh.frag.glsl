#version 450
#include "compiled.glsl"
#include "std/shadows.glsl"
in vec4 lightPos;
in vec3 wnormal;
out vec4 fragColor;
uniform vec3 sunDir;
uniform vec3 sunCol;
uniform float envmapStrength;
uniform sampler2DShadow shadowMap;
uniform float shadowsBias;
uniform bool receiveShadow;
uniform float objectInfoRandom;
const vec3 COLORRAMP_COLS[3] = vec3[](vec3(0.800000011920929, 0.699999988079071, 0.800000011920929), vec3(0.800000011920929, 0.699999988079071, 0.800000011920929), vec3(0.800000011920929, 0.699999988079071, 0.800000011920929));
const float COLORRAMP_FACS[3] = float[](0.0, 1.0, 1.0);
void main() {
	vec3 n = normalize(wnormal);
	float visibility = 1.0;
	float dotNL = max(dot(n, sunDir), 0.0);
	if (receiveShadow && lightPos.w > 0.0) {
	vec3 lPos = lightPos.xyz / lightPos.w;
	const vec2 smSize = shadowmapSize;
	visibility *= PCF(shadowMap, lPos.xy, lPos.z - shadowsBias, smSize);
	}
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	float emission;
	float ObjectInfo_Random_res = objectInfoRandom;
	float ColorRamp_fac = ObjectInfo_Random_res;
	int ColorRamp_i = 0 + ((ColorRamp_fac > 1.0) ? 1 : 0);
	vec3 ColorRamp_Color_res = mix(COLORRAMP_COLS[ColorRamp_i], COLORRAMP_COLS[ColorRamp_i + 1], (ColorRamp_fac - COLORRAMP_FACS[ColorRamp_i]) * (1.0 / (COLORRAMP_FACS[ColorRamp_i + 1] - COLORRAMP_FACS[ColorRamp_i]) ));
	basecol = ColorRamp_Color_res;
	roughness = 0.0;
	metallic = 0.0;
	occlusion = 1.0;
	specular = 0.0;
	vec3 shade = basecol * vec3(0.0, 0.0, 0.0);
	vec3 direct = mix(shade, basecol, step(0.5, dotNL)) * visibility * sunCol;
	vec3 indirect = basecol * envmapStrength;
	fragColor = vec4(direct + indirect, 1.0);
}
