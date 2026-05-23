#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PointNode : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "PointNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PointNode, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PointNode();

    /**
     * @note[short] MacOS (ARM): 0x8e2fc
     * @note[short] MacOS (Intel): 0x9d9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5e098
     * @note[short] Android
     */
    static PointNode* create(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x8e638
     * @note[short] MacOS (Intel): 0x9dd40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint point);
    cocos2d::CCPoint m_point;
};
