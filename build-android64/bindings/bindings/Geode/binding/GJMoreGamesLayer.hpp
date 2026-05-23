#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class GJMoreGamesLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "GJMoreGamesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMoreGamesLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x69d090
     * @note[short] MacOS (Intel): 0x794d10
     * @note[short] Windows: 0x27ff40
     * @note[short] iOS: 0x64ca8
     * @note[short] Android
     */
    static GJMoreGamesLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x69d770
     * @note[short] MacOS (Intel): 0x7954f0
     * @note[short] Windows: 0x280620
     * @note[short] iOS: 0x652ac
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x69d3e0
     * @note[short] MacOS (Intel): 0x795150
     * @note[short] Windows: 0x280280
     * @note[short] iOS: 0x64ee4
     * @note[short] Android
     */
    cocos2d::CCArray* getMoreGamesList();
    cocos2d::CCArray* m_moreGamesList;
};
