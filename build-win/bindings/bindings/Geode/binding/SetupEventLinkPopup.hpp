#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupEventLinkPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEventLinkPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEventLinkPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4c4e10
     * @note[short] MacOS (Intel): 0x577380
     * @note[short] Windows: 0x465e40
     * @note[short] iOS: 0x406e98
     * @note[short] Android
     */
    static SetupEventLinkPopup* create(EventLinkTrigger* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4c4f98
     * @note[short] MacOS (Intel): 0x5775b0
     * @note[short] Windows: 0x465f50
     * @note[short] iOS: 0x406f70
     * @note[short] Android
     */
    bool init(EventLinkTrigger* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4c5460
     * @note[short] MacOS (Intel): 0x577b20
     * @note[short] Windows: 0x4664c0
     * @note[short] iOS: 0x40739c
     * @note[short] Android
     */
    void onSelectEvent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4c56f0
     * @note[short] MacOS (Intel): 0x577e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4074e8
     * @note[short] Android: Rebinded
     */
    void updateEventIDs(gd::set<int>& eventIDs);
};
