#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"

class ConfigureHSVWidget : public cocos2d::CCNode, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureHSVWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ConfigureHSVWidget, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x3a21ec
     * @note[short] MacOS (Intel): 0x42fa40
     * @note[short] Windows: 0x96a10
     * @note[short] iOS: 0xfefc0
     * @note[short] Android
     */
    static ConfigureHSVWidget* create(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs);

    /**
     * @note[short] MacOS (ARM): 0x3a3bc0
     * @note[short] MacOS (Intel): 0x431590
     * @note[short] Windows: 0x98160
     * @note[short] iOS: 0x1003dc
     * @note[short] Android
     */
    static cocos2d::ccHSVValue getHSV(GameObject* object, cocos2d::CCArray* objects, int mode);

    /**
     * @note[short] MacOS (ARM): 0x3a3964
     * @note[short] MacOS (Intel): 0x4312c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10021c
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3a396c
     * @note[short] MacOS (Intel): 0x4312e0
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x100224
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3a3988
     * @note[short] MacOS (Intel): 0x431320
     * @note[short] Windows: 0x97620
     * @note[short] iOS: 0x100240
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3a2e68
     * @note[short] MacOS (Intel): 0x430780
     * @note[short] Windows: 0x973c0
     * @note[short] iOS: 0xff904
     * @note[short] Android
     */
    void createTextInputNode(cocos2d::CCPoint position, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3a253c
     * @note[short] MacOS (Intel): 0x42fdf0
     * @note[short] Windows: 0x96ae0
     * @note[short] iOS: 0xff0e8
     * @note[short] Android
     */
    bool init(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs);

    /**
     * @note[short] MacOS (ARM): 0x3a22c0
     * @note[short] MacOS (Intel): 0x42fb10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onClose();

    /**
     * @note[short] MacOS (ARM): 0x3a32f4
     * @note[short] MacOS (Intel): 0x430ba0
     * @note[short] Windows: 0x97bd0
     * @note[short] iOS: 0xffd50
     * @note[short] Android
     */
    void onResetHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a320c
     * @note[short] MacOS (Intel): 0x430ac0
     * @note[short] Windows: 0x97ad0
     * @note[short] iOS: 0xffc68
     * @note[short] Android
     */
    void onToggleSConst(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a3280
     * @note[short] MacOS (Intel): 0x430b30
     * @note[short] Windows: 0x97b50
     * @note[short] iOS: 0xffcdc
     * @note[short] Android
     */
    void onToggleVConst(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a30c4
     * @note[short] MacOS (Intel): 0x4309b0
     * @note[short] Windows: 0x979b0
     * @note[short] iOS: 0xffb3c
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a336c
     * @note[short] MacOS (Intel): 0x430c20
     * @note[short] Windows: 0x97c50
     * @note[short] iOS: 0xffdc8
     * @note[short] Android
     */
    void updateLabels();

    /**
     * @note[short] MacOS (ARM): 0x3a38a8
     * @note[short] MacOS (Intel): 0x4311e0
     * @note[short] Windows: 0x978e0
     * @note[short] iOS: 0x100160
     * @note[short] Android
     */
    void updateSliders();
    cocos2d::CCLabelBMFont* m_hueLabel;
    cocos2d::CCLabelBMFont* m_saturationLabel;
    cocos2d::CCLabelBMFont* m_brightnessLabel;
    Slider* m_hueSlider;
    Slider* m_saturationSlider;
    Slider* m_brightnessSlider;
    cocos2d::ccHSVValue m_hsv;
    bool m_mixed;
    HSVWidgetDelegate* m_delegate;
    bool m_addInputs;
    bool m_updating;
    cocos2d::CCDictionary* m_inputs;
};
