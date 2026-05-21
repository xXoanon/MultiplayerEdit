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

class AudioLineGuideGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "AudioLineGuideGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioLineGuideGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AudioLineGuideGameObject();

    /**
     * @note[short] MacOS (ARM): 0x19a668
     * @note[short] MacOS (Intel): 0x1ea9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x396244
     * @note[short] Android
     */
    static AudioLineGuideGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x19a740
     * @note[short] MacOS (Intel): 0x1eaad0
     * @note[short] Windows: 0x4c1450
     * @note[short] iOS: 0x396310
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x19b1f4
     * @note[short] MacOS (Intel): 0x1eb880
     * @note[short] Windows: 0x4c1810
     * @note[short] iOS: 0x396680
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x19a790
     * @note[short] MacOS (Intel): 0x1eab20
     * @note[short] Windows: 0x4c14c0
     * @note[short] iOS: 0x396360
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);
    int m_beatsPerMinute;
    int m_beatsPerBar;
    Speed m_speed;
    bool m_disabled;
};
