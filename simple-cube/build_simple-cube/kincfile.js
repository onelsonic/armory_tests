let fs = require('fs');
let path = require('path');
let project = new Project('untitled');
project.version = '1.0';
project.addDefine('HXCPP_API_LEVEL=400');
project.addDefine('HXCPP_DEBUG', 'Debug');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{"bundle":"org.armory3d.arm"},"xboxOne":{},"playStation4":{},"switch":{}};
project.setDebugDir('build_simple-cube/ios-hl');
await project.addProject('build_simple-cube/ios-hl-build');
await project.addProject('C:/armorySDK1910myEdits/Kha/Backends/KoreHL');
if (fs.existsSync(path.join('C:/armorySDK1910myEdits/armory', 'kincfile.js')) || fs.existsSync(path.join('C:/armorySDK1910myEdits/armory', 'korefile.js'))) {
	await project.addProject('C:/armorySDK1910myEdits/armory');
}
if (fs.existsSync(path.join('C:/armorySDK1910myEdits/iron', 'kincfile.js')) || fs.existsSync(path.join('C:/armorySDK1910myEdits/iron', 'korefile.js'))) {
	await project.addProject('C:/armorySDK1910myEdits/iron');
}
resolve(project);
