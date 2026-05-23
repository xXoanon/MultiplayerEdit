#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteCOpacity.hpp"

class GJPathSprite : public CCSpriteCOpacity {
public:
    static constexpr auto CLASS_NAME = "GJPathSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathSprite, CCSpriteCOpacity)

    /**
     * @note[short] MacOS (ARM): 0x28f908
     * @note[short] MacOS (Intel): 0x2fe910
     * @note[short] Windows: 0x289050
     * @note[short] iOS: 0x3b8484
     * @note[short] Android
     */
    static GJPathSprite* create(int path);

    /**
     * @note[short] MacOS (ARM): 0x293a38
     * @note[short] MacOS (Intel): 0x302e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bb6f8
     * @note[short] Android
     */
    void addRankLabel(int path);

    /**
     * @note[short] MacOS (ARM): 0x2934d0
     * @note[short] MacOS (Intel): 0x302960
     * @note[short] Windows: 0x2896c0
     * @note[short] iOS: 0x3bb37c
     * @note[short] Android
     */
    void addShardSprite();

    /**
     * @note[short] MacOS (ARM): 0x292678
     * @note[short] MacOS (Intel): 0x301910
     * @note[short] Windows: 0x289400
     * @note[short] iOS: 0x3baad4
     * @note[short] Android
     */
    void changeToLockedArt();

    /**
     * @note[short] MacOS (ARM): 0x293900
     * @note[short] MacOS (Intel): 0x302d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bb650
     * @note[short] Android
     */
    bool init(int path);

    /**
     * @note[short] MacOS (ARM): 0x28f9b4
     * @note[short] MacOS (Intel): 0x2fe9b0
     * @note[short] Windows: 0x289220
     * @note[short] iOS: 0x3b8524
     * @note[short] Android
     */
    void updateState();
    int m_pathNumber;
};
