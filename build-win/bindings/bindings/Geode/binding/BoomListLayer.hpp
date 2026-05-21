#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "BoomListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x3d5b84
     * @note[short] MacOS (Intel): 0x46def0
     * @note[short] Android
     */
    static BoomListLayer* create(BoomListView* listView, char const* title);

    /**
     * @note[short] MacOS (ARM): 0x3d5c60
     * @note[short] MacOS (Intel): 0x46dfe0
     * @note[short] Android
     */
    bool init(BoomListView* listView, char const* title);
};
