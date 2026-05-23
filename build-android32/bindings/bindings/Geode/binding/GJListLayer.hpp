#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x4feb80
     * @note[short] MacOS (Intel): 0x5d25e0
     * @note[short] Windows: 0x27f7a0
     * @note[short] iOS: 0x7f904
     * @note[short] Android
     */
    static GJListLayer* create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, int type);

    /**
     * @note[short] MacOS (ARM): 0x4fec74
     * @note[short] MacOS (Intel): 0x5d26f0
     * @note[short] Windows: 0x27f8d0
     * @note[short] iOS: 0x7f9f8
     * @note[short] Android
     */
    bool init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, int type);
    BoomListView* m_listView;
};
