#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class TextGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "TextGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TextGameObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TextGameObject();

    /**
     * @note[short] MacOS (ARM): 0x4e636c
     * @note[short] MacOS (Intel): 0x5a1df0
     * @note[short] Windows: 0x1a74b0
     * @note[short] iOS: 0x2549c4
     * @note[short] Android
     */
    static TextGameObject* create(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x4fe1c0
     * @note[short] MacOS (Intel): 0x5d1a50
     * @note[short] Windows: 0x1a7940
     * @note[short] iOS: 0x265128
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x4fe32c
     * @note[short] MacOS (Intel): 0x5d1b80
     * @note[short] Windows: 0x1a7b00
     * @note[short] iOS: 0x265268
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4fdf14
     * @note[short] MacOS (Intel): 0x5d17d0
     * @note[short] Windows: 0x1a7590
     * @note[short] iOS: 0x264e80
     * @note[short] Android
     */
    virtual void updateTextKerning(int kerning);

    /**
     * @note[short] MacOS (ARM): 0x4feb14
     * @note[short] MacOS (Intel): 0x5d2570
     * @note[short] Windows: 0x18b650
     * @note[short] iOS: 0x2655b8
     * @note[short] Android
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x4fdee0
     * @note[short] MacOS (Intel): 0x5d17a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x4fdf1c
     * @note[short] MacOS (Intel): 0x5d17e0
     * @note[short] Windows: 0x1a75a0
     * @note[short] iOS: 0x264e88
     * @note[short] Android: Rebinded
     */
    void updateTextObject(gd::string text, bool defaultFont);
    gd::string m_text;
    int m_kerning;
};
