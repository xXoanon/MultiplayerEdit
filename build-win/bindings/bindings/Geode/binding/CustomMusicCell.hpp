#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CustomSongCell.hpp"

class CustomMusicCell : public CustomSongCell {
public:
    static constexpr auto CLASS_NAME = "CustomMusicCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomMusicCell, CustomSongCell)

    /**
     * @note[short] MacOS (ARM): 0x1fa5a8
     * @note[short] MacOS (Intel): 0x254450
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CustomMusicCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1ead6c
     * @note[short] MacOS (Intel): 0x244010
     * @note[short] Windows: 0xb4e70
     * @note[short] iOS: 0x10242c
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1eae9c
     * @note[short] MacOS (Intel): 0x244150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10255c
     * @note[short] Android
     */
    void updateBGColor(int index);
};
