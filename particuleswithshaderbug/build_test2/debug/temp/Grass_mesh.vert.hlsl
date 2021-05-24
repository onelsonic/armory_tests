uniform float3x3 N;
uniform float4x4 W;
uniform float4x4 WVP;

static float4 gl_Position;
static float4 pos;
static float3 wnormal;
static float2 nor;
static float3 wposition;
static float3 ipos;

struct SPIRV_Cross_Input
{
    float3 ipos : TEXCOORD0;
    float2 nor : TEXCOORD1;
    float4 pos : TEXCOORD2;
};

struct SPIRV_Cross_Output
{
    float3 wnormal : TEXCOORD0;
    float3 wposition : TEXCOORD1;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    wnormal = normalize(mul(float3(nor, pos.w), N));
    wposition = float4(mul(spos, W)).xyz;
    float3 _58 = spos.xyz + ipos;
    spos = float4(_58.x, _58.y, _58.z, spos.w);
    gl_Position = mul(spos, WVP);
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    pos = stage_input.pos;
    nor = stage_input.nor;
    ipos = stage_input.ipos;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.wnormal = wnormal;
    stage_output.wposition = wposition;
    return stage_output;
}
