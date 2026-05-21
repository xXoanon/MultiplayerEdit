#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceTriggerGameObject.hpp"

class RandTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "RandTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RandTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RandTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x17ac8c
     * @note[short] MacOS (Intel): 0x1c2f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x389808
     * @note[short] Android
     */
    static RandTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x17ad58
     * @note[short] MacOS (Intel): 0x1c3060
     * @note[short] Windows: 0x4b41c0
     * @note[short] iOS: 0x3898c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x17b0ac
     * @note[short] MacOS (Intel): 0x1c32f0
     * @note[short] Windows: 0x4b41e0
     * @note[short] iOS: 0x3899ec
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x17b360
     * @note[short] MacOS (Intel): 0x1c3560
     * @note[short] Windows: 0x4b43b0
     * @note[short] iOS: 0x389ac4
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x17b9ac
     * @note[short] MacOS (Intel): 0x1c3b70
     * @note[short] Windows: 0x4b45b0
     * @note[short] iOS: 0x389ec4
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x17aedc
     * @note[short] MacOS (Intel): 0x1c3190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38994c
     * @note[short] Android
     */
    int getRandomGroupID();

    /**
     * @note[short] MacOS (ARM): 0x17ada8
     * @note[short] MacOS (Intel): 0x1c30b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x389918
     * @note[short] Android
     */
    int getTotalChance();
};
