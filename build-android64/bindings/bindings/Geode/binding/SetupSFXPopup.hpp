#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"
#include "CustomSFXDelegate.hpp"
#include "SFXBrowserDelegate.hpp"

class SetupSFXPopup : public SetupAudioTriggerPopup, public CustomSFXDelegate, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x419490
     * @note[short] MacOS (Intel): 0x4b8950
     * @note[short] Windows: 0x447120
     * @note[short] iOS: 0x17fa50
     * @note[short] Android
     */
    static SetupSFXPopup* create(SFXTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x41a914
     * @note[short] MacOS (Intel): 0x4ba1f0
     * @note[short] Windows: 0x4484d0
     * @note[short] iOS: 0x180bbc
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x41a96c
     * @note[short] MacOS (Intel): 0x4ba250
     * @note[short] Windows: 0x448540
     * @note[short] iOS: 0x180c14
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41adbc
     * @note[short] MacOS (Intel): 0x4ba710
     * @note[short] Windows: 0x448e00
     * @note[short] iOS: 0x180fd8
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41ac98
     * @note[short] MacOS (Intel): 0x4ba5f0
     * @note[short] Windows: 0x448cf0
     * @note[short] iOS: 0x180ef0
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x41abe4
     * @note[short] MacOS (Intel): 0x4ba510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x180e70
     * @note[short] Android
     */
    virtual void sfxObjectSelected(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x41abec
     * @note[short] MacOS (Intel): 0x4ba530
     * @note[short] Windows: 0x448c30
     * @note[short] iOS: 0x180e78
     * @note[short] Android
     */
    virtual int getActiveSFXID();

    /**
     * @note[short] MacOS (ARM): 0x41abfc
     * @note[short] MacOS (Intel): 0x4ba550
     * @note[short] Windows: 0x448c40
     * @note[short] iOS: 0x180e88
     * @note[short] Android
     */
    virtual bool overridePlaySFX(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x41af14
     * @note[short] MacOS (Intel): 0x4ba880
     * @note[short] Windows: 0x4493f0
     * @note[short] iOS: 0x1810d4
     * @note[short] Android
     */
    virtual void sfxBrowserClosed(SFXBrowser* browser);

    /**
     * @note[short] MacOS (ARM): 0x41a688
     * @note[short] MacOS (Intel): 0x4b9f40
     * @note[short] Windows: 0x448900
     * @note[short] iOS: 0x180968
     * @note[short] Android
     */
    void createSFXWidget();

    /**
     * @note[short] MacOS (ARM): 0x419634
     * @note[short] MacOS (Intel): 0x4b8bc0
     * @note[short] Windows: 0x447270
     * @note[short] iOS: 0x17fad4
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x41a63c
     * @note[short] MacOS (Intel): 0x4b9ee0
     * @note[short] Windows: 0x449210
     * @note[short] iOS: 0x18091c
     * @note[short] Android
     */
    void onBrowseSFX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41ab90
     * @note[short] MacOS (Intel): 0x4ba4c0
     * @note[short] Windows: 0x448880
     * @note[short] iOS: 0x180e1c
     * @note[short] Android
     */
    void updateLength();
    int m_sfxID;
    CustomSFXWidget* m_sfxWidget;
    int m_sfxLength;
};
