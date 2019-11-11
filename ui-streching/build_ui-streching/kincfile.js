let fs = require('fs');
let path = require('path');
let project = new Project('ui-streching');
project.version = '1.0';
project.addDefine('HXCPP_API_LEVEL=400');
project.addDefine('HXCPP_DEBUG', 'Debug');
project.addDefine('HXCPP_GC_GENERATIONAL');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{},"xboxOne":{},"playStation4":{},"switch":{}};
project.setDebugDir('build_ui-streching/android-hl');
await project.addProject('build_ui-streching/android-hl-build');
await project.addProject('C:/armorySDK1911default/Kha/Backends/KoreHL');
if (fs.existsSync(path.join('C:/armorySDK1911default/armory', 'kincfile.js')) || fs.existsSync(path.join('C:/armorySDK1911default/armory', 'korefile.js'))) {
	await project.addProject('C:/armorySDK1911default/armory');
}
if (fs.existsSync(path.join('C:/armorySDK1911default/iron', 'kincfile.js')) || fs.existsSync(path.join('C:/armorySDK1911default/iron', 'korefile.js'))) {
	await project.addProject('C:/armorySDK1911default/iron');
}
if (fs.existsSync(path.join('C:/armorySDK1911default/lib/zui', 'kincfile.js')) || fs.existsSync(path.join('C:/armorySDK1911default/lib/zui', 'korefile.js'))) {
	await project.addProject('C:/armorySDK1911default/lib/zui');
}
resolve(project);
