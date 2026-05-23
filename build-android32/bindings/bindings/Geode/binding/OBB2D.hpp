#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class OBB2D : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "OBB2D";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(OBB2D, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x51cafc
     * @note[short] MacOS (Intel): 0x5f34f0
     * @note[short] Windows: 0x6d8b0
     * @note[short] iOS: 0x12cb54
     * @note[short] Android
     */
    static OBB2D* create(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x51cc80
     * @note[short] MacOS (Intel): 0x5f3620
     * @note[short] Windows: 0x6da80
     * @note[short] iOS: 0x12cd40
     * @note[short] Android
     */
    void calculateWithCenter(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x51cdf8
     * @note[short] MacOS (Intel): 0x5f37d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12ceb8
     * @note[short] Android
     */
    void computeAxes();

    /**
     * @note[short] MacOS (ARM): 0x51d418
     * @note[short] MacOS (Intel): 0x5f3ed0
     * @note[short] Windows: 0x6e270
     * @note[short] iOS: 0x12d22c
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();

    /**
     * @note[short] MacOS (ARM): 0x51cc00
     * @note[short] MacOS (Intel): 0x5f35b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12ccc0
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x51cef8
     * @note[short] MacOS (Intel): 0x5f3930
     * @note[short] Windows: 0x6dda0
     * @note[short] iOS: 0x12cf98
     * @note[short] Android
     */
    void orderCorners();

    /**
     * @note[short] MacOS (ARM): 0x51d28c
     * @note[short] MacOS (Intel): 0x5f3cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x12d14c
     * @note[short] Android
     */
    bool overlaps(OBB2D* other);

    /**
     * @note[short] MacOS (ARM): 0x51d2c8
     * @note[short] MacOS (Intel): 0x5f3ce0
     * @note[short] Windows: 0x6e130
     * @note[short] iOS: 0x12d188
     * @note[short] Android
     */
    bool overlaps1Way(OBB2D* other);
    std::array<cocos2d::CCPoint, 4> m_corners;
    std::array<cocos2d::CCPoint, 4> m_positions;
    std::array<cocos2d::CCPoint, 4> m_edges;
    std::array<double, 2> m_projections;
    cocos2d::CCPoint m_center;
};
