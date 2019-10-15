uniform float4 casData[20];
uniform float4 shirr[7];
Texture2D<float4> gbuffer0;
SamplerState _gbuffer0_sampler;
Texture2D<float4> gbuffer1;
SamplerState _gbuffer1_sampler;
Texture2D<float4> gbufferD;
SamplerState _gbufferD_sampler;
uniform float3 eye;
uniform float3 eyeLook;
uniform float2 cameraProj;
uniform float3 backgroundCol;
uniform float envmapStrength;
Texture3D<float4> voxels;
SamplerState _voxels_sampler;
Texture2D<float4> ssaotex;
SamplerState _ssaotex_sampler;
uniform float3 sunDir;
Texture2D<float4> shadowMap;
SamplerComparisonState _shadowMap_sampler;
uniform float shadowsBias;
uniform float3 sunCol;

static float2 texCoord;
static float3 viewRay;
static float4 fragColor;

struct SPIRV_Cross_Input
{
    float2 texCoord : TEXCOORD0;
    float3 viewRay : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float4 fragColor : SV_Target0;
};

float3 _603;

float2 octahedronWrap(float2 v)
{
    return (1.0f.xx - abs(v.yx)) * float2((v.x >= 0.0f) ? 1.0f : (-1.0f), (v.y >= 0.0f) ? 1.0f : (-1.0f));
}

void unpackFloatInt16(float val, out float f, inout uint i)
{
    i = uint(int((val / 0.06250095367431640625f) + 1.525902189314365386962890625e-05f));
    f = clamp((((-0.06250095367431640625f) * float(i)) + val) / 0.06248569488525390625f, 0.0f, 1.0f);
}

float2 unpackFloat2(float f)
{
    return float2(floor(f) / 255.0f, frac(f));
}

float3 surfaceAlbedo(float3 baseColor, float metalness)
{
    return lerp(baseColor, 0.0f.xxx, metalness.xxx);
}

float3 surfaceF0(float3 baseColor, float metalness)
{
    return lerp(0.039999999105930328369140625f.xxx, baseColor, metalness.xxx);
}

