#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "RingObject.hpp"

class TeleportPortalObject : public RingObject {
public:
    static constexpr auto CLASS_NAME = "TeleportPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TeleportPortalObject, RingObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x399ac4
     * @note[short] Android: Out of line
     */
     TeleportPortalObject();

    /**
     * @note[short] MacOS (ARM): 0x1765dc
     * @note[short] MacOS (Intel): 0x1bdb40
     * @note[short] Windows: 0x4b21c0
     * @note[short] iOS: 0x38785c
     * @note[short] Android
     */
    static TeleportPortalObject* create(char const* frame, bool trigger);

    /**
     * @note[short] MacOS (ARM): 0x17693c
     * @note[short] MacOS (Intel): 0x1bdee0
     * @note[short] Windows: 0x4b23a0
     * @note[short] iOS: 0x387a98
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x1769e8
     * @note[short] MacOS (Intel): 0x1bdf90
     * @note[short] Windows: 0x4b2520
     * @note[short] iOS: 0x387b44
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x1767a0
     * @note[short] MacOS (Intel): 0x1bdd40
     * @note[short] Windows: 0x4b22e0
     * @note[short] iOS: 0x387908
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x178878
     * @note[short] MacOS (Intel): 0x1c0740
     * @note[short] Windows: 0x4b3050
     * @note[short] iOS: 0x3884d4
     * @note[short] Android: Rebinded
     */
    virtual void customObjectSetup(gd::vector<gd::string>& values, gd::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x176b4c
     * @note[short] MacOS (Intel): 0x1be0e0
     * @note[short] Windows: 0x4b2710
     * @note[short] iOS: 0x387ca4
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x176a68
     * @note[short] MacOS (Intel): 0x1be020
     * @note[short] Windows: 0x4b25d0
     * @note[short] iOS: 0x387bc4
     * @note[short] Android
     */
    virtual int addToGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x176ae4
     * @note[short] MacOS (Intel): 0x1be080
     * @note[short] Windows: 0x4b2680
     * @note[short] iOS: 0x387c3c
     * @note[short] Android
     */
    virtual void removeFromGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x176a5c
     * @note[short] MacOS (Intel): 0x1bdff0
     * @note[short] Windows: 0x3a3840
     * @note[short] iOS: 0x387bb8
     * @note[short] Android
     */
    virtual void setRotation2(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x176a60
     * @note[short] MacOS (Intel): 0x1be000
     * @note[short] Windows: 0x4b25b0
     * @note[short] iOS: 0x387bbc
     * @note[short] Android
     */
    virtual void addToGroup2(int id);

    /**
     * @note[short] MacOS (ARM): 0x176a64
     * @note[short] MacOS (Intel): 0x1be010
     * @note[short] Windows: 0x4b25c0
     * @note[short] iOS: 0x387bc0
     * @note[short] Android
     */
    virtual void removeFromGroup2(int id);

    /**
     * @note[short] MacOS (ARM): 0x176868
     * @note[short] MacOS (Intel): 0x1bde10
     * @note[short] Windows: 0x4b2440
     * @note[short] iOS: 0x3879d0
     * @note[short] Android
     */
    float getTeleportXOff(cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x176710
     * @note[short] MacOS (Intel): 0x1bdca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame, bool trigger);

    /**
     * @note[short] MacOS (ARM): 0x17679c
     * @note[short] MacOS (Intel): 0x1bdd30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setPositionOverride(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x176764
     * @note[short] MacOS (Intel): 0x1bdd00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setStartPosOverride(cocos2d::CCPoint position);
    TeleportPortalObject* m_orangePortal;
    bool m_isYellowPortal;
    float m_teleportYOffset;
    bool m_teleportEase;
    bool m_staticForceEnabled;
    float m_staticForce;
    bool m_redirectForceEnabled;
    float m_redirectForceMod;
    float m_redirectForceMin;
    float m_redirectForceMax;
    bool m_saveOffset;
    bool m_ignoreX;
    bool m_ignoreY;
    int m_gravityMode;
    bool m_staticForceAdditive;
    bool m_instantCamera;
    bool m_snapGround;
    bool m_redirectDash;
    cocos2d::CCPoint m_teleportPosition;
};
