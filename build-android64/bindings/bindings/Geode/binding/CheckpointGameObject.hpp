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

class CheckpointGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CheckpointGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CheckpointGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1896e0
     * @note[short] MacOS (Intel): 0x1d4e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38f774
     * @note[short] Android
     */
    static CheckpointGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1897b4
     * @note[short] MacOS (Intel): 0x1d4f50
     * @note[short] Windows: 0x4b9d90
     * @note[short] iOS: 0x38f83c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x189bec
     * @note[short] MacOS (Intel): 0x1d5370
     * @note[short] Windows: 0x4ba1d0
     * @note[short] iOS: 0x38fc08
     * @note[short] Android: Rebinded
     */
    virtual void setupCustomSprites(gd::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x18af34
     * @note[short] MacOS (Intel): 0x1d69b0
     * @note[short] Windows: 0x4bafc0
     * @note[short] iOS: 0x390738
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x189810
     * @note[short] MacOS (Intel): 0x1d4fb0
     * @note[short] Windows: 0x4b9e10
     * @note[short] iOS: 0x38f898
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x18adfc
     * @note[short] MacOS (Intel): 0x1d6870
     * @note[short] Windows: 0x4bae90
     * @note[short] iOS: 0x390630
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x18a4e8
     * @note[short] MacOS (Intel): 0x1d5d20
     * @note[short] Windows: 0x4babc0
     * @note[short] iOS: 0x390388
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x189828
     * @note[short] MacOS (Intel): 0x1d4fd0
     * @note[short] Windows: 0x4b9e30
     * @note[short] iOS: 0x38f8b0
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x18af8c
     * @note[short] MacOS (Intel): 0x1d6a20
     * @note[short] Windows: 0x4bb1d0
     * @note[short] iOS: 0x390788
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x18a160
     * @note[short] MacOS (Intel): 0x1d5930
     * @note[short] Windows: 0x4ba870
     * @note[short] iOS: 0x39000c
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x18af84
     * @note[short] MacOS (Intel): 0x1d6a00
     * @note[short] Windows: 0x4bb040
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x189a58
     * @note[short] MacOS (Intel): 0x1d51f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38fa80
     * @note[short] Android
     */
    void updateCheckpointSpriteVisibility();
    bool m_checkpointActivated;
    int m_respawnID;
};
