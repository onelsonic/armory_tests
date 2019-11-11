// Auto-generated
let project = new Project('ui-streching');

project.addSources('Sources');
project.addLibrary("C:/armorySDK1911default/armory");
project.addLibrary("C:/armorySDK1911default/iron");
project.addParameter('-dce full');
project.addParameter('arm.UITrait');
project.addParameter("--macro keep('arm.UITrait')");
project.addParameter('armory.trait.internal.CanvasScript');
project.addParameter("--macro keep('armory.trait.internal.CanvasScript')");
project.addShaders("build_ui-streching/compiled/Shaders/*.glsl", { noembed: false});
project.addAssets("build_ui-streching/compiled/Assets/**", { notinlist: true });
project.addAssets("build_ui-streching/compiled/Shaders/*.arm", { notinlist: true });
project.addAssets("Bundled/canvas/MyCanvas.files", { notinlist: true });
project.addAssets("Bundled/canvas/MyCanvas.json", { notinlist: true });
project.addAssets("Bundled/logo.png", { notinlist: true });
project.addAssets("Bundled/resolution-checker.png", { notinlist: true });
project.addAssets("o.png", { notinlist: true });
project.addAssets("olution-checker.png", { notinlist: true });
project.addLibrary("C:/armorySDK1911default/lib/zui");
project.addAssets("C:/armorySDK1911default/armory/Assets/font_default.ttf", { notinlist: false });
project.addDefine('rp_renderer=Forward');
project.addDefine('rp_shadowmap');
project.addDefine('rp_shadowmap_cascade=1024');
project.addDefine('rp_shadowmap_cube=256');
project.addDefine('rp_background=Clear');
project.addDefine('rp_render_to_texture');
project.addDefine('rp_antialiasing=Off');
project.addDefine('rp_supersampling=1');
project.addDefine('rp_ssgi=Off');
project.addDefine('rp_resolution_filter=Linear');
project.addDefine('arm_audio');
project.addDefine('arm_published');
project.addDefine('arm_soundcompress');
project.addDefine('arm_ui');
project.addDefine('arm_skin');
project.addDefine('arm_particles');
project.addDefine('arm_loadscreen');
project.addDefine('arm_resizable');
project.targetOptions.android.package = 'org.armory3d.arm';
project.targetOptions.android.screenOrientation = 'landscape';


resolve(project);
