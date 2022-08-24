// Auto-generated
let project = new Project('aug08cube_1_0_0');

project.addSources('Sources');
project.addLibrary("C:/ArmorySDK2208_latest/ArmorySDK2208/armory");
project.addLibrary("C:/ArmorySDK2208_latest/ArmorySDK2208/iron");
project.addParameter('-dce full');
project.addParameter('armory.trait.internal.UniformsManager');
project.addParameter("--macro keep('armory.trait.internal.UniformsManager')");
project.addShaders("build_aug08cube/compiled/Shaders/*.glsl", { noembed: false});
project.addAssets("build_aug08cube/compiled/Assets/**", { notinlist: true });
project.addAssets("build_aug08cube/compiled/Shaders/*.arm", { notinlist: true });
project.addDefine('rp_renderer=Forward');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('rp_render_to_texture');
project.addDefine('rp_antialiasing=Off');
project.addDefine('rp_supersampling=1');
project.addDefine('rp_ssgi=Off');
project.addDefine('rp_resolution_filter=Linear');
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
