uniform float texUnpack;
uniform float3x3 N;
uniform float4x4 LWVP;
uniform float4x4 WVP;

static float4 gl_Position;
static float4 pos;
static float2 texCoord;
static float2 tex;
static float3 wnormal;
static float2 nor;
static float4 lightPos;

struct SPIRV_Cross_Input
{
    float2 nor : TEXCOORD0;
    float4 pos : TEXCOORD1;
    float2 tex : TEXCOORD2;
};

struct SPIRV_Cross_Output
{
    float4 lightPos : TEXCOORD0;
    float2 texCoord : TEXCOORD1;
    float3 wnormal : TEXCOORD2;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    texCoord = tex * texUnpack;
    wnormal = normalize(mul(float3(nor, pos.w), N));
    lightPos = mul(spos, LWVP);
    gl_Position = mul(spos, WVP);
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    pos = stage_input.pos;
    tex = stage_input.tex;
    nor = stage_input.nor;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.texCoord = texCoord;
    stage_output.wnormal = wnormal;
    stage_output.lightPos = lightPos;
    return stage_output;
}
