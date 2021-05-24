#version 450
#include "compiled.glsl"
#include "std/shadows.glsl"
in vec4 lightPos;
in vec2 texCoord;
in vec3 wnormal;
out vec4 fragColor;
uniform vec3 sunDir;
uniform vec3 sunCol;
uniform float envmapStrength;
uniform sampler2DShadow shadowMap;
uniform float shadowsBias;
uniform bool receiveShadow;
uniform sampler2D ImageTexture;
void main() {
	vec3 n = normalize(wnormal);
	vec4 ImageTexture_texread_store = texture(ImageTexture, texCoord.xy);
	ImageTexture_texread_store.rgb = pow(ImageTexture_texread_store.rgb, vec3(2.2));
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
	vec3 ImageTexture_Color_res = ImageTexture_texread_store.rgb;
	basecol = ImageTexture_Color_res;
	roughness = 1.0;
	metallic = 0.0;
	occlusion = 1.0;
	specular = 0.0;
	vec3 shade = basecol * vec3(1.0, 1.0, 1.0);
	vec3 direct = mix(shade, basecol, step(0.5, dotNL)) * visibility * sunCol;
	vec3 indirect = basecol * envmapStrength;
	fragColor = vec4(direct + indirect, 1.0);
	fragColor.rgb = pow(fragColor.rgb, vec3(1.0 / 2.2));
}
