Texture2D<float4> ImageTexture_001 : register(t0);
SamplerState _ImageTexture_001_sampler : register(s0);
Texture2D<float4> ImageTexture : register(t1);
SamplerState _ImageTexture_sampler : register(s1);
uniform float3 sunDir;
uniform bool receiveShadow;
Texture2D<float4> shadowMap : register(t2);
SamplerComparisonState _shadowMap_sampler : register(s2);
uniform float shadowsBias;
uniform float3 sunCol;
uniform float envmapStrength;

static float3 wnormal;
static float2 texCoord;
static float4 lightPos;
static float4 fragColor;

struct SPIRV_Cross_Input
{
    float4 lightPos : TEXCOORD0;
    float2 texCoord : TEXCOORD1;
    float3 wnormal : TEXCOORD2;
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
    float4 ImageTexture_001_texread_store = ImageTexture_001.Sample(_ImageTexture_001_sampler, texCoord);
    float3 _145 = pow(ImageTexture_001_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_001_texread_store = float4(_145.x, _145.y, _145.z, ImageTexture_001_texread_store.w);
    float4 ImageTexture_texread_store = ImageTexture.Sample(_ImageTexture_sampler, texCoord);
    float3 _155 = pow(ImageTexture_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_texread_store = float4(_155.x, _155.y, _155.z, ImageTexture_texread_store.w);
    float visibility = 1.0f;
    float dotNL = max(dot(n, sunDir), 0.0f);
    bool _180;
    if (receiveShadow)
    {
        _180 = lightPos.w > 0.0f;
    }
    else
    {
        _180 = receiveShadow;
    }
    if (_180)
    {
        float3 lPos = lightPos.xyz / lightPos.w.xxx;
        visibility *= PCF(shadowMap, _shadowMap_sampler, lPos.xy, lPos.z - shadowsBias, 1024.0f.xx);
    }
    float3 ImageTexture_001_Color_res = ImageTexture_001_texread_store.xyz;
    float3 ImageTexture_Color_res = ImageTexture_texread_store.xyz;
    float3 basecol = ImageTexture_001_Color_res;
    float roughness = ((((ImageTexture_Color_res.x * 0.300000011920928955078125f) + (ImageTexture_Color_res.y * 0.589999973773956298828125f)) + (ImageTexture_Color_res.z * 0.10999999940395355224609375f)) / 3.0f) * 2.5f;
    float metallic = 0.0f;
    float occlusion = 1.0f;
    float specular = 1.0f;
    float3 shade = basecol * 0.0f.xxx;
    float3 direct = (lerp(shade, basecol, step(0.5f, dotNL).xxx) * visibility) * sunCol;
    float3 indirect = basecol * envmapStrength;
    fragColor = float4(direct + indirect, 1.0f);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    wnormal = stage_input.wnormal;
    texCoord = stage_input.texCoord;
    lightPos = stage_input.lightPos;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
