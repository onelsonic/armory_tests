// Auto-generated
package ;
class Main {
    public static inline var projectName = 'aug08cube';
    public static inline var projectVersion = '1.0.0';
    public static inline var projectPackage = 'arm';
    public static inline var resolutionSize = 430;
    public static function main() {
        iron.object.BoneAnimation.skinMaxBones = 8;
        armory.system.Starter.numAssets = 3;
        armory.system.Starter.drawLoading = armory.trait.internal.LoadingScreen.render;
        armory.system.Starter.main(
            'Scene',
            0,
            true,
            true,
            true,
            800,
            600,
            1,
            true,
            armory.renderpath.RenderPathCreator.get
        );
    }
}
