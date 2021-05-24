Texture2D<float4> shadowMap : register(t0);
SamplerComparisonState _shadowMap_sampler : register(s0);

static float4 lightPos;
static float4 fragColor;
static float3 color;

struct SPIRV_Cross_Input
{
    float3 color : TEXCOORD0;
    float4 lightPos : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float4 fragColor : SV_Target0;
};

float PCF(float2 uv, float compare, float2 smSize)
{
    float3 _28 = float3(uv + ((-1.0f).xx / smSize), compare);
    float result = shadowMap.SampleCmp(_shadowMap_sampler, _28.xy, _28.z);
    float3 _38 = float3(uv + (float2(-1.0f, 0.0f) / smSize), compare);
    result += shadowMap.SampleCmp(_shadowMap_sampler, _38.xy, _38.z);
    float3 _50 = float3(uv + (float2(-1.0f, 1.0f) / smSize), compare);
    result += shadowMap.SampleCmp(_shadowMap_sampler, _50.xy, _50.z);
    float3 _61 = float3(uv + (float2(0.0f, -1.0f) / smSize), compare);
    result += shadowMap.SampleCmp(_shadowMap_sampler, _61.xy, _61.z);
    float3 _69 = float3(uv, compare);
    result += shadowMap.SampleCmp(_shadowMap_sampler, _69.xy, _69.z);
    float3 _80 = float3(uv + (float2(0.0f, 1.0f) / smSize), compare);
    result += shadowMap.SampleCmp(_shadowMap_sampler, _80.xy, _80.z);
    float3 _91 = float3(uv + (float2(1.0f, -1.0f) / smSize), compare);
    result += shadowMap.SampleCmp(_shadowMap_sampler, _91.xy, _91.z);
    float3 _102 = float3(uv + (float2(1.0f, 0.0f) / smSize), compare);
    result += shadowMap.SampleCmp(_shadowMap_sampler, _102.xy, _102.z);
    float3 _113 = float3(uv + (1.0f.xx / smSize), compare);
    result += shadowMap.SampleCmp(_shadowMap_sampler, _113.xy, _113.z);
    return result / 9.0f;
}

void frag_main()
{
    float3 lPos = lightPos.xyz / lightPos.w.xxx;
    float visibility = max(PCF(lPos.xy, lPos.z - 0.001000000047497451305389404296875f, 1024.0f.xx), 0.449999988079071044921875f);
    fragColor = float4(color * visibility, 1.0f);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    lightPos = stage_input.lightPos;
    color = stage_input.color;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
