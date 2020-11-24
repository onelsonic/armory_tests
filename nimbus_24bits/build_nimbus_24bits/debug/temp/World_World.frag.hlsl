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
    fragColor = float4(float3(0.2422811090946197509765625f, 0.617206752300262451171875f, 0.830769836902618408203125f).x, float3(0.2422811090946197509765625f, 0.617206752300262451171875f, 0.830769836902618408203125f).y, float3(0.2422811090946197509765625f, 0.617206752300262451171875f, 0.830769836902618408203125f).z, fragColor.w);
    fragColor.w = 0.0f;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    normal = stage_input.normal;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
