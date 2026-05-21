#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>

class FMODLevelVisualizer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODLevelVisualizer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODLevelVisualizer, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x24e854
     * @note[short] MacOS (Intel): 0x2b0720
     * @note[short] Windows: 0x29e7b0
     * @note[short] iOS: 0x2e0eb4
     * @note[short] Android
     */
    static FMODLevelVisualizer* create();

    /**
     * @note[short] MacOS (ARM): 0x24e8dc
     * @note[short] MacOS (Intel): 0x2b0790
     * @note[short] Windows: 0x29e830
     * @note[short] iOS: 0x2e0f30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x24ed40
     * @note[short] MacOS (Intel): 0x2b0ba0
     * @note[short] Windows: 0x29ecf0
     * @note[short] iOS: 0x2e130c
     * @note[short] Android
     */
    void updateVisualizer(float volume, float peak, float time);
    float m_width;
};
