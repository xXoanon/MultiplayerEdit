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
#include "HSVWidgetDelegate.hpp"

class HSVLiveOverlay : public FLAlertLayer, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "HSVLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVLiveOverlay, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     HSVLiveOverlay();

    /**
     * @note[short] MacOS (ARM): 0x20dc7c
     * @note[short] MacOS (Intel): 0x26a660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x19f814
     * @note[short] Android: Rebinded
     */
     ~HSVLiveOverlay();

    /**
     * @note[short] MacOS (ARM): 0x20dd54
     * @note[short] MacOS (Intel): 0x26a7d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x19f8ec
     * @note[short] Android
     */
    static HSVLiveOverlay* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x20e568
     * @note[short] MacOS (Intel): 0x26b040
     * @note[short] Windows: 0x2ba280
     * @note[short] iOS: 0x1a00ac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x20e620
     * @note[short] MacOS (Intel): 0x26b0f0
     * @note[short] Windows: 0x8baf0
     * @note[short] iOS: 0x1a00c0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x20e6d4
     * @note[short] MacOS (Intel): 0x26b1c0
     * @note[short] Windows: 0x2ba2d0
     * @note[short] iOS: 0x1a010c
     * @note[short] Android
     */
    virtual void hsvChanged(ConfigureHSVWidget* widget);

    /**
     * @note[short] MacOS (ARM): 0x20e278
     * @note[short] MacOS (Intel): 0x26ad40
     * @note[short] Windows: 0x2ba060
     * @note[short] iOS: 0x19fdd0
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e408
     * @note[short] MacOS (Intel): 0x26aec0
     * @note[short] Windows: 0x2ba0e0
     * @note[short] iOS: 0x19ff50
     * @note[short] Android
     */
    void createHSVWidget(int tab);

    /**
     * @note[short] MacOS (ARM): 0x20e2d8
     * @note[short] MacOS (Intel): 0x26ad90
     * @note[short] Windows: 0x2b9e60
     * @note[short] iOS: 0x19fe30
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x20de88
     * @note[short] MacOS (Intel): 0x26a950
     * @note[short] Windows: 0x2b99c0
     * @note[short] iOS: 0x19f9d8
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x20e3bc
     * @note[short] MacOS (Intel): 0x26ae80
     * @note[short] Windows: 0x2ba0b0
     * @note[short] iOS: 0x19ff04
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e66c
     * @note[short] MacOS (Intel): 0x26b150
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleControls(bool visible);
    GameObject* m_object;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_controls;
    cocos2d::CCArray* m_unkArray;
    ColorSelectDelegate* m_delegate;
    int m_activeTab;
    ConfigureHSVWidget* m_widget;
    bool m_unkBool1;
    bool m_unkBool2;
    bool m_unkBool3;
};
