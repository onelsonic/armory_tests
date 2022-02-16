Texture2D<float4> ImageTexture_010 : register(t0);
SamplerState _ImageTexture_010_sampler : register(s0);

static float2 texCoord;

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
};

void frag_main()
{
    float4 ImageTexture_010_texread_store = ImageTexture_010.Sample(_ImageTexture_010_sampler, texCoord);
    float ImageTexture_010_Alpha_res = ImageTexture_010_texread_store.w;
    float opacity = ImageTexture_010_Alpha_res - 0.00019999999494757503271102905273438f;
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
