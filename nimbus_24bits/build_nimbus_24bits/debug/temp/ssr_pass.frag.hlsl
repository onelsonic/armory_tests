uniform float4x4 P;
Texture2D<float4> gbufferD;
SamplerState _gbufferD_sampler;
uniform float2 cameraProj;
Texture2D<float4> gbuffer0;
SamplerState _gbuffer0_sampler;
Texture2D<float4> gbuffer1;
SamplerState _gbuffer1_sampler;
uniform float3x3 V3;
Texture2D<float4> tex;
SamplerState _tex_sampler;

static float3 viewRay;
static float2 texCoord;
static float4 fragColor;

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
    float3 viewRay : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float4 fragColor : SV_Target0;
};

static float depth;
static float3 hitCoord;

float2 octahedronWrap(float2 v)
{
    return (1.0f.xx - abs(v.yx)) * float2((v.x >= 0.0f) ? 1.0f : (-1.0f), (v.y >= 0.0f) ? 1.0f : (-1.0f));
}

float3 getPosView(float3 viewRay_1, float depth_1, float2 cameraProj_1)
{
    float linearDepth = cameraProj_1.y / (cameraProj_1.x - depth_1);
    return viewRay_1 * linearDepth;
}

float rand(float2 co)
{
    return frac(sin(dot(co, float2(12.98980045318603515625f, 78.233001708984375f))) * 43758.546875f);
}

float2 getProjectedCoord(float3 hit)
{
    float4 projectedCoord = mul(float4(hit, 1.0f), P);
    float2 _98 = projectedCoord.xy / projectedCoord.w.xx;
    projectedCoord = float4(_98.x, _98.y, projectedCoord.z, projectedCoord.w);
    float2 _106 = (projectedCoord.xy * 0.5f) + 0.5f.xx;
    projectedCoord = float4(_106.x, _106.y, projectedCoord.z, projectedCoord.w);
    projectedCoord.y = 1.0f - projectedCoord.y;
    return projectedCoord.xy;
}

float getDeltaDepth(float3 hit)
{
    depth = (gbufferD.SampleLevel(_gbufferD_sampler, getProjectedCoord(hit), 0.0f).x * 2.0f) - 1.0f;
    float3 viewPos = getPosView(viewRay, depth, cameraProj);
    return viewPos.z - hit.z;
}

float4 binarySearch(inout float3 dir)
{
    float3 start = hitCoord;
    float ddepth;
    for (int i = 0; i < 7; i++)
    {
        dir *= 0.5f;
        hitCoord -= dir;
        float3 _168 = hitCoord;
        float _169 = getDeltaDepth(_168);
        ddepth = _169;
        if (ddepth < 0.0f)
        {
            hitCoord += dir;
        }
    }
    if (abs(ddepth) > 0.00999999977648258209228515625f)
    {
        return 0.0f.xxxx;
    }
    return float4(getProjectedCoord(hitCoord), 0.0f, 1.0f);
}

float4 rayCast(inout float3 dir)
{
    dir *= 0.039999999105930328369140625f;
    for (int i = 0; i < 18; i++)
    {
        hitCoord += dir;
        float3 _210 = hitCoord;
        float _211 = getDeltaDepth(_210);
        if (_211 > 0.0f)
        {
            float3 param = dir;
            float4 _217 = binarySearch(param);
            return _217;
        }
    }
    return 0.0f.xxxx;
}

void frag_main()
{
    float4 g0 = gbuffer0.SampleLevel(_gbuffer0_sampler, texCoord, 0.0f);
    float roughness = g0.z;
    if (roughness == 1.0f)
    {
        fragColor = float4(0.0f.xxx.x, 0.0f.xxx.y, 0.0f.xxx.z, fragColor.w);
        return;
    }
    float spec = frac(gbuffer1.SampleLevel(_gbuffer1_sampler, texCoord, 0.0f).w);
    if (spec == 0.0f)
    {
        fragColor = float4(0.0f.xxx.x, 0.0f.xxx.y, 0.0f.xxx.z, fragColor.w);
        return;
    }
    float d = (gbufferD.SampleLevel(_gbufferD_sampler, texCoord, 0.0f).x * 2.0f) - 1.0f;
    if (d == 1.0f)
    {
        fragColor = float4(0.0f.xxx.x, 0.0f.xxx.y, 0.0f.xxx.z, fragColor.w);
        return;
    }
    float2 enc = g0.xy;
    float3 n;
    n.z = (1.0f - abs(enc.x)) - abs(enc.y);
    float2 _288;
    if (n.z >= 0.0f)
    {
        _288 = enc;
    }
    else
    {
        _288 = octahedronWrap(enc);
    }
    n = float3(_288.x, _288.y, n.z);
    n = normalize(n);
    float3 viewNormal = mul(n, V3);
    float3 viewPos = getPosView(viewRay, d, cameraProj);
    float3 reflected = normalize(reflect(viewPos, viewNormal));
    hitCoord = viewPos;
    float3 dir = (reflected * (1.0f - ((rand(texCoord) * 0.60000002384185791015625f) * roughness))) * 2.0f;
    float3 param = dir;
    float4 _332 = rayCast(param);
    float4 coords = _332;
    float2 deltaCoords = abs(0.5f.xx - coords.xy);
    float screenEdgeFactor = clamp(1.0f - (deltaCoords.x + deltaCoords.y), 0.0f, 1.0f);
    float reflectivity = 1.0f - roughness;
    float intensity = (((pow(reflectivity, 5.0f) * screenEdgeFactor) * clamp(-reflected.z, 0.0f, 1.0f)) * clamp((5.0f - length(viewPos - hitCoord)) * 0.20000000298023223876953125f, 0.0f, 1.0f)) * coords.w;
    intensity = clamp(intensity, 0.0f, 1.0f);
    float3 reflCol = tex.SampleLevel(_tex_sampler, coords.xy, 0.0f).xyz;
    reflCol = clamp(reflCol, 0.0f.xxx, 1.0f.xxx);
    float3 _389 = (reflCol * intensity) * 0.5f;
    fragColor = float4(_389.x, _389.y, _389.z, fragColor.w);
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
