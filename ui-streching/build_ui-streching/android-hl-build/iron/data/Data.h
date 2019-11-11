﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_iron__data__Data
#define INC_iron__data__Data
typedef struct _iron__data__$Data *iron__data__$Data;
typedef struct _iron__data__Data *iron__data__Data;
#include <_std/String.h>
#include <kha/Sound.h>
#include <iron/data/Data.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <haxe/ds/StringMap.h>
#include <iron/data/MeshData.h>
#include <iron/data/LightData.h>
#include <iron/data/CameraData.h>
#include <iron/data/MaterialData.h>
#include <iron/data/ParticleData.h>
#include <iron/data/WorldData.h>
#include <iron/data/ShaderData.h>
#include <iron/data/TShaderOverride.h>
#include <iron/data/TSceneFormat.h>
#include <hl/types/ArrayObj.h>
#include <iron/data/TMeshData.h>
#include <iron/data/TLightData.h>
#include <iron/data/TCameraData.h>
#include <iron/data/TMaterialData.h>
#include <iron/data/TParticleData.h>
#include <iron/data/TWorldData.h>
#include <iron/data/TShaderData.h>
#include <iron/data/TSpeakerData.h>
#include <kha/internal/BytesBlob.h>
#include <kha/Image.h>
#include <kha/Kravur.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	kha__Sound p1;
} Enumt$ctx_4238ba6;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	bool p1;
	bool p2;
} Enumt$ctx_ac916dc;
struct _iron__data__$Data {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	haxe__ds__StringMap cachedSceneRaws;
	haxe__ds__StringMap cachedMeshes;
	haxe__ds__StringMap cachedLights;
	haxe__ds__StringMap cachedCameras;
	haxe__ds__StringMap cachedMaterials;
	haxe__ds__StringMap cachedParticles;
	haxe__ds__StringMap cachedWorlds;
	haxe__ds__StringMap cachedShaders;
	haxe__ds__StringMap cachedBlobs;
	haxe__ds__StringMap cachedImages;
	haxe__ds__StringMap cachedSounds;
	haxe__ds__StringMap cachedFonts;
	int assetsLoaded;
	haxe__ds__StringMap loadingMeshes;
	haxe__ds__StringMap loadingLights;
	haxe__ds__StringMap loadingCameras;
	haxe__ds__StringMap loadingMaterials;
	haxe__ds__StringMap loadingParticles;
	haxe__ds__StringMap loadingWorlds;
	haxe__ds__StringMap loadingShaders;
	haxe__ds__StringMap loadingSceneRaws;
	haxe__ds__StringMap loadingBlobs;
	haxe__ds__StringMap loadingImages;
	haxe__ds__StringMap loadingSounds;
	haxe__ds__StringMap loadingFonts;
	String dataPath;
	vclosure* getMesh;
	vclosure* getLight;
	vclosure* getCamera;
	vclosure* getMaterial;
	vclosure* getParticle;
	vclosure* getWorld;
	vclosure* getShader;
	vclosure* getSceneRaw;
	vclosure* returnSceneRaw;
	vclosure* getMeshRawByName;
	vclosure* getLightRawByName;
	vclosure* getCameraRawByName;
	vclosure* getMaterialRawByName;
	vclosure* getParticleRawByName;
	vclosure* getWorldRawByName;
	vclosure* getShaderRawByName;
	vclosure* getSpeakerRawByName;
	vclosure* getBlob;
	vclosure* getImage;
	vclosure* getSound;
	vclosure* getFont;
};
struct _iron__data__Data {
	hl_type *$type;
};
#endif

