// Auto-generated
let project = new Project('untitled');

project.addSources('Sources');
project.addLibrary("C:/armorySDK1910myEdits/armory");
project.addLibrary("C:/armorySDK1910myEdits/iron");
project.addParameter('-dce full');
project.addShaders("build_simple-cube/compiled/Shaders/*.glsl", { noembed: false});
project.addAssets("build_simple-cube/compiled/Assets/**", { notinlist: true });
project.addAssets("build_simple-cube/compiled/Shaders/*.arm", { notinlist: true });
project.addDefine('rp_renderer=Forward');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('rp_render_to_texture');
project.addDefine('rp_antialiasing=Off');
project.addDefine('rp_supersampling=1');
project.addDefine('rp_ssgi=Off');
project.addDefine('rp_resolution_filter=Point');
project.addDefine('arm_audio');
project.addDefine('arm_published');
project.addDefine('arm_soundcompress');
project.addDefine('arm_skin');
project.addDefine('arm_particles');
project.addDefine('arm_loadscreen');
project.addDefine('arm_resizable');


resolve(project);
