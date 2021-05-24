uniform float4x4 pd;
uniform float4x4 LWVP;

static float4 gl_Position;
static int gl_InstanceID;
static float4 pos;
static float3 ipos;

struct SPIRV_Cross_Input
{
    float3 ipos : TEXCOORD0;
    float4 pos : TEXCOORD1;
    uint gl_InstanceID : SV_InstanceID;
};

struct SPIRV_Cross_Output
{
    float4 gl_Position : SV_Position;
};

float fhash(float n)
{
    return frac(sin(n) * 43758.546875f);
}

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    float3 _37 = spos.xyz + ipos;
    spos = float4(_37.x, _37.y, _37.z, spos.w);
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
    float3 _218 = spos.xyz + p_location;
    spos = float4(_218.x, _218.y, _218.z, spos.w);
    gl_Position = mul(spos, LWVP);
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    gl_InstanceID = int(stage_input.gl_InstanceID);
    pos = stage_input.pos;
    ipos = stage_input.ipos;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    return stage_output;
}
