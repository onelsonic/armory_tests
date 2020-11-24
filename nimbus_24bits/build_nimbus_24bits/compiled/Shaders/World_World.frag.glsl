#version 450
#include "compiled.inc"
in vec3 normal;
out vec4 fragColor;
void main() {
	vec3 n = normalize(normal);
	fragColor.rgb = vec3(0.24228110909461975, 0.6172067523002625, 0.8307698369026184);
	fragColor.a = 0.0;
}
