Texture2D<float4> tex : register(t0);
SamplerState _tex_sampler : register(s0);
Texture2D<float4> lutTexture : register(t1);
SamplerState _lutTexture_sampler : register(s1);

static float2 texCoord;
static float4 fragColor;

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
};

struct SPIRV_Cross_Output
{
    float4 fragColor : SV_Target0;
};

float3 tonemapFilmic(float3 color)
{
    float3 x = max(0.0f.xxx, color - 0.0040000001899898052215576171875f.xxx);
    return (x * ((x * 6.19999980926513671875f) + 0.5f.xxx)) / ((x * ((x * 6.19999980926513671875f) + 1.7000000476837158203125f.xxx)) + 0.0599999986588954925537109375f.xxx);
}

float4 LUTlookup(inout float4 textureColor, Texture2D<float4> lookupTable, SamplerState _lookupTable_sampler)
{
    textureColor = clamp(textureColor, 0.0f.xxxx, 1.0f.xxxx);
    float blueColor = textureColor.z * 63.0f;
    float2 quad1;
    quad1.y = floor(floor(blueColor) / 8.0f);
    quad1.x = floor(blueColor) - (quad1.y * 8.0f);
    float2 quad2;
    quad2.y = floor(ceil(blueColor) / 8.0f);
    quad2.x = ceil(blueColor) - (quad2.y * 8.0f);
    float2 texelPosition1;
    texelPosition1.x = ((quad1.x * 0.125f) + 0.0009765625f) + (0.123046875f * textureColor.x);
    texelPosition1.y = ((quad1.y * 0.125f) + 0.0009765625f) + (0.123046875f * textureColor.y);
    float2 texelPosition2;
    texelPosition2.x = ((quad2.x * 0.125f) + 0.0009765625f) + (0.123046875f * textureColor.x);
    texelPosition2.y = ((quad2.y * 0.125f) + 0.0009765625f) + (0.123046875f * textureColor.y);
    float4 newColor1 = lookupTable.SampleLevel(_lookupTable_sampler, texelPosition1, 0.0f);
    float4 newColor2 = lookupTable.SampleLevel(_lookupTable_sampler, texelPosition2, 0.0f);
    float4 colorGradedResult = lerp(newColor1, newColor2, frac(blueColor).xxxx);
    return colorGradedResult;
}

void frag_main()
{
    float2 texCo = texCoord;
    fragColor = tex.SampleLevel(_tex_sampler, texCo, 0.0f);
    float3 _166 = tonemapFilmic(fragColor.xyz);
    fragColor = float4(_166.x, _166.y, _166.z, fragColor.w);
    float4 param = fragColor;
    float4 _172 = LUTlookup(param, lutTexture, _lutTexture_sampler);
    fragColor = _172;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
