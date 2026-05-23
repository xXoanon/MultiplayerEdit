#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCountdown : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCCountdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCountdown, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x6cb4e4
     * @note[short] MacOS (Intel): 0x7c64c0
     * @note[short] Android
     */
    static CCCountdown* create();

    /**
     * @note[short] MacOS (ARM): 0x6cb588
     * @note[short] MacOS (Intel): 0x7c6560
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6cb93c
     * @note[short] MacOS (Intel): 0x7c6920
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x6cb814
     * @note[short] MacOS (Intel): 0x7c6810
     * @note[short] Android
     */
    void lapFinished();

    /**
     * @note[short] MacOS (ARM): 0x6cb7a8
     * @note[short] MacOS (Intel): 0x7c6790
     * @note[short] Android
     */
    void startTimerWithSeconds(float seconds, cocos2d::SEL_CallFunc selector, cocos2d::CCNode* target);
    cocos2d::CCProgressTimer* m_progressTimer;
    float m_unk260;
    int m_seconds;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    cocos2d::SEL_CallFunc m_callbackSelector;
    cocos2d::CCNode* m_targetNode;
};
