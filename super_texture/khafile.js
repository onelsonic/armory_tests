// Auto-generated
let project = new Project('super_texture');

project.addSources('Sources');
project.addLibrary("C:/ArmorySDK1908/armory");
project.addLibrary("C:/ArmorySDK1908/iron");
project.addShaders("build_super_texture/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_super_texture/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_super_texture/compiled/Assets/**", { notinlist: true });
project.addAssets("build_super_texture/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("textures/supertexture_diffuse.jpg", { notinlist: true });
project.addAssets("textures/supertexture_nm.jpg", { notinlist: true });
project.addAssets("textures/supertexture_roug.jpg", { notinlist: true });
project.addDefine('rp_renderer=Forward');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('arm_audio');
project.addDefine('arm_noembed');
project.addDefine('arm_soundcompress');
project.addDefine('arm_skin');
project.addDefine('arm_particles');


resolve(project);
