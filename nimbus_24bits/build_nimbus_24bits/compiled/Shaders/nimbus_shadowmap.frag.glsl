#version 450
in vec2 texCoord;
uniform sampler2D ImageTexture_005;
void main() {
	vec4 ImageTexture_005_texread_store = texture(ImageTexture_005, texCoord.xy);
	ImageTexture_005_texread_store.rgb = pow(ImageTexture_005_texread_store.rgb, vec3(2.2));
	vec3 n;
	float dotNV;
	float opacity;
	vec3 ImageTexture_005_Color_res = ImageTexture_005_texread_store.rgb;
	opacity = ImageTexture_005_Color_res.x;
	if (opacity < 0.10000000149011612) discard;
}
