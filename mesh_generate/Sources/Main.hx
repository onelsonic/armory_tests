// Auto-generated
package ;
class Main {
    public static inline var projectName = 'untitled';
    public static inline var projectVersion = '1.0';
    public static inline var projectPackage = 'arm';
    public static function main() {
        iron.object.BoneAnimation.skinMaxBones = 8;
        iron.object.LightObject.cascadeCount = 4;
        iron.object.LightObject.cascadeSplitFactor = 0.800000011920929;
        armory.system.Starter.numAssets = 6;
        armory.system.Starter.drawLoading = armory.trait.internal.LoadingScreen.render;
        armory.system.Starter.main(
            'Scene',
            0,
            false,
            true,
            false,
            960,
            540,
            1,
            true,
            armory.renderpath.RenderPathCreator.get
        );
    }
}
