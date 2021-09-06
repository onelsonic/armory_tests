// Auto-generated
let project = new Project('link_1_0_2');

project.addSources('Sources');
project.addLibrary("C:/armorylatestSDK/armory");
project.addLibrary("C:/armorylatestSDK/iron");
project.addLibrary("C:/armorylatestSDK/lib/haxebullet");
project.addAssets("C:/armorylatestSDK/lib/haxebullet/ammo/ammo.js", { notinlist: true });
project.addParameter('-dce full');
project.addParameter('armory.trait.internal.UniformsManager');
project.addParameter("--macro keep('armory.trait.internal.UniformsManager')");
project.addParameter('armory.trait.physics.bullet.RigidBody');
project.addParameter("--macro keep('armory.trait.physics.bullet.RigidBody')");
project.addParameter('armory.trait.physics.bullet.PhysicsWorld');
project.addParameter("--macro keep('armory.trait.physics.bullet.PhysicsWorld')");
project.addParameter('armory.trait.internal.Bridge');
project.addParameter("--macro keep('armory.trait.internal.Bridge')");
project.addParameter('armory.trait.physics.bullet.PhysicsConstraintExportHelper');
project.addParameter("--macro keep('armory.trait.physics.bullet.PhysicsConstraintExportHelper')");
project.addParameter('armory.trait.internal.DebugConsole');
project.addParameter("--macro keep('armory.trait.internal.DebugConsole')");
project.addShaders("build_link/compiled/Shaders/*.glsl", { noembed: false});
project.addAssets("build_link/compiled/Assets/**", { notinlist: true });
project.addAssets("build_link/compiled/Shaders/*.arm", { notinlist: true });
project.addShaders("C:/armorylatestSDK/armory/Shaders/debug_draw/**");
project.addLibrary("C:/armorylatestSDK/lib/zui");
project.addAssets("C:/armorylatestSDK/armory/Assets/font_default.ttf", { notinlist: false });
project.addDefine('rp_renderer=Forward');
project.addDefine('rp_background=Clear');
project.addDefine('arm_physics');
project.addDefine('arm_bullet');
project.addDefine('arm_published');
project.addDefine('arm_soundcompress');
project.addDefine('arm_audio');
project.addDefine('arm_debug');
project.addDefine('arm_ui');
project.addDefine('arm_skin');
project.addDefine('arm_particles');
project.addDefine('arm_loadscreen');
project.addDefine('arm_resizable');
project.addDefine('armory');


resolve(project);
