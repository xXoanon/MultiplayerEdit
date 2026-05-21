#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x51640
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GManager();

    /**
     * @note[short] MacOS (ARM): 0x40ecbc
     * @note[short] MacOS (Intel): 0x4abfe0
     * @note[short] Windows: 0x6a7f0
     * @note[short] iOS: 0x24a694
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x40eccc
     * @note[short] MacOS (Intel): 0x4ac000
     * @note[short] Windows: 0x6a800
     * @note[short] iOS: 0x24a6a4
     * @note[short] Android
     */
    virtual void setup();

    /**
     * @note[short] MacOS (ARM): 0x40f1c8
     * @note[short] MacOS (Intel): 0x4ac4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24aad4
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x40f870
     * @note[short] MacOS (Intel): 0x4acb70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24af08
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x40f874
     * @note[short] MacOS (Intel): 0x4acb80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24af0c
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] MacOS (ARM): 0x40ed68
     * @note[short] MacOS (Intel): 0x4ac0d0
     * @note[short] Windows: 0x6a820
     * @note[short] iOS: 0x24a738
     * @note[short] Android
     */
    gd::string getCompressedSaveString();

    /**
     * @note[short] MacOS (ARM): 0x40ece4
     * @note[short] MacOS (Intel): 0x4ac040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24a6b4
     * @note[short] Android
     */
    gd::string getSaveString();

    /**
     * @note[short] MacOS (ARM): 0x40ecdc
     * @note[short] MacOS (Intel): 0x4ac020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void load();

    /**
     * @note[short] MacOS (ARM): 0x40f1cc
     * @note[short] MacOS (Intel): 0x4ac4f0
     * @note[short] Windows: 0x6aac0
     * @note[short] iOS: 0x24aad8
     * @note[short] Android: Rebinded
     */
    void loadDataFromFile(gd::string const& filename);

    /**
     * @note[short] MacOS (ARM): 0x40ee90
     * @note[short] MacOS (Intel): 0x4ac1f0
     * @note[short] Windows: 0x6a8f0
     * @note[short] iOS: 0x24a850
     * @note[short] Android: Rebinded
     */
    void loadFromCompressedString(gd::string& str);

    /**
     * @note[short] MacOS (ARM): 0x40ede4
     * @note[short] MacOS (Intel): 0x4ac140
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24a7a4
     * @note[short] Android: Rebinded
     */
    void loadFromString(gd::string& str);

    /**
     * @note[short] MacOS (ARM): 0x40ef34
     * @note[short] MacOS (Intel): 0x4ac270
     * @note[short] Windows: 0x6a9d0
     * @note[short] iOS: 0x24a8e4
     * @note[short] Android
     */
    void save();

    /**
     * @note[short] MacOS (ARM): 0x40f13c
     * @note[short] MacOS (Intel): 0x4ac470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24aa58
     * @note[short] Android: Rebinded
     */
    void saveData(DS_Dictionary* dict, gd::string filename);

    /**
     * @note[short] MacOS (ARM): 0x40efd8
     * @note[short] MacOS (Intel): 0x4ac310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24a978
     * @note[short] Android: Rebinded
     */
    void saveGMTo(gd::string filename);

    /**
     * @note[short] MacOS (ARM): 0x40f488
     * @note[short] MacOS (Intel): 0x4ac760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24ac68
     * @note[short] Android: Rebinded
     */
    bool tryLoadData(DS_Dictionary* dict, gd::string const& filename);
    gd::string m_fileName;
    bool m_setup;
    bool m_saved;
    bool m_quickSave;
};
