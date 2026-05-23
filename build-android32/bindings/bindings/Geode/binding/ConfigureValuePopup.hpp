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

class ConfigureValuePopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureValuePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ConfigureValuePopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x547d5c
     * @note[short] MacOS (Intel): 0x624630
     * @note[short] Windows: 0x98460
     * @note[short] iOS: 0x14f86c
     * @note[short] Android: Rebinded
     */
    static ConfigureValuePopup* create(ConfigureValuePopupDelegate* delegate, float value, float minimum, float maximum, gd::string title, gd::string description, int type);

    /**
     * @note[short] MacOS (ARM): 0x548f24
     * @note[short] MacOS (Intel): 0x6258e0
     * @note[short] Windows: 0x995e0
     * @note[short] iOS: 0x150884
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x548da4
     * @note[short] MacOS (Intel): 0x625710
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x150710
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x548dc0
     * @note[short] MacOS (Intel): 0x625750
     * @note[short] Windows: 0x99350
     * @note[short] iOS: 0x15072c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x548bf8
     * @note[short] MacOS (Intel): 0x625580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x150590
     * @note[short] Android: Rebinded
     */
    void addInfoAlertButton(gd::string title, gd::string description);

    /**
     * @note[short] MacOS (ARM): 0x547f90
     * @note[short] MacOS (Intel): 0x6248b0
     * @note[short] Windows: 0x98640
     * @note[short] iOS: 0x14fa34
     * @note[short] Android: Rebinded
     */
    bool init(ConfigureValuePopupDelegate* delegate, float value, float minimum, float maximum, gd::string title, gd::string description, int type);

    /**
     * @note[short] MacOS (ARM): 0x548a48
     * @note[short] MacOS (Intel): 0x625400
     * @note[short] Windows: 0x990f0
     * @note[short] iOS: 0x150414
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x548984
     * @note[short] MacOS (Intel): 0x625330
     * @note[short] Windows: 0x99560
     * @note[short] iOS: 0x150350
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x548a04
     * @note[short] MacOS (Intel): 0x6253b0
     * @note[short] Windows: 0x990a0
     * @note[short] iOS: 0x1503d0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x548ab4
     * @note[short] MacOS (Intel): 0x625460
     * @note[short] Windows: 0x99160
     * @note[short] iOS: 0x150480
     * @note[short] Android
     */
    void updateTextInputLabel();
    int m_type;
    float m_value;
    float m_minimum;
    float m_maximum;
    bool m_enableDelegate;
    bool m_disableTextDelegate;
    ConfigureValuePopupDelegate* m_delegate;
    CCTextInputNode* m_input;
    Slider* m_slider;
};
