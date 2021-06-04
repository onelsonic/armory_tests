uniform float3 sunDir;
uniform bool receiveShadow;
Texture2D<float4> shadowMap : register(t0);
SamplerComparisonState _shadowMap_sampler : register(s0);
uniform float shadowsBias;
uniform float3 sunCol;
uniform float envmapStrength;

static float3 wnormal;
static float4 lightPos;
static float4 fragColor;

struct SPIRV_Cross_Input
{
    float4 lightPos : TEXCOORD0;
    float3 wnormal : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float4 fragColor : SV_Target0;
};

float PCF(Texture2D<float4> shadowMap_1, SamplerComparisonState _shadowMap_1_sampler, float2 uv, float compare, float2 smSize)
{
    float3 _28 = float3(uv + ((-1.0f).xx / smSize), compare);
    float result = shadowMap_1.SampleCmp(_shadowMap_1_sampler, _28.xy, _28.z);
    float3 _38 = float3(uv + (float2(-1.0f, 0.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _38.xy, _38.z);
    float3 _50 = float3(uv + (float2(-1.0f, 1.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _50.xy, _50.z);
    float3 _61 = float3(uv + (float2(0.0f, -1.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _61.xy, _61.z);
    float3 _69 = float3(uv, compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _69.xy, _69.z);
    float3 _80 = float3(uv + (float2(0.0f, 1.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _80.xy, _80.z);
    float3 _91 = float3(uv + (float2(1.0f, -1.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _91.xy, _91.z);
    float3 _102 = float3(uv + (float2(1.0f, 0.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _102.xy, _102.z);
    float3 _113 = float3(uv + (1.0f.xx / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _113.xy, _113.z);
    return result / 9.0f;
}

void frag_main()
{
    float3 n = normalize(wnormal);
    float visibility = 1.0f;
    float dotNL = max(dot(n, sunDir), 0.0f);
    bool _152;
    if (receiveShadow)
    {
        _152 = lightPos.w > 0.0f;
    }
    else
    {
        _152 = receiveShadow;
    }
    if (_152)
    {
        float3 lPos = lightPos.xyz / lightPos.w.xxx;
        visibility *= PCF(shadowMap, _shadowMap_sampler, lPos.xy, lPos.z - shadowsBias, 1024.0f.xx);
    }
    float3 basecol = float3(0.144128501415252685546875f, 0.3564002215862274169921875f, 0.1470272839069366455078125f);
    float roughness = 0.0f;
    float metallic = 0.0f;
    float occlusion = 1.0f;
    float specular = 0.0f;
    float3 shade = basecol * 0.0f.xxx;
    float3 direct = (lerp(shade, basecol, step(0.5f, dotNL).xxx) * visibility) * sunCol;
    float3 indirect = basecol * envmapStrength;
    fragColor = float4(direct + indirect, 1.0f);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    wnormal = stage_input.wnormal;
    lightPos = stage_input.lightPos;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
