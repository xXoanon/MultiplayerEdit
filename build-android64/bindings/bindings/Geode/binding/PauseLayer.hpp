#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class PauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "PauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PauseLayer, CCBlockLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PauseLayer();

    /**
     * @note[short] MacOS (ARM): 0x35522c
     * @note[short] MacOS (Intel): 0x3d5c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x141d38
     * @note[short] Android
     */
    static PauseLayer* create(bool unfocused);

    /**
     * @note[short] MacOS (ARM): 0x357188
     * @note[short] MacOS (Intel): 0x3d7bd0
     * @note[short] Windows: 0x37ede0
     * @note[short] iOS: 0x1438ac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3570ac
     * @note[short] MacOS (Intel): 0x3d7ad0
     * @note[short] Windows: 0x37ed10
     * @note[short] iOS: 0x1437f8
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x355300
     * @note[short] MacOS (Intel): 0x3d5d30
     * @note[short] Windows: 0x37c870
     * @note[short] iOS: 0x141df8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x356fc8
     * @note[short] MacOS (Intel): 0x3d7a10
     * @note[short] Windows: 0x37eb50
     * @note[short] iOS: 0x143788
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x357180
     * @note[short] MacOS (Intel): 0x3d7bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1438a4
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x356b8c
     * @note[short] MacOS (Intel): 0x3d7600
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void createToggleButton(gd::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x356e90
     * @note[short] MacOS (Intel): 0x3d78d0
     * @note[short] Windows: 0x37e8f0
     * @note[short] iOS: 0x143660
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] MacOS (ARM): 0x3552f8
     * @note[short] MacOS (Intel): 0x3d5d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(bool unfocused);

    /**
     * @note[short] MacOS (ARM): 0x356ad4
     * @note[short] MacOS (Intel): 0x3d7530
     * @note[short] Windows: 0x37e130
     * @note[short] iOS: 0x14350c
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356db4
     * @note[short] MacOS (Intel): 0x3d77f0
     * @note[short] Windows: 0x37e700
     * @note[short] iOS: 0x143584
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356ef8
     * @note[short] MacOS (Intel): 0x3d7950
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3568f0
     * @note[short] MacOS (Intel): 0x3d7330
     * @note[short] Windows: 0x37e2a0
     * @note[short] iOS: 0x143368
     * @note[short] Android
     */
    void onNormalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356898
     * @note[short] MacOS (Intel): 0x3d72d0
     * @note[short] Windows: 0x37e1c0
     * @note[short] iOS: 0x14332c
     * @note[short] Android
     */
    void onPracticeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356f14
     * @note[short] MacOS (Intel): 0x3d7970
     * @note[short] Windows: 0x37ebc0
     * @note[short] iOS: 0x1436ec
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356d84
     * @note[short] MacOS (Intel): 0x3d77c0
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356b88
     * @note[short] MacOS (Intel): 0x3d75f0
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356a74
     * @note[short] MacOS (Intel): 0x3d74c0
     * @note[short] Windows: 0x37e410
     * @note[short] iOS: 0x1434ac
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35685c
     * @note[short] MacOS (Intel): 0x3d7290
     * @note[short] Windows: 0x37e4b0
     * @note[short] iOS: 0x1432f0
     * @note[short] Android
     */
    void onRestartFull(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35693c
     * @note[short] MacOS (Intel): 0x3d7380
     * @note[short] Windows: 0x37e380
     * @note[short] iOS: 0x143398
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356ab0
     * @note[short] MacOS (Intel): 0x3d7500
     * @note[short] Windows: 0x37d540
     * @note[short] iOS: 0x1434e8
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356b84
     * @note[short] MacOS (Intel): 0x3d75e0
     * @note[short] Android
     */
    void onTime(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356750
     * @note[short] MacOS (Intel): 0x3d7180
     * @note[short] Windows: 0x37e550
     * @note[short] iOS: 0x143210
     * @note[short] Android
     */
    void onTryEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x355dd0
     * @note[short] MacOS (Intel): 0x3d6820
     * @note[short] Windows: 0x37d6f0
     * @note[short] iOS: 0x1428b4
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] MacOS (ARM): 0x356b14
     * @note[short] MacOS (Intel): 0x3d7570
     * @note[short] Windows: 0x372a90
     * @note[short] iOS: 0x143548
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356974
     * @note[short] MacOS (Intel): 0x3d73c0
     * @note[short] Windows: 0x37e9c0
     * @note[short] iOS: 0x1433d0
     * @note[short] Android
     */
    void tryQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x356b54
     * @note[short] MacOS (Intel): 0x3d75b0
     * @note[short] Android
     */
    void tryShowBanner(float dt);
    bool m_unfocused;
    bool m_tryingQuit;
};
