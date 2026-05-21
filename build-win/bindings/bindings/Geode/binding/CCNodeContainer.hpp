#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCNodeContainer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCNodeContainer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCNodeContainer, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0xeeba4
     * @note[short] MacOS (Intel): 0x113de0
     * @note[short] Windows: 0x248ca0
     * @note[short] iOS: 0x1dd754
     * @note[short] Android
     */
    static CCNodeContainer* create();

    /**
     * @note[short] MacOS (ARM): 0x1329bc
     * @note[short] MacOS (Intel): 0x165150
     * @note[short] Windows: 0x77de0
     * @note[short] iOS: 0x20911c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1329c0
     * @note[short] MacOS (Intel): 0x165160
     * @note[short] Windows: 0x248d70
     * @note[short] iOS: 0x209120
     * @note[short] Android
     */
    virtual void visit();
};
