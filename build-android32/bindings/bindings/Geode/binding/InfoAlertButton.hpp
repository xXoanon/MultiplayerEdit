#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCMenuItemSpriteExtra.hpp"

class InfoAlertButton : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "InfoAlertButton";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoAlertButton, CCMenuItemSpriteExtra)

    /**
     * @note[short] MacOS (ARM): 0x4c3724
     * @note[short] MacOS (Intel): 0x575b50
     * @note[short] Windows: 0x2ba450
     * @note[short] iOS: 0x16b21c
     * @note[short] Android: Rebinded
     */
    static InfoAlertButton* create(gd::string title, gd::string desc, float spriteScale);

    /**
     * @note[short] MacOS (ARM): 0x4c39b4
     * @note[short] MacOS (Intel): 0x575dd0
     * @note[short] Windows: 0x2ba650
     * @note[short] iOS: 0x16b430
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x4c3910
     * @note[short] MacOS (Intel): 0x575d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16b38c
     * @note[short] Android: Rebinded
     */
    bool init(gd::string title, gd::string desc, float spriteScale);
    gd::string m_title;
    gd::string m_description;
    float m_textScale;
    bool m_scroll;
};
