#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SongInfoObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SongInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongInfoObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4d740c
     * @note[short] MacOS (Intel): 0x58c1e0
     * @note[short] Windows: 0x3448b0
     * @note[short] iOS: 0x154920
     * @note[short] Android
     */
    static SongInfoObject* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4e0cc0
     * @note[short] MacOS (Intel): 0x596ea0
     * @note[short] Windows: 0x344730
     * @note[short] iOS: 0x15b164
     * @note[short] Android
     */
    static SongInfoObject* create(int songID);

    /**
     * @note[short] MacOS (ARM): 0x4ddfe4
     * @note[short] MacOS (Intel): 0x593d00
     * @note[short] Windows: 0x345bf0
     * @note[short] iOS: 0x158f48
     * @note[short] Android: Rebinded
     */
    static SongInfoObject* create(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, gd::string unknown, int nongType, gd::string extraArtistIDs, bool isNew, int libraryOrder, int priority);

    /**
     * @note[short] MacOS (ARM): 0x4e1260
     * @note[short] MacOS (Intel): 0x5974f0
     * @note[short] Windows: 0x346250
     * @note[short] iOS: 0x15b644
     * @note[short] Android
     */
    static SongInfoObject* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4e1920
     * @note[short] MacOS (Intel): 0x597d60
     * @note[short] Windows: 0x3465b0
     * @note[short] iOS: 0x15bb98
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4e1ac0
     * @note[short] MacOS (Intel): 0x597f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15bd38
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4de440
     * @note[short] MacOS (Intel): 0x594240
     * @note[short] Windows: 0x346c70
     * @note[short] iOS: 0x159300
     * @note[short] Android: Rebinded
     */
    void addTags(gd::string tags);

    /**
     * @note[short] MacOS (ARM): 0x4deb74
     * @note[short] MacOS (Intel): 0x594aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool containsTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x4d8128
     * @note[short] MacOS (Intel): 0x58d270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1551e8
     * @note[short] Android
     */
    void copyValues(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4e1ac8
     * @note[short] MacOS (Intel): 0x597f70
     * @note[short] Windows: 0x3467b0
     * @note[short] iOS: 0x15bd40
     * @note[short] Android
     */
    gd::string getArtistNames(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4e20a0
     * @note[short] MacOS (Intel): 0x598730
     * @note[short] Windows: 0x346c00
     * @note[short] iOS: 0x15c0b4
     * @note[short] Android
     */
    int getExtraArtistCount();

    /**
     * @note[short] MacOS (ARM): 0x4e21ac
     * @note[short] MacOS (Intel): 0x5988a0
     * @note[short] Windows: 0x346e60
     * @note[short] iOS: 0x15c100
     * @note[short] Android
     */
    gd::string getTagsString(bool shortTags);

    /**
     * @note[short] MacOS (ARM): 0x4e0e50
     * @note[short] MacOS (Intel): 0x5970a0
     * @note[short] Windows: 0x345e60
     * @note[short] iOS: 0x15b378
     * @note[short] Android: Rebinded
     */
    bool init(int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, gd::string unknown, int nongType, gd::string extraArtistIDs, bool isNew, int libraryOrder, int priority);

    /**
     * @note[short] MacOS (ARM): 0x4e1090
     * @note[short] MacOS (Intel): 0x597310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15b510
     * @note[short] Android: Rebinded
     */
    void updateArtists(gd::string artists);
    int m_songID;
    gd::string m_songName;
    gd::string m_artistName;
    gd::string m_youtubeVideo;
    gd::string m_youtubeChannel;
    gd::string m_songUrl;
    gd::string m_unkString;
    int m_artistID;
    float m_fileSize;
    int m_nongType;
    gd::string m_extraArtists;
    bool m_unloaded;
    bool m_verified;
    bool m_isBlocked;
    int m_priority;
    int m_unkInt;
    int m_BPM;
    bool m_isNew;
    int m_libraryOrder;
    int m_songOrder;
    gd::string m_extraArtistNames;
    gd::unordered_set<int> m_artistIDs;
    gd::set<int> m_tags;
    gd::string m_longTagsString;
    gd::string m_shortTagsString;
};
