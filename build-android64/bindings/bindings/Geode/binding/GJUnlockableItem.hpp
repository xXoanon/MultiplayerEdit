#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUnlockableItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJUnlockableItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUnlockableItem, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJUnlockableItem();

    /**
     * @note[short] MacOS (ARM): 0x58218
     * @note[short] MacOS (Intel): 0x66360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32ba18
     * @note[short] Android
     */
    static GJUnlockableItem* create();

    /**
     * @note[short] MacOS (ARM): 0x812a0
     * @note[short] MacOS (Intel): 0x8fc30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
};
