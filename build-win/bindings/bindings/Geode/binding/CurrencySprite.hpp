#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class CurrencySprite : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CurrencySprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CurrencySprite, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9fad0
     * @note[short] iOS: 0x3227e4
     * @note[short] Android: Out of line
     */
     CurrencySprite();

    /**
     * @note[short] MacOS (ARM): 0x6b0814
     * @note[short] MacOS (Intel): 0x7a9c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x321c60
     * @note[short] Android: Rebinded
     */
     ~CurrencySprite();

    /**
     * @note[short] MacOS (ARM): 0x6aeb34
     * @note[short] MacOS (Intel): 0x7a7c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x320364
     * @note[short] Android
     */
    static CurrencySprite* create(CurrencySpriteType type, bool burst);

    /**
     * @note[short] MacOS (ARM): 0x6af81c
     * @note[short] MacOS (Intel): 0x7a8a50
     * @note[short] Windows: 0xa4bc0
     * @note[short] iOS: 0x320f30
     * @note[short] Android
     */
    static CurrencySprite* createWithSprite(cocos2d::CCSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x6b1374
     * @note[short] MacOS (Intel): 0x7aa850
     * @note[short] Windows: 0xa4de0
     * @note[short] iOS: 0x3226f8
     * @note[short] Android
     */
    static CurrencySpriteType rewardToSpriteType(int rewardType);

    /**
     * @note[short] MacOS (ARM): 0x6ae990
     * @note[short] MacOS (Intel): 0x7a7b40
     * @note[short] Windows: 0xa4e90
     * @note[short] iOS: 0x320334
     * @note[short] Android
     */
    static gd::string spriteTypeToStat(CurrencySpriteType type);

    /**
     * @note[short] MacOS (ARM): 0x6b08fc
     * @note[short] MacOS (Intel): 0x7a9d60
     * @note[short] Windows: 0xa33e0
     * @note[short] iOS: 0x321cc4
     * @note[short] Android
     */
    bool init(CurrencySpriteType type, bool burst);

    /**
     * @note[short] MacOS (ARM): 0x6b11c4
     * @note[short] MacOS (Intel): 0x7aa6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32254c
     * @note[short] Android
     */
    bool initWithSprite(cocos2d::CCSprite* sprite);
    float m_unkFloat1;
    float m_unkFloat2;
    float m_unkFloat3;
    float m_remaining;
    int m_count;
    cocos2d::CCParticleSystemQuad* m_particleSystem;
    CurrencySpriteType m_spriteType;
    cocos2d::CCPoint m_position;
    cocos2d::CCSprite* m_burstSprite;
};
