#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCAnimatedSprite.hpp"

class AnimatedShopKeeper : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "AnimatedShopKeeper";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedShopKeeper, CCAnimatedSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AnimatedShopKeeper();

    /**
     * @note[short] MacOS (ARM): 0x2b2084
     * @note[short] MacOS (Intel): 0x324770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14ba2c
     * @note[short] Android
     */
    static AnimatedShopKeeper* create(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2b59a4
     * @note[short] MacOS (Intel): 0x328770
     * @note[short] Windows: 0x2aff00
     * @note[short] iOS: 0x14e69c
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2b58f0
     * @note[short] MacOS (Intel): 0x3286c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14e5fc
     * @note[short] Android
     */
    bool init(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2b48b0
     * @note[short] MacOS (Intel): 0x327410
     * @note[short] Windows: 0x2afbe0
     * @note[short] iOS: 0x14d918
     * @note[short] Android
     */
    void playReactAnimation();

    /**
     * @note[short] MacOS (ARM): 0x2b21c8
     * @note[short] MacOS (Intel): 0x3248e0
     * @note[short] Windows: 0x2afe70
     * @note[short] iOS: 0x14bae8
     * @note[short] Android
     */
    void startAnimating();
    ShopType m_type;
    int m_idleInt1;
    int m_idleInt2;
    bool m_looking;
    bool m_reacting;
    int m_reactCount;
    int m_gruntIndex;
};
