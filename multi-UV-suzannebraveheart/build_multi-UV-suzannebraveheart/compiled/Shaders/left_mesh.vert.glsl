#version 450
in vec4 pos;
in vec2 nor;
in vec2 tex;
in vec2 tex1;
out vec3 wnormal;
out vec2 texCoord;
out vec2 texCoord1;
uniform mat3 N;
uniform mat4 WVP;
uniform float texUnpack;
void main() {
	vec4 spos = vec4(pos.xyz, 1.0);
	wnormal = normalize(N * vec3(nor.xy, pos.w));
	texCoord = tex * texUnpack;
	texCoord1 = tex1 * texUnpack;
	gl_Position = WVP * spos;
}
