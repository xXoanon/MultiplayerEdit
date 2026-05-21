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
#include "DemonFilterDelegate.hpp"

class LevelSearchLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DemonFilterDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSearchLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelSearchLayer();

    /**
     * @note[short] MacOS (ARM): 0x54a8c8
     * @note[short] MacOS (Intel): 0x6274d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x51224
     * @note[short] Android: Rebinded
     */
     ~LevelSearchLayer();

    /**
     * @note[short] MacOS (ARM): 0x54abf0
     * @note[short] MacOS (Intel): 0x627970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x51330
     * @note[short] Android
     */
    static LevelSearchLayer* create(int type);

    /**
     * @note[short] MacOS (ARM): 0x54aaf8
     * @note[short] MacOS (Intel): 0x627830
     * @note[short] Windows: 0x30c040
     * @note[short] iOS: 0x512e4
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int type);

    /**
     * @note[short] MacOS (ARM): 0x54fc7c
     * @note[short] MacOS (Intel): 0x62c9b0
     * @note[short] Windows: 0x312870
     * @note[short] iOS: 0x5518c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x54f208
     * @note[short] MacOS (Intel): 0x62bf90
     * @note[short] Windows: 0x30f7f0
     * @note[short] iOS: 0x54a40
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x54f2e8
     * @note[short] MacOS (Intel): 0x62c060
     * @note[short] Windows: 0x30f940
     * @note[short] iOS: 0x54b2c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x54f3f8
     * @note[short] MacOS (Intel): 0x62c130
     * @note[short] Windows: 0x30f940
     * @note[short] iOS: 0x54bac
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x54f170
     * @note[short] MacOS (Intel): 0x62bf10
     * @note[short] Windows: 0x30f7b0
     * @note[short] iOS: 0x549a8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x54ecbc
     * @note[short] MacOS (Intel): 0x62ba00
     * @note[short] Windows: 0x30e2e0
     * @note[short] iOS: 0x54660
     * @note[short] Android
     */
    virtual void demonFilterSelectClosed(int filter);

    /**
     * @note[short] MacOS (ARM): 0x54fa24
     * @note[short] MacOS (Intel): 0x62c790
     * @note[short] Windows: 0x311e90
     * @note[short] iOS: 0x5507c
     * @note[short] Android
     */
    bool checkDiff(int diff);

    /**
     * @note[short] MacOS (ARM): 0x54fb3c
     * @note[short] MacOS (Intel): 0x62c890
     * @note[short] Windows: 0x312450
     * @note[short] iOS: 0x55104
     * @note[short] Android
     */
    bool checkTime(int time);

    /**
     * @note[short] MacOS (ARM): 0x54eea8
     * @note[short] MacOS (Intel): 0x62bc40
     * @note[short] Windows: 0x30e790
     * @note[short] iOS: 0x547f4
     * @note[short] Android
     */
    void clearFilters();

    /**
     * @note[short] MacOS (ARM): 0x54d408
     * @note[short] MacOS (Intel): 0x62a120
     * @note[short] Windows: 0x30e670
     * @note[short] iOS: 0x53090
     * @note[short] Android
     */
    void confirmClearFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54eb90
     * @note[short] MacOS (Intel): 0x62b890
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getDiffKey(int diff);

    /**
     * @note[short] MacOS (ARM): 0x54f968
     * @note[short] MacOS (Intel): 0x62c6d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x54fc0
     * @note[short] Android
     */
    gd::string getLevelLenKey();

    /**
     * @note[short] MacOS (ARM): 0x54f870
     * @note[short] MacOS (Intel): 0x62c5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x54ec8
     * @note[short] Android
     */
    gd::string getSearchDiffKey();

    /**
     * @note[short] MacOS (ARM): 0x54f51c
     * @note[short] MacOS (Intel): 0x62c220
     * @note[short] Windows: 0x30fd80
     * @note[short] iOS: 0x54c2c
     * @note[short] Android: Rebinded
     */
    GJSearchObject* getSearchObject(SearchType type, gd::string query);

    /**
     * @note[short] MacOS (ARM): 0x54fc54
     * @note[short] MacOS (Intel): 0x62c990
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getTimeKey(int time);

    /**
     * @note[short] MacOS (ARM): 0x54acc8
     * @note[short] MacOS (Intel): 0x627a80
     * @note[short] Windows: 0x30c190
     * @note[short] iOS: 0x513fc
     * @note[short] Android
     */
    bool init(int type);

    /**
     * @note[short] MacOS (ARM): 0x54e824
     * @note[short] MacOS (Intel): 0x62b530
     * @note[short] Windows: 0x311bf0
     * @note[short] iOS: 0x54340
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54db3c
     * @note[short] MacOS (Intel): 0x62a890
     * @note[short] Windows: 0x311bb0
     * @note[short] iOS: 0x53728
     * @note[short] Android
     */
    void onClearFreeSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54f508
     * @note[short] MacOS (Intel): 0x62c200
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54df7c
     * @note[short] MacOS (Intel): 0x62acb0
     * @note[short] Windows: 0x3115b0
     * @note[short] iOS: 0x53cd8
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54dfe8
     * @note[short] MacOS (Intel): 0x62ad20
     * @note[short] Windows: 0x3114f0
     * @note[short] iOS: 0x53d7c
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54df10
     * @note[short] MacOS (Intel): 0x62ac40
     * @note[short] Windows: 0x311430
     * @note[short] iOS: 0x53c34
     * @note[short] Android
     */
    void onLatestStars(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54dea4
     * @note[short] MacOS (Intel): 0x62abd0
     * @note[short] Windows: 0x3112b0
     * @note[short] iOS: 0x53b90
     * @note[short] Android
     */
    void onMagic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54d4e8
     * @note[short] MacOS (Intel): 0x62a200
     * @note[short] Windows: 0x30e570
     * @note[short] iOS: 0x53144
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54dc88
     * @note[short] MacOS (Intel): 0x62a9a0
     * @note[short] Windows: 0x310fb0
     * @note[short] iOS: 0x5385c
     * @note[short] Android
     */
    void onMostDownloaded(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54dcf4
     * @note[short] MacOS (Intel): 0x62aa10
     * @note[short] Windows: 0x311070
     * @note[short] iOS: 0x53900
     * @note[short] Android
     */
    void onMostLikes(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54de38
     * @note[short] MacOS (Intel): 0x62ab60
     * @note[short] Windows: 0x311370
     * @note[short] iOS: 0x53aec
     * @note[short] Android
     */
    void onMostRecent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54d87c
     * @note[short] MacOS (Intel): 0x62a5f0
     * @note[short] Windows: 0x311730
     * @note[short] iOS: 0x534a8
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54d504
     * @note[short] MacOS (Intel): 0x62a220
     * @note[short] Windows: 0x30e520
     * @note[short] iOS: 0x53160
     * @note[short] Android
     */
    void onSearchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54da04
     * @note[short] MacOS (Intel): 0x62a760
     * @note[short] Windows: 0x311970
     * @note[short] iOS: 0x535ec
     * @note[short] Android
     */
    void onSearchUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54e5b0
     * @note[short] MacOS (Intel): 0x62b2e0
     * @note[short] Windows: 0x30e180
     * @note[short] iOS: 0x54150
     * @note[short] Android
     */
    void onSpecialDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54e054
     * @note[short] MacOS (Intel): 0x62ad90
     * @note[short] Windows: 0x311670
     * @note[short] iOS: 0x53e20
     * @note[short] Android
     */
    void onStarAward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54dd60
     * @note[short] MacOS (Intel): 0x62aa80
     * @note[short] Windows: 0x311130
     * @note[short] iOS: 0x539a4
     * @note[short] Android
     */
    void onSuggested(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54ddcc
     * @note[short] MacOS (Intel): 0x62aaf0
     * @note[short] Windows: 0x3111f0
     * @note[short] iOS: 0x53a48
     * @note[short] Android
     */
    void onTrending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54e0c0
     * @note[short] MacOS (Intel): 0x62ae00
     * @note[short] Windows: 0x311f70
     * @note[short] iOS: 0x53ec4
     * @note[short] Android
     */
    void toggleDifficulty(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54e87c
     * @note[short] MacOS (Intel): 0x62b580
     * @note[short] Windows: 0x3122d0
     * @note[short] iOS: 0x54398
     * @note[short] Android
     */
    void toggleDifficultyNum(int diff, bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x54e790
     * @note[short] MacOS (Intel): 0x62b4b0
     * @note[short] Windows: 0x311c60
     * @note[short] iOS: 0x542ac
     * @note[short] Android
     */
    void toggleStar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54e5ec
     * @note[short] MacOS (Intel): 0x62b320
     * @note[short] Windows: 0x312530
     * @note[short] iOS: 0x5418c
     * @note[short] Android
     */
    void toggleTime(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54ea00
     * @note[short] MacOS (Intel): 0x62b700
     * @note[short] Windows: 0x3126e0
     * @note[short] iOS: 0x54498
     * @note[short] Android
     */
    void toggleTimeNum(int time, bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x54d548
     * @note[short] MacOS (Intel): 0x62a270
     * @note[short] Windows: 0x30fa10
     * @note[short] iOS: 0x532b4
     * @note[short] Android
     */
    void updateSearchLabel(char const* label);
    int m_type;
    CCTextInputNode* m_searchInput;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCArray* m_difficultySprites;
    cocos2d::CCArray* m_lengthSprites;
    cocos2d::CCDictionary* m_difficultyDict;
    cocos2d::CCSprite* m_lastDifficultySprite;
    CCMenuItemSpriteExtra* m_demonTypeButton;
};
