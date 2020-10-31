// Auto-generated
let project = new Project('shadowscelshadetest');

project.addSources('Sources');
project.addLibrary("C:/armorylatest/armorySDKlastest/armory");
project.addLibrary("C:/armorylatest/armorySDKlastest/iron");
project.addLibrary("driver_celshade");
project.addLibrary("C:/armorylatest/armorySDKlastest/lib/haxebullet");
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.wasm.js", { notinlist: true });
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.wasm.wasm", { notinlist: true });
project.addParameter('-dce full');
project.addParameter('armory.trait.physics.bullet.PhysicsWorld');
project.addParameter("--macro keep('armory.trait.physics.bullet.PhysicsWorld')");
project.addParameter('arm.SimpleRotateObject');
project.addParameter("--macro keep('arm.SimpleRotateObject')");
project.addParameter('armory.trait.physics.bullet.RigidBody');
project.addParameter("--macro keep('armory.trait.physics.bullet.RigidBody')");
project.addShaders("build_shadowscelshadetest/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_shadowscelshadetest/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_shadowscelshadetest/compiled/Assets/**", { notinlist: true , destination: "data/{name}"});
project.addAssets("build_shadowscelshadetest/compiled/Shaders/*.arm", { notinlist: true , destination: "data/{name}"});
project.addAssets("Assets/cgaxis_hdri_skies.jpg", { notinlist: true , destination: "data/{name}"});
project.addAssets("Assets/ground.jpg", { notinlist: true , destination: "data/{name}"});
project.addDefine('arm_hosek');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('armory');
project.addDefine('arm_audio');
project.addDefine('arm_physics');
project.addDefine('arm_bullet');
project.addDefine('arm_published');
project.addDefine('arm_data_dir');
project.addDefine('arm_soundcompress');
project.addDefine('arm_skin');
project.addDefine('arm_particles');
project.addDefine('arm_loadscreen');


resolve(project);
