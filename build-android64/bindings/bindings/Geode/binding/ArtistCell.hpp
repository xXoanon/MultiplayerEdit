#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"

class ArtistCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "ArtistCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ArtistCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fa730
     * @note[short] MacOS (Intel): 0x2546e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     ArtistCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fa774
     * @note[short] MacOS (Intel): 0x254750
     * @note[short] Windows: 0x3c830
     * @note[short] iOS: 0x1107c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fa938
     * @note[short] MacOS (Intel): 0x254910
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x11096c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1ee130
     * @note[short] MacOS (Intel): 0x2471e0
     * @note[short] Windows: 0xb5610
     * @note[short] iOS: 0x105690
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1fa780
     * @note[short] MacOS (Intel): 0x254770
     * @note[short] Windows: 0xb5940
     * @note[short] iOS: 0x1107d4
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fa85c
     * @note[short] MacOS (Intel): 0x254840
     * @note[short] Windows: 0xb59e0
     * @note[short] iOS: 0x1108a0
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ee47c
     * @note[short] MacOS (Intel): 0x247530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1059c8
     * @note[short] Android
     */
    void updateBGColor(int index);
    SongInfoObject* m_songInfo;
};
