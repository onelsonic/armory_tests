// Auto-generated
let project = new Project('forest3_1_0_0');

project.addSources('Sources');
project.addLibrary("C:/armorylatest/armorySDKlastest/armory");
project.addLibrary("C:/armorylatest/armorySDKlastest/iron");
project.addLibrary("driver_celshade");
project.addLibrary("C:/armorylatest/armorySDKlastest/lib/haxebullet");
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.wasm.js", { notinlist: true });
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.wasm.wasm", { notinlist: true });
project.addParameter('armory.trait.physics.bullet.PhysicsWorld');
project.addParameter("--macro keep('armory.trait.physics.bullet.PhysicsWorld')");
project.addParameter('armory.trait.WalkNavigation');
project.addParameter("--macro keep('armory.trait.WalkNavigation')");
project.addParameter('armory.trait.physics.bullet.RigidBody');
project.addParameter("--macro keep('armory.trait.physics.bullet.RigidBody')");
project.addParameter('armory.trait.SimpleRotateObject');
project.addParameter("--macro keep('armory.trait.SimpleRotateObject')");
project.addShaders("build_forest3/compiled/Shaders/*.glsl", { noembed: false});
project.addShaders("build_forest3/compiled/Hlsl/*.glsl", { noprocessing: true, noembed: false });
project.addAssets("build_forest3/compiled/Assets/**", { notinlist: true });
project.addAssets("build_forest3/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("Assets/checker_rough.png", { notinlist: true });
project.addAssets("Assets/grid_b.png", { notinlist: true });
project.addAssets("Bundled/luttexture.jpg", { notinlist: true });
project.addDefine('arm_hosek');
project.addDefine('rp_hdr');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('rp_render_to_texture');
project.addDefine('rp_compositornodes');
project.addDefine('rp_antialiasing=Off');
project.addDefine('rp_supersampling=1');
project.addDefine('rp_resolution_filter=Linear');
project.addDefine('arm_physics');
project.addDefine('arm_bullet');
project.addDefine('arm_noembed');
project.addDefine('arm_soundcompress');
project.addDefine('arm_audio');
project.addDefine('arm_skin');
project.addDefine('arm_particles');


resolve(project);
