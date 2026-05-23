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

class PromoInterstitial : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PromoInterstitial";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PromoInterstitial, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x26f194
     * @note[short] MacOS (Intel): 0x2d43e0
     * @note[short] Android
     */
    static PromoInterstitial* create(bool fullVersion);

    /**
     * @note[short] MacOS (ARM): 0x26f708
     * @note[short] MacOS (Intel): 0x2d49d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x26f970
     * @note[short] MacOS (Intel): 0x2d4c00
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x26f838
     * @note[short] MacOS (Intel): 0x2d4ad0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x26f8f8
     * @note[short] MacOS (Intel): 0x2d4b80
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x26f574
     * @note[short] MacOS (Intel): 0x2d4830
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x26f548
     * @note[short] MacOS (Intel): 0x2d4800
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x26f2c8
     * @note[short] MacOS (Intel): 0x2d4550
     * @note[short] Android
     */
    bool init(bool fullVersion);

    /**
     * @note[short] MacOS (ARM): 0x26f68c
     * @note[short] MacOS (Intel): 0x2d4950
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x26f5d4
     * @note[short] MacOS (Intel): 0x2d4890
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x26f31c
     * @note[short] MacOS (Intel): 0x2d45a0
     * @note[short] Android
     */
    void setup();
    bool m_fullVersion;
    cocos2d::CCMenu* m_closeMenu;
    bool m_promoTouched;
    gd::string m_marketLink;
    bool m_showAdBanner;
};
