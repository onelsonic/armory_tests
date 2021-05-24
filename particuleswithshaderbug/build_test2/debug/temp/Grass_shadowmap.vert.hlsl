uniform float4x4 LWVP;

static float4 gl_Position;
static float4 pos;
static float3 ipos;

struct SPIRV_Cross_Input
{
    float3 ipos : TEXCOORD0;
    float4 pos : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    float3 _25 = spos.xyz + ipos;
    spos = float4(_25.x, _25.y, _25.z, spos.w);
    gl_Position = mul(spos, LWVP);
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    pos = stage_input.pos;
    ipos = stage_input.ipos;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    return stage_output;
}
