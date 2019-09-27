#version 450
#include "compiled.inc"
#include "std/gbuffer.glsl"
in vec2 texCoord;
in vec3 wnormal;
out vec4 fragColor[2];
uniform sampler2D ImageTexture_004;
uniform sampler2D ImageTexture_005;
void main() {
vec3 n = normalize(wnormal);
	vec3 TextureCoordinate_003_texread_UV_res = vec3(texCoord.x, 1.0 - texCoord.y, 0.0);
	vec3 Mapping_003_texread_Vector_res = (TextureCoordinate_003_texread_UV_res * vec3(1600.0, 1600.0, 1.0));
	vec4 ImageTexture_004_texread_store = texture(ImageTexture_004, vec2(Mapping_003_texread_Vector_res.x, 1.0 - Mapping_003_texread_Vector_res.y).xy);
	ImageTexture_004_texread_store.rgb = pow(ImageTexture_004_texread_store.rgb, vec3(2.2));
	vec4 ImageTexture_005_texread_store = texture(ImageTexture_005, texCoord.xy);
	ImageTexture_005_texread_store.rgb = pow(ImageTexture_005_texread_store.rgb, vec3(2.2));
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	float opacity;
	vec3 ImageTexture_004_Color_res = ImageTexture_004_texread_store.rgb;
	vec3 ImageTexture_005_Color_res = ImageTexture_005_texread_store.rgb;
	basecol = ImageTexture_004_Color_res;
	roughness = 1.0;
	metallic = 0.0;
	occlusion = 1.0;
	specular = 0.0;
	opacity = ImageTexture_005_Color_res.x;
	if (opacity < 0.20000000298023224) discard;
	n /= (abs(n.x) + abs(n.y) + abs(n.z));
	n.xy = n.z >= 0.0 ? n.xy : octahedronWrap(n.xy);
	const uint matid = 0;
	fragColor[0] = vec4(n.xy, roughness, packFloatInt16(metallic, matid));
	fragColor[1] = vec4(basecol, packFloat2(occlusion, specular));
}
