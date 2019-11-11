Texture2D<float4> ImageTexture_010;
SamplerState _ImageTexture_010_sampler;

static float2 texCoord;

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
};

void frag_main()
{
    float4 ImageTexture_010_texread_store = ImageTexture_010.Sample(_ImageTexture_010_sampler, texCoord);
    float3 _25 = pow(ImageTexture_010_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_010_texread_store = float4(_25.x, _25.y, _25.z, ImageTexture_010_texread_store.w);
    float3 ImageTexture_010_Color_res = ImageTexture_010_texread_store.xyz;
    float Math_Value_res = ImageTexture_010_Color_res.x - 0.00019999999494757503271102905273438f;
    float opacity = Math_Value_res;
    if (opacity < 1.0f)
    {
        discard;
    }
}

void main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    frag_main();
}
