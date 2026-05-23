#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerFireBoostSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "PlayerFireBoostSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerFireBoostSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x374aa4
     * @note[short] MacOS (Intel): 0x3fc290
     * @note[short] Windows: 0x3a3d80
     * @note[short] iOS: 0x218c4c
     * @note[short] Android
     */
    static PlayerFireBoostSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x3920f0
     * @note[short] MacOS (Intel): 0x41db60
     * @note[short] Windows: 0x3a3e20
     * @note[short] iOS: 0x22ea80
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x38cebc
     * @note[short] MacOS (Intel): 0x417db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22a8dc
     * @note[short] Android
     */
    void animateFireIn();

    /**
     * @note[short] MacOS (ARM): 0x38cf3c
     * @note[short] MacOS (Intel): 0x417e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x22a954
     * @note[short] Android
     */
    void animateFireOut();

    /**
     * @note[short] MacOS (ARM): 0x38cbec
     * @note[short] MacOS (Intel): 0x417ad0
     * @note[short] Windows: 0x3a3e80
     * @note[short] iOS: 0x22a694
     * @note[short] Android
     */
    void loopFireAnimation();
    float m_size;
};
