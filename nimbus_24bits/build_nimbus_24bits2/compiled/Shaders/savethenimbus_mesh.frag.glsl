#version 450
#include "compiled.inc"
#include "std/gbuffer.glsl"
in vec2 texCoord;
in vec3 wnormal;
out vec4 fragColor[2];
uniform sampler2D ImageTexture_010;
void main() {
	vec3 n = normalize(wnormal);
	vec4 ImageTexture_010_texread_store = texture(ImageTexture_010, texCoord.xy);
	ImageTexture_010_texread_store.rgb = pow(ImageTexture_010_texread_store.rgb, vec3(2.2));
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	float opacity;
	vec3 ImageTexture_010_Color_res = ImageTexture_010_texread_store.rgb;
	float ImageTexture_010_Alpha_res = ImageTexture_010_texread_store.a;
	basecol = ImageTexture_010_Color_res;
	roughness = 0.5;
	metallic = 0.0;
	occlusion = 1.0;
	specular = 0.5;
	opacity = ImageTexture_010_Alpha_res - 0.0002;
	if (opacity < 0.9999) discard;
	n /= (abs(n.x) + abs(n.y) + abs(n.z));
	n.xy = n.z >= 0.0 ? n.xy : octahedronWrap(n.xy);
	const uint matid = 0;
	fragColor[0] = vec4(n.xy, roughness, packFloatInt16(metallic, matid));
	fragColor[1] = vec4(basecol, packFloat2(occlusion, specular));
}
