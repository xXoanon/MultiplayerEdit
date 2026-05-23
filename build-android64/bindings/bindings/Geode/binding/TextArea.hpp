#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextArea : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "TextArea";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextArea, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x2af598
     * @note[short] MacOS (Intel): 0x3219a0
     * @note[short] Windows: 0x76e80
     * @note[short] iOS: 0xf6784
     * @note[short] Android: Rebinded
     */
    static TextArea* create(gd::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor);

    /**
     * @note[short] MacOS (ARM): 0x2b01e8
     * @note[short] MacOS (Intel): 0x322660
     * @note[short] Windows: 0x776e0
     * @note[short] iOS: 0xf6ee4
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x2b01e4
     * @note[short] MacOS (Intel): 0x322650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf6ee0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x2b0040
     * @note[short] MacOS (Intel): 0x3224b0
     * @note[short] Windows: 0x775f0
     * @note[short] iOS: 0xf6d44
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2b00ac
     * @note[short] MacOS (Intel): 0x322520
     * @note[short] Windows: 0x77630
     * @note[short] iOS: 0xf6db0
     * @note[short] Android
     */
    void colorAllCharactersTo(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2b0170
     * @note[short] MacOS (Intel): 0x3225d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf6e6c
     * @note[short] Android
     */
    void colorAllLabels(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2afd70
     * @note[short] MacOS (Intel): 0x3221f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float fadeIn(float duration, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x2b0328
     * @note[short] MacOS (Intel): 0x322800
     * @note[short] Windows: 0x778c0
     * @note[short] iOS: 0xf701c
     * @note[short] Android
     */
    float fadeInCharacters(float duration, float charDuration, bool fadeOut, TextFadeInStyle style);

    /**
     * @note[short] MacOS (ARM): 0x2aff40
     * @note[short] MacOS (Intel): 0x3223b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fadeOut(float duration);

    /**
     * @note[short] MacOS (ARM): 0x2afed0
     * @note[short] MacOS (Intel): 0x322350
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fadeOutAndRemove();

    /**
     * @note[short] MacOS (ARM): 0x2afeac
     * @note[short] MacOS (Intel): 0x322320
     * @note[short] Windows: 0x775d0
     * @note[short] iOS: 0xf6d20
     * @note[short] Android
     */
    void finishFade();

    /**
     * @note[short] MacOS (ARM): 0x2afb04
     * @note[short] MacOS (Intel): 0x321f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] MacOS (ARM): 0x2af748
     * @note[short] MacOS (Intel): 0x321b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf68b0
     * @note[short] Android: Rebinded
     */
    bool init(gd::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor);

    /**
     * @note[short] MacOS (ARM): 0x2afaf0
     * @note[short] MacOS (Intel): 0x321f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setIgnoreColorCode(bool ignore);

    /**
     * @note[short] MacOS (ARM): 0x2af840
     * @note[short] MacOS (Intel): 0x321c50
     * @note[short] Windows: 0x770c0
     * @note[short] iOS: 0xf69a8
     * @note[short] Android: Rebinded
     */
    void setString(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x2afc94
     * @note[short] MacOS (Intel): 0x322110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xf6ce4
     * @note[short] Android
     */
    void showAll();

    /**
     * @note[short] MacOS (ARM): 0x2afbd4
     * @note[short] MacOS (Intel): 0x322050
     * @note[short] Windows: 0x77510
     * @note[short] iOS: 0xf6c2c
     * @note[short] Android
     */
    void stopAllCharacterActions();
    bool m_disableColor;
    MultilineBitmapFont* m_label;
    float m_width;
    float m_unknown;
    gd::string m_fontFile;
    float m_height;
    bool m_unkBool;
    cocos2d::CCPoint m_anchorPoint;
    bool m_allShown;
    float m_scale;
    int m_rectHeight;
    int m_rectWidth;
    float m_maxWidth;
    cocos2d::CCPoint m_unkPoint;
    TextAreaDelegate* m_delegate;
    cocos2d::CCDictionary* m_shakeCharacters;
    float m_shakeElapsed;
};
