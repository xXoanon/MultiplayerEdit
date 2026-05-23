#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"

class CommunityCreditsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommunityCreditsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CommunityCreditsPage();

    /**
     * @note[short] MacOS (ARM): 0x2ac740
     * @note[short] MacOS (Intel): 0x31e5d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a03d0
     * @note[short] Android: Rebinded
     */
     ~CommunityCreditsPage();

    /**
     * @note[short] MacOS (ARM): 0x2ac964
     * @note[short] MacOS (Intel): 0x31e900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a0474
     * @note[short] Android
     */
    static CommunityCreditsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x2aca68
     * @note[short] MacOS (Intel): 0x31ea50
     * @note[short] Windows: 0x940c0
     * @note[short] iOS: 0x1a0530
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2aed70
     * @note[short] MacOS (Intel): 0x320fb0
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x1a2b04
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2aecf4
     * @note[short] MacOS (Intel): 0x320f40
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x1a2a88
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2aeb68
     * @note[short] MacOS (Intel): 0x320db0
     * @note[short] Windows: 0x96220
     * @note[short] iOS: 0x1a2910
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x2aecf0
     * @note[short] MacOS (Intel): 0x320f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* alert, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2aea54
     * @note[short] MacOS (Intel): 0x320ca0
     * @note[short] Windows: 0x96100
     * @note[short] iOS: 0x1a2804
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x2ae9d8
     * @note[short] MacOS (Intel): 0x320c30
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x1a2788
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2aea14
     * @note[short] MacOS (Intel): 0x320c60
     * @note[short] Windows: 0x960c0
     * @note[short] iOS: 0x1a27c4
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
    cocos2d::CCDictionary* m_pageObjects;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    int m_page;
};
