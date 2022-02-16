uniform float4x4 LWVP;
uniform float texUnpack;

static float4 gl_Position;
static float4 pos;
static float2 texCoord;
static float2 tex;

struct SPIRV_Cross_Input
{
    float4 pos : TEXCOORD0;
    float2 tex : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float2 texCoord : TEXCOORD0;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    gl_Position = mul(spos, LWVP);
    texCoord = tex * texUnpack;
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    pos = stage_input.pos;
    tex = stage_input.tex;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.texCoord = texCoord;
    return stage_output;
}
