#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementBar : public cocos2d::CCNodeRGBA {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementBar, cocos2d::CCNodeRGBA)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AchievementBar();

    /**
     * @note[short] MacOS (ARM): 0x53cf08
     * @note[short] MacOS (Intel): 0x618bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26a70c
     * @note[short] Android
     */
    static AchievementBar* create(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x53e7d0
     * @note[short] MacOS (Intel): 0x61a530
     * @note[short] Windows: 0x81ef0
     * @note[short] iOS: 0x26ba38
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x53cfd8
     * @note[short] MacOS (Intel): 0x618c90
     * @note[short] Windows: 0x806c0
     * @note[short] iOS: 0x26a7c8
     * @note[short] Android
     */
    bool init(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x53e590
     * @note[short] MacOS (Intel): 0x61a2e0
     * @note[short] Windows: 0x81c70
     * @note[short] iOS: 0x26b818
     * @note[short] Android
     */
    void show();
    cocos2d::CCLayerColor* m_layerColor;
    int m_unkUnused;
    cocos2d::CCScene* m_nextScene;
    cocos2d::extension::CCScale9Sprite* m_bg;
    cocos2d::extension::CCScale9Sprite* m_bg2;
    cocos2d::CCSprite* m_achievementGlowSprite;
    cocos2d::CCSprite* m_achievementSprite;
    cocos2d::CCLabelBMFont* m_titleLabel;
    TextArea* m_achievementDescription;
};
