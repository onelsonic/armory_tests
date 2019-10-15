uniform float4x4 P;
Texture2D<float4> gbufferD;
SamplerState _gbufferD_sampler;
uniform float2 cameraProj;
Texture2D<float4> gbuffer0;
SamplerState _gbuffer0_sampler;
uniform float3x3 V3;

static float3 viewRay;
static float fragColor;
static float2 texCoord;

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
    float3 viewRay : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float fragColor : SV_Target0;
};

static float2 coord;
static float depth;
static float3 hitCoord;
static float3 vpos;

float3 _208;

float2 octahedronWrap(float2 v)
{
    return (1.0f.xx - abs(v.yx)) * float2((v.x >= 0.0f) ? 1.0f : (-1.0f), (v.y >= 0.0f) ? 1.0f : (-1.0f));
}

float3 getPosView(float3 viewRay_1, float depth_1, float2 cameraProj_1)
{
    float linearDepth = cameraProj_1.y / (cameraProj_1.x - depth_1);
    return viewRay_1 * linearDepth;
}

float2 getProjectedCoord(float3 hitCoord_1)
{
    float4 projectedCoord = mul(float4(hitCoord_1, 1.0f), P);
    float2 _86 = projectedCoord.xy / projectedCoord.w.xx;
    projectedCoord = float4(_86.x, _86.y, projectedCoord.z, projectedCoord.w);
    float2 _94 = (projectedCoord.xy * 0.5f) + 0.5f.xx;
    projectedCoord = float4(_94.x, _94.y, projectedCoord.z, projectedCoord.w);
    projectedCoord.y = 1.0f - projectedCoord.y;
    return projectedCoord.xy;
}

float getDeltaDepth(float3 hitCoord_1)
{
    float3 param = hitCoord_1;
    coord = getProjectedCoord(param);
    depth = (gbufferD.SampleLevel(_gbufferD_sampler, coord, 0.0f).x * 2.0f) - 1.0f;
    float3 p = getPosView(viewRay, depth, cameraProj);
    return p.z - hitCoord_1.z;
}

void rayCast(inout float3 dir)
{
    hitCoord = vpos;
    dir *= 0.0199999995529651641845703125f;
    float dist = 0.1500000059604644775390625f;
    for (int i = 0; i < 8; i++)
    {
        hitCoord += dir;
        float3 param = hitCoord;
        float _167 = getDeltaDepth(param);
        float delta = _167;
        if ((delta > 0.0f) && (delta < 0.20000000298023223876953125f))
        {
            dist = distance(vpos, hitCoord);
            break;
        }
    }
    fragColor += dist;
}

float3 tangent(float3 n)
{
    float3 t1 = cross(n, float3(0.0f, 0.0f, 1.0f));
    float3 t2 = cross(n, float3(0.0f, 1.0f, 0.0f));
    if (length(t1) > length(t2))
    {
        return normalize(t1);
    }
    else
    {
        return normalize(t2);
    }
}

void frag_main()
{
    fragColor = 0.0f;
    float4 g0 = gbuffer0.SampleLevel(_gbuffer0_sampler, texCoord, 0.0f);
    float d = (gbufferD.SampleLevel(_gbufferD_sampler, texCoord, 0.0f).x * 2.0f) - 1.0f;
    float2 enc = g0.xy;
    float3 n;
    n.z = (1.0f - abs(enc.x)) - abs(enc.y);
    float2 _240;
    if (n.z >= 0.0f)
    {
        _240 = enc;
    }
    else
    {
        _240 = octahedronWrap(enc);
    }
    n = float3(_240.x, _240.y, n.z);
    n = normalize(mul(n, V3));
    vpos = getPosView(viewRay, d, cameraProj);
    float3 param = n;
    rayCast(param);
    float3 o1 = normalize(tangent(n));
    float3 o2 = cross(o1, n);
    float3 c1 = (o1 + o2) * 0.5f;
    float3 c2 = (o1 - o2) * 0.5f;
    float3 param_1 = lerp(n, o1, 0.5f.xxx);
    rayCast(param_1);
    float3 param_2 = lerp(n, o2, 0.5f.xxx);
    rayCast(param_2);
    float3 param_3 = lerp(n, -c1, 0.5f.xxx);
    rayCast(param_3);
    float3 param_4 = lerp(n, -c2, 0.5f.xxx);
    rayCast(param_4);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    viewRay = stage_input.viewRay;
    texCoord = stage_input.texCoord;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
