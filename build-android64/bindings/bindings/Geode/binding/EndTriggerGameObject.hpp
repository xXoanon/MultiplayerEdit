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

class EndTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EndTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EndTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x18ed44
     * @note[short] MacOS (Intel): 0x1dbaf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x391e7c
     * @note[short] Android
     */
    static EndTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x18ee0c
     * @note[short] MacOS (Intel): 0x1dbbb0
     * @note[short] Windows: 0x4bcc60
     * @note[short] iOS: 0x391f38
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x18ee5c
     * @note[short] MacOS (Intel): 0x1dbc00
     * @note[short] Windows: 0x4bccd0
     * @note[short] iOS: 0x391f88
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x18f9d8
     * @note[short] MacOS (Intel): 0x1dca20
     * @note[short] Windows: 0x4bd100
     * @note[short] iOS: 0x392320
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x18ef28
     * @note[short] MacOS (Intel): 0x1dbcd0
     * @note[short] Windows: 0x4bcdc0
     * @note[short] iOS: 0x392014
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);
    bool m_noEffects;
    bool m_noSFX;
    bool m_instant;
};
