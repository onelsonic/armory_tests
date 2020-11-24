#version 450
void main() {
	vec3 n;
	float dotNV;
	float opacity;
	const float MixShader_fac = 0.5;
	const float MixShader_fac_inv = 1.0 - MixShader_fac;
	opacity = (1.0 * MixShader_fac_inv + 1.0 * MixShader_fac) - 0.0002;
	if (opacity < 0.10000000149011612) discard;
}
