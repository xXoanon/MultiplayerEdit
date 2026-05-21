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
#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class SetupSmartTemplateLayer : public FLAlertLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SetupSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x442394
     * @note[short] MacOS (Intel): 0x4e7a00
     * @note[short] Windows: 0x458a80
     * @note[short] iOS: 0x70538
     * @note[short] Android
     */
    static SetupSmartTemplateLayer* create(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x443410
     * @note[short] MacOS (Intel): 0x4e8ab0
     * @note[short] Windows: 0x459ce0
     * @note[short] iOS: 0x71380
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4430b4
     * @note[short] MacOS (Intel): 0x4e87b0
     * @note[short] Windows: 0x459740
     * @note[short] iOS: 0x710a0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x443304
     * @note[short] MacOS (Intel): 0x4e89d0
     * @note[short] Windows: 0x459a80
     * @note[short] iOS: 0x71224
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x443198
     * @note[short] MacOS (Intel): 0x4e8890
     * @note[short] Windows: 0x459820
     * @note[short] iOS: 0x71104
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4433f0
     * @note[short] MacOS (Intel): 0x4e8a90
     * @note[short] Windows: 0xc3e30
     * @note[short] iOS: 0x71360
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4424ac
     * @note[short] MacOS (Intel): 0x4e7b60
     * @note[short] Windows: 0x458b90
     * @note[short] iOS: 0x70604
     * @note[short] Android
     */
    bool init(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x442d84
     * @note[short] MacOS (Intel): 0x4e8440
     * @note[short] Windows: 0x459be0
     * @note[short] iOS: 0x70de0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x442dac
     * @note[short] MacOS (Intel): 0x4e8470
     * @note[short] Windows: 0x459580
     * @note[short] iOS: 0x70e08
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x442fe4
     * @note[short] MacOS (Intel): 0x4e86e0
     * @note[short] Windows: 0x459c10
     * @note[short] iOS: 0x70fd0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    GJSmartTemplate* m_smartTemplate;
    CCTextInputNode* m_nameInput;
    cocos2d::CCNode* m_unk298;
};
