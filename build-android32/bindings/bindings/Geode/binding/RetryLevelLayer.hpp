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
#include "RewardedVideoDelegate.hpp"

class RetryLevelLayer : public GJDropDownLayer, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RetryLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RetryLevelLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RetryLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x4511f8
     * @note[short] MacOS (Intel): 0x4f8210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b2f2c
     * @note[short] Android: Rebinded
     */
     ~RetryLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x4510a0
     * @note[short] MacOS (Intel): 0x4f8040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b2e60
     * @note[short] Android
     */
    static RetryLevelLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x452634
     * @note[short] MacOS (Intel): 0x4f97b0
     * @note[short] Windows: 0x3cbfb0
     * @note[short] iOS: 0x1b3c80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x452598
     * @note[short] MacOS (Intel): 0x4f96e0
     * @note[short] Windows: 0x3cbe40
     * @note[short] iOS: 0x1b3c34
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x4514f4
     * @note[short] MacOS (Intel): 0x4f85e0
     * @note[short] Windows: 0x3cb060
     * @note[short] iOS: 0x1b2fe8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x45208c
     * @note[short] MacOS (Intel): 0x4f91a0
     * @note[short] Windows: 0x3cbc00
     * @note[short] iOS: 0x1b3ae0
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x45219c
     * @note[short] MacOS (Intel): 0x4f92a0
     * @note[short] Windows: 0x3cbd20
     * @note[short] iOS: 0x1b3be8
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x452588
     * @note[short] MacOS (Intel): 0x4f96c0
     * @note[short] Windows: 0x3cbd60
     * @note[short] iOS: 0x1b3c24
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool shouldOffsetRewardCurrency();

    /**
     * @note[short] MacOS (ARM): 0x45262c
     * @note[short] MacOS (Intel): 0x4f9790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b3c78
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x452030
     * @note[short] MacOS (Intel): 0x4f9150
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getEndText();

    /**
     * @note[short] MacOS (ARM): 0x4521d8
     * @note[short] MacOS (Intel): 0x4f92d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4521dc
     * @note[short] MacOS (Intel): 0x4f92e0
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x451f74
     * @note[short] MacOS (Intel): 0x4f90b0
     * @note[short] Windows: 0x3cbe90
     * @note[short] iOS: 0x1b3a3c
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x451f20
     * @note[short] MacOS (Intel): 0x4f9060
     * @note[short] Windows: 0x3cbd70
     * @note[short] iOS: 0x1b39e8
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x452200
     * @note[short] MacOS (Intel): 0x4f9300
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x451bb8
     * @note[short] MacOS (Intel): 0x4f8cd0
     * @note[short] Windows: 0x3cb7c0
     * @note[short] iOS: 0x1b3688
     * @note[short] Android
     */
    void setupLastProgress();
    cocos2d::CCMenu* m_mainMenu;
    bool m_exitingMenu;
    bool m_unk1e9;
};
