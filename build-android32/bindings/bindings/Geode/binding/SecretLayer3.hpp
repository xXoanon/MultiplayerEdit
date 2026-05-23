#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class SecretLayer3 : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer3";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer3, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer3();

    /**
     * @note[short] MacOS (ARM): 0x406eb4
     * @note[short] MacOS (Intel): 0x4a3250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30dc24
     * @note[short] Android: Rebinded
     */
     ~SecretLayer3();

    /**
     * @note[short] MacOS (ARM): 0x4070b0
     * @note[short] MacOS (Intel): 0x4a3530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30dcc0
     * @note[short] Android
     */
    static SecretLayer3* create();

    /**
     * @note[short] MacOS (ARM): 0x404920
     * @note[short] MacOS (Intel): 0x4a0d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30c53c
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x407168
     * @note[short] MacOS (Intel): 0x4a3600
     * @note[short] Windows: 0x3e9e90
     * @note[short] iOS: 0x30dd6c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x40bb8c
     * @note[short] MacOS (Intel): 0x4a8480
     * @note[short] Windows: 0x3ef7a0
     * @note[short] iOS: 0x311880
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x40bb80
     * @note[short] MacOS (Intel): 0x4a8450
     * @note[short] Windows: 0x3ef790
     * @note[short] iOS: 0x311874
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x40b848
     * @note[short] MacOS (Intel): 0x4a8130
     * @note[short] Windows: 0x3ef190
     * @note[short] iOS: 0x311618
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4087e8
     * @note[short] MacOS (Intel): 0x4a4ca0
     * @note[short] Windows: 0x3eb7f0
     * @note[short] iOS: 0x30efdc
     * @note[short] Android
     */
    void animateEyes();

    /**
     * @note[short] MacOS (ARM): 0x409924
     * @note[short] MacOS (Intel): 0x4a6000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30fde4
     * @note[short] Android
     */
    void firstInteractionStep1();

    /**
     * @note[short] MacOS (ARM): 0x4099e0
     * @note[short] MacOS (Intel): 0x4a60c0
     * @note[short] Windows: 0x3eb910
     * @note[short] iOS: 0x30fea0
     * @note[short] Android
     */
    void firstInteractionStep2();

    /**
     * @note[short] MacOS (ARM): 0x409db8
     * @note[short] MacOS (Intel): 0x4a64e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x31018c
     * @note[short] Android
     */
    void firstInteractionStep3();

    /**
     * @note[short] MacOS (ARM): 0x409f28
     * @note[short] MacOS (Intel): 0x4a6650
     * @note[short] Windows: 0x3ebe90
     * @note[short] iOS: 0x3102f4
     * @note[short] Android
     */
    void firstInteractionStep4();

    /**
     * @note[short] MacOS (ARM): 0x4097d4
     * @note[short] MacOS (Intel): 0x4a5ec0
     * @note[short] Windows: 0x3ef620
     * @note[short] iOS: 0x30fd60
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4095fc
     * @note[short] MacOS (Intel): 0x4a5d20
     * @note[short] Windows: 0x3eb4f0
     * @note[short] iOS: 0x30fb88
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4096e8
     * @note[short] MacOS (Intel): 0x4a5df0
     * @note[short] Windows: 0x3eb670
     * @note[short] iOS: 0x30fc74
     * @note[short] Android
     */
    void onChest02(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4088dc
     * @note[short] MacOS (Intel): 0x4a4d90
     * @note[short] Windows: 0x3ec400
     * @note[short] iOS: 0x30f0c4
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x40a2ec
     * @note[short] MacOS (Intel): 0x4a6a20
     * @note[short] Windows: 0x3edc20
     * @note[short] iOS: 0x3105dc
     * @note[short] Android
     */
    void revealStep1();

    /**
     * @note[short] MacOS (ARM): 0x40a8c0
     * @note[short] MacOS (Intel): 0x4a7030
     * @note[short] Windows: 0x3ede10
     * @note[short] iOS: 0x310ac8
     * @note[short] Android
     */
    void revealStep2();

    /**
     * @note[short] MacOS (ARM): 0x40abc8
     * @note[short] MacOS (Intel): 0x4a7350
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x310d18
     * @note[short] Android
     */
    void revealStep3();

    /**
     * @note[short] MacOS (ARM): 0x40ac64
     * @note[short] MacOS (Intel): 0x4a73f0
     * @note[short] Windows: 0x3ee2a0
     * @note[short] iOS: 0x310db4
     * @note[short] Android
     */
    void revealStep4();

    /**
     * @note[short] MacOS (ARM): 0x40b390
     * @note[short] MacOS (Intel): 0x4a7c00
     * @note[short] Windows: 0x3eeaf0
     * @note[short] iOS: 0x311298
     * @note[short] Android
     */
    void revealStep5();

    /**
     * @note[short] MacOS (ARM): 0x40a354
     * @note[short] MacOS (Intel): 0x4a6a80
     * @note[short] Windows: 0x3ed710
     * @note[short] iOS: 0x310644
     * @note[short] Android
     */
    void showUnlockDialog();
    DungeonBarsSprite* m_dungeonBars;
    bool m_lockInput;
    cocos2d::CCArray* m_locksArray;
    cocos2d::CCSprite* m_demonEyes;
    cocos2d::CCSprite* m_demonBody;
    CCMenuItemSpriteExtra* m_secretChest;
};
