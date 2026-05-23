#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ButtonSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ButtonSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x3ed90
     * @note[short] iOS: 0x5fb40
     * @note[short] Android: Out of line
     */
     ButtonSprite();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, int width, int minWidth, float scale, bool absolute);

    /**
Create a ButtonSprite with a top sprite and a texture.

 @param topSprite The top sprite to add on top of the sprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of top spr     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, bool absolute, float height, const char* texture, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg);

    /**
Create a ButtonSprite with text, a font and a texture.

 @param caption The text of the ButtonSprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param font The name of the BM font file to use

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of text

 @returns Pointer to the created ButtonSprite, or nullptr on er     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(const char* caption, int width, bool absolute, const char* font, const char* texture, float height, float scale);

    /**
     * @note[short] MacOS (ARM): 0x83b30
     * @note[short] MacOS (Intel): 0x92ab0
     * @note[short] Windows: 0x3f1c0
     * @note[short] iOS: 0x5f2d4
     * @note[short] Android
     */
    static ButtonSprite* create(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height);

    /**
     * @note[short] MacOS (ARM): 0x83370
     * @note[short] MacOS (Intel): 0x92220
     * @note[short] Windows: 0x3eeb0
     * @note[short] iOS: 0x5ebbc
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG);

    /**
     * @note[short] MacOS (ARM): 0x83c6c
     * @note[short] MacOS (Intel): 0x92c00
     * @note[short] Windows: 0x3f290
     * @note[short] iOS: 0x5f3a8
     * @note[short] Android
     */
    bool init(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height);

    /**
     * @note[short] MacOS (ARM): 0x834a4
     * @note[short] MacOS (Intel): 0x92370
     * @note[short] Windows: 0x3ef60
     * @note[short] iOS: 0x5ec88
     * @note[short] Android
     */
    bool init(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG);

    /**
     * @note[short] MacOS (ARM): 0x843bc
     * @note[short] MacOS (Intel): 0x933c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5fac0
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x83ed4
     * @note[short] MacOS (Intel): 0x92ea0
     * @note[short] Windows: 0x3fb50
     * @note[short] iOS: 0x5f5e4
     * @note[short] Android
     */
    void setString(char const* text);

    /**
     * @note[short] MacOS (ARM): 0x84278
     * @note[short] MacOS (Intel): 0x93280
     * @note[short] Windows: 0x3f590
     * @note[short] iOS: 0x5f988
     * @note[short] Android
     */
    void updateBGImage(char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x836f8
     * @note[short] MacOS (Intel): 0x92600
     * @note[short] Windows: 0x3f6d0
     * @note[short] iOS: 0x5eedc
     * @note[short] Android
     */
    void updateSpriteBGSize();

    /**
     * @note[short] MacOS (ARM): 0x84394
     * @note[short] MacOS (Intel): 0x93390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5fa98
     * @note[short] Android
     */
    void updateSpriteOffset(cocos2d::CCPoint offset);
    int m_mode;
    float m_width;
    float m_minWidth;
    float m_scale;
    float m_height;
    bool m_absolute;
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_subSprite;
    cocos2d::CCSprite* m_subBGSprite;
    cocos2d::extension::CCScale9Sprite* m_BGSprite;
    cocos2d::CCPoint m_textOffset;
    cocos2d::CCPoint m_spritePosition;
    gd::string m_caption;
};
