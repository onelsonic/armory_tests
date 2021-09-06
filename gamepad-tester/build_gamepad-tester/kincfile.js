let fs = require('fs');
let path = require('path');
let project = new Project('gamepad-tester');
project.version = '1.0';
project.addDefine('HXCPP_API_LEVEL=400');
project.addDefine('HXCPP_DEBUG', 'Debug');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{},"xboxOne":{},"playStation4":{},"switch":{}};
project.setDebugDir('build_gamepad-tester/android-hl');
await project.addProject('build_gamepad-tester/android-hl-build');
await project.addProject('C:/armorySDK1910winEdits/Kha/Backends/KoreHL');
if (fs.existsSync(path.join('C:/armorySDK1910winEdits/armory', 'kincfile.js')) || fs.existsSync(path.join('C:/armorySDK1910winEdits/armory', 'korefile.js'))) {
	await project.addProject('C:/armorySDK1910winEdits/armory');
}
if (fs.existsSync(path.join('C:/armorySDK1910winEdits/iron', 'kincfile.js')) || fs.existsSync(path.join('C:/armorySDK1910winEdits/iron', 'korefile.js'))) {
	await project.addProject('C:/armorySDK1910winEdits/iron');
}
if (fs.existsSync(path.join('C:/armorySDK1910winEdits/lib/zui', 'kincfile.js')) || fs.existsSync(path.join('C:/armorySDK1910winEdits/lib/zui', 'korefile.js'))) {
	await project.addProject('C:/armorySDK1910winEdits/lib/zui');
}
resolve(project);
