#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SimpleObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SimpleObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SimpleObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SimpleObject();

    /**
     * @note[short] MacOS (ARM): 0x273858
     * @note[short] MacOS (Intel): 0x2d9200
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SimpleObject* create();

    /**
     * @note[short] MacOS (ARM): 0x2738b0
     * @note[short] MacOS (Intel): 0x2d9250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
    cocos2d::ccColor3B m_color;
};
