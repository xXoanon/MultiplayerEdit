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

class ShardsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShardsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShardsPage();

    /**
     * @note[short] MacOS (ARM): 0x424bb8
     * @note[short] MacOS (Intel): 0x4c56c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a1aa8
     * @note[short] Android: Rebinded
     */
     ~ShardsPage();

    /**
     * @note[short] MacOS (ARM): 0x424ddc
     * @note[short] MacOS (Intel): 0x4c59f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a1b4c
     * @note[short] Android
     */
    static ShardsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x424edc
     * @note[short] MacOS (Intel): 0x4c5b30
     * @note[short] Windows: 0x489b00
     * @note[short] iOS: 0x3a1c08
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x426bc8
     * @note[short] MacOS (Intel): 0x4c7a20
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x3a3608
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x426b4c
     * @note[short] MacOS (Intel): 0x4c79b0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x3a358c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4269c0
     * @note[short] MacOS (Intel): 0x4c7820
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x3a3414
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x426b48
     * @note[short] MacOS (Intel): 0x4c79a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* alert, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x426874
     * @note[short] MacOS (Intel): 0x4c76e0
     * @note[short] Windows: 0x48cb70
     * @note[short] iOS: 0x3a32d0
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x4267c0
     * @note[short] MacOS (Intel): 0x4c7640
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x3a321c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4267fc
     * @note[short] MacOS (Intel): 0x4c7670
     * @note[short] Windows: 0x48caf0
     * @note[short] iOS: 0x3a3258
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x426834
     * @note[short] MacOS (Intel): 0x4c76a0
     * @note[short] Windows: 0x48cb30
     * @note[short] iOS: 0x3a3290
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
    cocos2d::CCDictionary* m_pages;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    cocos2d::CCSprite* m_tierSprite;
    int m_page;
};
