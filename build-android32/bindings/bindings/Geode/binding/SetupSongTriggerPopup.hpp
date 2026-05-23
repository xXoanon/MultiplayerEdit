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
#include "MusicDownloadDelegate.hpp"
#include "SongPlaybackDelegate.hpp"

class SetupSongTriggerPopup : public SetupAudioTriggerPopup, public MusicDownloadDelegate, public SongPlaybackDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSongTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSongTriggerPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x26ded8
     * @note[short] MacOS (Intel): 0x2d2f10
     * @note[short] Windows: 0x45c810
     * @note[short] iOS: 0x1c287c
     * @note[short] Android
     */
    static SetupSongTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x26f020
     * @note[short] MacOS (Intel): 0x2d4270
     * @note[short] Windows: 0x45dcb0
     * @note[short] iOS: 0x1c3710
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x26f0b4
     * @note[short] MacOS (Intel): 0x2d4300
     * @note[short] Windows: 0x45dd30
     * @note[short] iOS: 0x1c37a4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x26ef20
     * @note[short] MacOS (Intel): 0x2d4170
     * @note[short] Windows: 0x45db60
     * @note[short] iOS: 0x1c367c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x26ed0c
     * @note[short] MacOS (Intel): 0x2d3f30
     * @note[short] Windows: 0x45d630
     * @note[short] iOS: 0x1c3474
     * @note[short] Android
     */
    virtual void onPlayback(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x26e078
     * @note[short] MacOS (Intel): 0x2d3180
     * @note[short] Windows: 0x45c950
     * @note[short] iOS: 0x1c2900
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x26ef14
     * @note[short] MacOS (Intel): 0x2d4150
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onResetSongTime(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x26eab8
     * @note[short] MacOS (Intel): 0x2d3d00
     * @note[short] Windows: 0x45d9d0
     * @note[short] iOS: 0x1c3244
     * @note[short] Android
     */
    void onSavePlaybackPos(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x26ecc8
     * @note[short] MacOS (Intel): 0x2d3ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c3430
     * @note[short] Android
     */
    void updateApplyPrepare(bool hideAll);

    /**
     * @note[short] MacOS (ARM): 0x26ea60
     * @note[short] MacOS (Intel): 0x2d3cb0
     * @note[short] Windows: 0x45d5a0
     * @note[short] iOS: 0x1c31ec
     * @note[short] Android
     */
    void updateLength();

    /**
     * @note[short] MacOS (ARM): 0x26ebec
     * @note[short] MacOS (Intel): 0x2d3e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c3354
     * @note[short] Android
     */
    void updateSongTimeSlider();
    SongSelectNode* m_selectNode;
};
