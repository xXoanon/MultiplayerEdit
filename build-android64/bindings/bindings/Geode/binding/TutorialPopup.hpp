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

class TutorialPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x500248
     * @note[short] MacOS (Intel): 0x5d41d0
     * @note[short] Android: Rebinded
     */
    static TutorialPopup* create(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x500630
     * @note[short] MacOS (Intel): 0x5d45e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x50070c
     * @note[short] MacOS (Intel): 0x5d46b0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x500768
     * @note[short] MacOS (Intel): 0x5d4700
     * @note[short] Android
     */
    void animateMenu();

    /**
     * @note[short] MacOS (ARM): 0x5005c4
     * @note[short] MacOS (Intel): 0x5d4580
     * @note[short] Android
     */
    void closeTutorial(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5003c8
     * @note[short] MacOS (Intel): 0x5d4380
     * @note[short] Android: Rebinded
     */
    bool init(gd::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5007d8
     * @note[short] MacOS (Intel): 0x5d4770
     * @note[short] Android
     */
    void registerForCallback(cocos2d::SEL_MenuHandler selector, cocos2d::CCNode* target);
    gd::string m_currentSprite;
    bool m_callbackRegistered;
    cocos2d::SEL_MenuHandler m_callbackSelector;
    cocos2d::CCNode* m_targetNode;
    CCMenuItemSpriteExtra* m_closeButton;
};
