uniform float4 shirr[7];
Texture2D<float4> ImageTexture;
SamplerState _ImageTexture_sampler;
Texture2D<float4> ImageTexture_002;
SamplerState _ImageTexture_002_sampler;
Texture2D<float4> ImageTexture_001;
SamplerState _ImageTexture_001_sampler;
uniform float3 pointPos;
uniform float2 lightProj;
uniform float pointBias;
TextureCube<float4> shadowMapPoint[1];
SamplerComparisonState _shadowMapPoint_sampler[1];
uniform float3 pointCol;
uniform float envmapStrength;

static float2 texCoord;
static float3x3 TBN;
static float3 wposition;
static float4 fragColor;

struct SPIRV_Cross_Input
{
    float3x3 TBN : TEXCOORD0;
    float2 texCoord : TEXCOORD3;
    float3 wposition : TEXCOORD4;
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

float3 shIrradiance(float3 nor)
{
    float3 cl00 = float3(shirr[0].x, shirr[0].y, shirr[0].z);
    float3 cl1m1 = float3(shirr[0].w, shirr[1].x, shirr[1].y);
    float3 cl10 = float3(shirr[1].z, shirr[1].w, shirr[2].x);
    float3 cl11 = float3(shirr[2].y, shirr[2].z, shirr[2].w);
    float3 cl2m2 = float3(shirr[3].x, shirr[3].y, shirr[3].z);
    float3 cl2m1 = float3(shirr[3].w, shirr[4].x, shirr[4].y);
    float3 cl20 = float3(shirr[4].z, shirr[4].w, shirr[5].x);
    float3 cl21 = float3(shirr[5].y, shirr[5].z, shirr[5].w);
    float3 cl22 = float3(shirr[6].x, shirr[6].y, shirr[6].z);
    return ((((((((((cl22 * 0.429042994976043701171875f) * ((nor.y * nor.y) - ((-nor.z) * (-nor.z)))) + (((cl20 * 0.743125021457672119140625f) * nor.x) * nor.x)) + (cl00 * 0.88622701168060302734375f)) - (cl20 * 0.2477079927921295166015625f)) + (((cl2m2 * 0.85808598995208740234375f) * nor.y) * (-nor.z))) + (((cl21 * 0.85808598995208740234375f) * nor.y) * nor.x)) + (((cl2m1 * 0.85808598995208740234375f) * (-nor.z)) * nor.x)) + ((cl11 * 1.02332794666290283203125f) * nor.y)) + ((cl1m1 * 1.02332794666290283203125f) * (-nor.z))) + ((cl10 * 1.02332794666290283203125f) * nor.x);
}

void frag_main()
{
    float4 ImageTexture_texread_store = ImageTexture.Sample(_ImageTexture_sampler, texCoord);
    float3 _229 = pow(ImageTexture_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_texread_store = float4(_229.x, _229.y, _229.z, ImageTexture_texread_store.w);
    float4 ImageTexture_002_texread_store = ImageTexture_002.Sample(_ImageTexture_002_sampler, texCoord);
    float4 ImageTexture_001_texread_store = ImageTexture_001.Sample(_ImageTexture_001_sampler, texCoord);
    float3 _244 = pow(ImageTexture_001_texread_store.xyz, 2.2000000476837158203125f.xxx);
    ImageTexture_001_texread_store = float4(_244.x, _244.y, _244.z, ImageTexture_001_texread_store.w);
    float3 ImageTexture_001_Color_res = ImageTexture_001_texread_store.xyz;
    float3 n = (ImageTexture_001_Color_res * 2.0f) - 1.0f.xxx;
    n = normalize(mul(n, TBN));
    float3 ImageTexture_Color_res = ImageTexture_texread_store.xyz;
    float3 ImageTexture_002_Color_res = ImageTexture_002_texread_store.xyz;
    float3 basecol = ImageTexture_Color_res;
    float roughness = ImageTexture_002_Color_res.x;
    float metallic = 0.0f;
    float occlusion = 1.0f;
    float specular = 1.0f;
    float3 direct = 0.0f.xxx;
    float visibility = 1.0f;
    float3 ld = pointPos - wposition;
    float3 l = normalize(ld);
    float dotNL = max(dot(n, l), 0.0f);
    float3 param = ld;
    float _303 = lpToDepth(param, lightProj);
    float compare = _303 - (pointBias * 1.5f);
    l.y = -l.y;
    float4 _333 = float4((-l) + ((n * pointBias) * 20.0f), compare);
    visibility = shadowMapPoint[0].SampleCmp(_shadowMapPoint_sampler[0], _333.xyz, _333.w);
    direct += ((((basecol * dotNL) * pointCol) * attenuate(distance(wposition, pointPos))) * visibility);
    fragColor = float4(direct + ((basecol * shIrradiance(n)) * envmapStrength), 1.0f);
    float3 _370 = pow(fragColor.xyz, 0.4545454680919647216796875f.xxx);
    fragColor = float4(_370.x, _370.y, _370.z, fragColor.w);
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    TBN = stage_input.TBN;
    wposition = stage_input.wposition;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
