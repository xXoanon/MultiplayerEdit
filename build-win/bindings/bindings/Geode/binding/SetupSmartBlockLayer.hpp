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
#include "SelectArtDelegate.hpp"

class SetupSmartBlockLayer : public FLAlertLayer, public TextInputDelegate, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSmartBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartBlockLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x440a40
     * @note[short] MacOS (Intel): 0x4e5c20
     * @note[short] Windows: 0x4568d0
     * @note[short] iOS: 0x6f020
     * @note[short] Android
     */
    static SetupSmartBlockLayer* create(SmartGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x44211c
     * @note[short] MacOS (Intel): 0x4e7620
     * @note[short] Windows: 0x458a70
     * @note[short] iOS: 0x70478
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4420b8
     * @note[short] MacOS (Intel): 0x4e7590
     * @note[short] Windows: 0x8baf0
     * @note[short] iOS: 0x70414
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x442104
     * @note[short] MacOS (Intel): 0x4e75f0
     * @note[short] Windows: 0x458a30
     * @note[short] iOS: 0x70460
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x441794
     * @note[short] MacOS (Intel): 0x4e6b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x6fbe0
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x440b78
     * @note[short] MacOS (Intel): 0x4e5da0
     * @note[short] Windows: 0x456a10
     * @note[short] iOS: 0x6f110
     * @note[short] Android
     */
    bool init(SmartGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x441f88
     * @note[short] MacOS (Intel): 0x4e7450
     * @note[short] Windows: 0x457af0
     * @note[short] iOS: 0x702e4
     * @note[short] Android
     */
    void onAllowFlipping(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x441f4c
     * @note[short] MacOS (Intel): 0x4e7410
     * @note[short] Windows: 0x457a70
     * @note[short] iOS: 0x702a8
     * @note[short] Android
     */
    void onAllowRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x441858
     * @note[short] MacOS (Intel): 0x4e6c30
     * @note[short] Windows: 0x4583d0
     * @note[short] iOS: 0x6fca0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4418f8
     * @note[short] MacOS (Intel): 0x4e6ce0
     * @note[short] Windows: 0x458490
     * @note[short] iOS: 0x6fd40
     * @note[short] Android
     */
    void onCreate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x441ca0
     * @note[short] MacOS (Intel): 0x4e7130
     * @note[short] Windows: 0x458120
     * @note[short] iOS: 0x700b4
     * @note[short] Android
     */
    void onCreateAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4419e4
     * @note[short] MacOS (Intel): 0x4e6df0
     * @note[short] Windows: 0x4588c0
     * @note[short] iOS: 0x6fe1c
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x442080
     * @note[short] MacOS (Intel): 0x4e7550
     * @note[short] Windows: 0x457c30
     * @note[short] iOS: 0x703dc
     * @note[short] Android
     */
    void onDontDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x44200c
     * @note[short] MacOS (Intel): 0x4e74d0
     * @note[short] Windows: 0x457ca0
     * @note[short] iOS: 0x70368
     * @note[short] Android
     */
    void onIgnoreCorners(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x442048
     * @note[short] MacOS (Intel): 0x4e7510
     * @note[short] Windows: 0x457bc0
     * @note[short] iOS: 0x703a4
     * @note[short] Android
     */
    void onNearbyReference(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x441ac8
     * @note[short] MacOS (Intel): 0x4e6ef0
     * @note[short] Windows: 0x457d20
     * @note[short] iOS: 0x6ff00
     * @note[short] Android
     */
    void onPasteTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x441ed4
     * @note[short] MacOS (Intel): 0x4e7380
     * @note[short] Windows: 0x4579e0
     * @note[short] iOS: 0x70230
     * @note[short] Android
     */
    void onReferenceOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x441a5c
     * @note[short] MacOS (Intel): 0x4e6e70
     * @note[short] Windows: 0x4589c0
     * @note[short] iOS: 0x6fe94
     * @note[short] Android
     */
    void onSelectPremade(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x441aa4
     * @note[short] MacOS (Intel): 0x4e6ec0
     * @note[short] Windows: 0x458a40
     * @note[short] iOS: 0x6fedc
     * @note[short] Android
     */
    void onSelectTemplate(cocos2d::CCObject* sender);
    bool m_referenceOnly;
    bool m_allowRotation;
    bool m_allowFlipX;
    bool m_allowFlipY;
    bool m_useNearby;
    bool m_dontDelete;
    bool m_ignoreCorners;
    int m_specialTemplate;
    SmartGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
};
