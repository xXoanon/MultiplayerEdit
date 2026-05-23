#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SliderTouchLogic.hpp"

class Slider : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "Slider";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Slider, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x294fac
     * @note[short] MacOS (Intel): 0x3044d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef424
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] MacOS (ARM): 0x2950b0
     * @note[short] MacOS (Intel): 0x3045f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef44c
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float scale);

    /**
     * @note[short] MacOS (ARM): 0x2951c4
     * @note[short] MacOS (Intel): 0x304710
     * @note[short] Windows: 0x71750
     * @note[short] iOS: 0x2ef470
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x295858
     * @note[short] MacOS (Intel): 0x304e50
     * @note[short] Windows: 0x71d40
     * @note[short] iOS: 0x2ef904
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x295898
     * @note[short] MacOS (Intel): 0x304ed0
     * @note[short] Windows: 0x71d80
     * @note[short] iOS: 0x2ef944
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x295878
     * @note[short] MacOS (Intel): 0x304e90
     * @note[short] Windows: 0x71d60
     * @note[short] iOS: 0x2ef924
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x295480
     * @note[short] MacOS (Intel): 0x3049e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef72c
     * @note[short] Android
     */
    void disableSlider();

    /**
     * @note[short] MacOS (ARM): 0x295784
     * @note[short] MacOS (Intel): 0x304d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef8bc
     * @note[short] Android
     */
    void disableTouch();

    /**
     * @note[short] MacOS (ARM): 0x2956dc
     * @note[short] MacOS (Intel): 0x304c70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef818
     * @note[short] Android
     */
    void enableSlider();

    /**
     * @note[short] MacOS (ARM): 0x295840
     * @note[short] MacOS (Intel): 0x304e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef8f8
     * @note[short] Android
     */
    bool getLiveDragging();

    /**
     * @note[short] MacOS (ARM): 0x295798
     * @note[short] MacOS (Intel): 0x304d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef8d0
     * @note[short] Android
     */
    SliderThumb* getThumb();

    /**
     * @note[short] MacOS (ARM): 0x2957a4
     * @note[short] MacOS (Intel): 0x304d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef8dc
     * @note[short] Android
     */
    float getValue();

    /**
     * @note[short] MacOS (ARM): 0x295aa4
     * @note[short] MacOS (Intel): 0x305120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef9fc
     * @note[short] Android
     */
    void hideGroove(bool visibility);

    /**
     * @note[short] MacOS (ARM): 0x2952d4
     * @note[short] MacOS (Intel): 0x304830
     * @note[short] Windows: 0x71880
     * @note[short] iOS: 0x2ef580
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x295830
     * @note[short] MacOS (Intel): 0x304df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef8e8
     * @note[short] Android
     */
    void setBarVisibility(bool visibility);

    /**
     * @note[short] MacOS (ARM): 0x29584c
     * @note[short] MacOS (Intel): 0x304e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLiveDragging(bool activateThumb);

    /**
     * @note[short] MacOS (ARM): 0x2959b8
     * @note[short] MacOS (Intel): 0x305020
     * @note[short] Windows: 0x71e40
     * @note[short] iOS: 0x2ef9b4
     * @note[short] Android
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (ARM): 0x2958b8
     * @note[short] MacOS (Intel): 0x304f10
     * @note[short] Windows: 0x71da0
     * @note[short] iOS: 0x2ef964
     * @note[short] Android
     */
    void setRotated(bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x2955f4
     * @note[short] MacOS (Intel): 0x304b70
     * @note[short] Windows: 0x71c30
     * @note[short] iOS: 0x2ef7ec
     * @note[short] Android
     */
    void setValue(float val);

    /**
     * @note[short] MacOS (ARM): 0x294b78
     * @note[short] MacOS (Intel): 0x304010
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sliderBegan();

    /**
     * @note[short] MacOS (ARM): 0x294c84
     * @note[short] MacOS (Intel): 0x304130
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sliderEnded();

    /**
     * @note[short] MacOS (ARM): 0x294e90
     * @note[short] MacOS (Intel): 0x304380
     * @note[short] Windows: 0x71cc0
     * @note[short] iOS: 0x2ef378
     * @note[short] Android
     */
    void updateBar();
    SliderTouchLogic* m_touchLogic;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_groove;
    float m_width;
    float m_height;
    SliderDelegate* m_delegate;
    bool m_enabled;
};
