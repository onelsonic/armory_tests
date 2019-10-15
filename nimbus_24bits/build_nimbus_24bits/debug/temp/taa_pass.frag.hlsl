Texture2D<float4> tex;
SamplerState _tex_sampler;
Texture2D<float4> sveloc;
SamplerState _sveloc_sampler;
Texture2D<float4> tex2;
SamplerState _tex2_sampler;

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

void frag_main()
{
    float4 current = tex.SampleLevel(_tex_sampler, texCoord, 0.0f);
    float2 velocity = -sveloc.SampleLevel(_sveloc_sampler, texCoord, 0.0f).xy;
    velocity.y = -velocity.y;
    float4 previous = tex2.SampleLevel(_tex2_sampler, texCoord + velocity, 0.0f);
    float delta = abs((current.w * current.w) - (previous.w * previous.w)) / 5.0f;
    float weight = 0.5f * clamp(1.0f - (sqrt(delta) * 30.0f), 0.0f, 1.0f);
    fragColor = float4(lerp(current.xyz, previous.xyz, weight.xxx), 1.0f);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
