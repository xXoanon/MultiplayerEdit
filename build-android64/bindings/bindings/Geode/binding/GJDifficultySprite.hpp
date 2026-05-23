#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDifficultySprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJDifficultySprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDifficultySprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x2543c4
     * @note[short] MacOS (Intel): 0x2b6a30
     * @note[short] Windows: 0x2a4f90
     * @note[short] iOS: 0x2e56d0
     * @note[short] Android
     */
    static GJDifficultySprite* create(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x254570
     * @note[short] MacOS (Intel): 0x2b6b80
     * @note[short] Windows: 0x2a5070
     * @note[short] iOS: 0x2e57fc
     * @note[short] Android
     */
    static gd::string getDifficultyFrame(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x2544d8
     * @note[short] MacOS (Intel): 0x2b6b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e5778
     * @note[short] Android
     */
    bool init(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x2546b0
     * @note[short] MacOS (Intel): 0x2b6cb0
     * @note[short] Windows: 0x2a5150
     * @note[short] iOS: 0x2e58bc
     * @note[short] Android
     */
    void updateDifficultyFrame(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x25482c
     * @note[short] MacOS (Intel): 0x2b6e30
     * @note[short] Windows: 0x2a5270
     * @note[short] iOS: 0x2e5a38
     * @note[short] Android
     */
    void updateFeatureState(GJFeatureState state);

    /**
     * @note[short] MacOS (ARM): 0x2547f0
     * @note[short] MacOS (Intel): 0x2b6de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e59fc
     * @note[short] Android
     */
    void updateFeatureStateFromLevel(GJGameLevel* level);
    GJFeatureState m_featureState;
};
