#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SliderThumb : public cocos2d::CCMenuItemImage {
public:
    static constexpr auto CLASS_NAME = "SliderThumb";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderThumb, cocos2d::CCMenuItemImage)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SliderThumb();

    /**
     * @note[short] MacOS (ARM): 0x294200
     * @note[short] MacOS (Intel): 0x303620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eec10
     * @note[short] Android
     */
    static SliderThumb* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* normalFrame, char const* selectedFrame);

    /**
     * @note[short] MacOS (ARM): 0x2943f0
     * @note[short] MacOS (Intel): 0x303820
     * @note[short] Windows: 0x712e0
     * @note[short] iOS: 0x2eed60
     * @note[short] Android
     */
    float getValue();

    /**
     * @note[short] MacOS (ARM): 0x2942f8
     * @note[short] MacOS (Intel): 0x303710
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* normalFrame, char const* selectedFrame);

    /**
     * @note[short] MacOS (ARM): 0x294584
     * @note[short] MacOS (Intel): 0x3039f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eeef4
     * @note[short] Android
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (ARM): 0x294324
     * @note[short] MacOS (Intel): 0x303750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eecf4
     * @note[short] Android
     */
    void setRotated(bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x294474
     * @note[short] MacOS (Intel): 0x3038b0
     * @note[short] Windows: 0x71370
     * @note[short] iOS: 0x2eede4
     * @note[short] Android
     */
    void setValue(float value);
    float m_length;
    bool m_vertical;
};
