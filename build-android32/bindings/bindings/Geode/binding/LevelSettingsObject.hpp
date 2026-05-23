#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelSettingsObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSettingsObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0xc35d0
     * @note[short] MacOS (Intel): 0xdd490
     * @note[short] Windows: 0x2eab20
     * @note[short] iOS: 0x3581dc
     * @note[short] Android
     */
    static LevelSettingsObject* create();

    /**
     * @note[short] MacOS (ARM): 0xe17cc
     * @note[short] MacOS (Intel): 0x102fe0
     * @note[short] Windows: 0x2eca40
     * @note[short] iOS: 0x36ad20
     * @note[short] Android
     */
    static LevelSettingsObject* objectFromDict(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0xc4fc0
     * @note[short] MacOS (Intel): 0xdf2c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x359674
     * @note[short] Android: Rebinded
     */
    static LevelSettingsObject* objectFromString(gd::string const& str);

    /**
     * @note[short] MacOS (ARM): 0xe1654
     * @note[short] MacOS (Intel): 0x102e30
     * @note[short] Windows: 0x2eac60
     * @note[short] iOS: 0x36abcc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0xc8fa8
     * @note[short] MacOS (Intel): 0xe3820
     * @note[short] Windows: 0x2eaf70
     * @note[short] iOS: 0x35c604
     * @note[short] Android
     */
    gd::string getSaveString();

    /**
     * @note[short] MacOS (ARM): 0xe2e84
     * @note[short] MacOS (Intel): 0x1047e0
     * @note[short] Windows: 0x2ee2f0
     * @note[short] iOS: 0x36bd38
     * @note[short] Android
     */
    void setupColorsFromLegacyMode(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0xe17ac
     * @note[short] MacOS (Intel): 0x102fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36ad04
     * @note[short] Android
     */
    bool shouldUseYSection();
    GJEffectManager* m_effectManager;
    int m_startMode;
    Speed m_startSpeed;
    bool m_startMini;
    bool m_startDual;
    bool m_mirrorMode;
    bool m_rotateGameplay;
    bool m_twoPlayerMode;
    bool m_platformerMode;
    float m_songOffset;
    bool m_fadeIn;
    bool m_fadeOut;
    bool m_dontReset;
    int m_backgroundIndex;
    int m_groundIndex;
    int m_fontIndex;
    int m_middleGroundIndex;
    bool m_startsWithStartPos;
    bool m_isFlipped;
    bool m_reverseGameplay;
    bool m_disableStartPos;
    int m_targetOrder;
    int m_targetChannel;
    GJGameLevel* m_level;
    gd::string m_guidelineString;
    bool m_guidelinesUpdated;
    int m_colorPage;
    int m_groundLineIndex;
    bool m_propertykA23;
    bool m_propertykA24;
    bool m_noTimePenalty;
    int m_propertykA44;
    int m_nextFreeID;
    bool m_resetCamera;
    int m_spawnGroup;
    bool m_allowMultiRotation;
    bool m_enablePlayerSqueeze;
    bool m_fixGravityBug;
    bool m_fixNegativeScale;
    bool m_fixRobotJump;
    bool m_dynamicLevelHeight;
    bool m_sortGroups;
    bool m_fixRadiusCollision;
    bool m_enable22Changes;
    bool m_allowStaticRotate;
    bool m_reverseSync;
    bool m_decreaseBoostSlide;
};
