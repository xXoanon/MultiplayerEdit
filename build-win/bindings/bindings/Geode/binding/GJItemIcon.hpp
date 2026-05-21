#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJItemIcon : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJItemIcon";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJItemIcon, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3094bc
     * @note[short] Android: Out of line
     */
     GJItemIcon();

    /**
     * @note[short] MacOS (ARM): 0x2fab00
     * @note[short] MacOS (Intel): 0x370e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x307934
     * @note[short] Android: Rebinded
     */
     ~GJItemIcon();

    /**
     * @note[short] MacOS (ARM): 0x2fac04
     * @note[short] MacOS (Intel): 0x370f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3079b4
     * @note[short] Android
     */
    static GJItemIcon* create(UnlockType type, int id, cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, bool dark, bool unused, bool noLabel, cocos2d::ccColor3B unlockColor);

    /**
     * @note[short] MacOS (ARM): 0x2f7f64
     * @note[short] MacOS (Intel): 0x36de50
     * @note[short] Windows: 0x27a9f0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x2fabe8
     * @note[short] MacOS (Intel): 0x370f60
     * @note[short] Windows: 0x27a8c0
     * @note[short] iOS: 0x307998
     * @note[short] Android
     */
    static GJItemIcon* createStoreItem(UnlockType type, int id, bool dark, cocos2d::ccColor3B unlockColor);

    /**
     * @note[short] MacOS (ARM): 0x2f7f84
     * @note[short] MacOS (Intel): 0x36de80
     * @note[short] Windows: 0x27b710
     * @note[short] iOS: 0x305900
     * @note[short] Android
     */
    static float scaleForType(UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2fb36c
     * @note[short] MacOS (Intel): 0x371750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x307fbc
     * @note[short] Android
     */
    static cocos2d::ccColor3B unlockedColorForType(int type);

    /**
     * @note[short] MacOS (ARM): 0x2fb240
     * @note[short] MacOS (Intel): 0x371610
     * @note[short] Windows: 0x27b220
     * @note[short] iOS: 0x307f20
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2f847c
     * @note[short] MacOS (Intel): 0x36e5b0
     * @note[short] Windows: 0x27b630
     * @note[short] iOS: 0x305df4
     * @note[short] Android
     */
    void changeToLockedState(float scale);

    /**
     * @note[short] MacOS (ARM): 0x2f8454
     * @note[short] MacOS (Intel): 0x36e530
     * @note[short] Windows: 0x27b2c0
     * @note[short] iOS: 0x305dcc
     * @note[short] Android
     */
    void darkenStoreItem(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2fb3e0
     * @note[short] MacOS (Intel): 0x3717b0
     * @note[short] Windows: 0x27b340
     * @note[short] iOS: 0x30802c
     * @note[short] Android
     */
    void darkenStoreItem(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2fad14
     * @note[short] MacOS (Intel): 0x3710b0
     * @note[short] Windows: 0x27ab10
     * @note[short] iOS: 0x307a74
     * @note[short] Android
     */
    bool init(UnlockType type, int id, cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, bool dark, bool unused, bool noLabel, cocos2d::ccColor3B unlockColor);

    /**
     * @note[short] MacOS (ARM): 0x2f855c
     * @note[short] MacOS (Intel): 0x36e660
     * @note[short] Windows: 0x27b570
     * @note[short] iOS: 0x305ed0
     * @note[short] Android
     */
    void toggleEnabledState(bool enabled);
    cocos2d::CCSprite* m_player;
    int m_iconRequestID;
    cocos2d::CCSize m_playerSize;
    bool m_isIcon;
    int m_unlockID;
    UnlockType m_unlockType;
};
