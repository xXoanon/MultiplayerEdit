#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextAlertPopup : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "TextAlertPopup";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextAlertPopup, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x24d910
     * @note[short] MacOS (Intel): 0x2af710
     * @note[short] Windows: 0x29db00
     * @note[short] iOS: 0x2e0100
     * @note[short] Android: Rebinded
     */
    static TextAlertPopup* create(gd::string text, float delay, float scale, int opacity, gd::string font);

    /**
     * @note[short] MacOS (ARM): 0x24daa8
     * @note[short] MacOS (Intel): 0x2af890
     * @note[short] Windows: 0x29dc30
     * @note[short] iOS: 0x2e026c
     * @note[short] Android: Rebinded
     */
    bool init(gd::string text, float delay, float scale, int opacity, gd::string font);

    /**
     * @note[short] MacOS (ARM): 0x24dde4
     * @note[short] MacOS (Intel): 0x2afbd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e0590
     * @note[short] Android
     */
    void setAlertPosition(cocos2d::CCPoint windowOffset, cocos2d::CCPoint pointOffset);

    /**
     * @note[short] MacOS (ARM): 0x24dda8
     * @note[short] MacOS (Intel): 0x2afb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e0554
     * @note[short] Android
     */
    void setLabelColor(cocos2d::ccColor3B color);
    float m_width;
    float m_height;
    cocos2d::CCLabelBMFont* m_label;
};
