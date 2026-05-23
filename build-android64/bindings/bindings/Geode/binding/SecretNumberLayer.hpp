#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SecretNumberLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretNumberLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretNumberLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x404dd4
     * @note[short] MacOS (Intel): 0x4a1230
     * @note[short] Windows: 0x3e9960
     * @note[short] iOS: 0x30c95c
     * @note[short] Android
     */
    static SecretNumberLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x406eb0
     * @note[short] MacOS (Intel): 0x4a3240
     * @note[short] Windows: 0x3ed00
     * @note[short] iOS: 0x30dc20
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x404e78
     * @note[short] MacOS (Intel): 0x4a12e0
     * @note[short] Windows: 0x3e9a20
     * @note[short] iOS: 0x30c9f4
     * @note[short] Android
     */
    void playNumberEffect(int secretNumber);
};
