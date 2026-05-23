#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class CreatorLayer : public cocos2d::CCLayer, public cocos2d::CCSceneTransitionDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CreatorLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CreatorLayer();

    /**
     * @note[short] MacOS (ARM): 0x2376d8
     * @note[short] MacOS (Intel): 0x297520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb4fc8
     * @note[short] Android
     */
    static CreatorLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2375f4
     * @note[short] MacOS (Intel): 0x297400
     * @note[short] Windows: 0x9bfd0
     * @note[short] iOS: 0xb4f70
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x237794
     * @note[short] MacOS (Intel): 0x297600
     * @note[short] Windows: 0x9c140
     * @note[short] iOS: 0xb5078
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2399b8
     * @note[short] MacOS (Intel): 0x2999c0
     * @note[short] Windows: 0x9f9c0
     * @note[short] iOS: 0xb6c08
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x239948
     * @note[short] MacOS (Intel): 0x299940
     * @note[short] Windows: 0x9f860
     * @note[short] iOS: 0xb6bc8
     * @note[short] Android
     */
    virtual void sceneWillResume();

    /**
     * @note[short] MacOS (ARM): 0x239844
     * @note[short] MacOS (Intel): 0x299840
     * @note[short] Windows: 0x9f740
     * @note[short] iOS: 0xb6b38
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2397f0
     * @note[short] MacOS (Intel): 0x2997d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool canPlayOnlineLevels();

    /**
     * @note[short] MacOS (ARM): 0x238eb0
     * @note[short] MacOS (Intel): 0x298e50
     * @note[short] Windows: 0x9f620
     * @note[short] iOS: 0xb6418
     * @note[short] Android
     */
    void checkQuestsStatus();

    /**
     * @note[short] MacOS (ARM): 0x238904
     * @note[short] MacOS (Intel): 0x2988a0
     * @note[short] Windows: 0x9e250
     * @note[short] iOS: 0xb60a8
     * @note[short] Android
     */
    void onAdventureMap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x239790
     * @note[short] MacOS (Intel): 0x299770
     * @note[short] Windows: 0x9f800
     * @note[short] iOS: 0xb6ad8
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238998
     * @note[short] MacOS (Intel): 0x298910
     * @note[short] Windows: 0x9e420
     * @note[short] iOS: 0xb6120
     * @note[short] Android
     */
    void onChallenge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2389d0
     * @note[short] MacOS (Intel): 0x298940
     * @note[short] Windows: 0x9e3c0
     * @note[short] iOS: 0xb6158
     * @note[short] Android
     */
    void onDailyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238a10
     * @note[short] MacOS (Intel): 0x298980
     * @note[short] Windows: 0x9e400
     * @note[short] iOS: 0xb6198
     * @note[short] Android
     */
    void onEventLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2397f8
     * @note[short] MacOS (Intel): 0x2997e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFameLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238a78
     * @note[short] MacOS (Intel): 0x2989f0
     * @note[short] Windows: 0x9d910
     * @note[short] iOS: 0xb6200
     * @note[short] Android
     */
    void onFeaturedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238a30
     * @note[short] MacOS (Intel): 0x2989a0
     * @note[short] Windows: 0x9dc00
     * @note[short] iOS: 0xb61b8
     * @note[short] Android
     */
    void onGauntlets(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2384fc
     * @note[short] MacOS (Intel): 0x2984e0
     * @note[short] Windows: 0x9d720
     * @note[short] iOS: 0xb5d38
     * @note[short] Android
     */
    void onLeaderboards(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238b40
     * @note[short] MacOS (Intel): 0x298ad0
     * @note[short] Windows: 0x9db40
     * @note[short] iOS: 0xb62c8
     * @note[short] Android
     */
    void onMapPacks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238544
     * @note[short] MacOS (Intel): 0x298530
     * @note[short] Windows: 0x9dc80
     * @note[short] iOS: 0xb5d80
     * @note[short] Android
     */
    void onMultiplayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238bc8
     * @note[short] MacOS (Intel): 0x298b70
     * @note[short] Windows: 0x9d310
     * @note[short] iOS: 0xb6350
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238b8c
     * @note[short] MacOS (Intel): 0x298b30
     * @note[short] Windows: 0x9dac0
     * @note[short] iOS: 0xb6314
     * @note[short] Android
     */
    void onOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238c90
     * @note[short] MacOS (Intel): 0x298c50
     * @note[short] Android
     */
    void onOnlyFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238ac4
     * @note[short] MacOS (Intel): 0x298a50
     * @note[short] Windows: 0x9d9d0
     * @note[short] iOS: 0xb624c
     * @note[short] Android
     */
    void onPaths(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23843c
     * @note[short] MacOS (Intel): 0x298410
     * @note[short] Windows: 0x9d520
     * @note[short] iOS: 0xb5c78
     * @note[short] Android
     */
    void onSavedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238fb0
     * @note[short] MacOS (Intel): 0x298f50
     * @note[short] Windows: 0x9e590
     * @note[short] iOS: 0xb64f4
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238ae0
     * @note[short] MacOS (Intel): 0x298a70
     * @note[short] Windows: 0x9d9f0
     * @note[short] iOS: 0xb6268
     * @note[short] Android
     */
    void onTopLists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2391fc
     * @note[short] MacOS (Intel): 0x299170
     * @note[short] Windows: 0x9eda0
     * @note[short] iOS: 0xb66c4
     * @note[short] Android
     */
    void onTreasureRoom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2389f0
     * @note[short] MacOS (Intel): 0x298960
     * @note[short] Windows: 0x9e3e0
     * @note[short] iOS: 0xb6178
     * @note[short] Android
     */
    void onWeeklyLevel(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_secretDoorSprite;
    cocos2d::CCSprite* m_questsSprite;
    int m_vaultDialogIndex;
    int m_versusDialogIndex;
};
