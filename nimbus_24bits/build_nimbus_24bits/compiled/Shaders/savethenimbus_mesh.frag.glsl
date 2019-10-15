#version 450
#include "compiled.inc"
#include "std/gbuffer.glsl"
in vec2 texCoord;
in vec3 wnormal;
in vec4 wvpposition;
in vec4 prevwvpposition;
out vec4 fragColor[3];
uniform sampler2D ImageTexture_004;
void main() {
vec3 n = normalize(wnormal);
	vec4 ImageTexture_004_texread_store = texture(ImageTexture_004, texCoord.xy);
	ImageTexture_004_texread_store.rgb = pow(ImageTexture_004_texread_store.rgb, vec3(2.2));
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	float opacity;
	const float MixShader_fac = 0.5;
	const float MixShader_fac_inv = 1.0 - MixShader_fac;
	vec3 ImageTexture_004_Color_res = ImageTexture_004_texread_store.rgb;
	basecol = (vec3(0.8) * MixShader_fac_inv + ImageTexture_004_Color_res * MixShader_fac);
	roughness = (0.0 * MixShader_fac_inv + 1.0 * MixShader_fac);
	metallic = (0.0 * MixShader_fac_inv + 0.0 * MixShader_fac);
	occlusion = (1.0 * MixShader_fac_inv + 1.0 * MixShader_fac);
	specular = (1.0 * MixShader_fac_inv + 0.0 * MixShader_fac);
	opacity = (1.0 * MixShader_fac_inv + 1.0 * MixShader_fac);
	if (opacity < 0.20000000298023224) discard;
	n /= (abs(n.x) + abs(n.y) + abs(n.z));
	n.xy = n.z >= 0.0 ? n.xy : octahedronWrap(n.xy);
	const uint matid = 0;
	fragColor[0] = vec4(n.xy, roughness, packFloatInt16(metallic, matid));
	fragColor[1] = vec4(basecol, packFloat2(occlusion, specular));
	vec2 posa = (wvpposition.xy / wvpposition.w) * 0.5 + 0.5;
	vec2 posb = (prevwvpposition.xy / prevwvpposition.w) * 0.5 + 0.5;
	fragColor[2].rg = vec2(posa - posb);
}
