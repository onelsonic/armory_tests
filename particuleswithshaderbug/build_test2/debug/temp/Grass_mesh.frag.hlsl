uniform float3 pointPos;
uniform bool receiveShadow;
uniform float2 lightProj;
uniform float pointBias;
TextureCube<float4> shadowMapPoint[1] : register(t0);
SamplerComparisonState _shadowMapPoint_sampler[1] : register(s0);
uniform float3 pointCol;
uniform float envmapStrength;

static float3 wnormal;
static float3 wposition;
static float4 fragColor;

struct SPIRV_Cross_Input
{
    float3 wnormal : TEXCOORD0;
    float3 wposition : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float4 fragColor : SV_Target0;
};

float lpToDepth(inout float3 lp, float2 lightProj_1)
{
    lp = abs(lp);
    float zcomp = max(lp.x, max(lp.y, lp.z));
    zcomp = lightProj_1.x - (lightProj_1.y / zcomp);
    return (zcomp * 0.5f) + 0.5f;
}

float attenuate(float dist)
{
    return 1.0f / (dist * dist);
}

void frag_main()
{
    float3 n = normalize(wnormal);
    float3 basecol = float3(0.144128501415252685546875f, 0.3564002215862274169921875f, 0.1470272839069366455078125f);
    float roughness = 0.0f;
    float metallic = 0.0f;
    float occlusion = 1.0f;
    float specular = 0.0f;
    float3 direct = 0.0f.xxx;
    float visibility = 1.0f;
    float3 ld = pointPos - wposition;
    float3 l = normalize(ld);
    float dotNL = max(dot(n, l), 0.0f);
    if (receiveShadow)
    {
        float3 param = ld;
        float _96 = lpToDepth(param, lightProj);
        float compare = _96 - (pointBias * 1.5f);
        l.y = -l.y;
        float4 _130 = float4((-l) + ((n * pointBias) * 20.0f), compare);
        visibility = shadowMapPoint[0].SampleCmp(_shadowMapPoint_sampler[0], _130.xyz, _130.w);
    }
    direct += ((((basecol * dotNL) * pointCol) * attenuate(distance(wposition, pointPos))) * visibility);
    fragColor = float4(direct + ((basecol * 0.5f) * envmapStrength), 1.0f);
    float3 _165 = pow(fragColor.xyz, 0.4545454680919647216796875f.xxx);
    fragColor = float4(_165.x, _165.y, _165.z, fragColor.w);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    wnormal = stage_input.wnormal;
    wposition = stage_input.wposition;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
