#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRewardObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x80380
     * @note[short] MacOS (Intel): 0x8ecb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardObject* create();

    /**
     * @note[short] MacOS (ARM): 0x638b0
     * @note[short] MacOS (Intel): 0x72010
     * @note[short] Windows: 0x1f3d50
     * @note[short] iOS: 0x333134
     * @note[short] Android
     */
    static GJRewardObject* create(SpecialRewardItem type, int total, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x63838
     * @note[short] MacOS (Intel): 0x71fa0
     * @note[short] Windows: 0x1f3ce0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardObject* createItemUnlock(UnlockType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x80408
     * @note[short] MacOS (Intel): 0x8ed50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33fd84
     * @note[short] Android
     */
    static GJRewardObject* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x80528
     * @note[short] MacOS (Intel): 0x8ee60
     * @note[short] Windows: 0x1f3dc0
     * @note[short] iOS: 0x33fe30
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x805a8
     * @note[short] MacOS (Intel): 0x8eee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33feb0
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x804b8
     * @note[short] MacOS (Intel): 0x8ee00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33fdc0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x803dc
     * @note[short] MacOS (Intel): 0x8ed10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(SpecialRewardItem specialRewardItem, int total, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x803ec
     * @note[short] MacOS (Intel): 0x8ed30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x33fd68
     * @note[short] Android
     */
    bool isSpecialType();
    SpecialRewardItem m_specialRewardItem;
    UnlockType m_unlockType;
    int m_itemID;
    int m_total;
};
