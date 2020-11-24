// Auto-generated
let project = new Project('link');

project.addSources('Sources');
project.addLibrary("C:/armorylatest/armorySDKlastest/armory");
project.addLibrary("C:/armorylatest/armorySDKlastest/iron");
project.addLibrary("C:/armorylatest/armorySDKlastest/lib/haxebullet");
project.addAssets("C:/armorylatest/armorySDKlastest/lib/haxebullet/ammo/ammo.js", { notinlist: true });
project.addParameter('-dce full');
project.addParameter('armory.trait.internal.Bridge');
project.addParameter("--macro keep('armory.trait.internal.Bridge')");
project.addParameter('armory.trait.physics.bullet.PhysicsConstraint');
project.addParameter("--macro keep('armory.trait.physics.bullet.PhysicsConstraint')");
project.addParameter('armory.trait.physics.bullet.PhysicsWorld');
project.addParameter("--macro keep('armory.trait.physics.bullet.PhysicsWorld')");
project.addParameter('armory.trait.internal.DebugConsole');
project.addParameter("--macro keep('armory.trait.internal.DebugConsole')");
project.addParameter('armory.trait.physics.bullet.RigidBody');
project.addParameter("--macro keep('armory.trait.physics.bullet.RigidBody')");
project.addShaders("build_link/compiled/Shaders/*.glsl", { noembed: false});
project.addAssets("build_link/compiled/Assets/**", { notinlist: true });
project.addAssets("build_link/compiled/Shaders/*.arm", { notinlist: true });
project.addShaders("C:/armorylatest/armorySDKlastest/armory/Shaders/debug_draw/**");
project.addLibrary("C:/armorylatest/armorySDKlastest/lib/zui");
project.addAssets("C:/armorylatest/armorySDKlastest/armory/Assets/font_default.ttf", { notinlist: false });
project.addDefine('rp_renderer=Forward');
project.addDefine('rp_background=Clear');
project.addDefine('armory');
project.addDefine('arm_audio');
project.addDefine('arm_physics');
project.addDefine('arm_bullet');
project.addDefine('arm_published');
project.addDefine('arm_soundcompress');
project.addDefine('arm_debug');
project.addDefine('arm_ui');
project.addDefine('arm_skin');
project.addDefine('arm_particles');
project.addDefine('arm_loadscreen');
project.addDefine('arm_resizable');


resolve(project);
