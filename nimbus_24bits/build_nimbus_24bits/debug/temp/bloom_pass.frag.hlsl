Texture2D<float4> tex;
SamplerState _tex_sampler;

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
    float3 col = tex.SampleLevel(_tex_sampler, texCoord, 0.0f).xyz;
    float brightness = dot(col, float3(0.2125999927520751953125f, 0.715200006961822509765625f, 0.072200000286102294921875f));
    if (brightness > 1.0f)
    {
        fragColor = float4(col.x, col.y, col.z, fragColor.w);
    }
    else
    {
        fragColor = float4(0.0f.xxx.x, 0.0f.xxx.y, 0.0f.xxx.z, fragColor.w);
    }
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
