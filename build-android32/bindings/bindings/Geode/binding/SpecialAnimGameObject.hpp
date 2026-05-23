#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class SpecialAnimGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "SpecialAnimGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpecialAnimGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpecialAnimGameObject();

    /**
     * @note[short] MacOS (ARM): 0x16dcf8
     * @note[short] MacOS (Intel): 0x1b39c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x382250
     * @note[short] Android
     */
    static SpecialAnimGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x16de3c
     * @note[short] MacOS (Intel): 0x1b3b40
     * @note[short] Windows: 0x4a1a60
     * @note[short] iOS: 0x38230c
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x16de48
     * @note[short] MacOS (Intel): 0x1b3b60
     * @note[short] Windows: 0x4a1a70
     * @note[short] iOS: 0x382318
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x16dea8
     * @note[short] MacOS (Intel): 0x1b3bc0
     * @note[short] Windows: 0x4a1ae0
     * @note[short] iOS: 0x382378
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x16de1c
     * @note[short] MacOS (Intel): 0x1b3b00
     * @note[short] Windows: 0x4a1a20
     * @note[short] iOS: 0x3822ec
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x16de2c
     * @note[short] MacOS (Intel): 0x1b3b20
     * @note[short] Windows: 0x4a1a40
     * @note[short] iOS: 0x3822fc
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x201acc
     * @note[short] MacOS (Intel): 0x25d7a0
     * @note[short] Windows: 0x1a9940
     * @note[short] iOS: 0x348dd0
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x16ddf4
     * @note[short] MacOS (Intel): 0x1b3ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    bool m_skipMainColorUpdate;
    bool m_skipSecondaryColorUpdate;
};
