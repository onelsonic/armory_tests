uniform float3x3 N;
uniform float4x4 W;
uniform float4x4 pd;
uniform float4x4 WVP;

static float4 gl_Position;
static int gl_InstanceID;
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
    uint gl_InstanceID : SV_InstanceID;
};

struct SPIRV_Cross_Output
{
    float3 wnormal : TEXCOORD0;
    float3 wposition : TEXCOORD1;
    float4 gl_Position : SV_Position;
};

float fhash(float n)
{
    return frac(sin(n) * 43758.546875f);
}

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    wnormal = normalize(mul(float3(nor, pos.w), N));
    wposition = float4(mul(spos, W)).xyz;
    float3 _70 = spos.xyz + ipos;
    spos = float4(_70.x, _70.y, _70.z, spos.w);
    float p_age = pd[3].w - (float(gl_InstanceID) * pd[0].y);
    float param = float(gl_InstanceID);
    p_age -= ((p_age * fhash(param)) * pd[2].w);
    if ((pd[0].x > 0.0f) && (p_age < 0.0f))
    {
        p_age += (float(int((-p_age) / pd[0].x) + 1) * pd[0].x);
    }
    float p_lifetime = pd[0].z;
    if ((p_age < 0.0f) || (p_age > p_lifetime))
    {
        gl_Position /= 0.0f.xxxx;
        gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
        return;
    }
    float3 p_velocity = float3(pd[1].x, pd[1].y, pd[1].z);
    float param_1 = float(gl_InstanceID);
    p_velocity.x += ((fhash(param_1) * pd[1].w) - (pd[1].w / 2.0f));
    float param_2 = float(gl_InstanceID) + pd[0].w;
    p_velocity.y += ((fhash(param_2) * pd[1].w) - (pd[1].w / 2.0f));
    float param_3 = float(gl_InstanceID) + (2.0f * pd[0].w);
    p_velocity.z += ((fhash(param_3) * pd[1].w) - (pd[1].w / 2.0f));
    p_velocity.x += ((pd[2].x * p_age) / 5.0f);
    p_velocity.y += ((pd[2].y * p_age) / 5.0f);
    p_velocity.z += ((pd[2].z * p_age) / 5.0f);
    float3 p_location = p_velocity * p_age;
    float3 _247 = spos.xyz + p_location;
    spos = float4(_247.x, _247.y, _247.z, spos.w);
    gl_Position = mul(spos, WVP);
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    gl_InstanceID = int(stage_input.gl_InstanceID);
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
