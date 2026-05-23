#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementNotifier : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementNotifier";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementNotifier, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x6c80ac
     * @note[short] MacOS (Intel): 0x7c2b60
     * @note[short] Windows: 0x3ab00
     * @note[short] iOS: 0x2165a8
     * @note[short] Android
     */
    static AchievementNotifier* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x6c8128
     * @note[short] MacOS (Intel): 0x7c2bf0
     * @note[short] Windows: 0x3abb0
     * @note[short] iOS: 0x216618
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6c82c0
     * @note[short] MacOS (Intel): 0x7c2d80
     * @note[short] Windows: 0x3ae20
     * @note[short] iOS: 0x216798
     * @note[short] Android
     */
    void achievementDisplayFinished();

    /**
     * @note[short] MacOS (ARM): 0x6c8154
     * @note[short] MacOS (Intel): 0x7c2c20
     * @note[short] Windows: 0x3abe0
     * @note[short] iOS: 0x216644
     * @note[short] Android
     */
    void notifyAchievement(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x6c81a8
     * @note[short] MacOS (Intel): 0x7c2c70
     * @note[short] Windows: 0x3acc0
     * @note[short] iOS: 0x216698
     * @note[short] Android
     */
    void showNextAchievement();

    /**
     * @note[short] MacOS (ARM): 0x6c8304
     * @note[short] MacOS (Intel): 0x7c2dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2167dc
     * @note[short] Android
     */
    void willSwitchToScene(cocos2d::CCScene* scene);
    cocos2d::CCScene* m_nextScene;
    cocos2d::CCArray* m_achievementBarArray;
    AchievementBar* m_activeAchievementBar;
};
