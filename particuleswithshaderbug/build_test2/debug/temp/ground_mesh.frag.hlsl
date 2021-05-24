Texture2D<float4> ImageTexture : register(t0);
SamplerState _ImageTexture_sampler : register(s0);
uniform float3 pointPos;
uniform bool receiveShadow;
uniform float2 lightProj;
uniform float pointBias;
TextureCube<float4> shadowMapPoint[1] : register(t1);
SamplerComparisonState _shadowMapPoint_sampler[1] : register(s1);
uniform float3 pointCol;
uniform float envmapStrength;

static float3 wnormal;
static float2 texCoord;
static float3 wposition;
static float4 fragColor;

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
    float3 wnormal : TEXCOORD1;
    float3 wposition : TEXCOORD2;
};

struct SPIRV_Cross_Output
{
    float4 fragColor : SV_Target0;
};

float lpToDepth(inout float3 lp, float2 lightProj_1)
{
    lp = abs(lp);
    float zcomp = max(lp.x, max(lp.y, lp.z));
    zcomp = lightProj_1.x - (lightProj_1.y / zcomp);
    return (zcomp * 0.5f) + 0.5f;
}

float attenuate(float dist)
{
    return 1.0f / (dist * dist);
}

void frag_main()
{
    float3 n = normalize(wnormal);
    float4 ImageTexture_texread_store = ImageTexture.Sample(_ImageTexture_sampler, texCoord);
    float3 _72 = pow(ImageTexture_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_texread_store = float4(_72.x, _72.y, _72.z, ImageTexture_texread_store.w);
    float3 ImageTexture_Color_res = ImageTexture_texread_store.xyz;
    float3 basecol = ImageTexture_Color_res;
    float roughness = 0.5f;
    float metallic = 0.0f;
    float occlusion = 1.0f;
    float specular = 0.5f;
    float3 direct = 0.0f.xxx;
    float visibility = 1.0f;
    float3 ld = pointPos - wposition;
    float3 l = normalize(ld);
    float dotNL = max(dot(n, l), 0.0f);
    if (receiveShadow)
    {
        float3 param = ld;
        float _115 = lpToDepth(param, lightProj);
        float compare = _115 - (pointBias * 1.5f);
        l.y = -l.y;
        float4 _148 = float4((-l) + ((n * pointBias) * 20.0f), compare);
        visibility = shadowMapPoint[0].SampleCmp(_shadowMapPoint_sampler[0], _148.xyz, _148.w);
    }
    direct += ((((basecol * dotNL) * pointCol) * attenuate(distance(wposition, pointPos))) * visibility);
    fragColor = float4(direct + ((basecol * 0.5f) * envmapStrength), 1.0f);
    float3 _183 = pow(fragColor.xyz, 0.4545454680919647216796875f.xxx);
    fragColor = float4(_183.x, _183.y, _183.z, fragColor.w);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    wnormal = stage_input.wnormal;
    texCoord = stage_input.texCoord;
    wposition = stage_input.wposition;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
