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
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class SupportLayer : public GJDropDownLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SupportLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SupportLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SupportLayer();

    /**
     * @note[short] MacOS (ARM): 0x31dfe8
     * @note[short] MacOS (Intel): 0x398510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1914e0
     * @note[short] Android: Rebinded
     */
     ~SupportLayer();

    /**
     * @note[short] MacOS (ARM): 0x31de90
     * @note[short] MacOS (Intel): 0x398340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x191414
     * @note[short] Android
     */
    static SupportLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x31e32c
     * @note[short] MacOS (Intel): 0x398970
     * @note[short] Windows: 0x4c8560
     * @note[short] iOS: 0x1915ac
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x3200d0
     * @note[short] MacOS (Intel): 0x39a800
     * @note[short] Windows: 0x4c9b00
     * @note[short] iOS: 0x192e28
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x3202cc
     * @note[short] MacOS (Intel): 0x39a9f0
     * @note[short] Windows: 0x4c9cd0
     * @note[short] iOS: 0x192f80
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x320080
     * @note[short] MacOS (Intel): 0x39a7b0
     * @note[short] Windows: 0x4c9ac0
     * @note[short] iOS: 0x192dd8
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x320618
     * @note[short] MacOS (Intel): 0x39ad10
     * @note[short] Windows: 0x4ca950
     * @note[short] iOS: 0x193194
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x31fb34
     * @note[short] MacOS (Intel): 0x39a2d0
     * @note[short] Windows: 0x4c9120
     * @note[short] iOS: 0x1928ec
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x320078
     * @note[short] MacOS (Intel): 0x39a7a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x320054
     * @note[short] MacOS (Intel): 0x39a780
     * @note[short] Windows: 0x4c9860
     * @note[short] iOS: 0x192db4
     * @note[short] Android
     */
    void onCocos2d(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31f4c0
     * @note[short] MacOS (Intel): 0x399c40
     * @note[short] Windows: 0x4c9ff0
     * @note[short] iOS: 0x192434
     * @note[short] Android
     */
    void onEmail(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31ff78
     * @note[short] MacOS (Intel): 0x39a6c0
     * @note[short] Windows: 0x4c9970
     * @note[short] iOS: 0x192cd8
     * @note[short] Android
     */
    void onGetReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31ec24
     * @note[short] MacOS (Intel): 0x399260
     * @note[short] Windows: 0x4ca0f0
     * @note[short] iOS: 0x191e5c
     * @note[short] Android
     */
    void onLinks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31fdcc
     * @note[short] MacOS (Intel): 0x39a500
     * @note[short] Windows: 0x4c9d60
     * @note[short] iOS: 0x192b70
     * @note[short] Android
     */
    void onLowDetail(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31f590
     * @note[short] MacOS (Intel): 0x399d20
     * @note[short] Windows: 0x29e5e0
     * @note[short] iOS: 0x1924dc
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31fecc
     * @note[short] MacOS (Intel): 0x39a610
     * @note[short] Windows: 0x4c9880
     * @note[short] iOS: 0x192c40
     * @note[short] Android
     */
    void onRequestAccess(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320030
     * @note[short] MacOS (Intel): 0x39a760
     * @note[short] Windows: 0x335680
     * @note[short] iOS: 0x192d90
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31f5d8
     * @note[short] MacOS (Intel): 0x399d60
     * @note[short] Windows: 0x4c9380
     * @note[short] iOS: 0x192524
     * @note[short] Android
     */
    void onSFX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31f5b4
     * @note[short] MacOS (Intel): 0x399d40
     * @note[short] Windows: 0x29e600
     * @note[short] iOS: 0x192500
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3203f4
     * @note[short] MacOS (Intel): 0x39aaf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x193000
     * @note[short] Android
     */
    void sendSupportMail();
    UploadActionPopup* m_uploadPopup;
};
