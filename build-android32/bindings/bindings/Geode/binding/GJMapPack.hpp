#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMapPack : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapPack";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapPack, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb2fbc
     * @note[short] Android: Out of line
     */
     GJMapPack();

    /**
     * @note[short] MacOS (ARM): 0x4aed00
     * @note[short] MacOS (Intel): 0x55f730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaf8a8
     * @note[short] Android: Rebinded
     */
     ~GJMapPack();

    /**
     * @note[short] MacOS (ARM): 0x4aee64
     * @note[short] MacOS (Intel): 0x55f880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaf91c
     * @note[short] Android
     */
    static GJMapPack* create();

    /**
     * @note[short] MacOS (ARM): 0x4859ec
     * @note[short] MacOS (Intel): 0x532340
     * @note[short] Windows: 0x170120
     * @note[short] iOS: 0x959d8
     * @note[short] Android
     */
    static GJMapPack* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4af280
     * @note[short] MacOS (Intel): 0x55fcf0
     * @note[short] Windows: 0x170c80
     * @note[short] iOS: 0xafba8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4af2e0
     * @note[short] MacOS (Intel): 0x55fd70
     * @note[short] Windows: 0x170f90
     * @note[short] iOS: 0xafc08
     * @note[short] Android
     */
    int completedMaps();

    /**
     * @note[short] MacOS (ARM): 0x4af3a8
     * @note[short] MacOS (Intel): 0x55fe20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xafca4
     * @note[short] Android
     */
    bool hasCompletedMapPack();

    /**
     * @note[short] MacOS (ARM): 0x4af010
     * @note[short] MacOS (Intel): 0x55fa50
     * @note[short] Windows: 0x170ce0
     * @note[short] iOS: 0xafa24
     * @note[short] Android: Rebinded
     */
    void parsePackColors(gd::string textColorStr, gd::string barColorStr);

    /**
     * @note[short] MacOS (ARM): 0x4aef08
     * @note[short] MacOS (Intel): 0x55f940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaf990
     * @note[short] Android: Rebinded
     */
    void parsePackLevels(gd::string levelsStr);

    /**
     * @note[short] MacOS (ARM): 0x4af2d0
     * @note[short] MacOS (Intel): 0x55fd50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xafbf8
     * @note[short] Android
     */
    int totalMaps();
    cocos2d::CCArray* m_levels;
    int m_packID;
    GJDifficulty m_difficulty;
    int m_stars;
    int m_coins;
    gd::string m_packName;
    gd::string m_levelStrings;
    cocos2d::ccColor3B m_textColour;
    cocos2d::ccColor3B m_barColour;
    int m_MId;
    bool m_isGauntlet;
};
