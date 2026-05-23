#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class HardStreak : public cocos2d::CCDrawNode {
public:
    static constexpr auto CLASS_NAME = "HardStreak";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(HardStreak, cocos2d::CCDrawNode)

    /**
     * @note[short] MacOS (ARM): 0x8d808
     * @note[short] MacOS (Intel): 0x9cd60
     * @note[short] Windows: 0x2b8d40
     * @note[short] iOS: 0x5d7ac
     * @note[short] Android
     */
    static HardStreak* create();

    /**
     * @note[short] MacOS (ARM): 0x8d8d0
     * @note[short] MacOS (Intel): 0x9ce30
     * @note[short] Windows: 0x2b8e00
     * @note[short] iOS: 0x5d820
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x8e1a4
     * @note[short] MacOS (Intel): 0x9d8a0
     * @note[short] Windows: 0x2b9800
     * @note[short] iOS: 0x5df7c
     * @note[short] Android
     */
    void addPoint(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x8e448
     * @note[short] MacOS (Intel): 0x9db20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5e1dc
     * @note[short] Android
     */
    void clearAboveXPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x8e3b0
     * @note[short] MacOS (Intel): 0x9da80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5e144
     * @note[short] Android
     */
    void clearBehindXPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x8e514
     * @note[short] MacOS (Intel): 0x9dbf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5e274
     * @note[short] Android
     */
    HardStreak* createDuplicate();

    /**
     * @note[short] MacOS (ARM): 0x8d990
     * @note[short] MacOS (Intel): 0x9cf10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5d860
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x8e4e0
     * @note[short] MacOS (Intel): 0x9dbc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double normalizeAngle(double angle);

    /**
     * @note[short] MacOS (ARM): 0x8e1e4
     * @note[short] MacOS (Intel): 0x9d8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5dfbc
     * @note[short] Android
     */
    cocos2d::CCPoint quadCornerOffset(cocos2d::CCPoint start, cocos2d::CCPoint end, float width);

    /**
     * @note[short] MacOS (ARM): 0x8e180
     * @note[short] MacOS (Intel): 0x9d880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5df58
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x8e138
     * @note[short] MacOS (Intel): 0x9d820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5df10
     * @note[short] Android
     */
    void resumeStroke();

    /**
     * @note[short] MacOS (ARM): 0x8da2c
     * @note[short] MacOS (Intel): 0x9cfc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5d8e4
     * @note[short] Android
     */
    void scheduleAutoUpdate();

    /**
     * @note[short] MacOS (ARM): 0x8e144
     * @note[short] MacOS (Intel): 0x9d840
     * @note[short] Windows: 0x2b8eb0
     * @note[short] iOS: 0x5df1c
     * @note[short] Android
     */
    void stopStroke();

    /**
     * @note[short] MacOS (ARM): 0x8da3c
     * @note[short] MacOS (Intel): 0x9cfe0
     * @note[short] Windows: 0x2b8ef0
     * @note[short] iOS: 0x5d8f4
     * @note[short] Android
     */
    void updateStroke(float dt);
    cocos2d::CCArray* m_pointArray;
    cocos2d::CCPoint m_currentPoint;
    float m_waveSize;
    float m_pulseSize;
    bool m_isSolid;
    bool m_isFlipped;
    bool m_drawStreak;
};
