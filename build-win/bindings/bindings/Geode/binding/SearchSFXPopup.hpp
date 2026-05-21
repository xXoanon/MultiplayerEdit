#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetTextPopup.hpp"

class SearchSFXPopup : public SetTextPopup {
public:
    static constexpr auto CLASS_NAME = "SearchSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SearchSFXPopup, SetTextPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SearchSFXPopup();

    /**
     * @note[short] MacOS (ARM): 0x3b20b4
     * @note[short] MacOS (Intel): 0x4409c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16a634
     * @note[short] Android: Rebinded
     */
    static SearchSFXPopup* create(gd::string query);

    /**
     * @note[short] MacOS (ARM): 0x3b2554
     * @note[short] MacOS (Intel): 0x440ed0
     * @note[short] Windows: 0x480d20
     * @note[short] iOS: 0x16a8c8
     * @note[short] Android: Rebinded
     */
    bool init(gd::string query);

    /**
     * @note[short] MacOS (ARM): 0x3b281c
     * @note[short] MacOS (Intel): 0x441190
     * @note[short] Windows: 0x480fe0
     * @note[short] iOS: 0x16ab30
     * @note[short] Android
     */
    void onSearchFolders(cocos2d::CCObject* sender);
};
