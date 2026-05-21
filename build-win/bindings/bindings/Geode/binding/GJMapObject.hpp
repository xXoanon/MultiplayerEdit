#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMapObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x20a554
     * @note[short] MacOS (Intel): 0x266a50
     * @note[short] Android
     */
    static GJMapObject* create(cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x20a720
     * @note[short] MacOS (Intel): 0x266c20
     * @note[short] Android
     */
    static GJMapObject* createMonster(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x20a620
     * @note[short] MacOS (Intel): 0x266b20
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x20b260
     * @note[short] MacOS (Intel): 0x267800
     * @note[short] Android
     */
    void monsterIdle();

    /**
     * @note[short] MacOS (ARM): 0x20b060
     * @note[short] MacOS (Intel): 0x2675f0
     * @note[short] Android
     */
    void monsterJump();

    /**
     * @note[short] MacOS (ARM): 0x20afe0
     * @note[short] MacOS (Intel): 0x267570
     * @note[short] Android
     */
    void moveFinished();

    /**
     * @note[short] MacOS (ARM): 0x20ae54
     * @note[short] MacOS (Intel): 0x2673d0
     * @note[short] Android
     */
    void moveMonster();

    /**
     * @note[short] MacOS (ARM): 0x20ae94
     * @note[short] MacOS (Intel): 0x267410
     * @note[short] Android
     */
    void moveMonster(cocos2d::CCPoint position, float offset);

    /**
     * @note[short] MacOS (ARM): 0x20abd8
     * @note[short] MacOS (Intel): 0x267120
     * @note[short] Android
     */
    void playerJump();

    /**
     * @note[short] MacOS (ARM): 0x20ae18
     * @note[short] MacOS (Intel): 0x267390
     * @note[short] Android
     */
    void setObjectOrigin(cocos2d::CCPoint position, float offset);

    /**
     * @note[short] MacOS (ARM): 0x20aa1c
     * @note[short] MacOS (Intel): 0x266f20
     * @note[short] Android
     */
    void startMonsterJumpLoop();

    /**
     * @note[short] MacOS (ARM): 0x20ab80
     * @note[short] MacOS (Intel): 0x2670d0
     * @note[short] Android
     */
    void startPlayerJumpLoop();

    /**
     * @note[short] MacOS (ARM): 0x20b4c4
     * @note[short] MacOS (Intel): 0x267aa0
     * @note[short] Android
     */
    void touchMonster();

    /**
     * @note[short] MacOS (ARM): 0x20a9bc
     * @note[short] MacOS (Intel): 0x266ec0
     * @note[short] Android
     */
    void updateShadow(float scaleX, float scaleY, cocos2d::CCPoint position);
    float m_jumpStopTime;
    cocos2d::CCNode* m_mainNode;
    cocos2d::CCSprite* m_shadowSprite;
    cocos2d::CCPoint m_objectOrigin;
    float m_objectOffset;
    bool m_monsterIdle;
    bool m_monsterMoving;
    float m_moveStopTime;
    int m_monstersTouched;
};
