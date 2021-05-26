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
	basecol = vec3(0.0, 0.2897072732448578, 0.8000000715255737);
	roughness = 0.5;
	metallic = 0.0;
	occlusion = 1.0;
	specular = 0.5;
	vec3 shade = basecol * vec3(0.0, 0.0, 0.0);
	vec3 direct = mix(shade, basecol, step(0.5, dotNL)) * visibility * sunCol;
	vec3 indirect = basecol * envmapStrength;
	fragColor = vec4(direct + indirect, 1.0);
	fragColor.rgb = pow(fragColor.rgb, vec3(1.0 / 2.2));
}
