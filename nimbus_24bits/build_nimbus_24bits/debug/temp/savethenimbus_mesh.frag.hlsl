Texture2D<float4> ImageTexture_010 : register(t0);
SamplerState _ImageTexture_010_sampler : register(s0);

static float3 wnormal;
static float2 texCoord;
static float4 fragColor[2];

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
    float3 wnormal : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float4 fragColor[2] : SV_Target0;
};

float2 octahedronWrap(float2 v)
{
    return (1.0f.xx - abs(v.yx)) * float2((v.x >= 0.0f) ? 1.0f : (-1.0f), (v.y >= 0.0f) ? 1.0f : (-1.0f));
}

float packFloatInt16(float f, uint i)
{
    return (0.06248569488525390625f * f) + (0.06250095367431640625f * float(i));
}

float packFloat2(float f1, float f2)
{
    return floor(f1 * 255.0f) + min(f2, 0.9900000095367431640625f);
}

void frag_main()
{
    float3 n = normalize(wnormal);
    float4 ImageTexture_010_texread_store = ImageTexture_010.Sample(_ImageTexture_010_sampler, texCoord);
    float3 _82 = pow(ImageTexture_010_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_010_texread_store = float4(_82.x, _82.y, _82.z, ImageTexture_010_texread_store.w);
    float3 ImageTexture_010_Color_res = ImageTexture_010_texread_store.xyz;
    float ImageTexture_010_Alpha_res = ImageTexture_010_texread_store.w;
    float3 basecol = ImageTexture_010_Color_res;
    float roughness = 0.5f;
    float metallic = 0.0f;
    float occlusion = 1.0f;
    float specular = 0.5f;
    float opacity = ImageTexture_010_Alpha_res - 0.00019999999494757503271102905273438f;
    if (opacity < 0.99989998340606689453125f)
    {
        discard;
    }
    n /= ((abs(n.x) + abs(n.y)) + abs(n.z)).xxx;
    float2 _129;
    if (n.z >= 0.0f)
    {
        _129 = n.xy;
    }
    else
    {
        _129 = octahedronWrap(n.xy);
    }
    n = float3(_129.x, _129.y, n.z);
    fragColor[0] = float4(n.xy, roughness, packFloatInt16(metallic, 0u));
    fragColor[1] = float4(basecol, packFloat2(occlusion, specular));
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    wnormal = stage_input.wnormal;
    texCoord = stage_input.texCoord;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
