#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJAccountManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJAccountManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJAccountManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJAccountManager* get();

    /**
     * @note[short] MacOS (ARM): 0xb6520
     * @note[short] MacOS (Intel): 0xcf140
     * @note[short] Windows: 0x1fffd0
     * @note[short] iOS: 0x39e9c4
     * @note[short] Android
     */
    static GJAccountManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0xb8b04
     * @note[short] MacOS (Intel): 0xd1bb0
     * @note[short] Windows: 0x200590
     * @note[short] iOS: 0x3a0230
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0xb8c5c
     * @note[short] MacOS (Intel): 0xd1cf0
     * @note[short] Windows: 0x2005d0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0xb8c8c
     * @note[short] MacOS (Intel): 0xd1d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a02d4
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb9cb8
     * @note[short] MacOS (Intel): 0xd2d10
     * @note[short] Windows: 0x201970
     * @note[short] iOS: 0x3a0ba0
     * @note[short] Android: Rebinded
     */
    bool backupAccount(gd::string url);

    /**
     * @note[short] MacOS (ARM): 0xbad8c
     * @note[short] MacOS (Intel): 0xd3fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a176c
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0xbad34
     * @note[short] MacOS (Intel): 0xd3f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a1714
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0xbad30
     * @note[short] MacOS (Intel): 0xd3f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a1710
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0xb999c
     * @note[short] MacOS (Intel): 0xd29e0
     * @note[short] Windows: 0x201350
     * @note[short] iOS: 0x3a09dc
     * @note[short] Android
     */
    bool getAccountBackupURL();

    /**
     * @note[short] MacOS (ARM): 0xba160
     * @note[short] MacOS (Intel): 0xd3260
     * @note[short] Windows: 0x2022b0
     * @note[short] iOS: 0x3a0f08
     * @note[short] Android
     */
    bool getAccountSyncURL();

    /**
     * @note[short] MacOS (ARM): 0xb8b58
     * @note[short] MacOS (Intel): 0xd1c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a0268
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0xbaf60
     * @note[short] MacOS (Intel): 0xd4160
     * @note[short] Windows: 0x204060
     * @note[short] iOS: 0x3a1908
     * @note[short] Android: Rebinded
     */
    gd::string getShaPassword(gd::string password);

    /**
     * @note[short] MacOS (ARM): 0xb6910
     * @note[short] MacOS (Intel): 0xcf570
     * @note[short] Windows: 0x200340
     * @note[short] iOS: 0x39ecb4
     * @note[short] Android: Rebinded
     */
    void handleIt(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0xb6f8c
     * @note[short] MacOS (Intel): 0xcfd80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void handleItDelayed(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0xb70f8
     * @note[short] MacOS (Intel): 0xcfec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* node, void* data);

    /**
     * @note[short] MacOS (ARM): 0xb8b3c
     * @note[short] MacOS (Intel): 0xd1bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0xba734
     * @note[short] MacOS (Intel): 0xd3850
     * @note[short] Windows: 0x2038a0
     * @note[short] iOS: 0x3a12ac
     * @note[short] Android: Rebinded
     */
    void linkToAccount(gd::string username, gd::string gjp2, int accountID, int userID);

    /**
     * @note[short] MacOS (ARM): 0xb911c
     * @note[short] MacOS (Intel): 0xd21a0
     * @note[short] Windows: 0x200b00
     * @note[short] iOS: 0x3a0558
     * @note[short] Android: Rebinded
     */
    void loginAccount(gd::string username, gd::string gjp2);

    /**
     * @note[short] MacOS (ARM): 0xb7654
     * @note[short] MacOS (Intel): 0xd0440
     * @note[short] Windows: 0x201ea0
     * @note[short] iOS: 0x39f498
     * @note[short] Android: Rebinded
     */
    void onBackupAccountCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb8604
     * @note[short] MacOS (Intel): 0xd16c0
     * @note[short] Windows: 0x2016a0
     * @note[short] iOS: 0x39feb8
     * @note[short] Android: Rebinded
     */
    void onGetAccountBackupURLCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb882c
     * @note[short] MacOS (Intel): 0xd18d0
     * @note[short] Windows: 0x2025f0
     * @note[short] iOS: 0x3a002c
     * @note[short] Android: Rebinded
     */
    void onGetAccountSyncURLCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb72f8
     * @note[short] MacOS (Intel): 0xd00a0
     * @note[short] Windows: 0x200f60
     * @note[short] iOS: 0x39f2b0
     * @note[short] Android: Rebinded
     */
    void onLoginAccountCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb6720
     * @note[short] MacOS (Intel): 0xcf3b0
     * @note[short] Windows: 0x200240
     * @note[short] iOS: 0x39eb9c
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0xb721c
     * @note[short] MacOS (Intel): 0xcffe0
     * @note[short] Windows: 0x200970
     * @note[short] iOS: 0x39f1f8
     * @note[short] Android: Rebinded
     */
    void onRegisterAccountCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb7900
     * @note[short] MacOS (Intel): 0xd0710
     * @note[short] Windows: 0x202b30
     * @note[short] iOS: 0x39f674
     * @note[short] Android: Rebinded
     */
    void onSyncAccountCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb8538
     * @note[short] MacOS (Intel): 0xd1620
     * @note[short] Windows: 0x203f00
     * @note[short] iOS: 0x39fe2c
     * @note[short] Android: Rebinded
     */
    void onUpdateAccountSettingsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0xb65cc
     * @note[short] MacOS (Intel): 0xcf210
     * @note[short] Windows: 0x2000f0
     * @note[short] iOS: 0x39ea48
     * @note[short] Android: Rebinded
     */
    void ProcessHttpRequest(gd::string url, gd::string params, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0xb8e84
     * @note[short] MacOS (Intel): 0xd1ef0
     * @note[short] Windows: 0x2006a0
     * @note[short] iOS: 0x3a03a4
     * @note[short] Android: Rebinded
     */
    void registerAccount(gd::string response, gd::string tag, gd::string data);

    /**
     * @note[short] MacOS (ARM): 0xb8d8c
     * @note[short] MacOS (Intel): 0xd1e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a0340
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0xba484
     * @note[short] MacOS (Intel): 0xd35a0
     * @note[short] Windows: 0x2028c0
     * @note[short] iOS: 0x3a10cc
     * @note[short] Android: Rebinded
     */
    bool syncAccount(gd::string url);

    /**
     * @note[short] MacOS (ARM): 0xba848
     * @note[short] MacOS (Intel): 0xd3980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a13c0
     * @note[short] Android
     */
    void unlinkFromAccount();

    /**
     * @note[short] MacOS (ARM): 0xba8e0
     * @note[short] MacOS (Intel): 0xd3a30
     * @note[short] Windows: 0x203ab0
     * @note[short] iOS: 0x3a1458
     * @note[short] Android: Rebinded
     */
    bool updateAccountSettings(int messageStatus, int friendRequestStatus, int commentStatus, gd::string youtube, gd::string twitter, gd::string twitch, gd::string instagram, gd::string tiktok, gd::string discord, gd::string custom);
    cocos2d::CCDictionary* m_activeDownloads;
    gd::string m_username;
    int m_accountID;
    int m_unkInt1;
    int m_unkInt2;
    gd::string m_GJP2;
    GJAccountRegisterDelegate* m_accountRegisterDelegate;
    GJAccountLoginDelegate* m_accountLoginDelegate;
    GJAccountDelegate* m_accountDelegate;
    GJAccountBackupDelegate* m_backupDelegate;
    GJAccountSyncDelegate* m_syncDelegate;
    GJAccountSettingsDelegate* m_accountSettingsDelegate;
    int m_gameManagerSize;
    int m_localLevelsSize;
    gd::string m_password;
};
