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

class GJPFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJPFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPFollowCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x2ef3d0
     * @note[short] MacOS (Intel): 0x364770
     * @note[short] Windows: 0x28a6d0
     * @note[short] iOS: 0x15e9cc
     * @note[short] Android
     */
    static GJPFollowCommandLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2f13b4
     * @note[short] MacOS (Intel): 0x3668e0
     * @note[short] Windows: 0x28c0c0
     * @note[short] iOS: 0x160380
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2f1ec0
     * @note[short] MacOS (Intel): 0x3676e0
     * @note[short] Windows: 0x28cf20
     * @note[short] iOS: 0x160c6c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f192c
     * @note[short] MacOS (Intel): 0x366f90
     * @note[short] Windows: 0x28c650
     * @note[short] iOS: 0x160878
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2ef568
     * @note[short] MacOS (Intel): 0x3649b0
     * @note[short] Windows: 0x28a800
     * @note[short] iOS: 0x15eab8
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2f0cf4
     * @note[short] MacOS (Intel): 0x366230
     * @note[short] Windows: 0x28c5f0
     * @note[short] iOS: 0x15ffa8
     * @note[short] Android
     */
    void onUpdateGroupID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f09f8
     * @note[short] MacOS (Intel): 0x365f00
     * @note[short] Windows: 0x271d20
     * @note[short] iOS: 0x15fe28
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f0bec
     * @note[short] MacOS (Intel): 0x3660f0
     * @note[short] Windows: 0x28c450
     * @note[short] iOS: 0x15ff40
     * @note[short] Android
     */
    void sliderXModChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f0c70
     * @note[short] MacOS (Intel): 0x366190
     * @note[short] Windows: 0x28c480
     * @note[short] iOS: 0x15ff74
     * @note[short] Android
     */
    void sliderYModChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f175c
     * @note[short] MacOS (Intel): 0x366d70
     * @note[short] Windows: 0x272a00
     * @note[short] iOS: 0x1606c0
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (ARM): 0x2f0a88
     * @note[short] MacOS (Intel): 0x365fa0
     * @note[short] Windows: 0x271de0
     * @note[short] iOS: 0x15fe68
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x2f1e48
     * @note[short] MacOS (Intel): 0x367640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x160bfc
     * @note[short] Android
     */
    void updateMaxSpeed();

    /**
     * @note[short] MacOS (ARM): 0x2f1278
     * @note[short] MacOS (Intel): 0x3667b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1602d0
     * @note[short] Android
     */
    void updateMaxSpeedLabel();

    /**
     * @note[short] MacOS (ARM): 0x2f1148
     * @note[short] MacOS (Intel): 0x366670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x160218
     * @note[short] Android
     */
    void updateOffsetLabel();

    /**
     * @note[short] MacOS (ARM): 0x2f1dd8
     * @note[short] MacOS (Intel): 0x3675c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x160b94
     * @note[short] Android
     */
    void updatePlayerOffset();

    /**
     * @note[short] MacOS (ARM): 0x2f18ac
     * @note[short] MacOS (Intel): 0x366ef0
     * @note[short] Windows: 0x28cd50
     * @note[short] iOS: 0x1607f8
     * @note[short] Android
     */
    void updateTargetGroupID();

    /**
     * @note[short] MacOS (ARM): 0x2f0db0
     * @note[short] MacOS (Intel): 0x3662f0
     * @note[short] Windows: 0x28ccc0
     * @note[short] iOS: 0x160010
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x2f17cc
     * @note[short] MacOS (Intel): 0x366df0
     * @note[short] Windows: 0x28ce20
     * @note[short] iOS: 0x160728
     * @note[short] Android
     */
    void updateXMod();

    /**
     * @note[short] MacOS (ARM): 0x2f0ed0
     * @note[short] MacOS (Intel): 0x366410
     * @note[short] Windows: 0x28c4b0
     * @note[short] iOS: 0x1600b8
     * @note[short] Android
     */
    void updateXModLabel();

    /**
     * @note[short] MacOS (ARM): 0x2f183c
     * @note[short] MacOS (Intel): 0x366e70
     * @note[short] Windows: 0x28cea0
     * @note[short] iOS: 0x160790
     * @note[short] Android
     */
    void updateYMod();

    /**
     * @note[short] MacOS (ARM): 0x2f100c
     * @note[short] MacOS (Intel): 0x366540
     * @note[short] Windows: 0x28c550
     * @note[short] iOS: 0x160168
     * @note[short] Android
     */
    void updateYModLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    CCTextInputNode* m_speedInput;
    CCTextInputNode* m_delayInput;
    CCTextInputNode* m_offsetInput;
    CCTextInputNode* m_maxSpeedInput;
    Slider* m_speedSlider;
    Slider* m_delaySlider;
    float m_delay;
    float m_speed;
    int m_offset;
    float m_maxSpeed;
    CCTextInputNode* m_targetIDInput;
    int m_targetGroupID;
};
