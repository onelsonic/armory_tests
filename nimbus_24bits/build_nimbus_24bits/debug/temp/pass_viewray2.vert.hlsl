uniform float4x4 invP;

static float4 gl_Position;
static float2 texCoord;
static float2 pos;
static float3 viewRay;

struct SPIRV_Cross_Input
{
    float2 pos : TEXCOORD0;
};

struct SPIRV_Cross_Output
{
    float2 texCoord : TEXCOORD0;
    float3 viewRay : TEXCOORD1;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    texCoord = (pos * 0.5f.xx) + 0.5f.xx;
    texCoord.y = 1.0f - texCoord.y;
    gl_Position = float4(pos, 0.0f, 1.0f);
    float4 v = float4(pos.x, pos.y, 1.0f, 1.0f);
    v = float4(mul(v, invP));
    viewRay = float3(v.xy / v.z.xx, 1.0f);
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    pos = stage_input.pos;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.texCoord = texCoord;
    stage_output.viewRay = viewRay;
    return stage_output;
}
