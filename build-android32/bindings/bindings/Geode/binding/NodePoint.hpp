#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class NodePoint : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "NodePoint";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(NodePoint, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NodePoint();

    /**
     * @note[short] MacOS (ARM): 0xe1468
     * @note[short] MacOS (Intel): 0x102c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static NodePoint* create(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0xe151c
     * @note[short] MacOS (Intel): 0x102d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint point);
    cocos2d::CCPoint m_point;
};
