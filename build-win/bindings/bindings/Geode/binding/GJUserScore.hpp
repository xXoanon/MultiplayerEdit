#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJUserScore : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUserScore";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUserScore, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x142100
     * @note[short] iOS: 0xb3048
     * @note[short] Android: Out of line
     */
     GJUserScore();

    /**
     * @note[short] MacOS (ARM): 0x4af5f4
     * @note[short] MacOS (Intel): 0x560140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xafe74
     * @note[short] Android
     */
    static GJUserScore* create();

    /**
     * @note[short] MacOS (ARM): 0x486598
     * @note[short] MacOS (Intel): 0x533030
     * @note[short] Windows: 0x1710b0
     * @note[short] iOS: 0x9618c
     * @note[short] Android
     */
    static GJUserScore* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4af6e0
     * @note[short] MacOS (Intel): 0x5602c0
     * @note[short] Windows: 0x172b50
     * @note[short] iOS: 0xafee8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4af754
     * @note[short] MacOS (Intel): 0x560350
     * @note[short] Windows: 0x172ba0
     * @note[short] iOS: 0xaff30
     * @note[short] Android
     */
    bool isCurrentUser();

    /**
     * @note[short] MacOS (ARM): 0x4af728
     * @note[short] MacOS (Intel): 0x560310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void mergeWithScore(GJUserScore* score);
    gd::string m_userName;
    gd::string m_userUDID;
    int m_scoreType;
    int m_userID;
    int m_accountID;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_demons;
    int m_playerRank;
    int m_creatorPoints;
    int m_secretCoins;
    int m_userCoins;
    int m_iconID;
    int m_color1;
    int m_color2;
    int m_color3;
    int m_special;
    IconType m_iconType;
    int m_messageState;
    int m_friendStatus;
    int m_commentHistoryStatus;
    gd::string m_youtubeURL;
    gd::string m_twitterURL;
    gd::string m_twitchURL;
    gd::string m_discordUsername;
    gd::string m_instagramURL;
    gd::string m_tiktokURL;
    gd::string m_customString;
    int m_playerCube;
    int m_playerShip;
    int m_playerBall;
    int m_playerUfo;
    int m_playerWave;
    int m_playerRobot;
    int m_playerSpider;
    int m_playerSwing;
    int m_playerJetpack;
    int m_playerStreak;
    bool m_glowEnabled;
    int m_playerExplosion;
    int m_modBadge;
    int m_globalRank;
    int m_friendReqStatus;
    int m_newMsgCount;
    int m_friendReqCount;
    int m_newFriendCount;
    bool m_newFriendRequest;
    bool m_toggled;
    gd::string m_unkString;
    double m_lobbyJoinTime;
    gd::string m_demonInfo;
    gd::string m_starsInfo;
    gd::string m_platformerInfo;
    int m_levelMode;
    LevelLeaderboardMode m_leaderboardMode;
    LeaderboardStat m_leaderboardStat;
};
