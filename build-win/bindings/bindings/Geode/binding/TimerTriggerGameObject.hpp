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

class TimerTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TimerTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TimerTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TimerTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x194540
     * @note[short] MacOS (Intel): 0x1e2d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3940a8
     * @note[short] Android
     */
    static TimerTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x194668
     * @note[short] MacOS (Intel): 0x1e2e60
     * @note[short] Windows: 0x4bf1e0
     * @note[short] iOS: 0x39417c
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x195ea8
     * @note[short] MacOS (Intel): 0x1e4d80
     * @note[short] Windows: 0x4bf9c0
     * @note[short] iOS: 0x3948a0
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x194760
     * @note[short] MacOS (Intel): 0x1e2f60
     * @note[short] Windows: 0x4bf2f0
     * @note[short] iOS: 0x39422c
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x194620
     * @note[short] MacOS (Intel): 0x1e2e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    double m_startTime;
    double m_targetTime;
    bool m_stopTimeEnabled;
    bool m_dontOverride;
    bool m_ignoreTimeWarp;
    float m_timeMod;
    bool m_startPaused;
    bool m_multiActivate;
    int m_controlType;
};
