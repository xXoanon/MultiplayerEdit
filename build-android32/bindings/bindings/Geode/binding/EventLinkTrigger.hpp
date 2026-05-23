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

class EventLinkTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EventLinkTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EventLinkTrigger, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EventLinkTrigger();

    /**
     * @note[short] MacOS (ARM): 0x1865e0
     * @note[short] MacOS (Intel): 0x1d1570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38e0fc
     * @note[short] Android
     */
    static EventLinkTrigger* create();

    /**
     * @note[short] MacOS (ARM): 0x1866bc
     * @note[short] MacOS (Intel): 0x1d1650
     * @note[short] Windows: 0x4b8830
     * @note[short] iOS: 0x38e1cc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x18670c
     * @note[short] MacOS (Intel): 0x1d16a0
     * @note[short] Windows: 0x4b88a0
     * @note[short] iOS: 0x38e21c
     * @note[short] Android: Rebinded
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x187310
     * @note[short] MacOS (Intel): 0x1d25a0
     * @note[short] Windows: 0x4b8d70
     * @note[short] iOS: 0x38e61c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1867d0
     * @note[short] MacOS (Intel): 0x1d1760
     * @note[short] Windows: 0x4b8980
     * @note[short] iOS: 0x38e2a0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);
    gd::set<int> m_eventIDs;
    bool m_resetRemap;
    int m_extraID;
    int m_extraID2;
};
