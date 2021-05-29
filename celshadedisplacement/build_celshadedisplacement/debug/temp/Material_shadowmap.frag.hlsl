static float2 texCoord;

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
};

void frag_main()
{
}

void main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    frag_main();
}
