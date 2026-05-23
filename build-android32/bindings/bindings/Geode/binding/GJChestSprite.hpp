#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChestSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJChestSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChestSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x1c7bf4
     * @note[short] MacOS (Intel): 0x21cc80
     * @note[short] Windows: 0x3d15e0
     * @note[short] iOS: 0x1c5b20
     * @note[short] Android
     */
    static GJChestSprite* create(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x1ca6f0
     * @note[short] MacOS (Intel): 0x21f990
     * @note[short] Windows: 0x3d1770
     * @note[short] iOS: 0x1c824c
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x1ca618
     * @note[short] MacOS (Intel): 0x21f8a0
     * @note[short] Windows: 0x3d16b0
     * @note[short] iOS: 0x1c8178
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x1ca5bc
     * @note[short] MacOS (Intel): 0x21f850
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c8114
     * @note[short] Android
     */
    bool init(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x1c9000
     * @note[short] MacOS (Intel): 0x21e2a0
     * @note[short] Windows: 0x3d17e0
     * @note[short] iOS: 0x1c6cbc
     * @note[short] Android
     */
    void switchToState(ChestSpriteState state, bool noGlow);
    int m_chestType;
    ChestSpriteState m_spriteState;
    bool m_dark;
};
