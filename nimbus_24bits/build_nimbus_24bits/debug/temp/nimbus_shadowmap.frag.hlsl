Texture2D<float4> ImageTexture_005;
SamplerState _ImageTexture_005_sampler;

static float2 texCoord;

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
};

void frag_main()
{
    float4 ImageTexture_005_texread_store = ImageTexture_005.Sample(_ImageTexture_005_sampler, texCoord);
    float3 _25 = pow(ImageTexture_005_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_005_texread_store = float4(_25.x, _25.y, _25.z, ImageTexture_005_texread_store.w);
    float3 ImageTexture_005_Color_res = ImageTexture_005_texread_store.xyz;
    float opacity = ImageTexture_005_Color_res.x;
    if (opacity < 0.100000001490116119384765625f)
    {
        discard;
    }
}

void main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    frag_main();
}
