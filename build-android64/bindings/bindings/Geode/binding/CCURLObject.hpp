#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCURLObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCURLObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCURLObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x2fff74
     * @note[short] MacOS (Intel): 0x3768e0
     * @note[short] Windows: 0x17b2c0
     * @note[short] iOS: 0x311b9c
     * @note[short] Android: Rebinded
     */
    static CCURLObject* create(gd::string name, gd::string url);

    /**
     * @note[short] MacOS (ARM): 0x3000f0
     * @note[short] MacOS (Intel): 0x376a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    bool init(gd::string name, gd::string url);
    gd::string m_name;
    gd::string m_url;
};
