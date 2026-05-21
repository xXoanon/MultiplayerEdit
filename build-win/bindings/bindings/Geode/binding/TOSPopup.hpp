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

class TOSPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TOSPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TOSPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TOSPopup();

    /**
     * @note[short] MacOS (ARM): 0x24ded4
     * @note[short] MacOS (Intel): 0x2afd40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e067c
     * @note[short] Android
     */
    static TOSPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x24dfc4
     * @note[short] MacOS (Intel): 0x2afe70
     * @note[short] Windows: 0x29df90
     * @note[short] iOS: 0x2e0724
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x24e610
     * @note[short] MacOS (Intel): 0x2b04f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e0d34
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x24e574
     * @note[short] MacOS (Intel): 0x2b0460
     * @note[short] Windows: 0x29e620
     * @note[short] iOS: 0x2e0c98
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24e5ec
     * @note[short] MacOS (Intel): 0x2b04d0
     * @note[short] Windows: 0x29e5e0
     * @note[short] iOS: 0x2e0d10
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24e5c8
     * @note[short] MacOS (Intel): 0x2b04b0
     * @note[short] Windows: 0x29e600
     * @note[short] iOS: 0x2e0cec
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);
};
