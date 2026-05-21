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

class StartPosObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "StartPosObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     StartPosObject();

    /**
     * @note[short] MacOS (ARM): 0x1761bc
     * @note[short] MacOS (Intel): 0x1bd6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3875b0
     * @note[short] Android: Rebinded
     */
     ~StartPosObject();

    /**
     * @note[short] MacOS (ARM): 0x1762a4
     * @note[short] MacOS (Intel): 0x1bd810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x387614
     * @note[short] Android
     */
    static StartPosObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1763b0
     * @note[short] MacOS (Intel): 0x1bd920
     * @note[short] Windows: 0x4b1fa0
     * @note[short] iOS: 0x3876a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1764f4
     * @note[short] MacOS (Intel): 0x1bda70
     * @note[short] Windows: 0x4b2100
     * @note[short] iOS: 0x38779c
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1764f8
     * @note[short] MacOS (Intel): 0x1bda80
     * @note[short] Windows: 0x4b2110
     * @note[short] iOS: 0x3877a0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x176494
     * @note[short] MacOS (Intel): 0x1bda10
     * @note[short] Windows: 0x4b2060
     * @note[short] iOS: 0x387760
     * @note[short] Android: Rebinded
     */
    void loadSettingsFromString(gd::string objectString);

    /**
     * @note[short] MacOS (ARM): 0x17644c
     * @note[short] MacOS (Intel): 0x1bd9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x387718
     * @note[short] Android
     */
    void setSettings(LevelSettingsObject* settings);
    LevelSettingsObject* m_startSettings;
};
