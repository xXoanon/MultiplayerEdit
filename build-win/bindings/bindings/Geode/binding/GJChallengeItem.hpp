#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChallengeItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJChallengeItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChallengeItem, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x80e60
     * @note[short] MacOS (Intel): 0x8f7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3404d0
     * @note[short] Android
     */
    static GJChallengeItem* create();

    /**
     * @note[short] MacOS (ARM): 0x80d10
     * @note[short] MacOS (Intel): 0x8f660
     * @note[short] Windows: 0x1f49f0
     * @note[short] iOS: 0x3403cc
     * @note[short] Android: Rebinded
     */
    static GJChallengeItem* create(GJChallengeType challengeType, int goal, int reward, int timeLeft, gd::string questName);

    /**
     * @note[short] MacOS (ARM): 0x80b10
     * @note[short] MacOS (Intel): 0x8f450
     * @note[short] Windows: 0x1f4790
     * @note[short] iOS: 0x340270
     * @note[short] Android: Rebinded
     */
    static GJChallengeItem* createFromString(gd::string string);

    /**
     * @note[short] MacOS (ARM): 0x80f24
     * @note[short] MacOS (Intel): 0x8f880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3405d8
     * @note[short] Android
     */
    static GJChallengeItem* createWithCoder(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x810cc
     * @note[short] MacOS (Intel): 0x8fa20
     * @note[short] Windows: 0x1f4b70
     * @note[short] iOS: 0x34075c
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x811a8
     * @note[short] MacOS (Intel): 0x8faf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x340838
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x80f78
     * @note[short] MacOS (Intel): 0x8f8c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x340608
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x6509c
     * @note[short] MacOS (Intel): 0x736d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x333e5c
     * @note[short] Android
     */
    void incrementCount(int add);

    /**
     * @note[short] MacOS (ARM): 0x80e98
     * @note[short] MacOS (Intel): 0x8f7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x34054c
     * @note[short] Android: Rebinded
     */
    bool init(GJChallengeType challengeType, int goal, int reward, int timeLeft, gd::string questName);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setCount(int value);
    GJChallengeType m_challengeType;
    geode::SeedValueRSV m_count;
    geode::SeedValueRSV m_reward;
    geode::SeedValueRSV m_goal;
    int m_timeLeft;
    bool m_canClaim;
    int m_position;
    gd::string m_name;
};
