#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SmartPrefabResult.hpp"

class GJSmartTemplate : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartTemplate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartTemplate, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x399508
     * @note[short] MacOS (Intel): 0x426990
     * @note[short] Windows: 0x2b3740
     * @note[short] iOS: 0x79ac
     * @note[short] Android
     */
    static void applyTransformationsForType(SmartBlockType type, cocos2d::CCSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x39546c
     * @note[short] MacOS (Intel): 0x421f80
     * @note[short] Windows: 0x2b09a0
     * @note[short] iOS: 0x4330
     * @note[short] Android
     */
    static GJSmartTemplate* create();

    /**
     * @note[short] MacOS (ARM): 0x39a910
     * @note[short] MacOS (Intel): 0x428010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x83b8
     * @note[short] Android
     */
    static GJSmartTemplate* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x399754
     * @note[short] MacOS (Intel): 0x426c00
     * @note[short] Windows: 0x2b4070
     * @note[short] iOS: 0x7b74
     * @note[short] Android
     */
    static SmartBlockType flipBlockType(SmartBlockType type, bool flipX, bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x39970c
     * @note[short] MacOS (Intel): 0x426bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7b2c
     * @note[short] Android
     */
    static SmartBlockType flipBlockTypeX(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x399730
     * @note[short] MacOS (Intel): 0x426be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7b50
     * @note[short] Android
     */
    static SmartBlockType flipBlockTypeY(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x398690
     * @note[short] MacOS (Intel): 0x425bc0
     * @note[short] Windows: 0x2b4680
     * @note[short] iOS: 0x6dcc
     * @note[short] Android: Rebinded
     */
    static gd::string flipKey(gd::string key, bool flipX, bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x3999f0
     * @note[short] MacOS (Intel): 0x426ee0
     * @note[short] Android
     */
    static cocos2d::CCDictionary* generateRemapDict();

    /**
     * @note[short] MacOS (ARM): 0x396128
     * @note[short] MacOS (Intel): 0x422e80
     * @note[short] Windows: 0x2b10d0
     * @note[short] iOS: 0x4e04
     * @note[short] Android: Rebinded
     */
    static gd::string getSimplifiedKey(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x396cc8
     * @note[short] MacOS (Intel): 0x423970
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SmartBlockType getSimplifiedType(SmartBlockType type, bool& changed);

    /**
     * @note[short] MacOS (ARM): 0x396a94
     * @note[short] MacOS (Intel): 0x4237b0
     * @note[short] Windows: 0x2b18b0
     * @note[short] iOS: 0x55e8
     * @note[short] Android: Rebinded
     */
    static gd::string getVerySimplifiedKey(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x396cf8
     * @note[short] MacOS (Intel): 0x4239a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x56d0
     * @note[short] Android
     */
    static gd::string keyFromNeighbors(SmartBlockType type, SmartBlockType left, SmartBlockType right, SmartBlockType top, SmartBlockType bottom, SmartBlockType topLeft, SmartBlockType topRight, SmartBlockType bottomLeft, SmartBlockType bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x398a80
     * @note[short] MacOS (Intel): 0x425f60
     * @note[short] Windows: 0x2b3b10
     * @note[short] iOS: 0x710c
     * @note[short] Android
     */
    static gd::string keyFromNeighbors(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x3997b8
     * @note[short] MacOS (Intel): 0x426c70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static gd::string keyFromNeighborsOld(bool left, bool right, bool top, bool bottom, bool topLeft, bool topRight, bool bottomLeft, bool bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x398e88
     * @note[short] MacOS (Intel): 0x4263f0
     * @note[short] Windows: 0x2b3550
     * @note[short] iOS: 0x7460
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForDir(GJSmartDirection direction, int key);

    /**
     * @note[short] MacOS (ARM): 0x399014
     * @note[short] MacOS (Intel): 0x4264e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x756c
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForObject(SmartGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3993e0
     * @note[short] MacOS (Intel): 0x426800
     * @note[short] Windows: 0x2b3650
     * @note[short] iOS: 0x78a0
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForType(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x3996b8
     * @note[short] MacOS (Intel): 0x426b10
     * @note[short] Windows: 0x2b3f00
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SmartBlockType rotateBlockType(SmartBlockType type, int degrees);

    /**
     * @note[short] MacOS (ARM): 0x39968c
     * @note[short] MacOS (Intel): 0x426ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7b00
     * @note[short] Android
     */
    static SmartBlockType rotateBlockType90(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x39792c
     * @note[short] MacOS (Intel): 0x4247d0
     * @note[short] Windows: 0x2b4320
     * @note[short] iOS: 0x6248
     * @note[short] Android: Rebinded
     */
    static gd::string rotateKey(gd::string key, int degrees);

    /**
     * @note[short] MacOS (ARM): 0x399448
     * @note[short] MacOS (Intel): 0x4268d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7904
     * @note[short] Android
     */
    static bool shouldDiscardObject(SmartBlockType type, GJSmartDirection direction);

    /**
     * @note[short] MacOS (ARM): 0x399080
     * @note[short] MacOS (Intel): 0x426540
     * @note[short] Windows: 0x2b3880
     * @note[short] iOS: 0x75d8
     * @note[short] Android
     */
    static SmartBlockType smartObjectToType(SmartGameObject* object, cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x399668
     * @note[short] MacOS (Intel): 0x426ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7adc
     * @note[short] Android
     */
    static int smartTypeToObjectKey(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x39acac
     * @note[short] MacOS (Intel): 0x4283e0
     * @note[short] Windows: 0x2b5810
     * @note[short] iOS: 0x8618
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x39a908
     * @note[short] MacOS (Intel): 0x428000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x83b0
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x39a9a8
     * @note[short] MacOS (Intel): 0x4280c0
     * @note[short] Windows: 0x2b5540
     * @note[short] iOS: 0x83e8
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x396944
     * @note[short] MacOS (Intel): 0x423670
     * @note[short] Windows: 0x2b19c0
     * @note[short] iOS: 0x5508
     * @note[short] Android: Rebinded
     */
    gd::string getNoCornerKey(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x397d30
     * @note[short] MacOS (Intel): 0x425020
     * @note[short] Windows: 0x2b2ba0
     * @note[short] iOS: 0x658c
     * @note[short] Android: Rebinded
     */
    GJSmartPrefab* getPrefab(gd::string key, bool flipX, bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x39899c
     * @note[short] MacOS (Intel): 0x425ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJSmartPrefab* getPrefab(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x398994
     * @note[short] MacOS (Intel): 0x425e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7104
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* getPrefabs(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x398d4c
     * @note[short] MacOS (Intel): 0x4262f0
     * @note[short] Windows: 0x2b3490
     * @note[short] iOS: 0x7338
     * @note[short] Android: Rebinded
     */
    GJSmartPrefab* getPrefabWithID(gd::string key, int id);

    /**
     * @note[short] MacOS (ARM): 0x397758
     * @note[short] MacOS (Intel): 0x424630
     * @note[short] Windows: 0x2b2a30
     * @note[short] iOS: 0x608c
     * @note[short] Android: Rebinded
     */
    GJSmartPrefab* getRandomPrefab(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x39a36c
     * @note[short] MacOS (Intel): 0x427990
     * @note[short] Windows: 0x2b4f50
     * @note[short] iOS: 0x7fc8
     * @note[short] Android: Rebinded
     */
    void getTemplateState(gd::vector<SmartPrefabResult>& results);

    /**
     * @note[short] MacOS (ARM): 0x3988a0
     * @note[short] MacOS (Intel): 0x425dd0
     * @note[short] Windows: 0x2b2970
     * @note[short] iOS: 0x7020
     * @note[short] Android: Rebinded
     */
    int getTotalChanceForPrefab(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x3954f4
     * @note[short] MacOS (Intel): 0x422020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43b8
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] MacOS (ARM): 0x39a208
     * @note[short] MacOS (Intel): 0x427850
     * @note[short] Windows: 0x2b4db0
     * @note[short] iOS: 0x7e64
     * @note[short] Android: Rebinded
     */
    bool isUnrequired(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x399e24
     * @note[short] MacOS (Intel): 0x427370
     * @note[short] Windows: 0x2b49b0
     * @note[short] iOS: 0x7bbc
     * @note[short] Android
     */
    gd::string logTemplateStatus(bool unused);

    /**
     * @note[short] MacOS (ARM): 0x398dec
     * @note[short] MacOS (Intel): 0x426360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x73c4
     * @note[short] Android: Rebinded
     */
    void removePrefab(gd::string prefabKey, int prefabID);

    /**
     * @note[short] MacOS (ARM): 0x396ddc
     * @note[short] MacOS (Intel): 0x423a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x57c8
     * @note[short] Android
     */
    void resetScannedPrefabs();

    /**
     * @note[short] MacOS (ARM): 0x39558c
     * @note[short] MacOS (Intel): 0x4220d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4478
     * @note[short] Android: Rebinded
     */
    void savePrefab(gd::string key, gd::string data);

    /**
     * @note[short] MacOS (ARM): 0x3957f4
     * @note[short] MacOS (Intel): 0x422340
     * @note[short] Windows: 0x2b0b20
     * @note[short] iOS: 0x4698
     * @note[short] Android: Rebinded
     */
    void saveRemap(gd::string key);

    /**
     * @note[short] MacOS (ARM): 0x396778
     * @note[short] MacOS (Intel): 0x423480
     * @note[short] Windows: 0x2b0ef0
     * @note[short] iOS: 0x5420
     * @note[short] Android: Rebinded
     */
    void saveRemapToDict(gd::string key, gd::string remap, cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x396e0c
     * @note[short] MacOS (Intel): 0x423a90
     * @note[short] Windows: 0x2b1b40
     * @note[short] iOS: 0x57f8
     * @note[short] Android: Rebinded
     */
    SmartPrefabResult scanForPrefab(gd::string key);
    cocos2d::CCDictionary* m_prefabArrays;
    cocos2d::CCDictionary* m_remapDict1;
    cocos2d::CCDictionary* m_remapDict2;
    cocos2d::CCDictionary* m_remapDict3;
    cocos2d::CCDictionary* m_remapDict4;
    cocos2d::CCDictionary* m_remapDict5;
    cocos2d::CCDictionary* m_remapDict6;
    gd::map<gd::string, SmartPrefabResult> m_prefabResults;
    bool m_allowFlipX;
    bool m_allowFlipY;
    bool m_allowRotation;
    bool m_ignoreCorners;
    gd::string m_templateName;
    gd::string m_unk0a8;
    int m_nameIndex;
    int m_prefabIndex;
};
