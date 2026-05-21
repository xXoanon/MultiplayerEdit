#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "AdvancedFollowTriggerObject.hpp"

class AdvancedFollowEditObject : public AdvancedFollowTriggerObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowEditObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowEditObject, AdvancedFollowTriggerObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AdvancedFollowEditObject();

    /**
     * @note[short] MacOS (ARM): 0x1687d8
     * @note[short] MacOS (Intel): 0x1ad4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37f6d8
     * @note[short] Android
     */
    static AdvancedFollowEditObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1695b0
     * @note[short] MacOS (Intel): 0x1ae690
     * @note[short] Windows: 0x49eb50
     * @note[short] iOS: 0x37fbb4
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x168940
     * @note[short] MacOS (Intel): 0x1ad680
     * @note[short] Windows: 0x49e760
     * @note[short] iOS: 0x37f7ec
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1688f8
     * @note[short] MacOS (Intel): 0x1ad630
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_modX;
    float m_modXVariance;
    float m_modY;
    float m_modYVariance;
    bool m_redirectDirection;
};
