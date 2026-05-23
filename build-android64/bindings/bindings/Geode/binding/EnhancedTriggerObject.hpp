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

class EnhancedTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EnhancedTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnhancedTriggerObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EnhancedTriggerObject();

    /**
     * @note[short] MacOS (ARM): 0x1756b8
     * @note[short] MacOS (Intel): 0x1bc9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x387148
     * @note[short] Android
     */
    static EnhancedTriggerObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x176090
     * @note[short] MacOS (Intel): 0x1bd5e0
     * @note[short] Windows: 0x4b1e90
     * @note[short] iOS: 0x3874ac
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1757cc
     * @note[short] MacOS (Intel): 0x1bcac0
     * @note[short] Windows: 0x4b1bc0
     * @note[short] iOS: 0x387208
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x175784
     * @note[short] MacOS (Intel): 0x1bca70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_minXID;
    int m_minYID;
    int m_maxXID;
    int m_maxYID;
};
