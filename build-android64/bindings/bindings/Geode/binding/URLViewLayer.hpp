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

class URLViewLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "URLViewLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLViewLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x253a48
     * @note[short] MacOS (Intel): 0x2b6030
     * @note[short] Windows: 0x2a4a70
     * @note[short] iOS: 0x2e4f44
     * @note[short] Android: Rebinded
     */
    static URLViewLayer* create(gd::string title, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x253bf8
     * @note[short] MacOS (Intel): 0x2b6220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e5060
     * @note[short] Android: Rebinded
     */
    bool init(gd::string title, cocos2d::CCArray* objects);
    cocos2d::CCArray* m_urlObjects;
};
