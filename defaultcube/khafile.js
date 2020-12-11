// Auto-generated
let project = new Project('defaultcube_1_0_6');

project.addSources('Sources');
project.addLibrary("C:/armorylatest/armorySDKlastest/armory");
project.addLibrary("C:/armorylatest/armorySDKlastest/iron");
project.addParameter('-dce full');
project.addShaders("build_defaultcube/compiled/Shaders/*.glsl", { noembed: false});
project.addAssets("build_defaultcube/compiled/Assets/**", { notinlist: true });
project.addAssets("build_defaultcube/compiled/Shaders/*.arm", { notinlist: true });
project.addDefine('rp_renderer=Forward');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('armory');
project.addDefine('arm_audio');
project.addDefine('arm_published');
project.addDefine('arm_soundcompress');
project.addDefine('arm_skin');
project.addDefine('arm_particles');
project.addDefine('arm_loadscreen');
project.addDefine('arm_resizable');


resolve(project);
