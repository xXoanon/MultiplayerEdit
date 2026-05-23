#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJCommentListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJCommentListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJCommentListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x23dec8
     * @note[short] MacOS (Intel): 0x29e7e0
     * @note[short] Windows: 0x291cb0
     * @note[short] iOS: 0x2d4b34
     * @note[short] Android
     */
    static GJCommentListLayer* create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);

    /**
     * @note[short] MacOS (ARM): 0x23dfc0
     * @note[short] MacOS (Intel): 0x29e8f0
     * @note[short] Windows: 0x291dd0
     * @note[short] iOS: 0x2d4c18
     * @note[short] Android
     */
    bool init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);
    BoomListView* m_list;
};
