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

class FileSaveManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "FileSaveManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FileSaveManager, GManager)

    /**
     * @note[short] MacOS (ARM): 0x61b4
     * @note[short] MacOS (Intel): 0x6ce0
     * @note[short] Android
     */
    static FileSaveManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x623c
     * @note[short] MacOS (Intel): 0x6d70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x626c
     * @note[short] MacOS (Intel): 0x6da0
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] MacOS (ARM): 0x6734
     * @note[short] MacOS (Intel): 0x72a0
     * @note[short] Android
     */
    cocos2d::CCDictionary* getStoreData();

    /**
     * @note[short] MacOS (ARM): 0x6260
     * @note[short] MacOS (Intel): 0x6d90
     * @note[short] Android
     */
    void loadDataFromFile(char const* filename);
    cocos2d::CCDictionary* m_storeData;
};
