#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "CustomSongDelegate.hpp"

class SongSelectNode : public cocos2d::CCNode, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "SongSelectNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongSelectNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x1c3ee4
     * @note[short] MacOS (Intel): 0x218a80
     * @note[short] Windows: 0xc6ca0
     * @note[short] iOS: 0x146de0
     * @note[short] Android
     */
    static SongSelectNode* create(int id, bool customSong, LevelSettingsObject* settings, SongSelectType selectType, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCMenu* menu, bool noLabel);

    /**
     * @note[short] MacOS (ARM): 0x1c4cb8
     * @note[short] MacOS (Intel): 0x2198b0
     * @note[short] Windows: 0xc7d00
     * @note[short] iOS: 0x147ad8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1c4da0
     * @note[short] MacOS (Intel): 0x219990
     * @note[short] Windows: 0xc7d90
     * @note[short] iOS: 0x147b54
     * @note[short] Android
     */
    virtual void customSongLayerClosed();

    /**
     * @note[short] MacOS (ARM): 0x1c4e08
     * @note[short] MacOS (Intel): 0x2199f0
     * @note[short] Windows: 0xc7dc0
     * @note[short] iOS: 0x147bbc
     * @note[short] Android
     */
    virtual void songIDChanged(int id);

    /**
     * @note[short] MacOS (ARM): 0x1c4e28
     * @note[short] MacOS (Intel): 0x219a20
     * @note[short] Windows: 0xc7dd0
     * @note[short] iOS: 0x147bdc
     * @note[short] Android
     */
    virtual int getActiveSongID();

    /**
     * @note[short] MacOS (ARM): 0x1c4e38
     * @note[short] MacOS (Intel): 0x219a40
     * @note[short] Windows: 0xc7de0
     * @note[short] iOS: 0x147bec
     * @note[short] Android
     */
    virtual gd::string getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1c4f74
     * @note[short] MacOS (Intel): 0x219b90
     * @note[short] Windows: 0xc7ea0
     * @note[short] iOS: 0x147c98
     * @note[short] Android
     */
    virtual LevelSettingsObject* getLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x1c495c
     * @note[short] MacOS (Intel): 0x2194f0
     * @note[short] Windows: 0xc77d0
     * @note[short] iOS: 0x147830
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c4928
     * @note[short] MacOS (Intel): 0x2194b0
     * @note[short] Windows: 0xc7810
     * @note[short] iOS: 0x1477fc
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c3ff4
     * @note[short] MacOS (Intel): 0x218ba0
     * @note[short] Windows: 0xc6dd0
     * @note[short] iOS: 0x146ef0
     * @note[short] Android
     */
    bool init(int id, bool customSong, LevelSettingsObject* settings, SongSelectType selectType, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCMenu* menu, bool noLabel);

    /**
     * @note[short] MacOS (ARM): 0x1c49c8
     * @note[short] MacOS (Intel): 0x219560
     * @note[short] Windows: 0xc7b20
     * @note[short] iOS: 0x14789c
     * @note[short] Android
     */
    void onOpenCustomSong(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c4994
     * @note[short] MacOS (Intel): 0x219530
     * @note[short] Windows: 0xc7840
     * @note[short] iOS: 0x147868
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c4a44
     * @note[short] MacOS (Intel): 0x219600
     * @note[short] Windows: 0xc7870
     * @note[short] iOS: 0x1478f8
     * @note[short] Android
     */
    void onSongMode(int songMode);

    /**
     * @note[short] MacOS (ARM): 0x1c4a24
     * @note[short] MacOS (Intel): 0x2195d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void selectSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x1c4c84
     * @note[short] MacOS (Intel): 0x219870
     * @note[short] Windows: 0xc7ba0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showCustomSongSelect();

    /**
     * @note[short] MacOS (ARM): 0x1c4810
     * @note[short] MacOS (Intel): 0x2193c0
     * @note[short] Windows: 0xc76e0
     * @note[short] iOS: 0x1476f8
     * @note[short] Android
     */
    void updateAudioLabel();

    /**
     * @note[short] MacOS (ARM): 0x1c4c04
     * @note[short] MacOS (Intel): 0x2197f0
     * @note[short] Windows: 0xc7a90
     * @note[short] iOS: 0x147a58
     * @note[short] Android
     */
    void updateWidgetVisibility();
    int m_selectedSongID;
    bool m_isCustomSong;
    bool m_songChanged;
    cocos2d::CCLabelBMFont* m_audioLabel;
    cocos2d::CCArray* m_selectSongObjects;
    cocos2d::CCArray* m_normalSongObjects;
    cocos2d::CCArray* m_changeSongObjects;
    CCMenuItemSpriteExtra* m_normalButton;
    CCMenuItemSpriteExtra* m_customButton;
    CCMenuItemSpriteExtra* m_selectButton;
    CCMenuItemSpriteExtra* m_changeButton;
    CustomSongWidget* m_songWidget;
    LevelSettingsObject* m_settingsObject;
};
