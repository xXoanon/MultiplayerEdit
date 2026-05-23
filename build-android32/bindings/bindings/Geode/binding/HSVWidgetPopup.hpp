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

class HSVWidgetPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "HSVWidgetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVWidgetPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x3a1ca0
     * @note[short] MacOS (Intel): 0x42f470
     * @note[short] Windows: 0x964d0
     * @note[short] iOS: 0xfeb28
     * @note[short] Android: Rebinded
     */
    static HSVWidgetPopup* create(cocos2d::ccHSVValue hsv, HSVWidgetDelegate* delegate, gd::string title);

    /**
     * @note[short] MacOS (ARM): 0x3a2310
     * @note[short] MacOS (Intel): 0x42fb70
     * @note[short] Windows: 0x96a00
     * @note[short] iOS: 0xff080
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3a1e18
     * @note[short] MacOS (Intel): 0x42f620
     * @note[short] Windows: 0x965f0
     * @note[short] iOS: 0xfec5c
     * @note[short] Android: Rebinded
     */
    bool init(cocos2d::ccHSVValue hsv, HSVWidgetDelegate* delegate, gd::string title);

    /**
     * @note[short] MacOS (ARM): 0x3a2140
     * @note[short] MacOS (Intel): 0x42f980
     * @note[short] Windows: 0x96920
     * @note[short] iOS: 0xfef14
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    ConfigureHSVWidget* m_widget;
    HSVWidgetDelegate* m_delegate;
};
