// Auto-generated
let project = new Project('armoryPBRmat_1_0_5');

project.addSources('Sources');
project.addLibrary("C:/ArmorySDK2205/armory");
project.addLibrary("C:/ArmorySDK2205/iron");
project.addParameter('-dce full');
project.addParameter('armory.trait.internal.UniformsManager');
project.addParameter("--macro keep('armory.trait.internal.UniformsManager')");
project.addShaders("build_armoryPBRmat/compiled/Shaders/*.glsl", { noembed: false});
project.addAssets("build_armoryPBRmat/compiled/Assets/**", { notinlist: true });
project.addAssets("build_armoryPBRmat/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("C:/ArmorySDK2205/armory/Assets/brdf.png", { notinlist: true });
project.addAssets("C:/ArmorySDK2205/armory/Assets/smaa_area.png", { notinlist: true });
project.addAssets("C:/ArmorySDK2205/armory/Assets/smaa_search.png", { notinlist: true });
project.addDefine('arm_deferred');
project.addDefine('arm_csm');
project.addDefine('rp_hdr');
project.addDefine('rp_renderer=Deferred');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=512');
project.addDefine('rp_background=World');
project.addDefine('rp_render_to_texture');
project.addDefine('rp_compositornodes');
project.addDefine('rp_antialiasing=SMAA');
project.addDefine('rp_supersampling=1');
project.addDefine('rp_ssgi=SSAO');
project.addDefine('arm_published');
project.addDefine('arm_soundcompress');
project.addDefine('arm_audio');
project.addDefine('arm_skin');
project.addDefine('arm_morph_target');
project.addDefine('arm_particles');
project.addDefine('arm_loadscreen');
project.addDefine('arm_resizable');
project.addDefine('armory');


resolve(project);
