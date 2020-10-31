// Auto-generated
package ;
class Main {
    public static inline var projectName = 'shadowscelshadetest';
    public static inline var projectVersion = '1.0';
    public static inline var projectPackage = 'arm';
    public static function main() {
        iron.object.BoneAnimation.skinMaxBones = 8;
        armory.system.Starter.numAssets = 8;
        armory.system.Starter.drawLoading = armory.trait.internal.LoadingScreen.render;
        armory.system.Starter.main(
            'Scene',
            0,
            false,
            true,
            false,
            1920,
            1080,
            1,
            true,
            celshade.renderpath.RenderPathCreator.get
        );
    }
}
