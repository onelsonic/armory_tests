// Auto-generated
package ;
class Main {
    public static inline var projectName = 'forest3';
    public static inline var projectVersion = '1.0.0';
    public static inline var projectPackage = 'arm';
    public static inline var resolutionSize = 720;
    public static function main() {
        iron.object.BoneAnimation.skinMaxBones = 8;
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
            celshade.renderpath.RenderPathCreator.get
        );
    }
}
