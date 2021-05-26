// Auto-generated
package ;
class Main {
    public static inline var projectName = 'scene';
    public static inline var projectVersion = '1.0.6';
    public static inline var projectPackage = 'arm';
    public static function main() {
        iron.object.BoneAnimation.skinMaxBones = 8;
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
            celshade.renderpath.RenderPathCreator.get
        );
    }
}
