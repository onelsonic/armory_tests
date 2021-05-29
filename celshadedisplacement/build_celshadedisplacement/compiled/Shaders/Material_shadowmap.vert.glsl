#version 450
in vec4 pos;
in vec2 nor;
in vec2 tex;
out vec2 texCoord;
uniform mat3 N;
uniform sampler2D ImageTexture;
uniform float texUnpack;
uniform mat4 LVP;
uniform mat4 W;
void main() {
	vec4 spos = vec4(pos.xyz, 1.0);
	texCoord = tex * texUnpack;
	vec3 wposition = vec4(W * spos).xyz;
	vec4 ImageTexture_texread_store = texture(ImageTexture, texCoord.xy);
	ImageTexture_texread_store.rgb = pow(ImageTexture_texread_store.rgb, vec3(2.2));
	vec3 wnormal = normalize(N * vec3(nor.xy, pos.w));
	vec3 ImageTexture_Color_res = ImageTexture_texread_store.rgb;
	vec3 Displacement_Displacement_res = (vec3((((ImageTexture_Color_res.r * 0.3 + ImageTexture_Color_res.g * 0.59 + ImageTexture_Color_res.b * 0.11) / 3.0) * 2.5)) * 1.0);
	vec3 disp = Displacement_Displacement_res;
	wposition += wnormal * disp;
	gl_Position = LVP * vec4(wposition, 1.0);
}
