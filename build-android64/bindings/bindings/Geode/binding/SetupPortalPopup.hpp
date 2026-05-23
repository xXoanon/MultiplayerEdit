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

class SetupPortalPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupPortalPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPortalPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x4bd67c
     * @note[short] MacOS (Intel): 0x56f690
     * @note[short] Android
     */
    static SetupPortalPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4be7a4
     * @note[short] MacOS (Intel): 0x5709d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4be094
     * @note[short] MacOS (Intel): 0x5701a0
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x4bd7a8
     * @note[short] MacOS (Intel): 0x56f810
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4be040
     * @note[short] MacOS (Intel): 0x570150
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4be2d4
     * @note[short] MacOS (Intel): 0x570450
     * @note[short] Android
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4be250
     * @note[short] MacOS (Intel): 0x5703d0
     * @note[short] Android
     */
    void onUnboundMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4be404
     * @note[short] MacOS (Intel): 0x5705b0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4be6bc
     * @note[short] MacOS (Intel): 0x5708d0
     * @note[short] Android
     */
    void updateCameraEasing();

    /**
     * @note[short] MacOS (ARM): 0x4be584
     * @note[short] MacOS (Intel): 0x570780
     * @note[short] Android
     */
    void updateCameraEasingLabel();

    /**
     * @note[short] MacOS (ARM): 0x4be734
     * @note[short] MacOS (Intel): 0x570950
     * @note[short] Android
     */
    void updateCameraPadding();

    /**
     * @note[short] MacOS (ARM): 0x4be5d0
     * @note[short] MacOS (Intel): 0x5707d0
     * @note[short] Android
     */
    void updateCameraPaddingLabel();

    /**
     * @note[short] MacOS (ARM): 0x4be620
     * @note[short] MacOS (Intel): 0x570820
     * @note[short] Android
     */
    void updateItemVisibility();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    cocos2d::CCArray* m_freeModeObjects;
    cocos2d::CCArray* m_cameraSettingsObjects;
    Slider* m_cameraEasingSlider;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    int m_cameraEasing;
    Slider* m_cameraPaddingSlider;
    cocos2d::CCLabelBMFont* m_cameraPaddingLabel;
    float m_cameraPadding;
    bool m_freeMode;
    bool m_cameraSettingsEnabled;
    bool m_disableDelegate;
};
