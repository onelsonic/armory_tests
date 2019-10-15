// Auto-generated
let project = new Project('nimbus_24bits');

project.addSources('Sources');
project.addLibrary("C:/armory/armory");
project.addLibrary("C:/armory/iron");
project.addShaders("build_nimbus_24bits/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_nimbus_24bits/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_nimbus_24bits/compiled/Assets/**", { notinlist: true });
project.addAssets("build_nimbus_24bits/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("C:/armory/armory/Assets/brdf.png", { notinlist: true });
project.addAssets("C:/armory/armory/Assets/smaa_area.png", { notinlist: true });
project.addAssets("C:/armory/armory/Assets/smaa_search.png", { notinlist: true });
project.addAssets("nimbus_24bits_white.jpg", { notinlist: true });
project.addDefine('arm_deferred');
project.addDefine('arm_csm');
project.addDefine('rp_hdr');
project.addDefine('rp_renderer=Deferred');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=4096');
project.addDefine('rp_shadowmap_cube=2048');
project.addDefine('rp_background=World');
project.addDefine('rp_render_to_texture');
project.addDefine('rp_compositornodes');
project.addDefine('rp_antialiasing=TAA');
project.addDefine('arm_veloc');
project.addDefine('arm_taa');
project.addDefine('rp_supersampling=1');
project.addDefine('rp_ssgi=RTAO');
project.addDefine('rp_bloom');
project.addDefine('rp_ssr');
project.addDefine('rp_voxelao');
project.addDefine('rp_voxelgi_resolution=128');
project.addDefine('rp_voxelgi_resolution_z=1.0');
project.addDefine('rp_gbuffer2');
project.addDefine('arm_audio');
project.addDefine('arm_noembed');
project.addDefine('arm_soundcompress');
project.addDefine('arm_skin');
project.addDefine('arm_particles');


resolve(project);
