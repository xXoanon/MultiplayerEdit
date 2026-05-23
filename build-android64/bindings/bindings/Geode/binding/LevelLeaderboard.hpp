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
#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LevelLeaderboard : public FLAlertLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LevelLeaderboard";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelLeaderboard, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x35900c
     * @note[short] MacOS (Intel): 0x3d9f00
     * @note[short] Windows: 0x3009d0
     * @note[short] iOS: 0x24f2a8
     * @note[short] Android
     */
    static LevelLeaderboard* create(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x35ae08
     * @note[short] MacOS (Intel): 0x3dbe90
     * @note[short] Windows: 0x42640
     * @note[short] iOS: 0x250d7c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x35ad8c
     * @note[short] MacOS (Intel): 0x3dbe20
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x250d00
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x35b2e0
     * @note[short] MacOS (Intel): 0x3dc3d0
     * @note[short] Windows: 0x867f0
     * @note[short] iOS: 0x251094
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x35b010
     * @note[short] MacOS (Intel): 0x3dc0d0
     * @note[short] Windows: 0x302b90
     * @note[short] iOS: 0x250ebc
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* scores, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x35b15c
     * @note[short] MacOS (Intel): 0x3dc210
     * @note[short] Windows: 0x302c30
     * @note[short] iOS: 0x250f60
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x35aa04
     * @note[short] MacOS (Intel): 0x3dba70
     * @note[short] Windows: 0x301fc0
     * @note[short] iOS: 0x2509d8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x35abfc
     * @note[short] MacOS (Intel): 0x3dbc70
     * @note[short] Windows: 0x3025e0
     * @note[short] iOS: 0x250bbc
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x35ac08
     * @note[short] MacOS (Intel): 0x3dbca0
     * @note[short] Windows: 0x3025f0
     * @note[short] iOS: 0x250bc8
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x35a874
     * @note[short] MacOS (Intel): 0x3db920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x250884
     * @note[short] Android
     */
    void deleteLocalScores();

    /**
     * @note[short] MacOS (ARM): 0x35aa9c
     * @note[short] MacOS (Intel): 0x3dbaf0
     * @note[short] Windows: 0x302140
     * @note[short] iOS: 0x250a70
     * @note[short] Android
     */
    cocos2d::CCArray* getLocalScores();

    /**
     * @note[short] MacOS (ARM): 0x35a05c
     * @note[short] MacOS (Intel): 0x3db110
     * @note[short] Windows: 0x301ca0
     * @note[short] iOS: 0x2501a8
     * @note[short] Android: Rebinded
     */
    CCMenuItemSpriteExtra* getSpriteButton(gd::string frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position, int button);

    /**
     * @note[short] MacOS (ARM): 0x359148
     * @note[short] MacOS (Intel): 0x3da090
     * @note[short] Windows: 0x300b10
     * @note[short] iOS: 0x24f398
     * @note[short] Android
     */
    bool init(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x35ae40
     * @note[short] MacOS (Intel): 0x3dbed0
     * @note[short] Windows: 0x302990
     * @note[short] iOS: 0x250db4
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x35a4d8
     * @note[short] MacOS (Intel): 0x3db570
     * @note[short] Windows: 0x302310
     * @note[short] iOS: 0x250580
     * @note[short] Android
     */
    void loadScores();

    /**
     * @note[short] MacOS (ARM): 0x35a230
     * @note[short] MacOS (Intel): 0x3db2e0
     * @note[short] Windows: 0x302790
     * @note[short] iOS: 0x2502fc
     * @note[short] Android
     */
    void onChangeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35a464
     * @note[short] MacOS (Intel): 0x3db510
     * @note[short] Windows: 0x3026f0
     * @note[short] iOS: 0x25050c
     * @note[short] Android
     */
    void onChangeType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35a358
     * @note[short] MacOS (Intel): 0x3db400
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x250400
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35a280
     * @note[short] MacOS (Intel): 0x3db330
     * @note[short] Windows: 0x301e80
     * @note[short] iOS: 0x25034c
     * @note[short] Android
     */
    void onDeleteLocalScores(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35a394
     * @note[short] MacOS (Intel): 0x3db430
     * @note[short] Windows: 0x302810
     * @note[short] iOS: 0x25043c
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35acb0
     * @note[short] MacOS (Intel): 0x3dbd40
     * @note[short] Windows: 0x302600
     * @note[short] iOS: 0x250c24
     * @note[short] Android
     */
    void reloadLeaderboard(LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x35a6e0
     * @note[short] MacOS (Intel): 0x3db770
     * @note[short] Windows: 0x302d40
     * @note[short] iOS: 0x2506f0
     * @note[short] Android
     */
    void setupLeaderboard(cocos2d::CCArray* scores);
    GJGameLevel* m_level;
    LevelLeaderboardType m_type;
    LevelLeaderboardMode m_mode;
    cocos2d::CCArray* m_scores;
    GJCommentListLayer* m_list;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_pointsBtn;
};
