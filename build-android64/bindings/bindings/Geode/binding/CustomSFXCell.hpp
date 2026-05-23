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
#include "CustomSFXDelegate.hpp"

class CustomSFXCell : public TableViewCell, public CustomSFXDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSFXCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSFXCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fa3cc
     * @note[short] MacOS (Intel): 0x254160
     * @note[short] Windows: 0xb4b00
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CustomSFXCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fa41c
     * @note[short] MacOS (Intel): 0x2541f0
     * @note[short] Windows: 0xb4b90
     * @note[short] iOS: 0x11050c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fa4c0
     * @note[short] MacOS (Intel): 0x2542f0
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x1105b0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1fa42c
     * @note[short] MacOS (Intel): 0x254210
     * @note[short] Windows: 0xb4ca0
     * @note[short] iOS: 0x11051c
     * @note[short] Android
     */
    virtual void sfxObjectSelected(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1fa488
     * @note[short] MacOS (Intel): 0x254290
     * @note[short] Windows: 0xb4890
     * @note[short] iOS: 0x110578
     * @note[short] Android
     */
    virtual int getActiveSFXID();

    /**
     * @note[short] MacOS (ARM): 0x1eb374
     * @note[short] MacOS (Intel): 0x2445a0
     * @note[short] Windows: 0xb4bb0
     * @note[short] iOS: 0x102a10
     * @note[short] Android
     */
    void loadFromObject(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1f511c
     * @note[short] MacOS (Intel): 0x24e7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldReload();

    /**
     * @note[short] MacOS (ARM): 0x1eb444
     * @note[short] MacOS (Intel): 0x244680
     * @note[short] Windows: 0xb4ce0
     * @note[short] iOS: 0x102ae0
     * @note[short] Android
     */
    void updateBGColor(int index);
    SFXInfoObject* m_sfxObject;
    bool m_selected;
    bool m_compactMode;
};
