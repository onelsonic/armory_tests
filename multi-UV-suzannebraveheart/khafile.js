// Auto-generated
let project = new Project('multi_UV_suzannebraveheart_1_0_0');

project.addSources('Sources');
project.addLibrary("C:/armorylatest/armorySDKlastest/armory");
project.addLibrary("C:/armorylatest/armorySDKlastest/iron");
project.addParameter('armory.trait.internal.UniformsManager');
project.addParameter("--macro keep('armory.trait.internal.UniformsManager')");
project.addShaders("build_multi-UV-suzannebraveheart/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_multi-UV-suzannebraveheart/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_multi-UV-suzannebraveheart/compiled/Assets/**", { notinlist: true });
project.addAssets("build_multi-UV-suzannebraveheart/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("C:/armorylatest/armorySDKlastest/armory/Assets/brdf.png", { notinlist: true });
project.addDefine('arm_deferred');
project.addDefine('arm_csm');
project.addDefine('rp_hdr');
project.addDefine('rp_renderer=Deferred');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=512');
project.addDefine('rp_shadowmap_cube=512');
project.addDefine('rp_background=Off');
project.addDefine('arm_noembed');
project.addDefine('arm_soundcompress');
project.addDefine('arm_audio');
project.addDefine('arm_skin');
project.addDefine('arm_particles');


resolve(project);
