Texture2D<float4> gbuffer0;
SamplerState _gbuffer0_sampler;
Texture2D<float4> tex;
SamplerState _tex_sampler;
uniform float2 dirInv;

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
    float roughness = gbuffer0.SampleLevel(_gbuffer0_sampler, texCoord, 0.0f).z;
    if (roughness >= 0.800000011920928955078125f)
    {
        float3 _37 = tex.SampleLevel(_tex_sampler, texCoord, 0.0f).xyz;
        fragColor = float4(_37.x, _37.y, _37.z, fragColor.w);
        return;
    }
    float3 _50 = tex.SampleLevel(_tex_sampler, texCoord + (dirInv * 2.5f), 0.0f).xyz;
    fragColor = float4(_50.x, _50.y, _50.z, fragColor.w);
    float3 _63 = fragColor.xyz + tex.SampleLevel(_tex_sampler, texCoord + (dirInv * 1.5f), 0.0f).xyz;
    fragColor = float4(_63.x, _63.y, _63.z, fragColor.w);
    float3 _72 = fragColor.xyz + tex.SampleLevel(_tex_sampler, texCoord, 0.0f).xyz;
    fragColor = float4(_72.x, _72.y, _72.z, fragColor.w);
    float3 _84 = fragColor.xyz + tex.SampleLevel(_tex_sampler, texCoord - (dirInv * 1.5f), 0.0f).xyz;
    fragColor = float4(_84.x, _84.y, _84.z, fragColor.w);
    float3 _96 = fragColor.xyz + tex.SampleLevel(_tex_sampler, texCoord - (dirInv * 2.5f), 0.0f).xyz;
    fragColor = float4(_96.x, _96.y, _96.z, fragColor.w);
    float3 _103 = fragColor.xyz / 5.0f.xxx;
    fragColor = float4(_103.x, _103.y, _103.z, fragColor.w);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
