#version 450
#include "compiled.inc"
#include "std/math.glsl"
#include "std/brdf.glsl"
#include "std/shirr.glsl"
in vec2 texCoord;
in vec3 wnormal;
in vec3 wposition;
out vec4 fragColor;
uniform sampler2D ImageTexture;
uniform vec3 pointPos;
uniform vec3 pointCol;
uniform vec4 shirr[7];
uniform float envmapStrength;
void main() {
	vec3 n = normalize(wnormal);
	vec4 ImageTexture_texread_store = texture(ImageTexture, texCoord.xy);
	ImageTexture_texread_store.rgb = pow(ImageTexture_texread_store.rgb, vec3(2.2));
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	vec3 ImageTexture_Color_res = ImageTexture_texread_store.rgb;
	basecol = ImageTexture_Color_res;
	roughness = 0.0;
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
