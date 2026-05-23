#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectToolbox : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectToolbox";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectToolbox, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x589018
     * @note[short] MacOS (Intel): 0x66a410
     * @note[short] Windows: 0x348cb0
     * @note[short] iOS: 0x277a40
     * @note[short] Android
     */
    static ObjectToolbox* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x589140
     * @note[short] MacOS (Intel): 0x66a550
     * @note[short] Windows: 0x348d70
     * @note[short] iOS: 0x277b24
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x631d60
     * @note[short] MacOS (Intel): 0x71a390
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* allKeys();

    /**
     * @note[short] MacOS (ARM): 0x631e4c
     * @note[short] MacOS (Intel): 0x71a470
     * @note[short] Windows: 0x370ba0
     * @note[short] iOS: 0x2ab6bc
     * @note[short] Android
     */
    float gridNodeSizeForKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x631d68
     * @note[short] MacOS (Intel): 0x71a3a0
     * @note[short] Windows: 0x370b70
     * @note[short] iOS: 0x2ab668
     * @note[short] Android
     */
    const char* intKeyToFrame(int key);

    /**
     * @note[short] MacOS (ARM): 0x631f30
     * @note[short] MacOS (Intel): 0x71de30
     * @note[short] Windows: 0x3715c0
     * @note[short] iOS: 0x2aba2c
     * @note[short] Android
     */
    const char* perspectiveBlockFrame(int key);
    gd::map<int, gd::string> m_allKeys;
};
