#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SongObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongObject();

    /**
     * @note[short] MacOS (ARM): 0x1f9efc
     * @note[short] MacOS (Intel): 0x253a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1100e4
     * @note[short] Android
     */
    static SongObject* create(int audioID);

    /**
     * @note[short] MacOS (ARM): 0x1f9f68
     * @note[short] MacOS (Intel): 0x253ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int audioID);
    int m_audioID;
};
