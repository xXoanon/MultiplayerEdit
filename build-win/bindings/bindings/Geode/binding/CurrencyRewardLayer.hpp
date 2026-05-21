#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CurrencyRewardLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CurrencyRewardLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CurrencyRewardLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x6aca80
     * @note[short] MacOS (Intel): 0x7a5b40
     * @note[short] Windows: 0x9fc10
     * @note[short] iOS: 0x31e6e8
     * @note[short] Android
     */
    static CurrencyRewardLayer* create(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float yOffset, float time);

    /**
     * @note[short] MacOS (ARM): 0x6af904
     * @note[short] MacOS (Intel): 0x7a8b50
     * @note[short] Windows: 0xa2940
     * @note[short] iOS: 0x320fa4
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x6aec30
     * @note[short] MacOS (Intel): 0x7a7d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3203e8
     * @note[short] Android
     */
    void createObjects(CurrencySpriteType type, int count, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x6aecf4
     * @note[short] MacOS (Intel): 0x7a7df0
     * @note[short] Windows: 0xa1c30
     * @note[short] iOS: 0x3204ac
     * @note[short] Android
     */
    void createObjectsFull(CurrencySpriteType type, int count, cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x6aec98
     * @note[short] MacOS (Intel): 0x7a7da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x320450
     * @note[short] Android
     */
    void createUnlockObject(cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x6aff54
     * @note[short] MacOS (Intel): 0x7a9280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x321540
     * @note[short] Android
     */
    void incrementCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6b0344
     * @note[short] MacOS (Intel): 0x7a9700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x321864
     * @note[short] Android
     */
    void incrementDiamondsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6b01f4
     * @note[short] MacOS (Intel): 0x7a9580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x321758
     * @note[short] Android
     */
    void incrementMoonsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6b05e4
     * @note[short] MacOS (Intel): 0x7a9a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x321a7c
     * @note[short] Android
     */
    void incrementSpecialCount1(int count);

    /**
     * @note[short] MacOS (ARM): 0x6b0494
     * @note[short] MacOS (Intel): 0x7a9880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x321970
     * @note[short] Android
     */
    void incrementSpecialCount2(int count);

    /**
     * @note[short] MacOS (ARM): 0x6b00a4
     * @note[short] MacOS (Intel): 0x7a9400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32164c
     * @note[short] Android
     */
    void incrementStarsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x6acb88
     * @note[short] MacOS (Intel): 0x7a5c20
     * @note[short] Windows: 0x9fe60
     * @note[short] iOS: 0x31e7f0
     * @note[short] Android
     */
    bool init(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float yOffset, float time);

    /**
     * @note[short] MacOS (ARM): 0x6b0734
     * @note[short] MacOS (Intel): 0x7a9b80
     * @note[short] Windows: 0xa3310
     * @note[short] iOS: 0x321b88
     * @note[short] Android
     */
    void pulseSprite(cocos2d::CCSprite* sprite);
    CurrencyRewardDelegate* m_delegate;
    cocos2d::CCArray* m_objects;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCLabelBMFont* m_moonsLabel;
    cocos2d::CCLabelBMFont* m_diamondsLabel;
    cocos2d::CCLabelBMFont* m_keysLabel;
    cocos2d::CCLabelBMFont* m_shardsLabel;
    cocos2d::CCSprite* m_orbsSprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSprite* m_moonsSprite;
    cocos2d::CCSprite* m_diamondsSprite;
    CurrencySprite* m_keysSprite;
    CurrencySprite* m_shardsSprite;
    cocos2d::CCSpriteBatchNode* m_currencyBatchNode;
    cocos2d::CCSpriteBatchNode* m_orbBatchNode;
    int m_orbs;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_keys;
    int m_shards;
    float m_elapsed;
    float m_unknown;
    float m_time;
    cocos2d::CCPoint m_orbsPosition;
    cocos2d::CCPoint m_starsPosition;
    cocos2d::CCPoint m_moonsPosition;
    cocos2d::CCPoint m_diamondsPosition;
    cocos2d::CCPoint m_keysPosition;
    cocos2d::CCPoint m_shardsPosition;
    bool m_particlesAdded;
    bool m_objectsAdded;
    cocos2d::CCNode* m_mainNode;
    int m_rewardCount;
    CurrencyRewardType m_rewardType;
};
