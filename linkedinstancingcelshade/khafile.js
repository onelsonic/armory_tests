// Auto-generated
let project = new Project('scene_1_0_2');

project.addSources('Sources');
project.addLibrary("C:/armorylatest/armorySDKlastest/armory");
project.addLibrary("C:/armorylatest/armorySDKlastest/iron");
project.addLibrary("driver_celshade");
project.addLibrary("C:/armorylatest/armorySDKlastest/lib/haxebullet");
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.wasm.js", { notinlist: true });
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.wasm.wasm", { notinlist: true });
project.addParameter('armory.trait.physics.bullet.PhysicsWorld');
project.addParameter("--macro keep('armory.trait.physics.bullet.PhysicsWorld')");
project.addParameter('armory.trait.physics.bullet.RigidBody');
project.addParameter("--macro keep('armory.trait.physics.bullet.RigidBody')");
project.addShaders("build_scene/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_scene/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_scene/compiled/Assets/**", { notinlist: true });
project.addAssets("build_scene/compiled/Shaders/*.arm", { notinlist: true });
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('arm_physics');
project.addDefine('arm_bullet');
project.addDefine('arm_noembed');
project.addDefine('arm_soundcompress');
project.addDefine('arm_audio');
project.addDefine('arm_skin');
project.addDefine('arm_particles');


resolve(project);
