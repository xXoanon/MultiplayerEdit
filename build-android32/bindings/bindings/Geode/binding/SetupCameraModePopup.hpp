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

class SetupCameraModePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraModePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraModePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x40c0cc
     * @note[short] MacOS (Intel): 0x4a8b80
     * @note[short] Windows: 0x414020
     * @note[short] iOS: 0x3aa340
     * @note[short] Android
     */
    static SetupCameraModePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x40cf3c
     * @note[short] MacOS (Intel): 0x4a9c00
     * @note[short] Windows: 0x414bf0
     * @note[short] iOS: 0x3aaeb0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x40d1e8
     * @note[short] MacOS (Intel): 0x4a9f40
     * @note[short] Windows: 0x28f250
     * @note[short] iOS: 0x3ab134
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x40c258
     * @note[short] MacOS (Intel): 0x4a8dc0
     * @note[short] Windows: 0x414140
     * @note[short] iOS: 0x3aa41c
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x40cb54
     * @note[short] MacOS (Intel): 0x4a9780
     * @note[short] Windows: 0x414e60
     * @note[short] iOS: 0x3aac28
     * @note[short] Android
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x40cad0
     * @note[short] MacOS (Intel): 0x4a9700
     * @note[short] Windows: 0x414db0
     * @note[short] iOS: 0x3aabb0
     * @note[short] Android
     */
    void onUnboundMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x40cc84
     * @note[short] MacOS (Intel): 0x4a98e0
     * @note[short] Windows: 0x414fe0
     * @note[short] iOS: 0x3aacbc
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x40d100
     * @note[short] MacOS (Intel): 0x4a9e40
     * @note[short] Windows: 0x4150f0
     * @note[short] iOS: 0x3ab05c
     * @note[short] Android
     */
    void updateCameraEasing();

    /**
     * @note[short] MacOS (ARM): 0x40ce04
     * @note[short] MacOS (Intel): 0x4a9ab0
     * @note[short] Windows: 0x415090
     * @note[short] iOS: 0x3aad78
     * @note[short] Android
     */
    void updateCameraEasingLabel();

    /**
     * @note[short] MacOS (ARM): 0x40d178
     * @note[short] MacOS (Intel): 0x4a9ec0
     * @note[short] Windows: 0x4151f0
     * @note[short] iOS: 0x3ab0cc
     * @note[short] Android
     */
    void updateCameraPadding();

    /**
     * @note[short] MacOS (ARM): 0x40ce50
     * @note[short] MacOS (Intel): 0x4a9b00
     * @note[short] Windows: 0x415180
     * @note[short] iOS: 0x3aadc4
     * @note[short] Android
     */
    void updateCameraPaddingLabel();

    /**
     * @note[short] MacOS (ARM): 0x40cea0
     * @note[short] MacOS (Intel): 0x4a9b50
     * @note[short] Windows: 0x414f10
     * @note[short] iOS: 0x3aae14
     * @note[short] Android
     */
    void updateItemVisibility();
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
    bool m_cameraModeObjects;
};
