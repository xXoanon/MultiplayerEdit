#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSearchObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSearchObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSearchObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4b00a4
     * @note[short] MacOS (Intel): 0x560d30
     * @note[short] Windows: 0x174700
     * @note[short] iOS: 0xb04a0
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType);

    /**
     * @note[short] MacOS (ARM): 0x4b0110
     * @note[short] MacOS (Intel): 0x560da0
     * @note[short] Windows: 0x1747e0
     * @note[short] iOS: 0xb05b0
     * @note[short] Android: Rebinded
     */
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery);

    /**
     * @note[short] MacOS (ARM): 0x4afdfc
     * @note[short] MacOS (Intel): 0x560a00
     * @note[short] Windows: 0x174910
     * @note[short] iOS: 0xb0254
     * @note[short] Android: Rebinded
     */
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x48bd08
     * @note[short] MacOS (Intel): 0x538f00
     * @note[short] Windows: 0x174000
     * @note[short] iOS: 0x999c8
     * @note[short] Android
     */
    static GJSearchObject* createFromKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4b0338
     * @note[short] MacOS (Intel): 0x560fe0
     * @note[short] Windows: 0x174f10
     * @note[short] iOS: 0xb081c
     * @note[short] Android: Rebinded
     */
    static char const* getSearchKey(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x49286c
     * @note[short] MacOS (Intel): 0x5407b0
     * @note[short] Windows: 0x174c50
     * @note[short] iOS: 0x9dcac
     * @note[short] Android
     */
    char const* getKey();

    /**
     * @note[short] MacOS (ARM): 0x4b0430
     * @note[short] MacOS (Intel): 0x561190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb0908
     * @note[short] Android
     */
    char const* getNextPageKey();

    /**
     * @note[short] MacOS (ARM): 0x4b06a0
     * @note[short] MacOS (Intel): 0x5614f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb0aac
     * @note[short] Android
     */
    GJSearchObject* getNextPageObject();

    /**
     * @note[short] MacOS (ARM): 0x4b06ac
     * @note[short] MacOS (Intel): 0x561510
     * @note[short] Windows: 0x174da0
     * @note[short] iOS: 0xb0ab8
     * @note[short] Android
     */
    GJSearchObject* getPageObject(int page);

    /**
     * @note[short] MacOS (ARM): 0x4b08a0
     * @note[short] MacOS (Intel): 0x5617d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb0c6c
     * @note[short] Android
     */
    GJSearchObject* getPrevPageObject();

    /**
     * @note[short] MacOS (ARM): 0x4b01f8
     * @note[short] MacOS (Intel): 0x560ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xb06dc
     * @note[short] Android: Rebinded
     */
    bool init(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x4b08b4
     * @note[short] MacOS (Intel): 0x5617f0
     * @note[short] Windows: 0x1751f0
     * @note[short] iOS: 0xb0c80
     * @note[short] Android
     */
    bool isLevelSearchObject();
    SearchType m_searchType;
    gd::string m_searchQuery;
    gd::string m_difficulty;
    gd::string m_length;
    int m_page;
    bool m_starFilter;
    bool m_noStarFilter;
    int m_total;
    bool m_uncompletedFilter;
    bool m_completedFilter;
    bool m_featuredFilter;
    bool m_originalFilter;
    bool m_twoPlayerFilter;
    bool m_coinsFilter;
    bool m_epicFilter;
    bool m_legendaryFilter;
    bool m_mythicFilter;
    GJDifficulty m_demonFilter;
    int m_folder;
    int m_songID;
    bool m_customSongFilter;
    bool m_songFilter;
    bool m_searchIsOverlay;
    int m_searchMode;
};
