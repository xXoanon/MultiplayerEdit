#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "GameRateDelegate.hpp"
#include "ListButtonBarDelegate.hpp"
#include "DialogDelegate.hpp"
#include "CharacterColorDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate, public CharacterColorDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJGarageLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGarageLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x309420
     * @note[short] Android: Out of line
     */
     GJGarageLayer();

    /**
     * @note[short] MacOS (ARM): 0x2f3298
     * @note[short] MacOS (Intel): 0x368f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x301994
     * @note[short] Android: Rebinded
     */
     ~GJGarageLayer();

    /**
     * @note[short] MacOS (ARM): 0x2f96f0
     * @note[short] MacOS (Intel): 0x36f8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static gd::string achievementForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f955c
     * @note[short] MacOS (Intel): 0x36f730
     * @note[short] Windows: 0x278310
     * @note[short] iOS: 0x306acc
     * @note[short] Android
     */
    static gd::string descriptionForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f33d8
     * @note[short] MacOS (Intel): 0x369110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x301ad4
     * @note[short] Android: Out of line
     */
    static GJGarageLayer* node();

    /**
     * @note[short] MacOS (ARM): 0x2f3394
     * @note[short] MacOS (Intel): 0x3690d0
     * @note[short] Windows: 0x272e90
     * @note[short] iOS: 0x301a90
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x2f93d0
     * @note[short] MacOS (Intel): 0x36f5c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3069e0
     * @note[short] Android
     */
    static gd::string titleForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f34d8
     * @note[short] MacOS (Intel): 0x369280
     * @note[short] Windows: 0x273050
     * @note[short] iOS: 0x301b48
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2f9c74
     * @note[short] MacOS (Intel): 0x36fe70
     * @note[short] Windows: 0x2791d0
     * @note[short] iOS: 0x306f80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2f687c
     * @note[short] MacOS (Intel): 0x36c730
     * @note[short] Windows: 0x274c70
     * @note[short] iOS: 0x3046ec
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2f69e0
     * @note[short] MacOS (Intel): 0x36c860
     * @note[short] Windows: 0x274e60
     * @note[short] iOS: 0x30481c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2f6bc0
     * @note[short] MacOS (Intel): 0x36ca20
     * @note[short] Windows: 0xc3d80
     * @note[short] iOS: 0x304984
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2f8cc0
     * @note[short] MacOS (Intel): 0x36ee30
     * @note[short] Windows: 0xc3e30
     * @note[short] iOS: 0x3064b4
     * @note[short] Android
     */
    virtual void listButtonBarSwitchedPage(ListButtonBar* bar, int page);

    /**
     * @note[short] MacOS (ARM): 0x2f8e20
     * @note[short] MacOS (Intel): 0x36efc0
     * @note[short] Windows: 0x277c00
     * @note[short] iOS: 0x30659c
     * @note[short] Android
     */
    virtual void showUnlockPopup(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f9a58
     * @note[short] MacOS (Intel): 0x36fc20
     * @note[short] Windows: 0x2788d0
     * @note[short] iOS: 0x306df0
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] MacOS (ARM): 0x2f9820
     * @note[short] MacOS (Intel): 0x36f9b0
     * @note[short] Windows: 0x2784a0
     * @note[short] iOS: 0x306bb8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2f991c
     * @note[short] MacOS (Intel): 0x36fac0
     * @note[short] Windows: 0x278700
     * @note[short] iOS: 0x306cb4
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2f8bdc
     * @note[short] MacOS (Intel): 0x36ed30
     * @note[short] Windows: 0x277a50
     * @note[short] iOS: 0x30641c
     * @note[short] Android
     */
    virtual void playerColorChanged();

    /**
     * @note[short] MacOS (ARM): 0x2f686c
     * @note[short] MacOS (Intel): 0x36c710
     * @note[short] Windows: 0x274c60
     * @note[short] iOS: 0x3046dc
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x2f7f0c
     * @note[short] MacOS (Intel): 0x36de00
     * @note[short] Windows: 0x276730
     * @note[short] iOS: 0x3058a8
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f7b9c
     * @note[short] MacOS (Intel): 0x36da80
     * @note[short] Windows: 0x2767f0
     * @note[short] iOS: 0x305660
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(int count, int page, IconType type, int current);

    /**
     * @note[short] MacOS (ARM): 0x2f8b44
     * @note[short] MacOS (Intel): 0x36ec90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    gd::string getLockFrame(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f6c74
     * @note[short] MacOS (Intel): 0x36cab0
     * @note[short] Windows: 0x275e70
     * @note[short] iOS: 0x3049f0
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f60a0
     * @note[short] MacOS (Intel): 0x36bf20
     * @note[short] Windows: 0x279030
     * @note[short] iOS: 0x3043b0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f62d4
     * @note[short] MacOS (Intel): 0x36c170
     * @note[short] Windows: 0x274a70
     * @note[short] iOS: 0x3045e0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f74fc
     * @note[short] MacOS (Intel): 0x36d390
     * @note[short] Windows: 0x275f70
     * @note[short] iOS: 0x305120
     * @note[short] Android
     */
    void onNavigate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f627c
     * @note[short] MacOS (Intel): 0x36c110
     * @note[short] Windows: 0x278e50
     * @note[short] iOS: 0x304588
     * @note[short] Android
     */
    void onPaint(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f64e4
     * @note[short] MacOS (Intel): 0x36c360
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f7fa4
     * @note[short] MacOS (Intel): 0x36deb0
     * @note[short] Windows: 0x277170
     * @note[short] iOS: 0x305920
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f6c40
     * @note[short] MacOS (Intel): 0x36ca80
     * @note[short] Windows: 0x275fa0
     * @note[short] iOS: 0x3049bc
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f6250
     * @note[short] MacOS (Intel): 0x36c0e0
     * @note[short] Windows: 0x278d00
     * @note[short] iOS: 0x30455c
     * @note[short] Android
     */
    void onShards(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f61f0
     * @note[short] MacOS (Intel): 0x36c080
     * @note[short] Windows: 0x278fd0
     * @note[short] iOS: 0x3044fc
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f7ef0
     * @note[short] MacOS (Intel): 0x36dde0
     * @note[short] Windows: 0x277a00
     * @note[short] iOS: 0x30588c
     * @note[short] Android
     */
    void onSpecial(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f8610
     * @note[short] MacOS (Intel): 0x36e710
     * @note[short] Windows: 0x277810
     * @note[short] iOS: 0x305f84
     * @note[short] Android
     */
    void onToggleItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2f89a8
     * @note[short] MacOS (Intel): 0x36eaf0
     * @note[short] Windows: 0x278b10
     * @note[short] iOS: 0x306280
     * @note[short] Android
     */
    void playRainbowEffect();

    /**
     * @note[short] MacOS (ARM): 0x2f9be8
     * @note[short] MacOS (Intel): 0x36fde0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playShadowEffect();

    /**
     * @note[short] MacOS (ARM): 0x2f6dac
     * @note[short] MacOS (Intel): 0x36cc00
     * @note[short] Windows: 0x275fd0
     * @note[short] iOS: 0x304ab4
     * @note[short] Android
     */
    void selectTab(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f55a0
     * @note[short] MacOS (Intel): 0x36b430
     * @note[short] Windows: 0x275210
     * @note[short] iOS: 0x30392c
     * @note[short] Android
     */
    void setupIconSelect();

    /**
     * @note[short] MacOS (ARM): 0x2f6ed8
     * @note[short] MacOS (Intel): 0x36cd40
     * @note[short] Windows: 0x276090
     * @note[short] iOS: 0x304b8c
     * @note[short] Android
     */
    void setupPage(int page, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f7534
     * @note[short] MacOS (Intel): 0x36d3c0
     * @note[short] Windows: 0x276ac0
     * @note[short] iOS: 0x305158
     * @note[short] Android
     */
    void setupSpecialPage();

    /**
     * @note[short] MacOS (ARM): 0x2f8ce0
     * @note[short] MacOS (Intel): 0x36ee50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showUnlockPopupNew(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f8b70
     * @note[short] MacOS (Intel): 0x36ecc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGlow();

    /**
     * @note[short] MacOS (ARM): 0x2f4f24
     * @note[short] MacOS (Intel): 0x36ae20
     * @note[short] Windows: 0x277a80
     * @note[short] iOS: 0x30336c
     * @note[short] Android
     */
    void updatePlayerColors();

    /**
     * @note[short] MacOS (ARM): 0x2f69d8
     * @note[short] MacOS (Intel): 0x36c840
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlayerName(char const* name);
    CCTextInputNode* m_usernameInput;
    SimplePlayer* m_playerObject;
    cocos2d::CCArray* m_tabButtons;
    cocos2d::CCArray* m_pageButtons;
    cocos2d::CCNode* m_unknown;
    cocos2d::CCSprite* m_supporter;
    bool m_hasClosed;
    IconType m_iconType;
    gd::map<IconType, int> m_iconPages;
    cocos2d::CCSprite* m_cursor1;
    cocos2d::CCSprite* m_cursor2;
    CCMenuItemSpriteExtra* m_currentIcon;
    ListButtonBar* m_iconSelection;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_rightArrow;
    cocos2d::CCMenu* m_navDotMenu;
    int m_iconID;
    IconType m_selectedIconType;
    bool m_videoPlaying;
};
