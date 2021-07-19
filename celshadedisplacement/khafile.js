// Auto-generated
let project = new Project('celshadedisplacement_1_0_0');

project.addSources('Sources');
project.addLibrary("C:/armorylatest/armorySDKlastest/armory");
project.addLibrary("C:/armorylatest/armorySDKlastest/iron");
project.addLibrary("driver_celshade");
project.addShaders("build_celshadedisplacement/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_celshadedisplacement/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_celshadedisplacement/compiled/Assets/**", { notinlist: true });
project.addAssets("build_celshadedisplacement/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("Assets/heightmap.jpg", { notinlist: true });
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('arm_noembed');
project.addDefine('arm_soundcompress');
project.addDefine('arm_audio');
project.addDefine('arm_skin');
project.addDefine('arm_particles');


resolve(project);