#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SliderThumb.hpp"

class SliderTouchLogic : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "SliderTouchLogic";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderTouchLogic, cocos2d::CCMenu)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SliderTouchLogic();

    /**
     * @note[short] MacOS (ARM): 0x294650
     * @note[short] MacOS (Intel): 0x303ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eef60
     * @note[short] Android
     */
    static SliderTouchLogic* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x294ad8
     * @note[short] MacOS (Intel): 0x303f70
     * @note[short] Windows: 0x714e0
     * @note[short] iOS: 0x2ef190
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x294cec
     * @note[short] MacOS (Intel): 0x3041a0
     * @note[short] Windows: 0x715d0
     * @note[short] iOS: 0x2ef288
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x294c3c
     * @note[short] MacOS (Intel): 0x3040e0
     * @note[short] Windows: 0x71590
     * @note[short] iOS: 0x2ef238
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x294f74
     * @note[short] MacOS (Intel): 0x304490
     * @note[short] Windows: 0x71700
     * @note[short] iOS: 0x2ef3ec
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x29479c
     * @note[short] MacOS (Intel): 0x303c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef0a4
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x294918
     * @note[short] MacOS (Intel): 0x303d90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (ARM): 0x294a04
     * @note[short] MacOS (Intel): 0x303e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setRotated(bool rotated);
    float m_unknownUnused;
    float m_length;
    SliderThumb* m_thumb;
    Slider* m_slider;
    bool m_activateThumb;
    cocos2d::CCPoint m_position;
    bool m_rotated;
};
