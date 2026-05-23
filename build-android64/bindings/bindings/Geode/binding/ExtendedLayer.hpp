#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExtendedLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ExtendedLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExtendedLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ExtendedLayer();

    /**
     * @note[short] MacOS (ARM): 0x32998c
     * @note[short] MacOS (Intel): 0x3a4fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12b2f8
     * @note[short] Android
     */
    static ExtendedLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x32bc8c
     * @note[short] MacOS (Intel): 0x3a7530
     * @note[short] Windows: 0x3ed00
     * @note[short] iOS: 0x12c9b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x32bc90
     * @note[short] MacOS (Intel): 0x3a7540
     * @note[short] Windows: 0x3ed20
     * @note[short] iOS: 0x12c9b4
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);
    BoomScrollLayerDelegate* m_delegate;
};
