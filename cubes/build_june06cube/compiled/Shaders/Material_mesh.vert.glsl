#version 450
in vec4 pos;
in vec2 nor;
out vec3 wnormal;
out vec3 wposition;
uniform mat3 N;
uniform mat4 WVP;
uniform mat4 W;
void main() {
	vec4 spos = vec4(pos.xyz, 1.0);
	wnormal = normalize(N * vec3(nor.xy, pos.w));
	wposition = vec4(W * spos).xyz;
	gl_Position = WVP * spos;
}
