#version 450
#include "compiled.inc"
#include "std/gbuffer.glsl"
in vec3 wnormal;
in vec2 texCoord;
in mat3 TBN;
out vec4 fragColor[2];
uniform sampler2D ImageTexture;
void main() {
	vec3 n = normalize(wnormal);
	vec4 ImageTexture_texread_store = texture(ImageTexture, texCoord.xy);
	ImageTexture_texread_store.rgb = pow(ImageTexture_texread_store.rgb, vec3(2.2));
	n = (Mix_Color_res) * 2.0 - 1.0;
	n = normalize(TBN * n);
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	float opacity;
	vec3 ImageTexture_Color_res = ImageTexture_texread_store.rgb;
	float SeparateRGB_G_res = ImageTexture_Color_res.g;
	float SeparateRGB_R_res = ImageTexture_Color_res.r;
	float Mix_fac = SeparateRGB_R_res;
	vec3 Mix_Color_res = mix(vec3(SeparateRGB_G_res), vec3(0.0, 0.0, 1.0), Mix_fac);
	float MixShader_fac = (((Mix_Color_res.r * 0.3 + Mix_Color_res.g * 0.59 + Mix_Color_res.b * 0.11) / 3.0) * 2.5);
	float MixShader_fac_inv = 1.0 - MixShader_fac;
	basecol = (Mix_Color_res * MixShader_fac_inv + vec3(0.8) * MixShader_fac);
	roughness = (0.10000000149011612 * MixShader_fac_inv + 0.0 * MixShader_fac);
	metallic = (0.0 * MixShader_fac_inv + 0.0 * MixShader_fac);
	occlusion = (1.0 * MixShader_fac_inv + 1.0 * MixShader_fac);
	specular = (1.0 * MixShader_fac_inv + 1.0 * MixShader_fac);
	opacity = (1.0 * MixShader_fac_inv + (1.0 - vec3(1.0, 1.0, 1.0).r) * MixShader_fac) - 0.0002;
	if (opacity < 0.20000000298023224) discard;
	n /= (abs(n.x) + abs(n.y) + abs(n.z));
	n.xy = n.z >= 0.0 ? n.xy : octahedronWrap(n.xy);
	const uint matid = 0;
	fragColor[0] = vec4(n.xy, roughness, packFloatInt16(metallic, matid));
	fragColor[1] = vec4(basecol, packFloat2(occlusion, specular));
}
