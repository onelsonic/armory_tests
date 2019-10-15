Texture2D<float4> ImageTexture_004;
SamplerState _ImageTexture_004_sampler;

static float3 wnormal;
static float2 texCoord;
static float4 fragColor[3];
static float4 wvpposition;
static float4 prevwvpposition;

struct SPIRV_Cross_Input
{
    float4 prevwvpposition : TEXCOORD0;
    float2 texCoord : TEXCOORD1;
    float3 wnormal : TEXCOORD2;
    float4 wvpposition : TEXCOORD3;
};

struct SPIRV_Cross_Output
{
    float4 fragColor[3] : SV_Target0;
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
    float4 ImageTexture_004_texread_store = ImageTexture_004.Sample(_ImageTexture_004_sampler, texCoord);
    float3 _82 = pow(ImageTexture_004_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_004_texread_store = float4(_82.x, _82.y, _82.z, ImageTexture_004_texread_store.w);
    float3 ImageTexture_004_Color_res = ImageTexture_004_texread_store.xyz;
    float3 basecol = 0.4000000059604644775390625f.xxx + (ImageTexture_004_Color_res * 0.5f);
    float roughness = 0.5f;
    float metallic = 0.0f;
    float occlusion = 1.0f;
    float specular = 0.5f;
    float opacity = 1.0f;
    if (opacity < 0.20000000298023223876953125f)
    {
        discard;
    }
    n /= ((abs(n.x) + abs(n.y)) + abs(n.z)).xxx;
    float2 _126;
    if (n.z >= 0.0f)
    {
        _126 = n.xy;
    }
    else
    {
        _126 = octahedronWrap(n.xy);
    }
    n = float3(_126.x, _126.y, n.z);
    fragColor[0] = float4(n.xy, roughness, packFloatInt16(metallic, 0u));
    fragColor[1] = float4(basecol, packFloat2(occlusion, specular));
    float2 posa = ((wvpposition.xy / wvpposition.w.xx) * 0.5f) + 0.5f.xx;
    float2 posb = ((prevwvpposition.xy / prevwvpposition.w.xx) * 0.5f) + 0.5f.xx;
    float2 _194 = float2(posa - posb);
    fragColor[2] = float4(_194.x, _194.y, fragColor[2].z, fragColor[2].w);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    wnormal = stage_input.wnormal;
    texCoord = stage_input.texCoord;
    wvpposition = stage_input.wvpposition;
    prevwvpposition = stage_input.prevwvpposition;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
