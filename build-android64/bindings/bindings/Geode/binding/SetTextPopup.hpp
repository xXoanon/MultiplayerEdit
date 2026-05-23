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

class SetTextPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetTextPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTextPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x28dca0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetTextPopup();

    /**
     * @note[short] MacOS (ARM): 0x24caf0
     * @note[short] MacOS (Intel): 0x2ae7b0
     * @note[short] Windows: 0x29cd80
     * @note[short] iOS: 0x2df700
     * @note[short] Android: Rebinded
     */
     ~SetTextPopup();

    /**
     * @note[short] MacOS (ARM): 0x24c738
     * @note[short] MacOS (Intel): 0x2ae370
     * @note[short] Windows: 0x29ce30
     * @note[short] iOS: 0x2df3e0
     * @note[short] Android: Rebinded
     */
    static SetTextPopup* create(gd::string value, gd::string placeholder, int maxLength, gd::string title, gd::string okBtnText, bool showResetBtn, float offset);

    /**
     * @note[short] MacOS (ARM): 0x24d904
     * @note[short] MacOS (Intel): 0x2af6e0
     * @note[short] Windows: 0x29daf0
     * @note[short] iOS: 0x2e00f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x24d8b8
     * @note[short] MacOS (Intel): 0x2af680
     * @note[short] Windows: 0x8baf0
     * @note[short] iOS: 0x2e00a8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x24d77c
     * @note[short] MacOS (Intel): 0x2af560
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x2e0004
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x24d798
     * @note[short] MacOS (Intel): 0x2af5a0
     * @note[short] Windows: 0x29d8e0
     * @note[short] iOS: 0x2e0020
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x24cde0
     * @note[short] MacOS (Intel): 0x2aeb60
     * @note[short] Windows: 0x29cfa0
     * @note[short] iOS: 0x2df7b8
     * @note[short] Android: Rebinded
     */
    bool init(gd::string value, gd::string placeholder, int maxLength, gd::string title, gd::string okBtnText, bool showResetBtn, float offset);

    /**
     * @note[short] MacOS (ARM): 0x24d6c0
     * @note[short] MacOS (Intel): 0x2af4a0
     * @note[short] Windows: 0x29d9d0
     * @note[short] iOS: 0x2dff5c
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24d50c
     * @note[short] MacOS (Intel): 0x2af310
     * @note[short] Windows: 0x29da60
     * @note[short] iOS: 0x2dfe44
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24d5f4
     * @note[short] MacOS (Intel): 0x2af3f0
     * @note[short] Windows: 0x29d880
     * @note[short] iOS: 0x2dff2c
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24d6cc
     * @note[short] MacOS (Intel): 0x2af4c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2dff68
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_input;
    bool m_disableDelegate;
    bool m_cancelled;
    gd::string m_value;
    SetTextPopupDelegate* m_delegate;
};
