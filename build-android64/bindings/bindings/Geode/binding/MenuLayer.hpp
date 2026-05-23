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
#include "GooglePlayDelegate.hpp"

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate {
public:
    static constexpr auto CLASS_NAME = "MenuLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static MenuLayer* get();

    /**
     * @note[short] MacOS (ARM): 0x3164d8
     * @note[short] MacOS (Intel): 0x38ffc0
     * @note[short] Windows: 0x333900
     * @note[short] iOS: 0x2663a4
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool isVideoOptionsOpen);

    /**
     * @note[short] MacOS (ARM): 0x316688
     * @note[short] MacOS (Intel): 0x390180
     * @note[short] Windows: 0x333a90
     * @note[short] iOS: 0x266500
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x318504
     * @note[short] MacOS (Intel): 0x3920a0
     * @note[short] Windows: 0x335f80
     * @note[short] iOS: 0x26800c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x318780
     * @note[short] MacOS (Intel): 0x392370
     * @note[short] Windows: 0x336360
     * @note[short] iOS: 0x268294
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3182b8
     * @note[short] MacOS (Intel): 0x391e10
     * @note[short] Windows: 0x335980
     * @note[short] iOS: 0x267e70
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x318510
     * @note[short] MacOS (Intel): 0x3920d0
     * @note[short] Windows: 0x336150
     * @note[short] iOS: 0x2680cc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x318774
     * @note[short] MacOS (Intel): 0x392340
     * @note[short] Windows: 0x3363d0
     * @note[short] iOS: 0x268278
     * @note[short] Android
     */
    void endGame();

    /**
     * @note[short] MacOS (ARM): 0x3180e0
     * @note[short] MacOS (Intel): 0x391bf0
     * @note[short] Windows: 0x3352f0
     * @note[short] iOS: 0x267d54
     * @note[short] Android
     */
    void firstNetworkTest();

    /**
     * @note[short] MacOS (ARM): 0x317afc
     * @note[short] MacOS (Intel): 0x391650
     * @note[short] Windows: 0x335820
     * @note[short] iOS: 0x267870
     * @note[short] Android
     */
    void onAchievements(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317a88
     * @note[short] MacOS (Intel): 0x3915d0
     * @note[short] Windows: 0x335d30
     * @note[short] iOS: 0x267820
     * @note[short] Android
     */
    void onCreator(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31807c
     * @note[short] MacOS (Intel): 0x391b90
     * @note[short] Windows: 0x3350a0
     * @note[short] iOS: 0x267cf0
     * @note[short] Android
     */
    void onDaily(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317d6c
     * @note[short] MacOS (Intel): 0x391880
     * @note[short] Windows: 0x335720
     * @note[short] iOS: 0x267abc
     * @note[short] Android
     */
    void onDiscord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3183b0
     * @note[short] MacOS (Intel): 0x391f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317cdc
     * @note[short] MacOS (Intel): 0x391800
     * @note[short] Windows: 0x3356a0
     * @note[short] iOS: 0x267a2c
     * @note[short] Android
     */
    void onFacebook(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x318458
     * @note[short] MacOS (Intel): 0x391ff0
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x318478
     * @note[short] MacOS (Intel): 0x392010
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x318150
     * @note[short] MacOS (Intel): 0x391c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x267d68
     * @note[short] Android
     */
    void onGameCenter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317a14
     * @note[short] MacOS (Intel): 0x391550
     * @note[short] Windows: 0x335dc0
     * @note[short] iOS: 0x2677d0
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x318290
     * @note[short] MacOS (Intel): 0x391de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onGooglePlayGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317d90
     * @note[short] MacOS (Intel): 0x3918a0
     * @note[short] Windows: 0x335740
     * @note[short] iOS: 0x267ae0
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317eec
     * @note[short] MacOS (Intel): 0x3919f0
     * @note[short] Windows: 0x3355e0
     * @note[short] iOS: 0x267b64
     * @note[short] Android
     */
    void onMyProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317be0
     * @note[short] MacOS (Intel): 0x391710
     * @note[short] Windows: 0x335e50
     * @note[short] iOS: 0x267954
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317b48
     * @note[short] MacOS (Intel): 0x391690
     * @note[short] Windows: 0x335a70
     * @note[short] iOS: 0x2678bc
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x316620
     * @note[short] MacOS (Intel): 0x390120
     * @note[short] Windows: 0x335a80
     * @note[short] iOS: 0x2664f8
     * @note[short] Android
     */
    void onOptionsInstant();

    /**
     * @note[short] MacOS (ARM): 0x31799c
     * @note[short] MacOS (Intel): 0x3914c0
     * @note[short] Windows: 0x3359d0
     * @note[short] iOS: 0x26777c
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317e14
     * @note[short] MacOS (Intel): 0x391920
     * @note[short] Windows: 0x335f90
     * @note[short] iOS: 0x268010
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317cb8
     * @note[short] MacOS (Intel): 0x3917e0
     * @note[short] Windows: 0x335680
     * @note[short] iOS: 0x267a08
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317b94
     * @note[short] MacOS (Intel): 0x3916d0
     * @note[short] Windows: 0x335c10
     * @note[short] iOS: 0x267908
     * @note[short] Android
     */
    void onStats(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3184c4
     * @note[short] MacOS (Intel): 0x392060
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onTrailer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317d48
     * @note[short] MacOS (Intel): 0x391860
     * @note[short] Windows: 0x335700
     * @note[short] iOS: 0x267a98
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317d00
     * @note[short] MacOS (Intel): 0x391820
     * @note[short] Windows: 0x3356c0
     * @note[short] iOS: 0x267a50
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x317d24
     * @note[short] MacOS (Intel): 0x391840
     * @note[short] Windows: 0x3356e0
     * @note[short] iOS: 0x267a74
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3183b4
     * @note[short] MacOS (Intel): 0x391f30
     * @note[short] Windows: 0x335a90
     * @note[short] iOS: 0x267f68
     * @note[short] Android
     */
    void openOptions(bool videoOptions);

    /**
     * @note[short] MacOS (ARM): 0x318198
     * @note[short] MacOS (Intel): 0x391cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x267db0
     * @note[short] Android
     */
    void showGCQuestion();

    /**
     * @note[short] MacOS (ARM): 0x3180f4
     * @note[short] MacOS (Intel): 0x391c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showMeltdownPromo();

    /**
     * @note[short] MacOS (ARM): 0x318098
     * @note[short] MacOS (Intel): 0x391bb0
     * @note[short] Windows: 0x3354c0
     * @note[short] iOS: 0x267d0c
     * @note[short] Android
     */
    void showTOS();

    /**
     * @note[short] MacOS (ARM): 0x318384
     * @note[short] MacOS (Intel): 0x391ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x267f3c
     * @note[short] Android
     */
    void syncPlatformAchievements(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3180f8
     * @note[short] MacOS (Intel): 0x391c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd(float dt);

    /**
     * @note[short] MacOS (ARM): 0x317f4c
     * @note[short] MacOS (Intel): 0x391a50
     * @note[short] Windows: 0x3351f0
     * @note[short] iOS: 0x267bc4
     * @note[short] Android
     */
    void updateUserProfileButton();

    /**
     * @note[short] MacOS (ARM): 0x31844c
     * @note[short] MacOS (Intel): 0x391fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x268000
     * @note[short] Android
     */
    void videoOptionsClosed();

    /**
     * @note[short] MacOS (ARM): 0x31843c
     * @note[short] MacOS (Intel): 0x391fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x267ff0
     * @note[short] Android
     */
    void videoOptionsOpened();

    /**
     * @note[short] MacOS (ARM): 0x3162dc
     * @note[short] MacOS (Intel): 0x38fce0
     * @note[short] Windows: 0x3360b0
     * @note[short] iOS: 0x26632c
     * @note[short] Android
     */
    void willClose();
    bool m_showingTOS;
    cocos2d::CCSprite* m_gpSprite;
    cocos2d::CCSprite* m_viewProfileSprite;
    cocos2d::CCLabelBMFont* m_profileLabel;
    CCMenuItemSpriteExtra* m_profileButton;
    void* m_unknown;
    MenuGameLayer* m_menuGameLayer;
};