float3 getPos(float3 eye_1, float3 eyeLook_1, float3 viewRay_1, float depth, float2 cameraProj_1)
{
    float linearDepth = cameraProj_1.y / (((depth * 0.5f) + 0.5f) - cameraProj_1.x);
    float viewZDist = dot(eyeLook_1, viewRay_1);
    float3 wposition = eye_1 + (viewRay_1 * (linearDepth / viewZDist));
    return wposition;
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

float3 tangent(float3 n)
{
    float3 t1 = cross(n, float3(0.0f, 0.0f, 1.0f));
    float3 t2 = cross(n, float3(0.0f, 1.0f, 0.0f));
    if (length(t1) > length(t2))
    {
        return normalize(t1);
    }
    else
    {
        return normalize(t2);
    }
}

float traceConeAO(Texture3D<float4> voxels_1, SamplerState _voxels_1_sampler, float3 origin, inout float3 dir, float aperture, float maxDist)
{
    dir = normalize(dir);
    float sampleCol = 0.0f;
    float dist = 0.0234375f;
    float diam = dist * aperture;
    while ((sampleCol < 1.0f) && (dist < maxDist))
    {
        float3 samplePos = (dir * dist) + origin;
        float mip = max(log2(diam * 128.0f), 0.0f);
        float mipSample = voxels_1.SampleLevel(_voxels_1_sampler, (samplePos * 0.5f) + 0.5f.xxx, mip).x;
        sampleCol += ((1.0f - sampleCol) * mipSample);
        dist += max(diam / 2.0f, 0.015625f);
        diam = dist * aperture;
    }
    return sampleCol;
}

float traceAO(float3 origin, float3 normal, Texture3D<float4> voxels_1, SamplerState _voxels_1_sampler)
{
    float3 o1 = normalize(tangent(normal));
    float3 o2 = normalize(cross(o1, normal));
    float3 c1 = (o1 + o2) * 0.5f;
    float3 c2 = (o1 - o2) * 0.5f;
    float3 param = normal;
    float _680 = traceConeAO(voxels_1, _voxels_1_sampler, origin, param, 0.557851731777191162109375f, 3.4641015529632568359375f);
    float col = _680;
    float3 param_1 = lerp(normal, o1, 0.5f.xxx);
    float _685 = traceConeAO(voxels_1, _voxels_1_sampler, origin, param_1, 0.557851731777191162109375f, 3.4641015529632568359375f);
    col += _685;
    float3 param_2 = lerp(normal, o2, 0.5f.xxx);
    float _692 = traceConeAO(voxels_1, _voxels_1_sampler, origin, param_2, 0.557851731777191162109375f, 3.4641015529632568359375f);
    col += _692;
    float3 param_3 = lerp(normal, -c1, 0.5f.xxx);
    float _700 = traceConeAO(voxels_1, _voxels_1_sampler, origin, param_3, 0.557851731777191162109375f, 3.4641015529632568359375f);
    col += _700;
    float3 param_4 = lerp(normal, -c2, 0.5f.xxx);
    float _708 = traceConeAO(voxels_1, _voxels_1_sampler, origin, param_4, 0.557851731777191162109375f, 3.4641015529632568359375f);
    col += _708;
    return (col / 5.0f) * 0.930000007152557373046875f;
}

float3 lambertDiffuseBRDF(float3 albedo, float nl)
{
    return albedo * max(0.0f, nl);
}

float d_ggx(float nh, float a)
{
    float a2 = a * a;
    float denom = pow(((nh * nh) * (a2 - 1.0f)) + 1.0f, 2.0f);
    return (a2 * 0.3183098733425140380859375f) / denom;
}

float v_smithschlick(float nl, float nv, float a)
{
    return 1.0f / (((nl * (1.0f - a)) + a) * ((nv * (1.0f - a)) + a));
}

float3 f_schlick(float3 f0, float vh)
{
    return f0 + ((1.0f.xxx - f0) * exp2((((-5.554729938507080078125f) * vh) - 6.9831600189208984375f) * vh));
}

float3 specularBRDF(float3 f0, float roughness, float nl, float nh, float nv, float vh)
{
    float a = roughness * roughness;
    return (f_schlick(f0, vh) * (d_ggx(nh, a) * clamp(v_smithschlick(nl, nv, a), 0.0f, 1.0f))) / 4.0f.xxx;
}

float4x4 getCascadeMat(float d, inout int casi, inout int casIndex)
{
    float4 comp = float4(float(d > casData[16].x), float(d > casData[16].y), float(d > casData[16].z), float(d > casData[16].w));
    casi = int(min(dot(1.0f.xxxx, comp), 4.0f));
    casIndex = casi * 4;
    return float4x4(float4(casData[casIndex]), float4(casData[casIndex + 1]), float4(casData[casIndex + 2]), float4(casData[casIndex + 3]));
}

float PCF(Texture2D<float4> shadowMap_1, SamplerComparisonState _shadowMap_1_sampler, float2 uv, float compare, float2 smSize)
{
    float3 _259 = float3(uv + ((-1.0f).xx / smSize), compare);
    float result = shadowMap_1.SampleCmp(_shadowMap_1_sampler, _259.xy, _259.z);
    float3 _268 = float3(uv + (float2(-1.0f, 0.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _268.xy, _268.z);
    float3 _279 = float3(uv + (float2(-1.0f, 1.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _279.xy, _279.z);
    float3 _290 = float3(uv + (float2(0.0f, -1.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _290.xy, _290.z);
    float3 _298 = float3(uv, compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _298.xy, _298.z);
    float3 _309 = float3(uv + (float2(0.0f, 1.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _309.xy, _309.z);
    float3 _320 = float3(uv + (float2(1.0f, -1.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _320.xy, _320.z);
    float3 _331 = float3(uv + (float2(1.0f, 0.0f) / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _331.xy, _331.z);
    float3 _342 = float3(uv + (1.0f.xx / smSize), compare);
    result += shadowMap_1.SampleCmp(_shadowMap_1_sampler, _342.xy, _342.z);
    return result / 9.0f;
}

float shadowTestCascade(Texture2D<float4> shadowMap_1, SamplerComparisonState _shadowMap_1_sampler, float3 eye_1, float3 p, float shadowsBias_1)
{
    float d = distance(eye_1, p);
    int param;
    int param_1;
    float4x4 _438 = getCascadeMat(d, param, param_1);
    int casi = param;
    int casIndex = param_1;
    float4x4 LWVP = _438;
    float4 lPos = mul(float4(p, 1.0f), LWVP);
    float3 _453 = lPos.xyz / lPos.w.xxx;
    lPos = float4(_453.x, _453.y, _453.z, lPos.w);
    float visibility = 1.0f;
    if (lPos.w > 0.0f)
    {
        visibility = PCF(shadowMap_1, _shadowMap_1_sampler, lPos.xy, lPos.z - shadowsBias_1, float2(16384.0f, 4096.0f));
    }
    float nextSplit = casData[16][casi];
    float _479;
    if (casi == 0)
    {
        _479 = nextSplit;
    }
    else
    {
        _479 = nextSplit - (casData[16][casi - 1]);
    }
    float splitSize = _479;
    float splitDist = (nextSplit - d) / splitSize;
    if ((splitDist <= 0.1500000059604644775390625f) && (casi != 3))
    {
        int casIndex2 = casIndex + 4;
        float4x4 LWVP2 = float4x4(float4(casData[casIndex2]), float4(casData[casIndex2 + 1]), float4(casData[casIndex2 + 2]), float4(casData[casIndex2 + 3]));
        float4 lPos2 = mul(float4(p, 1.0f), LWVP2);
        float3 _557 = lPos2.xyz / lPos2.w.xxx;
        lPos2 = float4(_557.x, _557.y, _557.z, lPos2.w);
        float visibility2 = 1.0f;
        if (lPos2.w > 0.0f)
        {
            visibility2 = PCF(shadowMap_1, _shadowMap_1_sampler, lPos2.xy, lPos2.z - shadowsBias_1, float2(16384.0f, 4096.0f));
        }
        float lerpAmt = smoothstep(0.0f, 0.1500000059604644775390625f, splitDist);
        return lerp(visibility2, visibility, lerpAmt);
    }
    return visibility;
}

void frag_main()
{
    float4 g0 = gbuffer0.SampleLevel(_gbuffer0_sampler, texCoord, 0.0f);
    float3 n;
    n.z = (1.0f - abs(g0.x)) - abs(g0.y);
    float2 _893;
    if (n.z >= 0.0f)
    {
        _893 = g0.xy;
    }
    else
    {
        _893 = octahedronWrap(g0.xy);
    }
    n = float3(_893.x, _893.y, n.z);
    n = normalize(n);
    float roughness = g0.z;
    float param;
    uint param_1;
    unpackFloatInt16(g0.w, param, param_1);
    float metallic = param;
    uint matid = param_1;
    float4 g1 = gbuffer1.SampleLevel(_gbuffer1_sampler, texCoord, 0.0f);
    float2 occspec = unpackFloat2(g1.w);
    float3 albedo = surfaceAlbedo(g1.xyz, metallic);
    float3 f0 = surfaceF0(g1.xyz, metallic);
    float depth = (gbufferD.SampleLevel(_gbufferD_sampler, texCoord, 0.0f).x * 2.0f) - 1.0f;
    float3 p = getPos(eye, eyeLook, normalize(viewRay), depth, cameraProj);
    float3 v = normalize(eye - p);
    float dotNV = max(dot(n, v), 0.0f);
    float3 envl = shIrradiance(n);
    envl *= albedo;
    envl += (backgroundCol * surfaceF0(g1.xyz, metallic));
    envl *= (envmapStrength * occspec.x);
    float3 voxpos = p / 8.0f.xxx;
    envl *= (1.0f - traceAO(voxpos, n, voxels, _voxels_sampler));
    fragColor = float4(envl.x, envl.y, envl.z, fragColor.w);
    float3 _1017 = fragColor.xyz * ssaotex.SampleLevel(_ssaotex_sampler, texCoord, 0.0f).x;
    fragColor = float4(_1017.x, _1017.y, _1017.z, fragColor.w);
    float3 sh = normalize(v + sunDir);
    float sdotNH = dot(n, sh);
    float sdotVH = dot(v, sh);
    float sdotNL = dot(n, sunDir);
    float svisibility = 1.0f;
    float3 sdirect = lambertDiffuseBRDF(albedo, sdotNL) + (specularBRDF(f0, roughness, sdotNL, sdotNH, dotNV, sdotVH) * occspec.y);
    svisibility = shadowTestCascade(shadowMap, _shadowMap_sampler, eye, p + ((n * shadowsBias) * 10.0f), shadowsBias);
    float3 _1074 = fragColor.xyz + ((sdirect * svisibility) * sunCol);
    fragColor = float4(_1074.x, _1074.y, _1074.z, fragColor.w);
    fragColor.w = 1.0f;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    texCoord = stage_input.texCoord;
    viewRay = stage_input.viewRay;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.fragColor = fragColor;
    return stage_output;
}
