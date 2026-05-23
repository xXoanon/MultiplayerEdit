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
#include "SelectSettingDelegate.hpp"

class SetupAudioLineGuidePopup : public SetupTriggerPopup, public SelectSettingDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAudioLineGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioLineGuidePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAudioLineGuidePopup();

    /**
     * @note[short] MacOS (ARM): 0x4cfb28
     * @note[short] MacOS (Intel): 0x583a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40f9b0
     * @note[short] Android
     */
    static SetupAudioLineGuidePopup* create(AudioLineGuideGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4d0360
     * @note[short] MacOS (Intel): 0x584450
     * @note[short] Windows: 0x470710
     * @note[short] iOS: 0x410088
     * @note[short] Android
     */
    virtual void selectSettingClosed(SelectSettingLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4cfcbc
     * @note[short] MacOS (Intel): 0x583cd0
     * @note[short] Windows: 0x46ffb0
     * @note[short] iOS: 0x40fa94
     * @note[short] Android
     */
    bool init(AudioLineGuideGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4d0318
     * @note[short] MacOS (Intel): 0x584400
     * @note[short] Windows: 0x4706c0
     * @note[short] iOS: 0x410040
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_speedSprite;
};
