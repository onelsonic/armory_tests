// Auto-generated
let project = new Project('scene_1_0_6');

project.addSources('Sources');
project.addLibrary("C:/armorylatest/armorySDKlastest/armory");
project.addLibrary("C:/armorylatest/armorySDKlastest/iron");
project.addLibrary("C:/armorylatest/armorySDKlastest/lib/haxebullet");
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.js", { notinlist: true });
project.addParameter('-dce full');
project.addParameter('armory.trait.WalkNavigation');
project.addParameter("--macro keep('armory.trait.WalkNavigation')");
project.addParameter('armory.trait.physics.bullet.RigidBody');
project.addParameter("--macro keep('armory.trait.physics.bullet.RigidBody')");
project.addParameter('armory.trait.physics.bullet.PhysicsWorld');
project.addParameter("--macro keep('armory.trait.physics.bullet.PhysicsWorld')");
project.addShaders("build_scene/compiled/Shaders/*.glsl", { noembed: false});
project.addAssets("build_scene/compiled/Assets/**", { notinlist: true });
project.addAssets("build_scene/compiled/Shaders/*.arm", { notinlist: true });
project.addDefine('rp_renderer=Forward');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=256');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('arm_physics');
project.addDefine('arm_bullet');
project.addDefine('arm_published');
project.addDefine('arm_soundcompress');
project.addDefine('arm_audio');
project.addDefine('arm_skin');
project.addDefine('arm_particles');
project.addDefine('arm_loadscreen');
project.addDefine('arm_resizable');


resolve(project);
