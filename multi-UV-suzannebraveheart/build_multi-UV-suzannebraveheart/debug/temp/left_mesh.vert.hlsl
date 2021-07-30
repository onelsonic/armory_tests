uniform float3x3 N;
uniform float texUnpack;
uniform float4x4 WVP;

static float4 gl_Position;
static float4 pos;
static float3 wnormal;
static float2 nor;
static float2 texCoord;
static float2 tex;
static float2 texCoord1;
static float2 tex1;

struct SPIRV_Cross_Input
{
    float2 nor : TEXCOORD0;
    float4 pos : TEXCOORD1;
    float2 tex : TEXCOORD2;
    float2 tex1 : TEXCOORD3;
};

struct SPIRV_Cross_Output
{
    float2 texCoord : TEXCOORD0;
    float2 texCoord1 : TEXCOORD1;
    float3 wnormal : TEXCOORD2;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    wnormal = normalize(mul(float3(nor, pos.w), N));
    texCoord = tex * texUnpack;
    texCoord1 = tex1 * texUnpack;
    gl_Position = mul(spos, WVP);
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    pos = stage_input.pos;
    nor = stage_input.nor;
    tex = stage_input.tex;
    tex1 = stage_input.tex1;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.wnormal = wnormal;
    stage_output.texCoord = texCoord;
    stage_output.texCoord1 = texCoord1;
    return stage_output;
}
