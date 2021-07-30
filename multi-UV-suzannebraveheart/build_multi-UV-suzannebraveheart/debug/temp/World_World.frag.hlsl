uniform float3 backgroundCol;

static float3 normal;
static float4 fragColor;

struct SPIRV_Cross_Input
{
    float3 normal : TEXCOORD0;
};

struct SPIRV_Cross_Output
{
    float4 fragColor : SV_Target0;
};

void frag_main()
{
    float3 n = normalize(normal);
    fragColor = float4(backgroundCol.x, backgroundCol.y, backgroundCol.z, fragColor.w);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    normal = stage_input.normal;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
