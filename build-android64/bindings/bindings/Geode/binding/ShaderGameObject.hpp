#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class ShaderGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ShaderGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShaderGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x399a54
     * @note[short] Android: Out of line
     */
     ShaderGameObject();

    /**
     * @note[short] MacOS (ARM): 0x15c524
     * @note[short] MacOS (Intel): 0x19d1d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37b0a8
     * @note[short] Android
     */
    static ShaderGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x15c67c
     * @note[short] MacOS (Intel): 0x19d330
     * @note[short] Windows: 0x499b40
     * @note[short] iOS: 0x37b140
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x16018c
     * @note[short] MacOS (Intel): 0x1a2260
     * @note[short] Windows: 0x49adc0
     * @note[short] iOS: 0x37c174
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x15c6d4
     * @note[short] MacOS (Intel): 0x19d3a0
     * @note[short] Windows: 0x499ba0
     * @note[short] iOS: 0x37b190
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x15c634
     * @note[short] MacOS (Intel): 0x19d2e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_speed;
    float m_strength;
    float m_outer;
    float m_timeOff;
    float m_waveWidth;
    float m_targetX;
    float m_targetY;
    float m_fadeIn;
    float m_fadeOut;
    float m_screenOffsetX;
    float m_screenOffsetY;
    bool m_invert;
    float m_inner;
    float m_maxSize;
    bool m_flip;
    bool m_rotate;
    bool m_dual;
    bool m_useX;
    bool m_useY;
    bool m_snapGrid;
    bool m_hardEdges;
    bool m_disableAll;
    int m_zLayerMin;
    int m_zLayerMax;
    bool m_animate;
    bool m_relative;
    bool m_editorDisabled;
};
