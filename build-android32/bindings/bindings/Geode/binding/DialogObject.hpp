#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DialogObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "DialogObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DialogObject();

    /**
     * @note[short] MacOS (ARM): 0x3482a0
     * @note[short] MacOS (Intel): 0x3c6c40
     * @note[short] Windows: 0xd32d0
     * @note[short] iOS: 0x865b4
     * @note[short] Android: Rebinded
     */
    static DialogObject* create(gd::string character, gd::string text, int characterFrame, float textScale, bool skippable, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x348458
     * @note[short] MacOS (Intel): 0x3c6dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool init(gd::string character, gd::string text, int characterFrame, float textScale, bool skippable, cocos2d::ccColor3B color);
    gd::string m_text;
    gd::string m_character;
    int m_characterFrame;
    cocos2d::ccColor3B m_color;
    float m_textScale;
    bool m_skippable;
};
