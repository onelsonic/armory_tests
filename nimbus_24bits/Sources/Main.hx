// Auto-generated
package ;
class Main {
    public static inline var projectName = 'nimbus_24bits';
    public static inline var projectPackage = 'arm';
    public static inline var voxelgiVoxelSize = 16.0 / 128;
    public static inline var voxelgiHalfExtents = 8;
    public static function main() {
        iron.object.BoneAnimation.skinMaxBones = 8;
        iron.object.LightObject.cascadeCount = 4;
        iron.object.LightObject.cascadeSplitFactor = 0.800000011920929;
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