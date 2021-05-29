uniform float texUnpack;
uniform float3x3 N;
Texture2D<float4> ImageTexture : register(t0);
SamplerState _ImageTexture_sampler : register(s0);
uniform float4x4 LWVP;
uniform float4x4 W;
uniform float4x4 VP;

static float4 gl_Position;
static float4 pos;
static float2 texCoord;
static float2 tex;
static float3 wnormal;
static float2 nor;
static float4 lightPos;

struct SPIRV_Cross_Input
{
    float2 nor : TEXCOORD0;
    float4 pos : TEXCOORD1;
    float2 tex : TEXCOORD2;
};

struct SPIRV_Cross_Output
{
    float4 lightPos : TEXCOORD0;
    float2 texCoord : TEXCOORD1;
    float3 wnormal : TEXCOORD2;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float4 spos = float4(pos.xyz, 1.0f);
    texCoord = tex * texUnpack;
    wnormal = normalize(mul(float3(nor, pos.w), N));
    float4 ImageTexture_texread_store = ImageTexture.SampleLevel(_ImageTexture_sampler, texCoord, 0.0f);
    float3 _61 = pow(ImageTexture_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_texread_store = float4(_61.x, _61.y, _61.z, ImageTexture_texread_store.w);
    lightPos = mul(spos, LWVP);
    float3 ImageTexture_Color_res = ImageTexture_texread_store.xyz;
    float3 Displacement_Displacement_res = (((((ImageTexture_Color_res.x * 0.300000011920928955078125f) + (ImageTexture_Color_res.y * 0.589999973773956298828125f)) + (ImageTexture_Color_res.z * 0.10999999940395355224609375f)) / 3.0f) * 2.5f).xxx * 1.0f;
    float3 disp = Displacement_Displacement_res;
    float4 wpos = mul(spos, W);
    float3 _115 = wpos.xyz + ((wnormal * disp) * 0.100000001490116119384765625f);
    wpos = float4(_115.x, _115.y, _115.z, wpos.w);
    gl_Position = mul(wpos, VP);
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
    stage_output.wnormal = wnormal;
    stage_output.lightPos = lightPos;
    return stage_output;
}
