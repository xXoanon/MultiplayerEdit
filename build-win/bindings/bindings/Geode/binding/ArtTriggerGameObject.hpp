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

class ArtTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ArtTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ArtTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ArtTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x19c4e8
     * @note[short] MacOS (Intel): 0x1ecf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39700c
     * @note[short] Android
     */
    static ArtTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x19cad4
     * @note[short] MacOS (Intel): 0x1ed5e0
     * @note[short] Windows: 0x4c23f0
     * @note[short] iOS: 0x3972bc
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x19ca5c
     * @note[short] MacOS (Intel): 0x1ed580
     * @note[short] Windows: 0x4c2370
     * @note[short] iOS: 0x397254
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x19c5f4
     * @note[short] MacOS (Intel): 0x1ed050
     * @note[short] Windows: 0x4c2200
     * @note[short] iOS: 0x3970c4
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x19c5ac
     * @note[short] MacOS (Intel): 0x1ed000
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_artIndex;
};
