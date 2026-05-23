#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorAction : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "ColorAction";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorAction, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x174d8
     * @note[short] Android: Out of line
     */
     ColorAction();

    /**
     * @note[short] MacOS (ARM): 0x273b18
     * @note[short] MacOS (Intel): 0x2d9500
     * @note[short] Windows: 0x258ea0
     * @note[short] iOS: 0xd468
     * @note[short] Android
     */
    static ColorAction* create();

    /**
     * @note[short] MacOS (ARM): 0x273cc8
     * @note[short] MacOS (Intel): 0x2d9700
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B color, bool blending, int playerColor);

    /**
     * @note[short] MacOS (ARM): 0x273d90
     * @note[short] MacOS (Intel): 0x2d97f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending);

    /**
     * @note[short] MacOS (ARM): 0x273bd8
     * @note[short] MacOS (Intel): 0x2d95e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd488
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity);

    /**
     * @note[short] MacOS (ARM): 0x2768a8
     * @note[short] MacOS (Intel): 0x2dc130
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ColorAction* getCopy();

    /**
     * @note[short] MacOS (ARM): 0x273e70
     * @note[short] MacOS (Intel): 0x2d98f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity);

    /**
     * @note[short] MacOS (ARM): 0x273fac
     * @note[short] MacOS (Intel): 0x2d9a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd634
     * @note[short] Android
     */
    bool isInUse();

    /**
     * @note[short] MacOS (ARM): 0x2740d0
     * @note[short] MacOS (Intel): 0x2d9b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd718
     * @note[short] Android
     */
    void loadFromState(CAState& state);

    /**
     * @note[short] MacOS (ARM): 0x273fa0
     * @note[short] MacOS (Intel): 0x2d9a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd628
     * @note[short] Android
     */
    void resetAction();

    /**
     * @note[short] MacOS (ARM): 0x274044
     * @note[short] MacOS (Intel): 0x2d9ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd68c
     * @note[short] Android
     */
    void saveToState(CAState& state);

    /**
     * @note[short] MacOS (ARM): 0x275f30
     * @note[short] MacOS (Intel): 0x2dba40
     * @note[short] Windows: 0x259b60
     * @note[short] iOS: 0xdf28
     * @note[short] Android: Rebinded
     */
    void setupFromMap(gd::map<gd::string, gd::string>& setup);

    /**
     * @note[short] MacOS (ARM): 0x275eb4
     * @note[short] MacOS (Intel): 0x2db9d0
     * @note[short] Windows: 0x259a80
     * @note[short] iOS: 0xdeac
     * @note[short] Android: Rebinded
     */
    void setupFromString(gd::string setup);

    /**
     * @note[short] MacOS (ARM): 0x273ea0
     * @note[short] MacOS (Intel): 0x2d9930
     * @note[short] Windows: 0x258f90
     * @note[short] iOS: 0xd534
     * @note[short] Android
     */
    void step(float dt);

    /**
     * @note[short] MacOS (ARM): 0x27401c
     * @note[short] MacOS (Intel): 0x2d9ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateCustomColor(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2);
    bool m_stepFinished;
    bool m_paused;
    cocos2d::ccColor3B m_color;
    float m_currentOpacity;
    float m_deltaTime;
    cocos2d::ccColor3B m_fromColor;
    cocos2d::ccColor3B m_toColor;
    float m_duration;
    bool m_blending;
    int m_playerColor;
    int m_colorID;
    float m_fromOpacity;
    float m_toOpacity;
    cocos2d::ccHSVValue m_copyHSV;
    int m_copyID;
    bool m_copyColorCalculated;
    bool m_copyOpacity;
    bool m_copyColorLoop;
    int m_uniqueID;
    int m_controlID;
    bool m_legacyHSV;
    ColorActionSprite* m_colorSprite;
    InheritanceNode* m_inheritanceNode;
    float m_actionDelay;
    float m_stepInterval;
};
