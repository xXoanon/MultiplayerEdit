#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupShaderEffectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShaderEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShaderEffectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupShaderEffectPopup();

    /**
     * @note[short] MacOS (ARM): 0x261d84
     * @note[short] MacOS (Intel): 0x2c5ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x181bf0
     * @note[short] Android: Rebinded
     */
     ~SetupShaderEffectPopup();

    /**
     * @note[short] MacOS (ARM): 0x262018
     * @note[short] MacOS (Intel): 0x2c5ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x181cac
     * @note[short] Android
     */
    static SetupShaderEffectPopup* create(EffectGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x26bd84
     * @note[short] MacOS (Intel): 0x2d0980
     * @note[short] Windows: 0x4549f0
     * @note[short] iOS: 0x18a064
     * @note[short] Android
     */
    virtual void toggleGroup(int group, bool visible);

    /**
     * @note[short] MacOS (ARM): 0x26bdc4
     * @note[short] MacOS (Intel): 0x2d09c0
     * @note[short] Windows: 0x28f250
     * @note[short] iOS: 0x18a0a4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x26b464
     * @note[short] MacOS (Intel): 0x2d0110
     * @note[short] Windows: 0x44a5b0
     * @note[short] iOS: 0x189a48
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x26ba54
     * @note[short] MacOS (Intel): 0x2d0650
     * @note[short] Windows: 0x4545c0
     * @note[short] iOS: 0x189dcc
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2621b4
     * @note[short] MacOS (Intel): 0x2c6110
     * @note[short] Windows: 0x44a2c0
     * @note[short] iOS: 0x181d9c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x26b9e0
     * @note[short] MacOS (Intel): 0x2d05d0
     * @note[short] Windows: 0x453f20
     * @note[short] iOS: 0x189d58
     * @note[short] Android
     */
    void onResetColors(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x26b7a4
     * @note[short] MacOS (Intel): 0x2d0380
     * @note[short] Windows: 0x44b0a0
     * @note[short] iOS: 0x189bd8
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x267d80
     * @note[short] MacOS (Intel): 0x2cc6b0
     * @note[short] Windows: 0x4511a0
     * @note[short] iOS: 0x186ce4
     * @note[short] Android
     */
    void setupBulge();

    /**
     * @note[short] MacOS (ARM): 0x264d00
     * @note[short] MacOS (Intel): 0x2c9200
     * @note[short] Windows: 0x44ddd0
     * @note[short] iOS: 0x18433c
     * @note[short] Android
     */
    void setupChromatic();

    /**
     * @note[short] MacOS (ARM): 0x26525c
     * @note[short] MacOS (Intel): 0x2c9770
     * @note[short] Windows: 0x44e350
     * @note[short] iOS: 0x1847bc
     * @note[short] Android
     */
    void setupChromaticGlitch();

    /**
     * @note[short] MacOS (ARM): 0x26a128
     * @note[short] MacOS (Intel): 0x2ced30
     * @note[short] Windows: 0x453850
     * @note[short] iOS: 0x188bac
     * @note[short] Android
     */
    void setupColorChange();

    /**
     * @note[short] MacOS (ARM): 0x2646a0
     * @note[short] MacOS (Intel): 0x2c8b80
     * @note[short] Windows: 0x44d750
     * @note[short] iOS: 0x183e0c
     * @note[short] Android
     */
    void setupGlitch();

    /**
     * @note[short] MacOS (ARM): 0x269088
     * @note[short] MacOS (Intel): 0x2cdc30
     * @note[short] Windows: 0x452660
     * @note[short] iOS: 0x187d8c
     * @note[short] Android
     */
    void setupGrayscale();

    /**
     * @note[short] MacOS (ARM): 0x269e20
     * @note[short] MacOS (Intel): 0x2cea20
     * @note[short] Windows: 0x453500
     * @note[short] iOS: 0x18892c
     * @note[short] Android
     */
    void setupHueShift();

    /**
     * @note[short] MacOS (ARM): 0x269804
     * @note[short] MacOS (Intel): 0x2ce3d0
     * @note[short] Windows: 0x452e90
     * @note[short] iOS: 0x1883d8
     * @note[short] Android
     */
    void setupInvertColor();

    /**
     * @note[short] MacOS (ARM): 0x266088
     * @note[short] MacOS (Intel): 0x2ca650
     * @note[short] Windows: 0x44f2a0
     * @note[short] iOS: 0x1853b0
     * @note[short] Android
     */
    void setupLensCircle();

    /**
     * @note[short] MacOS (ARM): 0x26727c
     * @note[short] MacOS (Intel): 0x2cba80
     * @note[short] Windows: 0x450630
     * @note[short] iOS: 0x186348
     * @note[short] Android
     */
    void setupMotionBlur();

    /**
     * @note[short] MacOS (ARM): 0x2685bc
     * @note[short] MacOS (Intel): 0x2ccfd0
     * @note[short] Windows: 0x451a70
     * @note[short] iOS: 0x187414
     * @note[short] Android
     */
    void setupPinch();

    /**
     * @note[short] MacOS (ARM): 0x265a08
     * @note[short] MacOS (Intel): 0x2c9f90
     * @note[short] Windows: 0x44ec00
     * @note[short] iOS: 0x184e30
     * @note[short] Android
     */
    void setupPixelate();

    /**
     * @note[short] MacOS (ARM): 0x266918
     * @note[short] MacOS (Intel): 0x2cafe0
     * @note[short] Windows: 0x44fbf0
     * @note[short] iOS: 0x185b18
     * @note[short] Android
     */
    void setupRadialBlur();

    /**
     * @note[short] MacOS (ARM): 0x269518
     * @note[short] MacOS (Intel): 0x2ce110
     * @note[short] Windows: 0x452b60
     * @note[short] iOS: 0x18817c
     * @note[short] Android
     */
    void setupSepia();

    /**
     * @note[short] MacOS (ARM): 0x26ac20
     * @note[short] MacOS (Intel): 0x2cf860
     * @note[short] Windows: 0x44a6a0
     * @note[short] iOS: 0x1894fc
     * @note[short] Android
     */
    void setupShaderTrigger();

    /**
     * @note[short] MacOS (ARM): 0x2635bc
     * @note[short] MacOS (Intel): 0x2c7820
     * @note[short] Windows: 0x44c550
     * @note[short] iOS: 0x182f54
     * @note[short] Android
     */
    void setupShockLine();

    /**
     * @note[short] MacOS (ARM): 0x262418
     * @note[short] MacOS (Intel): 0x2c63b0
     * @note[short] Windows: 0x44b240
     * @note[short] iOS: 0x181ff8
     * @note[short] Android
     */
    void setupShockWave();

    /**
     * @note[short] MacOS (ARM): 0x26a770
     * @note[short] MacOS (Intel): 0x2cf3c0
     * @note[short] Windows: 0x4540e0
     * @note[short] iOS: 0x189124
     * @note[short] Android
     */
    void setupSplitScreen();

    /**
     * @note[short] MacOS (ARM): 0x26b928
     * @note[short] MacOS (Intel): 0x2d0510
     * @note[short] Windows: 0x44b190
     * @note[short] iOS: 0x189ca4
     * @note[short] Android
     */
    void updateZLayerButtons();

    /**
     * @note[short] MacOS (ARM): 0x26b604
     * @note[short] MacOS (Intel): 0x2d0250
     * @note[short] Windows: 0x44adc0
     * @note[short] iOS: 0x189ba8
     * @note[short] Android
     */
    gd::string zLayerToString(int zLayer);
    cocos2d::CCArray* m_zLayerSprites;
    int m_zLayerMin;
    int m_zLayerMax;
    bool m_changeMin;
    int m_objectID;
};
