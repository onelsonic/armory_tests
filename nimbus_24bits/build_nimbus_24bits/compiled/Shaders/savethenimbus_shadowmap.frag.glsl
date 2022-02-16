#version 450
in vec2 texCoord;
uniform sampler2D ImageTexture_010;
void main() {
	vec4 ImageTexture_010_texread_store = texture(ImageTexture_010, texCoord.xy);
	float opacity;
	float ImageTexture_010_Alpha_res = ImageTexture_010_texread_store.a;
	opacity = ImageTexture_010_Alpha_res - 0.0002;
	if (opacity < 1.0) discard;
}
