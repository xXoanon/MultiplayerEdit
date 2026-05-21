#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCCircleWave.hpp"

class CCCircleAlert : public CCCircleWave {
public:
    static constexpr auto CLASS_NAME = "CCCircleAlert";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCCircleAlert, CCCircleWave)

    /**
     * @note[short] MacOS (ARM): 0x13edf0
     * @note[short] MacOS (Intel): 0x178ca0
     * @note[short] Android
     */
    static CCCircleAlert* create(float duration, float startRadius, float endRadius);

    /**
     * @note[short] MacOS (ARM): 0x13efac
     * @note[short] MacOS (Intel): 0x178e50
     * @note[short] Android
     */
    bool init(float duration, float startRadius, float endRadius);
};
