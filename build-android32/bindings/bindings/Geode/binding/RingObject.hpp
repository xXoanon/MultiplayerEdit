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

class RingObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RingObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RingObject();

    /**
     * @note[short] MacOS (ARM): 0x16e318
     * @note[short] MacOS (Intel): 0x1b40f0
     * @note[short] Windows: 0x4a1c50
     * @note[short] iOS: 0x38250c
     * @note[short] Android
     */
    static RingObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x16e5ac
     * @note[short] MacOS (Intel): 0x1b43a0
     * @note[short] Windows: 0x4a1fd0
     * @note[short] iOS: 0x382744
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x16e60c
     * @note[short] MacOS (Intel): 0x1b4400
     * @note[short] Windows: 0x3a3840
     * @note[short] iOS: 0x382794
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x16e580
     * @note[short] MacOS (Intel): 0x1b4380
     * @note[short] Windows: 0x4a1fb0
     * @note[short] iOS: 0x382718
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x16e620
     * @note[short] MacOS (Intel): 0x1b4430
     * @note[short] Windows: 0x4a2090
     * @note[short] iOS: 0x3827a8
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x16e72c
     * @note[short] MacOS (Intel): 0x1b4580
     * @note[short] Windows: 0x4a21b0
     * @note[short] iOS: 0x3828a8
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x16e5dc
     * @note[short] MacOS (Intel): 0x1b43d0
     * @note[short] Windows: 0x4a2000
     * @note[short] iOS: 0x38276c
     * @note[short] Android
     */
    virtual void setRScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x16e434
     * @note[short] MacOS (Intel): 0x1b4220
     * @note[short] Windows: 0x4a1d00
     * @note[short] iOS: 0x3825cc
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x16e610
     * @note[short] MacOS (Intel): 0x1b4410
     * @note[short] Windows: 0x4a2080
     * @note[short] iOS: 0x382798
     * @note[short] Android
     */
    virtual bool shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): 0x16e440
     * @note[short] MacOS (Intel): 0x1b4230
     * @note[short] Windows: 0x4a1d10
     * @note[short] iOS: 0x3825d8
     * @note[short] Android
     */
    virtual void powerOnObject(int state);

    /**
     * @note[short] MacOS (ARM): 0x16e3e4
     * @note[short] MacOS (Intel): 0x1b41c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x16e498
     * @note[short] MacOS (Intel): 0x1b4290
     * @note[short] Windows: 0x4a1db0
     * @note[short] iOS: 0x382630
     * @note[short] Android
     */
    void spawnCircle();
    bool m_claimTouch;
    bool m_isSpawnOnly;
};
