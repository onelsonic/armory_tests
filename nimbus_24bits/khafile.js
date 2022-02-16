// Auto-generated
let project = new Project('nimbus_24bits_1_0_0');

project.addSources('Sources');
project.addLibrary("C:/ArmorySDK2202/armory");
project.addLibrary("C:/ArmorySDK2202/iron");
project.addParameter('armory.trait.internal.UniformsManager');
project.addParameter("--macro keep('armory.trait.internal.UniformsManager')");
project.addShaders("build_nimbus_24bits/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_nimbus_24bits/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_nimbus_24bits/compiled/Assets/**", { notinlist: true });
project.addAssets("build_nimbus_24bits/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("C:/ArmorySDK2202/armory/Assets/brdf.png", { notinlist: true });
project.addAssets("C:/ArmorySDK2202/armory/Assets/smaa_area.png", { notinlist: true });
project.addAssets("C:/ArmorySDK2202/armory/Assets/smaa_search.png", { notinlist: true });
project.addAssets("C:/Users/devWin10/Desktop/GITHUB/GITHUB_armory_tests/nimbus_24bits/nimbus_24bits_transparent.jpg", { notinlist: true });
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
project.addDefine('rp_translucency');
project.addDefine('js-es=6');
project.addDefine('arm_assert_level=Warning');
project.addDefine('arm_noembed');
project.addDefine('arm_soundcompress');
project.addDefine('arm_audio');
project.addDefine('arm_skin');
project.addDefine('arm_morph_target');
project.addDefine('arm_particles');
project.addDefine('armory');


resolve(project);
