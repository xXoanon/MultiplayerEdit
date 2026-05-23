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

class SetIDPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetIDPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x28ddb0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetIDPopup();

    /**
     * @note[short] MacOS (ARM): 0x249e60
     * @note[short] MacOS (Intel): 0x2ab520
     * @note[short] Windows: 0x29b170
     * @note[short] iOS: 0x2dda74
     * @note[short] Android: Rebinded
     */
     ~SetIDPopup();

    /**
     * @note[short] MacOS (ARM): 0x24a0a0
     * @note[short] MacOS (Intel): 0x2ab870
     * @note[short] Windows: 0x29b210
     * @note[short] iOS: 0x2ddb1c
     * @note[short] Android: Rebinded
     */
    static SetIDPopup* create(int current, int begin, int end, gd::string title, gd::string button, bool resetButton, int defaultValue, float offset, bool numberInput, bool arrows);

    /**
     * @note[short] MacOS (ARM): 0x24b01c
     * @note[short] MacOS (Intel): 0x2ac850
     * @note[short] Windows: 0x29c0f0
     * @note[short] iOS: 0x2de85c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x24af98
     * @note[short] MacOS (Intel): 0x2ac7d0
     * @note[short] Windows: 0x29bf20
     * @note[short] iOS: 0x2de7e0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x24ae48
     * @note[short] MacOS (Intel): 0x2ac670
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x2de724
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x24ae64
     * @note[short] MacOS (Intel): 0x2ac6b0
     * @note[short] Windows: 0x29bd70
     * @note[short] iOS: 0x2de740
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x24af94
     * @note[short] MacOS (Intel): 0x2ac7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2de7dc
     * @note[short] Android
     */
    virtual void valueChanged();

    /**
     * @note[short] MacOS (ARM): 0x24a2fc
     * @note[short] MacOS (Intel): 0x2abb10
     * @note[short] Windows: 0x29b340
     * @note[short] iOS: 0x2ddd10
     * @note[short] Android: Rebinded
     */
    bool init(int current, int begin, int end, gd::string title, gd::string button, bool resetButton, int defaultValue, float offset, bool numberInput, bool arrows);

    /**
     * @note[short] MacOS (ARM): 0x24ac78
     * @note[short] MacOS (Intel): 0x2ac490
     * @note[short] Windows: 0x29bfb0
     * @note[short] iOS: 0x2de65c
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24ab78
     * @note[short] MacOS (Intel): 0x2ac390
     * @note[short] Windows: 0x29c050
     * @note[short] iOS: 0x2de55c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24ac1c
     * @note[short] MacOS (Intel): 0x2ac440
     * @note[short] Windows: 0x29bd00
     * @note[short] iOS: 0x2de600
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24ac10
     * @note[short] MacOS (Intel): 0x2ac420
     * @note[short] Windows: 0x29bd50
     * @note[short] iOS: 0x2de5f4
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24ad18
     * @note[short] MacOS (Intel): 0x2ac530
     * @note[short] Windows: 0x29be70
     * @note[short] iOS: 0x2de668
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_inputNode;
    int m_value;
    bool m_disableDelegate;
    bool m_cancelled;
    int m_minimum;
    int m_maximum;
    int m_default;
    SetIDPopupDelegate* m_delegate;
};
