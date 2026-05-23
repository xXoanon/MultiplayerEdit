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
#include "FLAlertLayerProtocol.hpp"
#include "GameRateDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class FollowRewardPage : public FLAlertLayer, public FLAlertLayerProtocol, public GameRateDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "FollowRewardPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FollowRewardPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x392f3c
     * @note[short] MacOS (Intel): 0x41f750
     * @note[short] Windows: 0x139c00
     * @note[short] iOS: 0x424680
     * @note[short] Android
     */
    static FollowRewardPage* create();

    /**
     * @note[short] MacOS (ARM): 0x39304c
     * @note[short] MacOS (Intel): 0x41f8c0
     * @note[short] Windows: 0x139d20
     * @note[short] iOS: 0x424748
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x394fec
     * @note[short] MacOS (Intel): 0x421a80
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x4260d4
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x394f70
     * @note[short] MacOS (Intel): 0x421a10
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x426058
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x394d40
     * @note[short] MacOS (Intel): 0x4217e0
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x425e38
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x394ec8
     * @note[short] MacOS (Intel): 0x421960
     * @note[short] Windows: 0x13d230
     * @note[short] iOS: 0x425fb0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x394d30
     * @note[short] MacOS (Intel): 0x4217c0
     * @note[short] Windows: 0x13bf70
     * @note[short] iOS: 0x425e28
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x394658
     * @note[short] MacOS (Intel): 0x4210b0
     * @note[short] Windows: 0x13ba40
     * @note[short] iOS: 0x425ac4
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] MacOS (ARM): 0x393f78
     * @note[short] MacOS (Intel): 0x4209b0
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x4254b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3949a8
     * @note[short] MacOS (Intel): 0x421400
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x393fb4
     * @note[short] MacOS (Intel): 0x4209e0
     * @note[short] Windows: 0x13bf80
     * @note[short] iOS: 0x4254ec
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x394574
     * @note[short] MacOS (Intel): 0x420fe0
     * @note[short] Windows: 0x13d150
     * @note[short] iOS: 0x4259e0
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* button);
    cocos2d::CCArray* m_chests;
    bool m_videoPlaying;
};
