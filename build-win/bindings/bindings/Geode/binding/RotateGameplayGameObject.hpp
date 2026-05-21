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

class RotateGameplayGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RotateGameplayGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RotateGameplayGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RotateGameplayGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1a0434
     * @note[short] MacOS (Intel): 0x1f1b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x398a8c
     * @note[short] Android
     */
    static RotateGameplayGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1a0514
     * @note[short] MacOS (Intel): 0x1f1c20
     * @note[short] Windows: 0x4c3ef0
     * @note[short] iOS: 0x398b60
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1a1cb8
     * @note[short] MacOS (Intel): 0x1f3980
     * @note[short] Windows: 0x4c4810
     * @note[short] iOS: 0x3993e0
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): 0x1a19cc
     * @note[short] MacOS (Intel): 0x1f3610
     * @note[short] Windows: 0x4c4580
     * @note[short] iOS: 0x399124
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1a0564
     * @note[short] MacOS (Intel): 0x1f1c70
     * @note[short] Windows: 0x4c3f60
     * @note[short] iOS: 0x398bb0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1a1c4c
     * @note[short] MacOS (Intel): 0x1f3930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x399384
     * @note[short] Android
     */
    void updateGameplayRotation();
    int m_moveDirection;
    int m_groundDirection;
    bool m_editVelocity;
    bool m_overrideVelocity;
    float m_velocityModX;
    float m_velocityModY;
    bool m_changeChannel;
    bool m_channelOnly;
    int m_targetChannelID;
    bool m_instantOffset;
    bool m_dontSlide;
};
