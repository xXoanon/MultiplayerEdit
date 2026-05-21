#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MultilineBitmapFont : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "MultilineBitmapFont";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultilineBitmapFont, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23590c
     * @note[short] Android: Out of line
     */
     MultilineBitmapFont();

    /**
     * @note[short] MacOS (ARM): 0x3eea94
     * @note[short] MacOS (Intel): 0x489150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23581c
     * @note[short] Android: Rebinded
     */
     ~MultilineBitmapFont();

    /**
     * @note[short] MacOS (ARM): 0x3ecc14
     * @note[short] MacOS (Intel): 0x487050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23434c
     * @note[short] Android: Rebinded
     */
    static MultilineBitmapFont* createWithFont(char const* font, gd::string text, float scale, float width, cocos2d::CCPoint anchor, int height, bool disableColor);

    /**
     * @note[short] MacOS (ARM): 0x3ee70c
     * @note[short] MacOS (Intel): 0x488db0
     * @note[short] Windows: 0x6c780
     * @note[short] iOS: 0x235708
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x3ecd98
     * @note[short] MacOS (Intel): 0x4871c0
     * @note[short] Windows: 0x6bed0
     * @note[short] iOS: 0x234470
     * @note[short] Android: Rebinded
     */
    bool initWithFont(char const* font, gd::string text, float scale, float width, cocos2d::CCPoint anchor, int height, bool disableColor);

    /**
     * @note[short] MacOS (ARM): 0x3ee7ec
     * @note[short] MacOS (Intel): 0x488eb0
     * @note[short] Windows: 0x6d0d0
     * @note[short] iOS: 0x235780
     * @note[short] Android
     */
    void moveSpecialDescriptors(int index, int size);

    /**
     * @note[short] MacOS (ARM): 0x3ed558
     * @note[short] MacOS (Intel): 0x487ac0
     * @note[short] Windows: 0x6c800
     * @note[short] iOS: 0x234c18
     * @note[short] Android: Rebinded
     */
    gd::string readColorInfo(gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x3ee1d0
     * @note[short] MacOS (Intel): 0x488810
     * @note[short] Windows: 0x6d160
     * @note[short] iOS: 0x235350
     * @note[short] Android: Rebinded
     */
    gd::string stringWithMaxWidth(gd::string text, float width, float scale);
    std::array<int, 300> m_fontWidths;
    cocos2d::CCArray* m_specialDescriptors;
    cocos2d::CCArray* m_characters;
    cocos2d::CCArray* m_lines;
    int m_unkInt;
    bool m_unkBool;
    void* m_unkPtr;
    int m_height;
    int m_width;
    cocos2d::CCPoint m_position;
    float m_maxWidth;
    bool m_disableColor;
};
