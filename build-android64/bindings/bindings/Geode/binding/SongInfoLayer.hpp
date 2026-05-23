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

class SongInfoLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongInfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x527fb8
     * @note[short] MacOS (Intel): 0x5fff20
     * @note[short] Windows: 0x492400
     * @note[short] iOS: 0x3a7180
     * @note[short] Android
     */
    static SongInfoLayer* create(int artistID);

    /**
     * @note[short] MacOS (ARM): 0x52846c
     * @note[short] MacOS (Intel): 0x600520
     * @note[short] Windows: 0x492610
     * @note[short] iOS: 0x3a753c
     * @note[short] Android: Rebinded
     */
    static SongInfoLayer* create(gd::string songName, gd::string artistName, gd::string songURL, gd::string newgroundsURL, gd::string youtubeURL, gd::string facebookURL, int songID, gd::string songTags, int nongType);

    /**
     * @note[short] MacOS (ARM): 0x529e78
     * @note[short] MacOS (Intel): 0x601fc0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x3a8c80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5288b4
     * @note[short] MacOS (Intel): 0x600a60
     * @note[short] Windows: 0x492930
     * @note[short] iOS: 0x3a78a4
     * @note[short] Android: Rebinded
     */
    bool init(gd::string songName, gd::string artistName, gd::string songURL, gd::string newgroundsURL, gd::string youtubeURL, gd::string facebookURL, int songID, gd::string songTags, int nongType);

    /**
     * @note[short] MacOS (ARM): 0x529944
     * @note[short] MacOS (Intel): 0x601b50
     * @note[short] Windows: 0x494500
     * @note[short] iOS: 0x3a8860
     * @note[short] Android
     */
    void onBPM(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x529908
     * @note[short] MacOS (Intel): 0x601b20
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x3a8824
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x52997c
     * @note[short] MacOS (Intel): 0x601b90
     * @note[short] Windows: 0x494440
     * @note[short] iOS: 0x3a8898
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x529a60
     * @note[short] MacOS (Intel): 0x601c50
     * @note[short] Windows: 0x4944d0
     * @note[short] iOS: 0x3a8940
     * @note[short] Android
     */
    void onFB(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x529aac
     * @note[short] MacOS (Intel): 0x601c90
     * @note[short] Windows: 0x4942b0
     * @note[short] iOS: 0x3a8978
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5299c8
     * @note[short] MacOS (Intel): 0x601bd0
     * @note[short] Windows: 0x494470
     * @note[short] iOS: 0x3a88d0
     * @note[short] Android
     */
    void onNG(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x529b54
     * @note[short] MacOS (Intel): 0x601d20
     * @note[short] Windows: 0x494380
     * @note[short] iOS: 0x3a8a0c
     * @note[short] Android
     */
    void onPracticeMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x529a14
     * @note[short] MacOS (Intel): 0x601c10
     * @note[short] Windows: 0x4944a0
     * @note[short] iOS: 0x3a8908
     * @note[short] Android
     */
    void onYT(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x529be0
     * @note[short] MacOS (Intel): 0x601db0
     * @note[short] Windows: 0x493c50
     * @note[short] iOS: 0x3a8a8c
     * @note[short] Android
     */
    void showCustomMusicUnlockInfo();
    gd::string m_downloadLink;
    gd::string m_newgroundsLink;
    gd::string m_youtubeLink;
    gd::string m_facebookLink;
    int m_songID;
    int m_musicCustomizerMessageIndex;
};
