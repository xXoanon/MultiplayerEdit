#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class AchievementsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "AchievementsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementsLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x2fd384
     * @note[short] MacOS (Intel): 0x3738a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4225cc
     * @note[short] Android: Rebinded
     */
     AchievementsLayer();

    /**
     * @note[short] MacOS (ARM): 0x2fcbe4
     * @note[short] MacOS (Intel): 0x3730b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x421d4c
     * @note[short] Android
     */
    static AchievementsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2fd0fc
     * @note[short] MacOS (Intel): 0x373660
     * @note[short] Windows: 0x822b0
     * @note[short] iOS: 0x4223fc
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x2fcca0
     * @note[short] MacOS (Intel): 0x3731a0
     * @note[short] Windows: 0x82000
     * @note[short] iOS: 0x421df8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x2fcf2c
     * @note[short] MacOS (Intel): 0x373480
     * @note[short] Windows: 0x82350
     * @note[short] iOS: 0x4220b4
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x2fcf20
     * @note[short] MacOS (Intel): 0x373460
     * @note[short] Windows: 0x82530
     * @note[short] iOS: 0x4220a8
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2fcf14
     * @note[short] MacOS (Intel): 0x373440
     * @note[short] Windows: 0x82540
     * @note[short] iOS: 0x42209c
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2fd260
     * @note[short] MacOS (Intel): 0x373790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4224a8
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* arr);

    /**
     * @note[short] MacOS (ARM): 0x2fd2e8
     * @note[short] MacOS (Intel): 0x373810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x422530
     * @note[short] Android
     */
    void setupPageInfo(int itemCount, int pageStartIdx, int pageEndIdx);
    int m_currentPage;
    CCMenuItemSpriteExtra* m_nextPageButton;
    CCMenuItemSpriteExtra* m_prevPageButton;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCPoint m_unkPoint;
};
