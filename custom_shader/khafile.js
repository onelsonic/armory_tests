// Auto-generated
let project = new Project('forest_1_0_5');

project.addSources('Sources');
project.addShaders('build_forest_test36/compiled/Shaders/Project/**');
project.addLibrary("C:/ArmorySDK2307-3.6-lts/armory");
project.addLibrary("C:/ArmorySDK2307-3.6-lts/iron");
project.addParameter('armory.trait.internal.UniformsManager');
project.addParameter("--macro keep('armory.trait.internal.UniformsManager')");
project.addShaders("build_forest_test36/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_forest_test36/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_forest_test36/compiled/Assets/**", { notinlist: true });
project.addAssets("build_forest_test36/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("Bundled/GrassMaterial/GrassMaterial.json", { notinlist: true });
project.addAssets("Bundled/luttexture.jpg", { notinlist: true });
project.addLibrary("C:/ArmorySDK2307-3.6-lts/lib/zui");
project.addAssets("C:/ArmorySDK2307-3.6-lts/armory/Assets/font_default.ttf", { notinlist: false });
project.addDefine('arm_hosek');
project.addDefine('rp_renderer=Forward');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('js-es=6');
project.addDefine('arm_assert_level=Warning');
project.addDefine('arm_noembed');
project.addDefine('arm_soundcompress');
project.addDefine('arm_audio');
project.addDefine('arm_ui');
project.addDefine('arm_skin');
project.addDefine('arm_morph_target');
project.addDefine('arm_particles');
project.addDefine('armory');


resolve(project);
