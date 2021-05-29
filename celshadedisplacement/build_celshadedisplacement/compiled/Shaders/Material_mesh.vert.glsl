#version 450
in vec4 pos;
in vec2 nor;
in vec2 tex;
out vec4 lightPos;
out vec2 texCoord;
out vec3 wnormal;
uniform mat3 N;
uniform mat4 LWVP;
uniform sampler2D ImageTexture;
uniform float texUnpack;
uniform mat4 W;
uniform mat4 VP;
void main() {
	vec4 spos = vec4(pos.xyz, 1.0);
	texCoord = tex * texUnpack;
	wnormal = normalize(N * vec3(nor.xy, pos.w));
	vec4 ImageTexture_texread_store = texture(ImageTexture, texCoord.xy);
	ImageTexture_texread_store.rgb = pow(ImageTexture_texread_store.rgb, vec3(2.2));
	lightPos = LWVP * spos;
	vec3 ImageTexture_Color_res = ImageTexture_texread_store.rgb;
	vec3 Displacement_Displacement_res = (vec3((((ImageTexture_Color_res.r * 0.3 + ImageTexture_Color_res.g * 0.59 + ImageTexture_Color_res.b * 0.11) / 3.0) * 2.5)) * 1.0);
	vec3 disp = Displacement_Displacement_res;
	vec4 wpos = W * spos;
	wpos.xyz += wnormal * disp * 0.1;
	gl_Position = VP * wpos;
}
