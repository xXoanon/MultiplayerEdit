#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJMultiplayerManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMultiplayerManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMultiplayerManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x578c94
     * @note[short] MacOS (Intel): 0x658b50
     * @note[short] Windows: 0x2825f0
     * @note[short] iOS: 0x1ce33c
     * @note[short] Android
     */
    static GJMultiplayerManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x57a298
     * @note[short] MacOS (Intel): 0x65a2c0
     * @note[short] Windows: 0x282d40
     * @note[short] iOS: 0x1cf130
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x57af70
     * @note[short] MacOS (Intel): 0x65aef0
     * @note[short] Windows: 0x283d10
     * @note[short] iOS: 0x1cf4e0
     * @note[short] Android: Rebinded
     */
    void addComment(gd::string str, int lobbyID);

    /**
     * @note[short] MacOS (ARM): 0x57a414
     * @note[short] MacOS (Intel): 0x65a430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x57a444
     * @note[short] MacOS (Intel): 0x65a460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x57bbfc
     * @note[short] MacOS (Intel): 0x65bd70
     * @note[short] Windows: 0x283b30
     * @note[short] iOS: 0x1cfbfc
     * @note[short] Android: Rebinded
     */
    void createAndAddComment(gd::string text, int lobbyID);

    /**
     * @note[short] MacOS (ARM): 0x57bdb4
     * @note[short] MacOS (Intel): 0x65bf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1cfd14
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x57bdb0
     * @note[short] MacOS (Intel): 0x65bf30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1cfd10
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x57b170
     * @note[short] MacOS (Intel): 0x65b100
     * @note[short] Android
     */
    bool exitLobby(int id);

    /**
     * @note[short] MacOS (ARM): 0x57bdac
     * @note[short] MacOS (Intel): 0x65bf20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1cfd0c
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x57a990
     * @note[short] MacOS (Intel): 0x65a9b0
     * @note[short] Windows: 0x283ed0
     * @note[short] iOS: 0x1cf1f0
     * @note[short] Android
     */
    gd::string getBasePostString();

    /**
     * @note[short] MacOS (ARM): 0x57a310
     * @note[short] MacOS (Intel): 0x65a350
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x57aa98
     * @note[short] MacOS (Intel): 0x65aaa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getLastCommentIDForGame(int id);

    /**
     * @note[short] MacOS (ARM): 0x579194
     * @note[short] MacOS (Intel): 0x659090
     * @note[short] Windows: 0x282ab0
     * @note[short] iOS: 0x1ce7d8
     * @note[short] Android: Rebinded
     */
    void handleIt(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x579580
     * @note[short] MacOS (Intel): 0x6594d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    void handleItDelayed(bool success, gd::string response, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x5796ec
     * @note[short] MacOS (Intel): 0x659610
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* node, void* data);

    /**
     * @note[short] MacOS (ARM): 0x57a2f4
     * @note[short] MacOS (Intel): 0x65a330
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x57a63c
     * @note[short] MacOS (Intel): 0x65a630
     * @note[short] Android
     */
    bool joinLobby(int id);

    /**
     * @note[short] MacOS (ARM): 0x57a030
     * @note[short] MacOS (Intel): 0x65a060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1cef34
     * @note[short] Android: Rebinded
     */
    void onExitLobbyCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x579810
     * @note[short] MacOS (Intel): 0x659730
     * @note[short] Windows: 0x282e70
     * @note[short] iOS: 0x1cea50
     * @note[short] Android: Rebinded
     */
    void onJoinLobbyCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x578fa4
     * @note[short] MacOS (Intel): 0x658ed0
     * @note[short] Windows: 0x2829b0
     * @note[short] iOS: 0x1ce6c0
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x57a130
     * @note[short] MacOS (Intel): 0x65a140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ceff8
     * @note[short] Android: Rebinded
     */
    void onUploadCommentCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] MacOS (ARM): 0x578d10
     * @note[short] MacOS (Intel): 0x658bd0
     * @note[short] Windows: 0x2826a0
     * @note[short] iOS: 0x1ce3ac
     * @note[short] Android: Rebinded
     */
    void ProcessHttpRequest(gd::string url, gd::string params, gd::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x57a544
     * @note[short] MacOS (Intel): 0x65a550
     * @note[short] Windows: 0x282dc0
     * @note[short] iOS: 0x1cf18c
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x57b440
     * @note[short] MacOS (Intel): 0x65b3e0
     * @note[short] Windows: 0x2835d0
     * @note[short] iOS: 0x1cf6c0
     * @note[short] Android: Rebinded
     */
    bool uploadComment(gd::string text, int lobbyID);
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCDictionary* m_lobbyScores;
    cocos2d::CCDictionary* m_scoreArrays;
    cocos2d::CCDictionary* m_lobbyComments;
    GJMPDelegate* m_mpDelegate;
    UploadActionDelegate* m_uploadDelegate;
};
