// Auto-generated
let project = new Project('shadowscelshadetest_1_0_0');

project.addSources('Sources');
project.addLibrary("C:/armorylatest/armorySDKlastest/armory");
project.addLibrary("C:/armorylatest/armorySDKlastest/iron");
project.addLibrary("driver_celshade");
project.addLibrary("C:/armorylatest/armorySDKlastest/lib/haxebullet");
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.wasm.js", { notinlist: true });
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.wasm.wasm", { notinlist: true });
project.addParameter('arm.SimpleRotateObject');
project.addParameter("--macro keep('arm.SimpleRotateObject')");
project.addParameter('armory.trait.WalkNavigation');
project.addParameter("--macro keep('armory.trait.WalkNavigation')");
project.addParameter('armory.trait.physics.bullet.PhysicsWorld');
project.addParameter("--macro keep('armory.trait.physics.bullet.PhysicsWorld')");
project.addParameter('armory.trait.physics.bullet.RigidBody');
project.addParameter("--macro keep('armory.trait.physics.bullet.RigidBody')");
project.addShaders("build_shadowscelshadetest/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_shadowscelshadetest/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_shadowscelshadetest/compiled/Assets/**", { notinlist: true });
project.addAssets("build_shadowscelshadetest/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("Assets/cgaxis_hdri_skies.jpg", { notinlist: true });
project.addAssets("Assets/ground.jpg", { notinlist: true });
project.addDefine('arm_hosek');
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
project.addDefine('arm_resizable');


resolve(project);
