#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupItemCompareTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemCompareTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemCompareTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4cce40
     * @note[short] MacOS (Intel): 0x5808c0
     * @note[short] Windows: 0x46d280
     * @note[short] iOS: 0x40d620
     * @note[short] Android
     */
    static SetupItemCompareTriggerPopup* create(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4cef5c
     * @note[short] MacOS (Intel): 0x582cb0
     * @note[short] Windows: 0x46f550
     * @note[short] iOS: 0x40f0a4
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4cee04
     * @note[short] MacOS (Intel): 0x582b50
     * @note[short] Windows: 0x46ea40
     * @note[short] iOS: 0x40ef5c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ccfcc
     * @note[short] MacOS (Intel): 0x580b00
     * @note[short] Windows: 0x46d3a0
     * @note[short] iOS: 0x40d6fc
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4ce0a8
     * @note[short] MacOS (Intel): 0x581ee0
     * @note[short] Windows: 0x46e670
     * @note[short] iOS: 0x40e668
     * @note[short] Android
     */
    void onOpButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ce3ec
     * @note[short] MacOS (Intel): 0x582200
     * @note[short] Windows: 0x46ec40
     * @note[short] iOS: 0x40e840
     * @note[short] Android
     */
    void updateFormulaLabel();

    /**
     * @note[short] MacOS (ARM): 0x4ce164
     * @note[short] MacOS (Intel): 0x581fa0
     * @note[short] Windows: 0x46e750
     * @note[short] iOS: 0x40e724
     * @note[short] Android
     */
    void updateOpButton(CCMenuItemSpriteExtra* button, int key, int objectID);
    cocos2d::CCLabelBMFont* m_formulaLabel;
};
