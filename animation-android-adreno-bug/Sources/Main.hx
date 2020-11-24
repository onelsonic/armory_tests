// Auto-generated
package ;
class Main {
    public static inline var projectName = 'link';
    public static inline var projectVersion = '1.0.1';
    public static inline var projectPackage = 'arm';
    public static function main() {
        iron.object.BoneAnimation.skinMaxBones = 160;
        armory.system.Starter.numAssets = 29;
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
            armory.renderpath.RenderPathCreator.get
        );
    }
}
