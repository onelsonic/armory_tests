// Auto-generated
package ;
class Main {
    public static inline var projectName = 'celshadedisplacement';
    public static inline var projectVersion = '1.0.0';
    public static inline var projectPackage = 'arm';
    public static function main() {
        iron.object.BoneAnimation.skinMaxBones = 8;
        armory.system.Starter.main(
            'Scene',
            0,
            false,
            false,
            false,
            1920,
            1080,
            1,
            true,
            celshade.renderpath.RenderPathCreator.get
        );
    }
}
