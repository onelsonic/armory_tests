#version 310 es

precision highp float;
precision highp int;
precision highp sampler2D;
precision highp samplerCube;

in vec4 pos;
in vec3 ipos;

uniform mat4 WVP;
uniform mat4 LWVP;
uniform float time;

out vec3 color;
out vec4 lightPos;

void main() {

	// Instance
	vec4 mPos = vec4(pos.xyz + ipos, 1.0);

	// Wind
	mPos.x += (sin(time * 2.0 + cos(mPos.x / 2.0))) * ((pos.z + 0.3) / 8.0);
	mPos.y += (cos(time * 2.0 + sin(mPos.x / 2.0))) * ((pos.z + 0.3) / 16.0);

	lightPos = LWVP * mPos;
	gl_Position = WVP * mPos;

	// Color
	color = vec3(0.157,0.729,0.000); //V4 hdr
	color *= (pos.z + 0.2) * 2.0; //V4 hdr
	//color = vec3(0.412,0.749,0.173); //toon
	//color *= pos.z  + 1.0; //(pos.z + 1.86) * 1.2; //toon
}