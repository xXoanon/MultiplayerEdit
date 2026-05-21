#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GManager.hpp"

class LocalLevelManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "LocalLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LocalLevelManager, GManager)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static LocalLevelManager* get();

    /**
     * @note[short] MacOS (ARM): 0x51f8e8
     * @note[short] MacOS (Intel): 0x5f6810
     * @note[short] Windows: 0x32ff30
     * @note[short] iOS: 0x1c857c
     * @note[short] Android
     */
    static LocalLevelManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x51fa68
     * @note[short] MacOS (Intel): 0x5f69b0
     * @note[short] Windows: 0x32ffd0
     * @note[short] iOS: 0x1c869c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x520c38
     * @note[short] MacOS (Intel): 0x5f7df0
     * @note[short] Windows: 0x3309a0
     * @note[short] iOS: 0x1c92a4
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x520c90
     * @note[short] MacOS (Intel): 0x5f7e50
     * @note[short] Windows: 0x330a00
     * @note[short] iOS: 0x1c92fc
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x520bbc
     * @note[short] MacOS (Intel): 0x5f7d60
     * @note[short] Windows: 0x330910
     * @note[short] iOS: 0x1c926c
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] MacOS (ARM): 0x5200e0
     * @note[short] MacOS (Intel): 0x5f7180
     * @note[short] Windows: 0x3303a0
     * @note[short] iOS: 0x1c8a58
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllLevelsInDict();

    /**
     * @note[short] MacOS (ARM): 0x5202cc
     * @note[short] MacOS (Intel): 0x5f73b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c8b8c
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* getAllLevelsWithName(gd::string name);

    /**
     * @note[short] MacOS (ARM): 0x5209c0
     * @note[short] MacOS (Intel): 0x5f7b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9088
     * @note[short] Android
     */
    cocos2d::CCArray* getCreatedLevels(int folder);

    /**
     * @note[short] MacOS (ARM): 0x520b2c
     * @note[short] MacOS (Intel): 0x5f7cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c91e0
     * @note[short] Android
     */
    cocos2d::CCArray* getCreatedLists(int folder);

    /**
     * @note[short] MacOS (ARM): 0x51ff90
     * @note[short] MacOS (Intel): 0x5f7000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c8910
     * @note[short] Android
     */
    cocos2d::CCDictionary* getLevelsInNameGroups();

    /**
     * @note[short] MacOS (ARM): 0x51fe0c
     * @note[short] MacOS (Intel): 0x5f6e00
     * @note[short] Windows: 0x330290
     * @note[short] iOS: 0x1c8868
     * @note[short] Android
     */
    gd::string getMainLevelString(int id);

    /**
     * @note[short] MacOS (ARM): 0x520920
     * @note[short] MacOS (Intel): 0x5f7ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c8fe8
     * @note[short] Android
     */
    void markLevelsAsUnmodified();

    /**
     * @note[short] MacOS (ARM): 0x5207e0
     * @note[short] MacOS (Intel): 0x5f7980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c8efc
     * @note[short] Android
     */
    void moveLevelToTop(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x520970
     * @note[short] MacOS (Intel): 0x5f7b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9038
     * @note[short] Android
     */
    void reorderLevels();

    /**
     * @note[short] MacOS (ARM): 0x520adc
     * @note[short] MacOS (Intel): 0x5f7c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9190
     * @note[short] Android
     */
    void reorderLists();

    /**
     * @note[short] MacOS (ARM): 0x51faa8
     * @note[short] MacOS (Intel): 0x5f69f0
     * @note[short] Windows: 0x330010
     * @note[short] iOS: 0x1c86dc
     * @note[short] Android
     */
    void tryLoadMainLevelString(int id);

    /**
     * @note[short] MacOS (ARM): 0x520894
     * @note[short] MacOS (Intel): 0x5f7a50
     * @note[short] Windows: 0x330890
     * @note[short] iOS: 0x1c8f6c
     * @note[short] Android
     */
    int updateLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x5203f4
     * @note[short] MacOS (Intel): 0x5f7510
     * @note[short] Windows: 0x330500
     * @note[short] iOS: 0x1c8c6c
     * @note[short] Android
     */
    void updateLevelRevision();

    /**
     * @note[short] MacOS (ARM): 0x520a50
     * @note[short] MacOS (Intel): 0x5f7c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c9114
     * @note[short] Android
     */
    int updateListOrder();
    cocos2d::CCArray* m_localLevels;
    cocos2d::CCArray* m_localLists;
    gd::unordered_map<int, gd::string> m_mainLevels;
};
