#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartPrefab : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartPrefab";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartPrefab, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x395778
     * @note[short] MacOS (Intel): 0x4222c0
     * @note[short] Windows: 0x2b58f0
     * @note[short] iOS: 0x461c
     * @note[short] Android
     */
    static GJSmartPrefab* create();

    /**
     * @note[short] MacOS (ARM): 0x39aec0
     * @note[short] MacOS (Intel): 0x4285a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8740
     * @note[short] Android
     */
    static GJSmartPrefab* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x39b000
     * @note[short] MacOS (Intel): 0x4286e0
     * @note[short] Windows: 0x2b5970
     * @note[short] iOS: 0x87e0
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x39aeb8
     * @note[short] MacOS (Intel): 0x428590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8738
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x39af90
     * @note[short] MacOS (Intel): 0x428670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8770
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x39ae9c
     * @note[short] MacOS (Intel): 0x428570
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
    gd::string m_prefabKey;
    gd::string m_prefabData;
    int m_prefabID;
    int m_prefabChance;
};
