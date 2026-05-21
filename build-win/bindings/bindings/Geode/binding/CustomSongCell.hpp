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
#include "CustomSongDelegate.hpp"

class CustomSongCell : public TableViewCell, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fa10c
     * @note[short] MacOS (Intel): 0x253d70
     * @note[short] Windows: 0xb4550
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CustomSongCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fa158
     * @note[short] MacOS (Intel): 0x253df0
     * @note[short] Windows: 0xb4680
     * @note[short] iOS: 0x11029c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fa2e4
     * @note[short] MacOS (Intel): 0x254000
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x110428
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1fa228
     * @note[short] MacOS (Intel): 0x253ee0
     * @note[short] Windows: 0xb4850
     * @note[short] iOS: 0x110364
     * @note[short] Android
     */
    virtual void songIDChanged(int id);

    /**
     * @note[short] MacOS (ARM): 0x1fa284
     * @note[short] MacOS (Intel): 0x253f60
     * @note[short] Windows: 0xb4890
     * @note[short] iOS: 0x1103c0
     * @note[short] Android
     */
    virtual int getActiveSongID();

    /**
     * @note[short] MacOS (ARM): 0x1fa2bc
     * @note[short] MacOS (Intel): 0x253fc0
     * @note[short] Windows: 0xb48b0
     * @note[short] iOS: 0x1103f8
     * @note[short] Android
     */
    virtual gd::string getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1fa2d4
     * @note[short] MacOS (Intel): 0x253fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x110418
     * @note[short] Android
     */
    virtual LevelSettingsObject* getLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x1eab44
     * @note[short] MacOS (Intel): 0x243e10
     * @note[short] Windows: 0xb4690
     * @note[short] iOS: 0x102208
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1fa164
     * @note[short] MacOS (Intel): 0x253e10
     * @note[short] Windows: 0xb48e0
     * @note[short] iOS: 0x1102a8
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f5160
     * @note[short] MacOS (Intel): 0x24e830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldReload();

    /**
     * @note[short] MacOS (ARM): 0x1eacec
     * @note[short] MacOS (Intel): 0x243fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1023ac
     * @note[short] Android
     */
    void updateBGColor(int index);
    SongInfoObject* m_songInfoObject;
    bool m_selected;
};
