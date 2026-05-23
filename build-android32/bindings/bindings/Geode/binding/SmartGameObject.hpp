#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class SmartGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "SmartGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartGameObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SmartGameObject();

    /**
     * @note[short] MacOS (ARM): 0x16b358
     * @note[short] MacOS (Intel): 0x1b0bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x380728
     * @note[short] Android
     */
    static SmartGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x16bb7c
     * @note[short] MacOS (Intel): 0x1b1510
     * @note[short] Windows: 0x49fab0
     * @note[short] iOS: 0x380abc
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x16b68c
     * @note[short] MacOS (Intel): 0x1b0f40
     * @note[short] Windows: 0x49f940
     * @note[short] iOS: 0x380924
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x16b420
     * @note[short] MacOS (Intel): 0x1b0cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3807cc
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x16b470
     * @note[short] MacOS (Intel): 0x1b0d10
     * @note[short] Windows: 0x49f750
     * @note[short] iOS: 0x38081c
     * @note[short] Android
     */
    void updateSmartFrame();
    bool m_referenceOnly;
    gd::string m_baseFrame;
    gd::string m_smartFrame;
};
