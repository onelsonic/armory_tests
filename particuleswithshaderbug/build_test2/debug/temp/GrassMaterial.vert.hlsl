uniform float time;
uniform float4x4 LWVP;
uniform float4x4 WVP;

static float4 gl_Position;
static float4 pos;
static float3 ipos;
static float4 lightPos;
static float3 color;

struct SPIRV_Cross_Input
{
    float3 ipos : TEXCOORD0;
    float4 pos : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float3 color : TEXCOORD0;
    float4 lightPos : TEXCOORD1;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float4 mPos = float4(pos.xyz + ipos, 1.0f);
    mPos.x += (sin((time * 2.0f) + cos(mPos.x / 2.0f)) * ((pos.z + 0.300000011920928955078125f) / 8.0f));
    mPos.y += (cos((time * 2.0f) + sin(mPos.x / 2.0f)) * ((pos.z + 0.300000011920928955078125f) / 16.0f));
    lightPos = mul(mPos, LWVP);
    gl_Position = mul(mPos, WVP);
    color = float3(0.100000001490116119384765625f, 0.300000011920928955078125f, 0.0500000007450580596923828125f);
    color *= ((pos.z + 0.20000000298023223876953125f) * 2.0f);
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    pos = stage_input.pos;
    ipos = stage_input.ipos;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.lightPos = lightPos;
    stage_output.color = color;
    return stage_output;
}
