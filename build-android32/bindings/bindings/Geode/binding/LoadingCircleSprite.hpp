#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircleSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "LoadingCircleSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircleSprite, cocos2d::CCSprite)

    /**
Create a Loading Circle Sprite with a spinning action

 @param spinSpeed A speed modifier, higher is faster and lower is slo     * @note[short] MacOS (ARM): 0x41f444
     * @note[short] MacOS (Intel): 0x4bf520
     * @note[short] Windows: 0x6bc60
     * @note[short] iOS: 0x39a26c
     * @note[short] Android
     */
    static LoadingCircleSprite* create(float spinSpeed);

    /**
     * @note[short] MacOS (ARM): 0x41f5c0
     * @note[short] MacOS (Intel): 0x4bf6c0
     * @note[short] Windows: 0x6bd60
     * @note[short] iOS: 0x39a398
     * @note[short] Android
     */
    cocos2d::CCAction* fadeInCircle(bool resetOpacity, float duration, float opacity);

    /**
     * @note[short] MacOS (ARM): 0x41f64c
     * @note[short] MacOS (Intel): 0x4bf740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39a424
     * @note[short] Android
     */
    void hideCircle();

    /**
     * @note[short] MacOS (ARM): 0x41f528
     * @note[short] MacOS (Intel): 0x4bf600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39a304
     * @note[short] Android
     */
    bool init(float spinSpeed);
};
