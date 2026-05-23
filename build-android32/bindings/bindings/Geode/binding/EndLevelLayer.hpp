#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class EndLevelLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "EndLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndLevelLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x4234c8
     * @note[short] MacOS (Intel): 0x4c3a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8bcc
     * @note[short] Android: Rebinded
     */
     EndLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x41fbe8
     * @note[short] MacOS (Intel): 0x4bfce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f57f8
     * @note[short] Android: Rebinded
     */
     ~EndLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x41fb38
     * @note[short] MacOS (Intel): 0x4bfc30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5770
     * @note[short] Android
     */
    static EndLevelLayer* create(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x422ca8
     * @note[short] MacOS (Intel): 0x4c31b0
     * @note[short] Windows: 0x1356d0
     * @note[short] iOS: 0x2f8438
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x423444
     * @note[short] MacOS (Intel): 0x4c3950
     * @note[short] Windows: 0x136d70
     * @note[short] iOS: 0x2f8b80
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x41fe0c
     * @note[short] MacOS (Intel): 0x4c0010
     * @note[short] Windows: 0x132e50
     * @note[short] iOS: 0x2f589c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x421f14
     * @note[short] MacOS (Intel): 0x4c2380
     * @note[short] Windows: 0x134ca0
     * @note[short] iOS: 0x2f7714
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x422bfc
     * @note[short] MacOS (Intel): 0x4c30d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f83b8
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x4234c0
     * @note[short] MacOS (Intel): 0x4c39e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8bc4
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x423038
     * @note[short] MacOS (Intel): 0x4c3560
     * @note[short] Windows: 0x135e60
     * @note[short] iOS: 0x2f8794
     * @note[short] Android
     */
    void coinEnterFinished(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x422fec
     * @note[short] MacOS (Intel): 0x4c3520
     * @note[short] Windows: 0x135e20
     * @note[short] iOS: 0x2f8748
     * @note[short] Android
     */
    void coinEnterFinishedO(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x423258
     * @note[short] MacOS (Intel): 0x4c3750
     * @note[short] Windows: 0x136510
     * @note[short] iOS: 0x2f899c
     * @note[short] Android
     */
    void currencyEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x42334c
     * @note[short] MacOS (Intel): 0x4c3850
     * @note[short] Windows: 0x1369a0
     * @note[short] iOS: 0x2f8a8c
     * @note[short] Android
     */
    void diamondEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x421690
     * @note[short] MacOS (Intel): 0x4c1b80
     * @note[short] Windows: 0x134960
     * @note[short] iOS: 0x2f6f8c
     * @note[short] Android
     */
    gd::string getCoinString();

    /**
     * @note[short] MacOS (ARM): 0x4218d8
     * @note[short] MacOS (Intel): 0x4c1db0
     * @note[short] Windows: 0x136dc0
     * @note[short] iOS: 0x2f7154
     * @note[short] Android
     */
    const char* getEndText();

    /**
     * @note[short] MacOS (ARM): 0x422c04
     * @note[short] MacOS (Intel): 0x4c30f0
     * @note[short] Windows: 0x135310
     * @note[short] iOS: 0x2f83bc
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] MacOS (ARM): 0x41fbcc
     * @note[short] MacOS (Intel): 0x4bfcb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x421bd4
     * @note[short] MacOS (Intel): 0x4c2050
     * @note[short] Windows: 0x135210
     * @note[short] iOS: 0x2f7410
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x422c00
     * @note[short] MacOS (Intel): 0x4c30e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x421e28
     * @note[short] MacOS (Intel): 0x4c2290
     * @note[short] Windows: 0x1353e0
     * @note[short] iOS: 0x2f7658
     * @note[short] Android
     */
    void onHideLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x421dbc
     * @note[short] MacOS (Intel): 0x4c2220
     * @note[short] Windows: 0x134860
     * @note[short] iOS: 0x2f75ec
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x421ad0
     * @note[short] MacOS (Intel): 0x4c1f60
     * @note[short] Windows: 0x135090
     * @note[short] iOS: 0x2f7324
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4219bc
     * @note[short] MacOS (Intel): 0x4c1e60
     * @note[short] Windows: 0x134e80
     * @note[short] iOS: 0x2f7218
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x421c68
     * @note[short] MacOS (Intel): 0x4c20e0
     * @note[short] Windows: 0x1354c0
     * @note[short] iOS: 0x2f74a0
     * @note[short] Android
     */
    void onRestartCheckpoint(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4223fc
     * @note[short] MacOS (Intel): 0x4c2870
     * @note[short] Windows: 0x135be0
     * @note[short] iOS: 0x2f7bdc
     * @note[short] Android
     */
    void playCoinEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x42258c
     * @note[short] MacOS (Intel): 0x4c2a10
     * @note[short] Windows: 0x136190
     * @note[short] iOS: 0x2f7d60
     * @note[short] Android
     */
    void playCurrencyEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x4228c4
     * @note[short] MacOS (Intel): 0x4c2d70
     * @note[short] Windows: 0x136620
     * @note[short] iOS: 0x2f808c
     * @note[short] Android
     */
    void playDiamondEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x422dd0
     * @note[short] MacOS (Intel): 0x4c3310
     * @note[short] Windows: 0x136ab0
     * @note[short] iOS: 0x2f855c
     * @note[short] Android
     */
    void playEndEffect();

    /**
     * @note[short] MacOS (ARM): 0x4220a4
     * @note[short] MacOS (Intel): 0x4c2510
     * @note[short] Windows: 0x1356e0
     * @note[short] iOS: 0x2f7894
     * @note[short] Android
     */
    void playStarEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x422cb4
     * @note[short] MacOS (Intel): 0x4c31e0
     * @note[short] Windows: 0x135a80
     * @note[short] iOS: 0x2f8444
     * @note[short] Android
     */
    void starEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x421ee4
     * @note[short] MacOS (Intel): 0x4c2350
     * @note[short] Android
     */
    void tryShowBanner(float dt);
    PlayLayer* m_playLayer;
    bool m_notLocal;
    bool m_coinsVerified;
    bool m_unknown3;
    bool m_exiting;
    bool m_animateCoins;
    bool m_endEffectPlayed;
    cocos2d::CCMenu* m_sideMenu;
    cocos2d::CCArray* m_coinsToAnimate;
    cocos2d::CCPoint m_starsPosition;
    cocos2d::CCPoint m_orbsPosition;
    cocos2d::CCPoint m_diamondsPosition;
    int m_orbs;
    int m_stars;
    int m_moons;
    int m_diamonds;
    bool m_secretKey;
    bool m_hidden;
};
