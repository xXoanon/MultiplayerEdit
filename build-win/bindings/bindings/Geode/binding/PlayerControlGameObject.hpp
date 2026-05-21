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

class PlayerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "PlayerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerControlGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PlayerControlGameObject();

    /**
     * @note[short] MacOS (ARM): 0x19cb24
     * @note[short] MacOS (Intel): 0x1ed640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39730c
     * @note[short] Android
     */
    static PlayerControlGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x19cbe8
     * @note[short] MacOS (Intel): 0x1ed700
     * @note[short] Windows: 0x4c27b0
     * @note[short] iOS: 0x3973c4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x19d8b4
     * @note[short] MacOS (Intel): 0x1ee670
     * @note[short] Windows: 0x4c2be0
     * @note[short] iOS: 0x397788
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x19cc38
     * @note[short] MacOS (Intel): 0x1ed750
     * @note[short] Windows: 0x4c2820
     * @note[short] iOS: 0x397414
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);
    bool m_stopJump;
    bool m_stopMove;
    bool m_stopRotation;
    bool m_stopSlide;
};
