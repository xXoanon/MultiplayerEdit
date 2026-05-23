#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAlertCircle : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCAlertCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAlertCircle, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x13f0a4
     * @note[short] MacOS (Intel): 0x178f40
     * @note[short] Android
     */
    static CCAlertCircle* create();

    /**
     * @note[short] MacOS (ARM): 0x13f188
     * @note[short] MacOS (Intel): 0x179020
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x13f234
     * @note[short] MacOS (Intel): 0x1790b0
     * @note[short] Android
     */
    virtual void draw();
    CCCircleAlert* m_circleAlert;
};
