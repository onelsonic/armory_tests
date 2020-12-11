// Auto-generated
package ;
class Main {
    public static inline var projectName = 'defaultcube';
    public static inline var projectVersion = '1.0.3';
    public static inline var projectPackage = 'arm';
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
            800,
            600,
            1,
            true,
            armory.renderpath.RenderPathCreator.get
        );
    }
}
