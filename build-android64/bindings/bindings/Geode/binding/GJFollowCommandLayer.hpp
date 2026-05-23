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

class GJFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJFollowCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x26fcf4
     * @note[short] MacOS (Intel): 0x2d5080
     * @note[short] Windows: 0x2705e0
     * @note[short] iOS: 0x136244
     * @note[short] Android
     */
    static GJFollowCommandLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x27178c
     * @note[short] MacOS (Intel): 0x2d6ce0
     * @note[short] Windows: 0x271a10
     * @note[short] iOS: 0x137720
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2720fc
     * @note[short] MacOS (Intel): 0x2d7950
     * @note[short] Windows: 0x272a80
     * @note[short] iOS: 0x137ecc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x271ce4
     * @note[short] MacOS (Intel): 0x2d73a0
     * @note[short] Windows: 0x272130
     * @note[short] iOS: 0x137c0c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x26fe84
     * @note[short] MacOS (Intel): 0x2d52c0
     * @note[short] Windows: 0x270710
     * @note[short] iOS: 0x136324
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x271170
     * @note[short] MacOS (Intel): 0x2d66d0
     * @note[short] Windows: 0x272070
     * @note[short] iOS: 0x1373ac
     * @note[short] Android
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x27122c
     * @note[short] MacOS (Intel): 0x2d6790
     * @note[short] Windows: 0x2720d0
     * @note[short] iOS: 0x137414
     * @note[short] Android
     */
    void onUpdateGroupID2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x270e5c
     * @note[short] MacOS (Intel): 0x2d6380
     * @note[short] Windows: 0x271d20
     * @note[short] iOS: 0x137214
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x271050
     * @note[short] MacOS (Intel): 0x2d6570
     * @note[short] Windows: 0x271eb0
     * @note[short] iOS: 0x13732c
     * @note[short] Android
     */
    void sliderXModChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2710e0
     * @note[short] MacOS (Intel): 0x2d6620
     * @note[short] Windows: 0x271ef0
     * @note[short] iOS: 0x13736c
     * @note[short] Android
     */
    void sliderYModChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x271a94
     * @note[short] MacOS (Intel): 0x2d70e0
     * @note[short] Windows: 0x272a00
     * @note[short] iOS: 0x1379d4
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (ARM): 0x270eec
     * @note[short] MacOS (Intel): 0x2d6420
     * @note[short] Windows: 0x271de0
     * @note[short] iOS: 0x137254
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x271be4
     * @note[short] MacOS (Intel): 0x2d7260
     * @note[short] Windows: 0x272760
     * @note[short] iOS: 0x137b0c
     * @note[short] Android
     */
    void updateTargetGroupID();

    /**
     * @note[short] MacOS (ARM): 0x271c64
     * @note[short] MacOS (Intel): 0x2d7300
     * @note[short] Windows: 0x272830
     * @note[short] iOS: 0x137b8c
     * @note[short] Android
     */
    void updateTargetGroupID2();

    /**
     * @note[short] MacOS (ARM): 0x2712d4
     * @note[short] MacOS (Intel): 0x2d6840
     * @note[short] Windows: 0x272640
     * @note[short] iOS: 0x137470
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x2713f4
     * @note[short] MacOS (Intel): 0x2d6960
     * @note[short] Windows: 0x2726d0
     * @note[short] iOS: 0x137518
     * @note[short] Android
     */
    void updateTextInputLabel2();

    /**
     * @note[short] MacOS (ARM): 0x271b04
     * @note[short] MacOS (Intel): 0x2d7160
     * @note[short] Windows: 0x272900
     * @note[short] iOS: 0x137a3c
     * @note[short] Android
     */
    void updateXMod();

    /**
     * @note[short] MacOS (ARM): 0x271514
     * @note[short] MacOS (Intel): 0x2d6a80
     * @note[short] Windows: 0x271f30
     * @note[short] iOS: 0x1375c0
     * @note[short] Android
     */
    void updateXModLabel();

    /**
     * @note[short] MacOS (ARM): 0x271b74
     * @note[short] MacOS (Intel): 0x2d71e0
     * @note[short] Windows: 0x272980
     * @note[short] iOS: 0x137aa4
     * @note[short] Android
     */
    void updateYMod();

    /**
     * @note[short] MacOS (ARM): 0x271650
     * @note[short] MacOS (Intel): 0x2d6bb0
     * @note[short] Windows: 0x271fd0
     * @note[short] iOS: 0x137670
     * @note[short] Android
     */
    void updateYModLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    CCTextInputNode* m_xModInput;
    CCTextInputNode* m_yModInput;
    Slider* m_xModSlider;
    Slider* m_yModSlider;
    float m_xMod;
    float m_yMod;
    CCTextInputNode* m_targetIDInput;
    int m_targetGroupID;
    CCTextInputNode* m_followIDInput;
    int m_followGroupID;
};
