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

class URLCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "URLCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fe934
     * @note[short] MacOS (Intel): 0x259680
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     URLCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fe978
     * @note[short] MacOS (Intel): 0x2596f0
     * @note[short] Windows: 0x3c830
     * @note[short] iOS: 0x113004
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fe9e0
     * @note[short] MacOS (Intel): 0x259760
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x113058
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1ee4fc
     * @note[short] MacOS (Intel): 0x247590
     * @note[short] Windows: 0xc0250
     * @note[short] iOS: 0x105a48
     * @note[short] Android
     */
    void loadFromObject(CCURLObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1fe984
     * @note[short] MacOS (Intel): 0x259710
     * @note[short] Windows: 0xc0480
     * @note[short] iOS: 0x113010
     * @note[short] Android
     */
    void onURL(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ee6d4
     * @note[short] MacOS (Intel): 0x247760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x105c14
     * @note[short] Android
     */
    void updateBGColor(int index);
    CCURLObject* m_urlObject;
};
