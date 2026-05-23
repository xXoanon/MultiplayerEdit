#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRewardItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardItem, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x80668
     * @note[short] MacOS (Intel): 0x8efb0
     * @note[short] Windows: 0x1f3e50
     * @note[short] iOS: 0x33ff0c
     * @note[short] Android
     */
    static GJRewardItem* create();

    /**
     * @note[short] MacOS (ARM): 0x63ab0
     * @note[short] MacOS (Intel): 0x721f0
     * @note[short] Windows: 0x1f4190
     * @note[short] iOS: 0x3332b0
     * @note[short] Android: Rebinded
     */
    static GJRewardItem* create(int chestID, int timeRemaining, gd::string rewardStr);

    /**
     * @note[short] MacOS (ARM): 0x69144
     * @note[short] MacOS (Intel): 0x779b0
     * @note[short] Windows: 0x1f3fa0
     * @note[short] iOS: 0x336358
     * @note[short] Android
     */
    static GJRewardItem* createSpecial(GJRewardType rewardType, int orbs, int diamonds, SpecialRewardItem specialType1, int specialCount1, SpecialRewardItem specialType2, int specialCount2, int unlockType, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x80968
     * @note[short] MacOS (Intel): 0x8f2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x340168
     * @note[short] Android
     */
    static GJRewardItem* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x7dfc0
     * @note[short] MacOS (Intel): 0x8c4e0
     * @note[short] Windows: 0x1f3e90
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardItem* createWithObject(GJRewardType type, GJRewardObject* object);

    /**
     * @note[short] MacOS (ARM): 0x63920
     * @note[short] MacOS (Intel): 0x72080
     * @note[short] Windows: 0x1f3f20
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardItem* createWithObjects(GJRewardType type, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x808ec
     * @note[short] MacOS (Intel): 0x8f260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3400f0
     * @note[short] Android
     */
    static SpecialRewardItem getNextShardType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x65f80
     * @note[short] MacOS (Intel): 0x745d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3347bc
     * @note[short] Android
     */
    static SpecialRewardItem getRandomNonMaxShardType();

    /**
     * @note[short] MacOS (ARM): 0x80910
     * @note[short] MacOS (Intel): 0x8f280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x340114
     * @note[short] Android
     */
    static SpecialRewardItem getRandomShardType();

    /**
     * @note[short] MacOS (ARM): 0x643c4
     * @note[short] MacOS (Intel): 0x72b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool isShardType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x643dc
     * @note[short] MacOS (Intel): 0x72b40
     * @note[short] Windows: 0x1f44c0
     * @note[short] iOS: 0x333868
     * @note[short] Android
     */
    static gd::string rewardItemToStat(SpecialRewardItem rewardItem);

    /**
     * @note[short] MacOS (ARM): 0x80a9c
     * @note[short] MacOS (Intel): 0x8f3e0
     * @note[short] Windows: 0x1f4720
     * @note[short] iOS: 0x3401fc
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x80b08
     * @note[short] MacOS (Intel): 0x8f440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x340268
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x80a14
     * @note[short] MacOS (Intel): 0x8f360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x340198
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x68564
     * @note[short] MacOS (Intel): 0x76ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x335cc8
     * @note[short] Android
     */
    int getRewardCount(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x64580
     * @note[short] MacOS (Intel): 0x72c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333898
     * @note[short] Android
     */
    GJRewardObject* getRewardObjectForType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x80698
     * @note[short] MacOS (Intel): 0x8efe0
     * @note[short] Windows: 0x1f4260
     * @note[short] iOS: 0x33ff80
     * @note[short] Android: Rebinded
     */
    bool init(int chestID, int timeRemaining, gd::string rewardStr);
    int m_chestID;
    int m_timeRemaining;
    GJRewardType m_rewardType;
    cocos2d::CCArray* m_rewardObjects;
    bool m_unk;
};
