#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "MusicSearchResult.hpp"

class SFXSearchResult : public MusicSearchResult {
public:
    static constexpr auto CLASS_NAME = "SFXSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXSearchResult, MusicSearchResult)

    /**
     * @note[short] MacOS (ARM): 0x4e3c58
     * @note[short] MacOS (Intel): 0x59a760
     * @note[short] Windows: 0x347cc0
     * @note[short] iOS: 0x15d000
     * @note[short] Android
     */
    static SFXSearchResult* create(int folderID);

    /**
     * @note[short] MacOS (ARM): 0x4e3d58
     * @note[short] MacOS (Intel): 0x59a880
     * @note[short] Windows: 0x347d40
     * @note[short] iOS: 0x15d0e4
     * @note[short] Android
     */
    virtual void updateObjects(AudioSortType type);

    /**
     * @note[short] MacOS (ARM): 0x4e3d50
     * @note[short] MacOS (Intel): 0x59a870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15d0dc
     * @note[short] Android
     */
    SFXFolderObject* getActiveFolder();

    /**
     * @note[short] MacOS (ARM): 0x4e45f0
     * @note[short] MacOS (Intel): 0x59b290
     * @note[short] Windows: 0x3482a0
     * @note[short] iOS: 0x15d65c
     * @note[short] Android
     */
    int getSelectedPage(int id, int count);

    /**
     * @note[short] MacOS (ARM): 0x4e3cdc
     * @note[short] MacOS (Intel): 0x59a7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int folderID);

    /**
     * @note[short] MacOS (ARM): 0x4e3cf4
     * @note[short] MacOS (Intel): 0x59a810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15d084
     * @note[short] Android
     */
    void setActiveFolder(SFXFolderObject* folder);
    int m_folderID;
    SFXFolderObject* m_folderObject;
};
