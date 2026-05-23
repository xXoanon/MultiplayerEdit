#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCounterLabel : public cocos2d::CCLabelBMFont {
public:
    static constexpr auto CLASS_NAME = "CCCounterLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCounterLabel, cocos2d::CCLabelBMFont)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCCounterLabel();

    /**
     * @note[short] MacOS (ARM): 0x46813c
     * @note[short] MacOS (Intel): 0x5115e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3aa20
     * @note[short] Android
     */
    static CCCounterLabel* create(int count, char const* font, FormatterType type);

    /**
     * @note[short] MacOS (ARM): 0x468434
     * @note[short] MacOS (Intel): 0x511910
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void calculateStepSize(int steps);

    /**
     * @note[short] MacOS (ARM): 0x4683a0
     * @note[short] MacOS (Intel): 0x511860
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void disableCounter();

    /**
     * @note[short] MacOS (ARM): 0x4682e4
     * @note[short] MacOS (Intel): 0x5117a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void enableCounter();

    /**
     * @note[short] MacOS (ARM): 0x4682d8
     * @note[short] MacOS (Intel): 0x511780
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fastUpdateCounter();

    /**
     * @note[short] MacOS (ARM): 0x468470
     * @note[short] MacOS (Intel): 0x511960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getTargetCount();

    /**
     * @note[short] MacOS (ARM): 0x468250
     * @note[short] MacOS (Intel): 0x511700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3aae8
     * @note[short] Android
     */
    bool init(int count, char const* font, FormatterType type);

    /**
     * @note[short] MacOS (ARM): 0x4683c0
     * @note[short] MacOS (Intel): 0x511890
     * @note[short] Windows: 0x431a0
     * @note[short] iOS: 0x3abe4
     * @note[short] Android
     */
    void setTargetCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x46831c
     * @note[short] MacOS (Intel): 0x5117e0
     * @note[short] Windows: 0x43230
     * @note[short] iOS: 0x3ab70
     * @note[short] Android
     */
    void updateCounter(float dt);

    /**
     * @note[short] MacOS (ARM): 0x468478
     * @note[short] MacOS (Intel): 0x511970
     * @note[short] Windows: 0x432b0
     * @note[short] iOS: 0x3ac54
     * @note[short] Android
     */
    void updateString();
    int m_stepSize;
    int m_targetCount;
    int m_currentCount;
    bool m_counterEnabled;
    int m_stepCount;
    bool m_dontSchedule;
    FormatterType m_formatterType;
};
