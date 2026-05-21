#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJLocalScore : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJLocalScore";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLocalScore, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJLocalScore();

    /**
     * @note[short] MacOS (ARM): 0x4af3f4
     * @note[short] MacOS (Intel): 0x55fe80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xafcf0
     * @note[short] Android
     */
    static GJLocalScore* create(int points, int type);

    /**
     * @note[short] MacOS (ARM): 0x4af464
     * @note[short] MacOS (Intel): 0x55fef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int points, int type);
    int m_points;
    LevelLeaderboardType m_type;
    bool m_currentScore;
};
