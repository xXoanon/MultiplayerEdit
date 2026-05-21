#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJWorldNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJWorldNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJWorldNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x344e84
     * @note[short] MacOS (Intel): 0x3c3680
     * @note[short] Android
     */
    static GJWorldNode* create(int type, WorldSelectLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x346054
     * @note[short] MacOS (Intel): 0x3c4880
     * @note[short] Android
     */
    float addDotsToLevel(int levelID, bool animate);

    /**
     * @note[short] MacOS (ARM): 0x346674
     * @note[short] MacOS (Intel): 0x3c4ed0
     * @note[short] Android
     */
    cocos2d::CCPoint dotPositionForLevel(int levelID, int index);

    /**
     * @note[short] MacOS (ARM): 0x345648
     * @note[short] MacOS (Intel): 0x3c3dd0
     * @note[short] Android
     */
    bool init(int type, WorldSelectLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x345fd8
     * @note[short] MacOS (Intel): 0x3c4800
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346404
     * @note[short] MacOS (Intel): 0x3c4c40
     * @note[short] Android
     */
    void playStep1();

    /**
     * @note[short] MacOS (ARM): 0x3464fc
     * @note[short] MacOS (Intel): 0x3c4d40
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x3465c0
     * @note[short] MacOS (Intel): 0x3c4e00
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x345ec0
     * @note[short] MacOS (Intel): 0x3c46e0
     * @note[short] Android
     */
    cocos2d::CCPoint positionForLevelButton(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x3447e0
     * @note[short] MacOS (Intel): 0x3c3020
     * @note[short] Android
     */
    void unlockActiveItem();
    cocos2d::CCArray* m_activeObjects;
    CCMenuItemSpriteExtra* m_activeButton;
    GJGameLevel* m_level;
    WorldSelectLayer* m_selectLayer;
    bool m_unlocked;
    cocos2d::CCPoint m_levelPosition;
    cocos2d::ccColor3B m_particleColor;
    int m_islandType;
    bool m_islandUnlocked;
    cocos2d::CCSprite* m_arrowSprite;
};
