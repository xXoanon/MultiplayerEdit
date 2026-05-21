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

class ObjectControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ObjectControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ObjectControlGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ObjectControlGameObject();

    /**
     * @note[short] MacOS (ARM): 0x19da18
     * @note[short] MacOS (Intel): 0x1ee860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3978ec
     * @note[short] Android
     */
    static ObjectControlGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x19dad8
     * @note[short] MacOS (Intel): 0x1ee910
     * @note[short] Windows: 0x4c2d60
     * @note[short] iOS: 0x3979a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x19df8c
     * @note[short] MacOS (Intel): 0x1eee90
     * @note[short] Windows: 0x4c2f40
     * @note[short] iOS: 0x397b80
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x19db28
     * @note[short] MacOS (Intel): 0x1ee960
     * @note[short] Windows: 0x4c2dd0
     * @note[short] iOS: 0x3979f0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);
};
