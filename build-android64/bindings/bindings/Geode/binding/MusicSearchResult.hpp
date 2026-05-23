#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "OptionsObjectDelegate.hpp"

class MusicSearchResult : public cocos2d::CCObject, public OptionsObjectDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicSearchResult, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x33b880
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MusicSearchResult();

    /**
     * @note[short] MacOS (ARM): 0x4e2920
     * @note[short] MacOS (Intel): 0x599040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15c600
     * @note[short] Android: Rebinded
     */
     ~MusicSearchResult();

    /**
     * @note[short] MacOS (ARM): 0x4e2a54
     * @note[short] MacOS (Intel): 0x599160
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15c66c
     * @note[short] Android
     */
    static MusicSearchResult* create(GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x4e3438
     * @note[short] MacOS (Intel): 0x599e80
     * @note[short] Windows: 0x347330
     * @note[short] iOS: 0x15caa4
     * @note[short] Android
     */
    virtual void updateObjects(AudioSortType type);

    /**
     * @note[short] MacOS (ARM): 0x4e3408
     * @note[short] MacOS (Intel): 0x599e20
     * @note[short] Windows: 0x347320
     * @note[short] iOS: 0x15ca74
     * @note[short] Android
     */
    virtual void stateChanged(OptionsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4e2ebc
     * @note[short] MacOS (Intel): 0x599710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15c888
     * @note[short] Android
     */
    cocos2d::CCArray* applyArtistFilters(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4e2cf4
     * @note[short] MacOS (Intel): 0x5994d0
     * @note[short] Windows: 0x347250
     * @note[short] iOS: 0x15c7e8
     * @note[short] Android
     */
    cocos2d::CCArray* applyTagFilters(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4e2be4
     * @note[short] MacOS (Intel): 0x599360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15c764
     * @note[short] Android
     */
    void createArtistFilterObjects();

    /**
     * @note[short] MacOS (ARM): 0x4e2ad4
     * @note[short] MacOS (Intel): 0x5991f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15c6e0
     * @note[short] Android
     */
    void createTagFilterObjects();

    /**
     * @note[short] MacOS (ARM): 0x4e36d0
     * @note[short] MacOS (Intel): 0x59a1a0
     * @note[short] Windows: 0x347880
     * @note[short] iOS: 0x15cbf8
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* getFilesMatchingSearch(cocos2d::CCArray* objects, gd::string query);

    /**
     * @note[short] MacOS (ARM): 0x4e2ac8
     * @note[short] MacOS (Intel): 0x5991e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x4e3068
     * @note[short] MacOS (Intel): 0x599950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15c978
     * @note[short] Android
     */
    void updateFutureCount(cocos2d::CCArray* objects, cocos2d::CCArray* allObjects);

    /**
     * @note[short] MacOS (ARM): 0x4e3428
     * @note[short] MacOS (Intel): 0x599e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15ca94
     * @note[short] Android
     */
    void updateObjects();
    cocos2d::CCArray* m_filterObjects;
    cocos2d::CCArray* m_tagFilterObjects;
    cocos2d::CCArray* m_artistFilterObjects;
    int m_startIndex;
    int m_audioType;
    gd::string m_searchQuery;
    AudioSortType m_sortType;
    bool m_tagFilter;
    bool m_artistFilter;
    GJSongType m_songType;
};
