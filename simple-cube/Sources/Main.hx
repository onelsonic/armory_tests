// Auto-generated
package ;
class Main {
    public static inline var projectName = 'untitled';
    public static inline var projectPackage = 'arm';
    public static inline var resolutionSize = 720;
    public static function main() {
        iron.object.BoneAnimation.skinMaxBones = 8;
        armory.system.Starter.numAssets = 3;
        armory.system.Starter.drawLoading = armory.trait.internal.LoadingScreen.render;
        armory.system.Starter.main(
            'Scene',
            0,
            false,
            true,
            false,
            1080,
            720,
            1,
            true,
            armory.renderpath.RenderPathCreator.get
        );
    }
}