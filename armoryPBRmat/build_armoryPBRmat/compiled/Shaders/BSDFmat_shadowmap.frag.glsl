#version 450
in vec2 texCoord;
uniform sampler2D ImageTexture;
void main() {
	vec4 ImageTexture_texread_store = texture(ImageTexture, texCoord.xy);
	ImageTexture_texread_store.rgb = pow(ImageTexture_texread_store.rgb, vec3(2.2));
	float opacity;
	vec3 ImageTexture_Color_res = ImageTexture_texread_store.rgb;
	float SeparateRGB_G_res = ImageTexture_Color_res.g;
	float SeparateRGB_R_res = ImageTexture_Color_res.r;
	float Mix_fac = SeparateRGB_R_res;
	vec3 Mix_Color_res = mix(vec3(SeparateRGB_G_res), vec3(0.0, 0.0, 1.0), Mix_fac);
	float MixShader_fac = (((Mix_Color_res.r * 0.3 + Mix_Color_res.g * 0.59 + Mix_Color_res.b * 0.11) / 3.0) * 2.5);
	float MixShader_fac_inv = 1.0 - MixShader_fac;
	opacity = (1.0 * MixShader_fac_inv + (1.0 - vec3(1.0, 1.0, 1.0).r) * MixShader_fac) - 0.0002;
	if (opacity < 0.10000000149011612) discard;
}
