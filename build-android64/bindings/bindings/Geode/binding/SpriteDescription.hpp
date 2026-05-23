#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SpriteDescription : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SpriteDescription";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SpriteDescription, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b0a9c
     * @note[short] Android: Out of line
     */
     SpriteDescription();

    /**
     * @note[short] MacOS (ARM): 0x4bb480
     * @note[short] MacOS (Intel): 0x56d1f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b0a48
     * @note[short] Android: Rebinded
     */
     ~SpriteDescription();

    /**
     * @note[short] MacOS (ARM): 0x4bac00
     * @note[short] MacOS (Intel): 0x56c9f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpriteDescription* createDescription(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4ba4ac
     * @note[short] MacOS (Intel): 0x56c280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b0660
     * @note[short] Android
     */
    static SpriteDescription* createDescription(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4badd4
     * @note[short] MacOS (Intel): 0x56cbb0
     * @note[short] Windows: 0x41d60
     * @note[short] Android
     */
    bool initDescription(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4bb080
     * @note[short] MacOS (Intel): 0x56ce30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b0754
     * @note[short] Android
     */
    bool initDescription(cocos2d::CCDictionary* dict);
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_scale;
    cocos2d::CCPoint m_flipped;
    float m_rotation;
    int m_zValue;
    int m_tag;
    bool m_usesCustomTag;
    cocos2d::CCSpriteFrame* m_texture;
};
