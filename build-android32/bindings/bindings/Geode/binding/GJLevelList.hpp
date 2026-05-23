#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJLevelList : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJLevelList";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLevelList, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJLevelList();

    /**
     * @note[short] MacOS (ARM): 0x4817d8
     * @note[short] MacOS (Intel): 0x52d6b0
     * @note[short] Windows: 0x176770
     * @note[short] iOS: 0x92fe8
     * @note[short] Android
     */
    static GJLevelList* create();

    /**
     * @note[short] MacOS (ARM): 0x484f98
     * @note[short] MacOS (Intel): 0x5318d0
     * @note[short] Windows: 0x175e80
     * @note[short] iOS: 0x9537c
     * @note[short] Android
     */
    static GJLevelList* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4b24bc
     * @note[short] MacOS (Intel): 0x563490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb1e20
     * @note[short] Android
     */
    static GJLevelList* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4b2a58
     * @note[short] MacOS (Intel): 0x563a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb2388
     * @note[short] Android
     */
    static gd::string frameForListDifficulty(int diff, DifficultyIconType type);

    /**
     * @note[short] MacOS (ARM): 0x4b2818
     * @note[short] MacOS (Intel): 0x563800
     * @note[short] Windows: 0x178000
     * @note[short] iOS: 0xb2148
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4b2a50
     * @note[short] MacOS (Intel): 0x563a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb2380
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4b0d08
     * @note[short] MacOS (Intel): 0x561c90
     * @note[short] Windows: 0x176900
     * @note[short] iOS: 0xb0ee8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4b1520
     * @note[short] MacOS (Intel): 0x562660
     * @note[short] Windows: 0x176ef0
     * @note[short] iOS: 0xb1468
     * @note[short] Android
     */
    void addLevelToList(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4b1fd4
     * @note[short] MacOS (Intel): 0x562fe0
     * @note[short] Windows: 0x177870
     * @note[short] iOS: 0xb1a88
     * @note[short] Android
     */
    int completedLevels();

    /**
     * @note[short] MacOS (ARM): 0x4b24ec
     * @note[short] MacOS (Intel): 0x5634c0
     * @note[short] Windows: 0x177ce0
     * @note[short] iOS: 0xb1e50
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4b1000
     * @note[short] MacOS (Intel): 0x561f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb1160
     * @note[short] Android
     */
    void duplicateListLevels(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4b106c
     * @note[short] MacOS (Intel): 0x561ff0
     * @note[short] Windows: 0x177170
     * @note[short] iOS: 0xb11cc
     * @note[short] Android
     */
    cocos2d::CCArray* getListLevelsArray(cocos2d::CCArray* levels);

    /**
     * @note[short] MacOS (ARM): 0x4b0f44
     * @note[short] MacOS (Intel): 0x561ee0
     * @note[short] Windows: 0x176b90
     * @note[short] iOS: 0xb10b0
     * @note[short] Android
     */
    gd::string getUnpackedDescription();

    /**
     * @note[short] MacOS (ARM): 0x4b0d80
     * @note[short] MacOS (Intel): 0x561d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb0f80
     * @note[short] Android
     */
    void handleStatsConflict(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4b0d98
     * @note[short] MacOS (Intel): 0x561d30
     * @note[short] Windows: 0x176980
     * @note[short] iOS: 0xb0f98
     * @note[short] Android
     */
    bool hasMatchingLevels(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4b1a44
     * @note[short] MacOS (Intel): 0x562b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb1760
     * @note[short] Android
     */
    int orderForLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x494a00
     * @note[short] MacOS (Intel): 0x542ce0
     * @note[short] Windows: 0x176c50
     * @note[short] iOS: 0x9efe4
     * @note[short] Android: Rebinded
     */
    void parseListLevels(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x4b18fc
     * @note[short] MacOS (Intel): 0x562aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb1684
     * @note[short] Android
     */
    void removeLevelFromList(int id);

    /**
     * @note[short] MacOS (ARM): 0x4b1a7c
     * @note[short] MacOS (Intel): 0x562bb0
     * @note[short] Windows: 0x177080
     * @note[short] iOS: 0xb1798
     * @note[short] Android
     */
    void reorderLevel(int levelID, int newPosition);

    /**
     * @note[short] MacOS (ARM): 0x4b1dfc
     * @note[short] MacOS (Intel): 0x562ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb1a34
     * @note[short] Android
     */
    void reorderLevelStep(int id, bool up);

    /**
     * @note[short] MacOS (ARM): 0x4b2038
     * @note[short] MacOS (Intel): 0x563030
     * @note[short] Windows: 0x177910
     * @note[short] iOS: 0xb1adc
     * @note[short] Android
     */
    void showListInfo();

    /**
     * @note[short] MacOS (ARM): 0x4b1fc4
     * @note[short] MacOS (Intel): 0x562fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb1a78
     * @note[short] Android
     */
    int totalLevels();

    /**
     * @note[short] MacOS (ARM): 0x4b170c
     * @note[short] MacOS (Intel): 0x562830
     * @note[short] Windows: 0x177760
     * @note[short] iOS: 0xb1544
     * @note[short] Android
     */
    void updateLevelsString();
    gd::vector<int> m_levels;
    int m_listID;
    int m_listVersion;
    int m_downloads;
    int m_likes;
    int m_difficulty;
    int m_accountID;
    int m_folder;
    int m_listRevision;
    int m_listOrder;
    int m_original;
    int m_diamonds;
    int m_levelsToClaim;
    bool m_isEditable;
    bool m_unlisted;
    bool m_friendsOnly;
    bool m_uploaded;
    bool m_favorite;
    bool m_featured;
    bool m_onlineLevelsLoaded;
    bool m_modified;
    gd::string m_creatorName;
    gd::string m_listName;
    gd::string m_unkString;
    gd::string m_levelsString;
    gd::string m_listDesc;
    int m_uploadDate;
    int m_updateDate;
    cocos2d::CCDictionary* m_levelsDict;
    GJLevelType m_listType;
    int m_M_ID;
};
