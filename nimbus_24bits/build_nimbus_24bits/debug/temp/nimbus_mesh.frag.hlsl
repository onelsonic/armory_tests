Texture2D<float4> ImageTexture_004;
SamplerState _ImageTexture_004_sampler;
Texture2D<float4> ImageTexture_005;
SamplerState _ImageTexture_005_sampler;

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
    float3 TextureCoordinate_003_texread_UV_res = float3(texCoord.x, 1.0f - texCoord.y, 0.0f);
    float3 Mapping_003_texread_Vector_res = TextureCoordinate_003_texread_UV_res * float3(1600.0f, 1600.0f, 1.0f);
    float4 ImageTexture_004_texread_store = ImageTexture_004.Sample(_ImageTexture_004_sampler, float2(Mapping_003_texread_Vector_res.x, 1.0f - Mapping_003_texread_Vector_res.y));
    float3 _101 = pow(ImageTexture_004_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_004_texread_store = float4(_101.x, _101.y, _101.z, ImageTexture_004_texread_store.w);
    float4 ImageTexture_005_texread_store = ImageTexture_005.Sample(_ImageTexture_005_sampler, texCoord);
    float3 _111 = pow(ImageTexture_005_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_005_texread_store = float4(_111.x, _111.y, _111.z, ImageTexture_005_texread_store.w);
    float3 ImageTexture_004_Color_res = ImageTexture_004_texread_store.xyz;
    float3 ImageTexture_005_Color_res = ImageTexture_005_texread_store.xyz;
    float3 basecol = ImageTexture_004_Color_res;
    float roughness = 1.0f;
    float metallic = 0.0f;
    float occlusion = 1.0f;
    float specular = 0.0f;
    float opacity = ImageTexture_005_Color_res.x;
    if (opacity < 0.20000000298023223876953125f)
    {
        discard;
    }
    n /= ((abs(n.x) + abs(n.y)) + abs(n.z)).xxx;
    float2 _154;
    if (n.z >= 0.0f)
    {
        _154 = n.xy;
    }
    else
    {
        _154 = octahedronWrap(n.xy);
    }
    n = float3(_154.x, _154.y, n.z);
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
