uniform float4x4 W;
uniform float3x3 N;
uniform float4x4 WVP;
uniform float texUnpack;

static float4 gl_Position;
static float4 pos;
static float3 wposition;
static float2 nor;
static float2 texCoord;
static float2 tex;
static float4 tang;
static float3x3 TBN;

struct SPIRV_Cross_Input
{
    float2 nor : TEXCOORD0;
    float4 pos : TEXCOORD1;
    float4 tang : TEXCOORD2;
    float2 tex : TEXCOORD3;
};

struct SPIRV_Cross_Output
{
    float3x3 TBN : TEXCOORD0;
    float2 texCoord : TEXCOORD3;
    float3 wposition : TEXCOORD4;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    wposition = float4(mul(spos, W)).xyz;
    float3 wnormal = normalize(mul(float3(nor, pos.w), N));
    gl_Position = mul(spos, WVP);
    texCoord = tex * texUnpack;
    float3 tangent = normalize(mul(tang.xyz, N));
    float3 bitangent = normalize(cross(wnormal, tangent));
    TBN = float3x3(float3(tangent), float3(bitangent), float3(wnormal));
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    pos = stage_input.pos;
    nor = stage_input.nor;
    tex = stage_input.tex;
    tang = stage_input.tang;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.wposition = wposition;
    stage_output.texCoord = texCoord;
    stage_output.TBN = TBN;
    return stage_output;
}
