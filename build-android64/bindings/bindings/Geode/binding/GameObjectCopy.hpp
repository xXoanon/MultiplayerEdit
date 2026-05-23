#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameObjectCopy : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GameObjectCopy";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameObjectCopy, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0xc8a08
     * @note[short] MacOS (Intel): 0xe3230
     * @note[short] Windows: 0x2e8940
     * @note[short] iOS: 0x35c1d8
     * @note[short] Android
     */
    static GameObjectCopy* create(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdfb40
     * @note[short] MacOS (Intel): 0x100a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36945c
     * @note[short] Android
     */
    bool init(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xc8b20
     * @note[short] MacOS (Intel): 0xe3350
     * @note[short] Windows: 0x2e8a40
     * @note[short] iOS: 0x35c264
     * @note[short] Android
     */
    void resetObject();
    GameObject* m_object;
    cocos2d::CCPoint m_position;
    float m_rotationX;
    float m_rotationY;
    bool m_isFlipX;
    bool m_isFlipY;
    float m_customScaleX;
    float m_customScaleY;
};
