#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextStyleSection : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "TextStyleSection";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextStyleSection, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x3eebc4
     * @note[short] MacOS (Intel): 0x4892d0
     * @note[short] Windows: 0x6d840
     * @note[short] iOS: 0x235898
     * @note[short] Android
     */
    static TextStyleSection* create(int start, int end, TextStyleType type);

    /**
     * @note[short] MacOS (ARM): 0x3ee888
     * @note[short] MacOS (Intel): 0x488f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createColoredSection(cocos2d::ccColor3B color, int start, int end);

    /**
     * @note[short] MacOS (ARM): 0x3eea18
     * @note[short] MacOS (Intel): 0x4890d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createDelaySection(int start, float delay);

    /**
     * @note[short] MacOS (ARM): 0x3ee90c
     * @note[short] MacOS (Intel): 0x488fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createInstantSection(int start, int end, float duration);

    /**
     * @note[short] MacOS (ARM): 0x3ee990
     * @note[short] MacOS (Intel): 0x489040
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createShakeSection(int start, int end, int intensity, int perSecond);

    /**
     * @note[short] MacOS (ARM): 0x3eec38
     * @note[short] MacOS (Intel): 0x489340
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int start, int end, TextStyleType type);
    TextStyleType m_styleType;
    int m_startIndex;
    int m_endIndex;
    cocos2d::ccColor3B m_color;
    float m_instantTime;
    float m_delay;
    int m_shakeIntensity;
    int m_shakesPerSecond;
};
