﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
void $init(void);

#include <hlc_main.c>

#ifndef HL_MAKE
#  include <hl/hashes.c>
#  include <hl/functions.c>
#  include <hl/BaseType.c>
#  include <_std/String.c>
#  include <_std/Date.c>
#  include <iron/math/Vec4.c>
#  include <iron/math/Quat.c>
#  include <kha/math/FastMatrix4.c>
#  include <iron/math/Mat4.c>
#  include <iron/object/BoneAnimation.c>
#  include <hl/types/ArrayAccess.c>
#  include <hl/types/ArrayBase.c>
#  include <hl/types/ArrayBytes_Int.c>
#  include <hl/types/ArrayBytes_hl_UI16.c>
#  include <hl/types/ArrayBytes_Single.c>
#  include <hl/types/ArrayBytes_Float.c>
#  include <haxe/ds/StringMap.c>
#  include <kha/graphics4/CubeMap.c>
#  include <hl/types/ArrayObj.c>
#  include <kha/graphics4/VertexBuffer.c>
#  include <kha/Image.c>
#  include <kha/graphics4/PipelineStateBase.c>
#  include <kha/graphics4/VertexShader.c>
#  include <kha/graphics4/FragmentShader.c>
#  include <kha/graphics4/GeometryShader.c>
#  include <kha/graphics4/TessellationControlShader.c>
#  include <kha/graphics4/TessellationEvaluationShader.c>
#  include <kha/graphics4/PipelineState.c>
#  include <kha/math/FastMatrix3.c>
#  include <kha/graphics4/IndexBuffer.c>
#  include <kha/arrays/Float32ArrayPrivate.c>
#  include <haxe/io/Bytes.c>
#  include <kha/graphics4/VertexElement.c>
#  include <kha/graphics4/VertexStructure.c>
#  include <iron/object/Object.c>
#  include <iron/object/FrustumPlane.c>
#  include <iron/data/TLightData.c>
#  include <iron/data/LightData.c>
#  include <kha/arrays/Uint32ArrayPrivate.c>
#  include <iron/data/TTrack.c>
#  include <iron/data/TAnimation.c>
#  include <iron/data/TConstraint.c>
#  include <iron/data/TProperty.c>
#  include <iron/data/TTrait.c>
#  include <iron/data/TLod.c>
#  include <iron/data/TParticleReference.c>
#  include <iron/data/TTransform.c>
#  include <iron/data/TObj.c>
#  include <iron/data/Armature.c>
#  include <iron/object/Animation.c>
#  include <kha/graphics2/Graphics.c>
#  include <iron/Trait.c>
#  include <iron/object/Transform.c>
#  include <iron/object/Constraint.c>
#  include <iron/object/LightObject.c>
#  include <iron/RenderTargetRaw.c>
#  include <iron/RenderTarget.c>
#  include <iron/data/TTilesheetAction.c>
#  include <iron/data/TTilesheetData.c>
#  include <iron/object/Tilesheet.c>
#  include <iron/data/TParticleData.c>
#  include <iron/object/Particle.c>
#  include <iron/data/ParticleData.c>
#  include <iron/object/ParticleSystem.c>
#  include <iron/data/TBindTexture.c>
#  include <iron/data/TBindConstant.c>
#  include <iron/data/TMaterialContext.c>
#  include <iron/data/MaterialContext.c>
#  include <iron/data/TShaderOverride.c>
#  include <iron/data/TTextureUnit.c>
#  include <iron/data/TShaderConstant.c>
#  include <iron/data/TVertexElement.c>
#  include <iron/data/TShaderContext.c>
#  include <iron/data/ShaderContext.c>
#  include <iron/data/TShaderData.c>
#  include <iron/data/ShaderData.c>
#  include <iron/data/TMaterialData.c>
#  include <iron/data/MaterialData.c>
#  include <kha/arrays/Int16ArrayPrivate.c>
#  include <iron/data/Geometry.c>
#  include <iron/data/TGroup.c>
#  include <iron/data/TProbeData.c>
#  include <iron/data/TWorldData.c>
#  include <iron/data/TSpeakerData.c>
#  include <iron/data/TCameraData.c>
#  include <iron/data/TSkin.c>
#  include <iron/data/TIndexArray.c>
#  include <iron/data/TVertexArray.c>
#  include <iron/data/TMeshData.c>
#  include <iron/data/TSceneFormat.c>
#  include <iron/data/MeshData.c>
#  include <iron/object/MeshObject.c>
#  include <iron/RenderPath.c>
#  include <armory/system/Starter.c>
#  include <_std/Std.c>
#  include <_std/Math.c>
#  include <_std/StringBuf.c>
#  include <_std/SysError.c>
#  include <iron/math/Mat3.c>
#  include <iron/object/Uniforms.c>
#  include <armory/renderpath/Inc.c>
#  include <kha/Sound.c>
#  include <iron/object/SpeakerObject.c>
#  include <iron/data/CameraData.c>
#  include <iron/object/CameraObject.c>
#  include <iron/data/Probe.c>
#  include <iron/data/WorldData.c>
#  include <iron/Scene.c>
#  include <hl/types/ArrayDyn.c>
#  include <armory/renderpath/RenderPathForward.c>
#  include <armory/renderpath/RenderPathCreator.c>
#  include <kha/FramebufferOptions.c>
#  include <kha/WindowOptions.c>
#  include <kha/SystemOptions.c>
#  include <kha/Window.c>
#  include <kha/internal/BytesBlob.c>
#  include <iron/data/Data.c>
#  include <haxe/_Unserializer/DefaultResolver.c>
#  include <haxe/Unserializer.c>
#  include <haxe/ds/ObjectMap.c>
#  include <haxe/ds/_List/ListNode.c>
#  include <haxe/ds/List.c>
#  include <haxe/ds/IntMap.c>
#  include <haxe/format/JsonParser.c>
#  include <haxe/io/BytesBuffer.c>
#  include <haxe/io/BytesDataImpl.c>
#  include <haxe/io/Input.c>
#  include <haxe/io/Eof.c>
#  include <haxe/io/BytesInput.c>
#  include <haxe/io/Output.c>
#  include <haxe/io/BytesOutput.c>
#  include <haxe/io/FPHelper.c>
#  include <hl/NativeArrayIterator.c>
#  include <hl/types/BytesIterator_Float.c>
#  include <hl/types/BytesIterator_Int.c>
#  include <hl/types/BytesIterator_Single.c>
#  include <hl/types/BytesIterator_hl_UI16.c>
#  include <hl/types/ArrayDynIterator.c>
#  include <kha/Framebuffer.c>
#  include <iron/App.c>
#  include <iron/system/Time.c>
#  include <iron/CachedShaderContext.c>
#  include <iron/data/ConstData.c>
#  include <haxe/Log.c>
#  include <kha/Shaders.c>
#  include <iron/object/ObjectAnimation.c>
#  include <kha/_Assets/ImageList.c>
#  include <kha/_Assets/SoundList.c>
#  include <kha/_Assets/BlobList.c>
#  include <kha/_Assets/FontList.c>
#  include <kha/_Assets/VideoList.c>
#  include <kha/Display.c>
#  include <kha/korehl/graphics4/Graphics.c>
#  include <kha/korehl/Sound.c>
#  include <kha/TimeTask.c>
#  include <kha/FrameTask.c>
#  include <kha/Scheduler.c>
#  include <kha/netsync/Session.c>
#  include <kha/audio2/ogg/vorbis/data/Comment.c>
#  include <kha/audio2/ogg/vorbis/data/ReaderError.c>
#  include <kha/audio2/ogg/vorbis/data/ProbedPage.c>
#  include <kha/audio2/ogg/vorbis/data/Page.c>
#  include <kha/audio2/ogg/vorbis/VorbisDecodeState.c>
#  include <kha/audio2/ogg/vorbis/data/Mode.c>
#  include <kha/audio2/ogg/vorbis/data/MappingChannel.c>
#  include <kha/audio2/ogg/vorbis/data/Mapping.c>
#  include <kha/audio2/ogg/vorbis/data/Codebook.c>
#  include <kha/audio2/ogg/vorbis/data/Residue.c>
#  include <kha/audio2/ogg/vorbis/data/Floor1.c>
#  include <kha/audio2/ogg/vorbis/data/Floor0.c>
#  include <kha/audio2/ogg/vorbis/data/Floor.c>
#  include <kha/audio2/ogg/vorbis/data/Header.c>
#  include <kha/audio2/Buffer.c>
#  include <kha/audio2/Audio.c>
#  include <kha/System.c>
#  include <kha/netsync/Controller.c>
#  include <kha/input/Keyboard.c>
#  include <kha/input/Mouse.c>
#  include <kha/input/Surface.c>
#  include <kha/input/Gamepad.c>
#  include <kha/input/Pen.c>
#  include <kha/SystemImpl.c>
#  include <kha/graphics2/Graphics1.c>
#  include <kha/graphics4/Graphics2.c>
#  include <kha/graphics4/ImageShaderPainter.c>
#  include <kha/graphics4/PipelineCache.c>
#  include <kha/graphics4/ColoredShaderPainter.c>
#  include <kha/graphics4/TextShaderPainter.c>
#  include <kha/korehl/graphics4/Graphics2.c>
#  include <kha/input/MouseImpl.c>
#  include <kha/audio2/AudioChannel.c>
#  include <kha/audio2/StreamChannel.c>
#  include <kha/audio2/Audio1.c>
#  include <kha/audio2/ResamplingAudioChannel.c>
#  include <kha/audio2/ogg/tools/Crc32.c>
#  include <kha/audio2/ogg/vorbis/VorbisDecoder.c>
#  include <kha/audio2/ogg/vorbis/data/IntPoint.c>
#  include <kha/audio2/ogg/vorbis/VorbisTools.c>
#  include <kha/korehl/graphics4/ConstantLocation.c>
#  include <kha/korehl/graphics4/TextureUnit.c>
#  include <kha/input/Sensor.c>
#  include <_std/Main.c>
#  include <_std/Reflect.c>
#  include <_std/StringTools.c>
#  include <hl/_Bytes/Bytes_Impl_.c>
#  include <_std/Sys.c>
#  include <_std/Type.c>
#  include <armory/object/Uniforms.c>
#  include <armory/trait/internal/LoadingScreen.c>
#  include <haxe/ds/ArraySort.c>
#  include <iron/system/ArmPack.c>
#  include <iron/system/Audio.c>
#  include <kha/Assets.c>
#  include <kha/_Color/Color_Impl_.c>
#  include <kha/LoaderImpl.c>
#  include <kha/audio2/ogg/vorbis/Reader.c>
#  include <hl/init.c>
#  include <hl/reflect.c>
#  include <hl/types.c>
#  include <hl/globals.c>
#endif

void hl_init_hashes();
void hl_init_roots();
void hl_init_types( hl_module_context *ctx );
extern void *hl_functions_ptrs[];
extern hl_type *hl_functions_types[];

// Entry point
void hl_entry_point() {
	hl_module_context ctx;
	hl_alloc_init(&ctx.alloc);
	ctx.functions_ptrs = hl_functions_ptrs;
	ctx.functions_types = hl_functions_types;
	hl_init_types(&ctx);
	hl_init_hashes();
	hl_init_roots();
	$init();
}

