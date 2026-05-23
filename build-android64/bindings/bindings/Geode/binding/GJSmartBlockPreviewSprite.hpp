#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartBlockPreviewSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreviewSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreviewSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJSmartBlockPreviewSprite();

    /**
     * @note[short] MacOS (ARM): 0x39bb90
     * @note[short] MacOS (Intel): 0x429210
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x90ec
     * @note[short] Android
     */
    static GJSmartBlockPreviewSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x39c174
     * @note[short] MacOS (Intel): 0x429800
     * @note[short] Windows: 0x77de0
     * @note[short] iOS: 0x962c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x39c178
     * @note[short] MacOS (Intel): 0x429810
     * @note[short] Windows: 0x2b6970
     * @note[short] iOS: 0x9630
     * @note[short] Android
     */
    virtual void visit();
};
