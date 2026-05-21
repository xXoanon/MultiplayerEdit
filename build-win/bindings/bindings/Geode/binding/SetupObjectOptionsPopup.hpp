#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class SetupObjectOptionsPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptionsPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupObjectOptionsPopup();

    /**
     * @note[short] MacOS (ARM): 0x2a6754
     * @note[short] MacOS (Intel): 0x317cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f158
     * @note[short] Android: Rebinded
     */
     ~SetupObjectOptionsPopup();

    /**
     * @note[short] MacOS (ARM): 0x2a5d0c
     * @note[short] MacOS (Intel): 0x317090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e99c
     * @note[short] Android
     */
    static SetupObjectOptionsPopup* create(GameObject* object, cocos2d::CCArray* objects, SetGroupIDLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2a92dc
     * @note[short] MacOS (Intel): 0x31b0e0
     * @note[short] Windows: 0x257300
     * @note[short] iOS: 0x415c8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a9300
     * @note[short] MacOS (Intel): 0x31b120
     * @note[short] Windows: 0x8baf0
     * @note[short] iOS: 0x415ec
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x2a902c
     * @note[short] MacOS (Intel): 0x31acd0
     * @note[short] Windows: 0x3ff910
     * @note[short] iOS: 0x413e4
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2a934c
     * @note[short] MacOS (Intel): 0x31b180
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x41638
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a6988
     * @note[short] MacOS (Intel): 0x318040
     * @note[short] Windows: 0x3fdf30
     * @note[short] iOS: 0x3f218
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects, SetGroupIDLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2a8980
     * @note[short] MacOS (Intel): 0x31a550
     * @note[short] Windows: 0x400140
     * @note[short] iOS: 0x40d98
     * @note[short] Android
     */
    void onAlwaysHide(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8e90
     * @note[short] MacOS (Intel): 0x31ab10
     * @note[short] Windows: 0x400530
     * @note[short] iOS: 0x41260
     * @note[short] Android
     */
    void onApplyScaleStick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8b90
     * @note[short] MacOS (Intel): 0x31a7b0
     * @note[short] Windows: 0x400a10
     * @note[short] iOS: 0x40f90
     * @note[short] Android
     */
    void onCenterEffect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8d1c
     * @note[short] MacOS (Intel): 0x31a960
     * @note[short] Windows: 0x400020
     * @note[short] iOS: 0x41104
     * @note[short] Android
     */
    void onDisableGlow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a87c4
     * @note[short] MacOS (Intel): 0x31a390
     * @note[short] Windows: 0x3ffe70
     * @note[short] iOS: 0x40c44
     * @note[short] Android
     */
    void onDisableObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a85bc
     * @note[short] MacOS (Intel): 0x31a150
     * @note[short] Windows: 0x400380
     * @note[short] iOS: 0x40a5c
     * @note[short] Android
     */
    void onDontBoost(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8638
     * @note[short] MacOS (Intel): 0x31a1e0
     * @note[short] Windows: 0x400410
     * @note[short] iOS: 0x40ad0
     * @note[short] Android
     */
    void onDontBoostX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a83cc
     * @note[short] MacOS (Intel): 0x319f10
     * @note[short] Windows: 0x3ffcc0
     * @note[short] iOS: 0x4088c
     * @note[short] Android
     */
    void onDontEnter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8350
     * @note[short] MacOS (Intel): 0x319e80
     * @note[short] Windows: 0x3ffc30
     * @note[short] iOS: 0x40818
     * @note[short] Android
     */
    void onDontFade(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8af4
     * @note[short] MacOS (Intel): 0x31a700
     * @note[short] Windows: 0x400770
     * @note[short] iOS: 0x40ef4
     * @note[short] Android
     */
    void onExtendedCollision(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8a78
     * @note[short] MacOS (Intel): 0x31a670
     * @note[short] Windows: 0x4002f0
     * @note[short] iOS: 0x40e80
     * @note[short] Android
     */
    void onExtraSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8ca0
     * @note[short] MacOS (Intel): 0x31a8d0
     * @note[short] Windows: 0x3fff90
     * @note[short] iOS: 0x41090
     * @note[short] Android
     */
    void onGripSlope(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8448
     * @note[short] MacOS (Intel): 0x319fa0
     * @note[short] Windows: 0x3ffd50
     * @note[short] iOS: 0x40900
     * @note[short] Android
     */
    void onHideEffects(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8748
     * @note[short] MacOS (Intel): 0x31a300
     * @note[short] Windows: 0x4006e0
     * @note[short] iOS: 0x40bd0
     * @note[short] Android
     */
    void onHighDetail(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8c24
     * @note[short] MacOS (Intel): 0x31a840
     * @note[short] Windows: 0x3ffba0
     * @note[short] iOS: 0x4101c
     * @note[short] Android
     */
    void onIceBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8f0c
     * @note[short] MacOS (Intel): 0x31aba0
     * @note[short] Windows: 0x4004a0
     * @note[short] iOS: 0x412d4
     * @note[short] Android
     */
    void onNoAudioScale(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a89fc
     * @note[short] MacOS (Intel): 0x31a5e0
     * @note[short] Windows: 0x4001d0
     * @note[short] iOS: 0x40e0c
     * @note[short] Android
     */
    void onNonStickX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8e14
     * @note[short] MacOS (Intel): 0x31aa80
     * @note[short] Windows: 0x400260
     * @note[short] iOS: 0x411ec
     * @note[short] Android
     */
    void onNonStickY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8d98
     * @note[short] MacOS (Intel): 0x31a9f0
     * @note[short] Windows: 0x3ffde0
     * @note[short] iOS: 0x41178
     * @note[short] Android
     */
    void onNoParticle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8904
     * @note[short] MacOS (Intel): 0x31a4c0
     * @note[short] Windows: 0x4000b0
     * @note[short] iOS: 0x40d24
     * @note[short] Android
     */
    void onPassable(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8f88
     * @note[short] MacOS (Intel): 0x31ac30
     * @note[short] Windows: 0x4008a0
     * @note[short] iOS: 0x41348
     * @note[short] Android
     */
    void onReverse(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a86b4
     * @note[short] MacOS (Intel): 0x31a270
     * @note[short] Windows: 0x400960
     * @note[short] iOS: 0x40b44
     * @note[short] Android
     */
    void onSinglePlayerTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a8540
     * @note[short] MacOS (Intel): 0x31a0c0
     * @note[short] Windows: 0x400650
     * @note[short] iOS: 0x409e8
     * @note[short] Android
     */
    void onToggleAreaParent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a84c4
     * @note[short] MacOS (Intel): 0x31a030
     * @note[short] Windows: 0x4005c0
     * @note[short] iOS: 0x40974
     * @note[short] Android
     */
    void onToggleGroupParent(cocos2d::CCObject* sender);
    GameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    bool m_iceBlock;
    bool m_dontFade;
    bool m_dontEnter;
    bool m_noEffects;
    bool m_noParticle;
    bool m_noTouch;
    bool m_passable;
    bool m_hide;
    bool m_nonStickX;
    bool m_nonStickY;
    bool m_extraSticky;
    bool m_dontBoostY;
    bool m_dontBoostX;
    bool m_noAudioScale;
    bool m_scaleStick;
    bool m_highDetail;
    bool m_groupParent;
    bool m_areaParent;
    bool m_gripSlope;
    bool m_noGlow;
    bool m_reverse;
    bool m_extendedCollision;
    bool m_unk2a6;
    SetGroupIDLayer* m_groupIDLayer;
    bool m_effectObject;
    bool m_singlePlayerTouch;
    bool m_centerEffect;
};
