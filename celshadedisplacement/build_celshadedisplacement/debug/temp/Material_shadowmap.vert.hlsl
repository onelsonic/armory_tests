uniform float texUnpack;
uniform float4x4 W;
Texture2D<float4> ImageTexture : register(t0);
SamplerState _ImageTexture_sampler : register(s0);
uniform float3x3 N;
uniform float4x4 LVP;

static float4 gl_Position;
static float4 pos;
static float2 texCoord;
static float2 tex;
static float2 nor;

struct SPIRV_Cross_Input
{
    float2 nor : TEXCOORD0;
    float4 pos : TEXCOORD1;
    float2 tex : TEXCOORD2;
};

struct SPIRV_Cross_Output
{
    float2 texCoord : TEXCOORD0;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    texCoord = tex * texUnpack;
    float3 wposition = float4(mul(spos, W)).xyz;
    float4 ImageTexture_texread_store = ImageTexture.SampleLevel(_ImageTexture_sampler, texCoord, 0.0f);
    float3 _57 = pow(ImageTexture_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_texread_store = float4(_57.x, _57.y, _57.z, ImageTexture_texread_store.w);
    float3 wnormal = normalize(mul(float3(nor, pos.w), N));
    float3 ImageTexture_Color_res = ImageTexture_texread_store.xyz;
    float3 Displacement_Displacement_res = (((((ImageTexture_Color_res.x * 0.300000011920928955078125f) + (ImageTexture_Color_res.y * 0.589999973773956298828125f)) + (ImageTexture_Color_res.z * 0.10999999940395355224609375f)) / 3.0f) * 2.5f).xxx * 1.0f;
    float3 disp = Displacement_Displacement_res;
    wposition += (wnormal * disp);
    gl_Position = mul(float4(wposition, 1.0f), LVP);
    gl_Position.z = (gl_Position.z + gl_Position.w) * 0.5;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    pos = stage_input.pos;
    tex = stage_input.tex;
    nor = stage_input.nor;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.texCoord = texCoord;
    return stage_output;
}
