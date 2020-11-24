#version 450
#include "compiled.inc"
in vec3 normal;
out vec4 fragColor;
void main() {
	vec3 n = normalize(normal);
	fragColor.rgb = vec3(1.0, 1.0, 1.0);
	fragColor.a = 0.0;
}
