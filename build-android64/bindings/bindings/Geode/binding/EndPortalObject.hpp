#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class EndPortalObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EndPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndPortalObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EndPortalObject();

    /**
     * @note[short] MacOS (ARM): 0x3218d8
     * @note[short] MacOS (Intel): 0x39c380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fe66c
     * @note[short] Android
     */
    static EndPortalObject* create();

    /**
     * @note[short] MacOS (ARM): 0x321974
     * @note[short] MacOS (Intel): 0x39c420
     * @note[short] Windows: 0x137d50
     * @note[short] iOS: 0x3fe6fc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x321de4
     * @note[short] MacOS (Intel): 0x39c910
     * @note[short] Windows: 0x138260
     * @note[short] iOS: 0x3feb6c
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x321edc
     * @note[short] MacOS (Intel): 0x39ca20
     * @note[short] Windows: 0x1383c0
     * @note[short] iOS: 0x3fec64
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x321d80
     * @note[short] MacOS (Intel): 0x39c890
     * @note[short] Windows: 0x1381a0
     * @note[short] iOS: 0x3feb08
     * @note[short] Android
     */
    cocos2d::CCPoint getSpawnPos();

    /**
     * @note[short] MacOS (ARM): 0x321d10
     * @note[short] MacOS (Intel): 0x39c810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fea98
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x321c44
     * @note[short] MacOS (Intel): 0x39c750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fe9cc
     * @note[short] Android
     */
    void updateColors(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x321f40
     * @note[short] MacOS (Intel): 0x39ca80
     * @note[short] Windows: 0x138410
     * @note[short] iOS: 0x3fecc8
     * @note[short] Android
     */
    void updateEndPos(bool updateParticle);
    cocos2d::CCSprite* m_gradientBar;
    bool m_flippedX;
    bool m_startPosHeightRelated;
};
