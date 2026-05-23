#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCircleWave : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCCircleWave";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCircleWave, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x13e638
     * @note[short] MacOS (Intel): 0x178460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16bff4
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn);

    /**
     * @note[short] MacOS (ARM): 0x13e640
     * @note[short] MacOS (Intel): 0x178470
     * @note[short] Windows: 0x42870
     * @note[short] iOS: 0x16bffc
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x13e914
     * @note[short] MacOS (Intel): 0x1787c0
     * @note[short] Windows: 0x42b60
     * @note[short] iOS: 0x16c254
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x13edb8
     * @note[short] MacOS (Intel): 0x178c70
     * @note[short] Windows: 0x42f70
     * @note[short] iOS: 0x16c5d4
     * @note[short] Android
     */
    virtual void removeMeAndCleanup();

    /**
     * @note[short] MacOS (ARM): 0x13ec74
     * @note[short] MacOS (Intel): 0x178b30
     * @note[short] Windows: 0x42e40
     * @note[short] iOS: 0x16c49c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x13ea24
     * @note[short] MacOS (Intel): 0x1788c0
     * @note[short] Windows: 0x42be0
     * @note[short] iOS: 0x16c364
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x13e8d8
     * @note[short] MacOS (Intel): 0x178760
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void baseSetup(float radius);

    /**
     * @note[short] MacOS (ARM): 0x13e994
     * @note[short] MacOS (Intel): 0x178830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16c2d4
     * @note[short] Android
     */
    void followObject(cocos2d::CCNode* newTarget, bool staticPosition);

    /**
     * @note[short] MacOS (ARM): 0x13e714
     * @note[short] MacOS (Intel): 0x178560
     * @note[short] Windows: 0x42920
     * @note[short] iOS: 0x16c08c
     * @note[short] Android
     */
    bool init(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x13e948
     * @note[short] MacOS (Intel): 0x1787f0
     * @note[short] Windows: 0x42ba0
     * @note[short] iOS: 0x16c288
     * @note[short] Android
     */
    void updatePosition(float dt);
    cocos2d::CCNode* m_target;
    float m_width;
    float m_radius;
    float m_opacity;
    cocos2d::ccColor3B m_color;
    cocos2d::CCPoint m_position;
    CircleMode m_circleMode;
    int m_lineWidth;
    float m_opacityMod;
    bool m_blendAdditive;
    CCCircleWaveDelegate* m_delegate;
};
