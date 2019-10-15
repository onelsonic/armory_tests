static const float _75[10] = { 0.132571995258331298828125f, 0.12547199428081512451171875f, 0.10637299716472625732421875f, 0.0807799994945526123046875f, 0.0549499988555908203125f, 0.03348200023174285888671875f, 0.018275000154972076416015625f, 0.008933999575674533843994140625f, 0.00391199998557567596435546875f, 0.00153500004671514034271240234375f };

uniform float2 dir;
uniform float2 screenSize;
Texture2D<float4> tex;
SamplerState _tex_sampler;

static float4 fragColor;
static float2 texCoord;

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
    float2 _step = (dir / screenSize) * 3.0f;
    float3 _34 = tex.SampleLevel(_tex_sampler, texCoord, 0.0f).xyz * 0.132571995258331298828125f;
    fragColor = float4(_34.x, _34.y, _34.z, fragColor.w);
    for (int i = 1; i < 10; i++)
    {
        float2 s = _step * (float(i) + 0.5f);
        float indexable[10] = _75;
        float3 _85 = fragColor.xyz + (tex.SampleLevel(_tex_sampler, texCoord + s, 0.0f).xyz * indexable[i]);
        fragColor = float4(_85.x, _85.y, _85.z, fragColor.w);
        float indexable_1[10] = _75;
        float3 _101 = fragColor.xyz + (tex.SampleLevel(_tex_sampler, texCoord - s, 0.0f).xyz * indexable_1[i]);
        fragColor = float4(_101.x, _101.y, _101.z, fragColor.w);
    }
    float3 _109 = fragColor.xyz * 0.699999988079071044921875f;
    fragColor = float4(_109.x, _109.y, _109.z, fragColor.w);
    float3 _116 = min(fragColor.xyz, 64.0f.xxx);
    fragColor = float4(_116.x, _116.y, _116.z, fragColor.w);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
