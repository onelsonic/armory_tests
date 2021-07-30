#version 450
#include "compiled.inc"
in vec3 normal;
out vec4 fragColor;
uniform vec3 backgroundCol;
void main() {
	vec3 n = normalize(normal);
	fragColor.rgb = backgroundCol;
}
