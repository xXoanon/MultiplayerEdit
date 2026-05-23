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
#include "SelectPremadeDelegate.hpp"

class SetupAdvFollowPopup : public SetupTriggerPopup, public SelectPremadeDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x295b64
     * @note[short] MacOS (Intel): 0x305240
     * @note[short] Windows: 0x4023f0
     * @note[short] iOS: 0x5fcd0
     * @note[short] Android
     */
    static SetupAdvFollowPopup* create(AdvancedFollowTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x299c54
     * @note[short] MacOS (Intel): 0x309ee0
     * @note[short] Windows: 0x28f250
     * @note[short] iOS: 0x6329c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x299300
     * @note[short] MacOS (Intel): 0x3095b0
     * @note[short] Windows: 0x4055d0
     * @note[short] iOS: 0x62b08
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x2994a0
     * @note[short] MacOS (Intel): 0x3096f0
     * @note[short] Windows: 0x4056c0
     * @note[short] iOS: 0x62c68
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x299724
     * @note[short] MacOS (Intel): 0x309960
     * @note[short] Windows: 0x405a00
     * @note[short] iOS: 0x62e48
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29992c
     * @note[short] MacOS (Intel): 0x309b90
     * @note[short] Windows: 0x405cb0
     * @note[short] iOS: 0x63008
     * @note[short] Android
     */
    virtual void selectPremadeClosed(SelectPremadeLayer* layer, int type);

    /**
     * @note[short] MacOS (ARM): 0x295cf4
     * @note[short] MacOS (Intel): 0x305480
     * @note[short] Windows: 0x402510
     * @note[short] iOS: 0x5fdb0
     * @note[short] Android
     */
    bool init(AdvancedFollowTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x29921c
     * @note[short] MacOS (Intel): 0x3094e0
     * @note[short] Windows: 0x405ab0
     * @note[short] iOS: 0x62aa4
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2992d0
     * @note[short] MacOS (Intel): 0x309580
     * @note[short] Windows: 0x405b80
     * @note[short] iOS: 0x62ad8
     * @note[short] Android
     */
    void onPremade(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29979c
     * @note[short] MacOS (Intel): 0x3099d0
     * @note[short] Windows: 0x405ae0
     * @note[short] iOS: 0x62ec0
     * @note[short] Android
     */
    void updateMode(int mode);
};
