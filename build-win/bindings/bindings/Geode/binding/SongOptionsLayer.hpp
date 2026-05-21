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

class SongOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x1c12ac
     * @note[short] MacOS (Intel): 0x215c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1448d4
     * @note[short] Android
     */
    static SongOptionsLayer* create(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1c2a30
     * @note[short] MacOS (Intel): 0x217550
     * @note[short] Windows: 0xc5640
     * @note[short] iOS: 0x145b18
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c1bf0
     * @note[short] MacOS (Intel): 0x216670
     * @note[short] Windows: 0xc45a0
     * @note[short] iOS: 0x144e40
     * @note[short] Android
     */
    bool init(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1c2688
     * @note[short] MacOS (Intel): 0x2171e0
     * @note[short] Windows: 0xc54d0
     * @note[short] iOS: 0x145808
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c25a4
     * @note[short] MacOS (Intel): 0x217120
     * @note[short] Windows: 0xc4fc0
     * @note[short] iOS: 0x145724
     * @note[short] Android
     */
    void onFadeIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c25f0
     * @note[short] MacOS (Intel): 0x217160
     * @note[short] Windows: 0xc5010
     * @note[short] iOS: 0x145770
     * @note[short] Android
     */
    void onFadeOut(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c2798
     * @note[short] MacOS (Intel): 0x2172e0
     * @note[short] Windows: 0xc5370
     * @note[short] iOS: 0x145918
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c2878
     * @note[short] MacOS (Intel): 0x217390
     * @note[short] Windows: 0xc50b0
     * @note[short] iOS: 0x1459b0
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c263c
     * @note[short] MacOS (Intel): 0x2171a0
     * @note[short] Windows: 0xc5060
     * @note[short] iOS: 0x1457bc
     * @note[short] Android
     */
    void onSongPersistent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c29c4
     * @note[short] MacOS (Intel): 0x2174e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x145aac
     * @note[short] Android
     */
    void updatePlaybackBtn();
    CustomSongDelegate* m_delegate;
    CCTextInputNode* m_offsetInput;
    CCMenuItemSpriteExtra* m_playbackButton;
};
