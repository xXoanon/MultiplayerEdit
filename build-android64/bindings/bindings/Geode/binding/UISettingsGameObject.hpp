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

class UISettingsGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "UISettingsGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISettingsGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UISettingsGameObject();

    /**
     * @note[short] MacOS (ARM): 0x18fb34
     * @note[short] MacOS (Intel): 0x1dcbb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x392464
     * @note[short] Android
     */
    static UISettingsGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x18fc00
     * @note[short] MacOS (Intel): 0x1dcc80
     * @note[short] Windows: 0x4bd270
     * @note[short] iOS: 0x392524
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x190884
     * @note[short] MacOS (Intel): 0x1ddc20
     * @note[short] Windows: 0x4bd690
     * @note[short] iOS: 0x3928d8
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x18fc50
     * @note[short] MacOS (Intel): 0x1dccd0
     * @note[short] Windows: 0x4bd2e0
     * @note[short] iOS: 0x392574
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);
    int m_xRef;
    int m_yRef;
    bool m_xRelative;
    bool m_yRelative;
};
