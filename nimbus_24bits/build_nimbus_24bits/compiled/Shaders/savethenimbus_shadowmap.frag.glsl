#version 450
in vec2 texCoord;
uniform sampler2D ImageTexture_010;
void main() {
	vec4 ImageTexture_010_texread_store = texture(ImageTexture_010, texCoord.xy);
	ImageTexture_010_texread_store.rgb = pow(ImageTexture_010_texread_store.rgb, vec3(2.2));
	vec3 n;
	float dotNV;
	float opacity;
	vec3 ImageTexture_010_Color_res = ImageTexture_010_texread_store.rgb;
	float Math_Value_res = (ImageTexture_010_Color_res.x - 0.00019999999494757503);
	opacity = Math_Value_res;
	if (opacity < 1.0) discard;
}
