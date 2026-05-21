#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"
#include "SetTextPopupDelegate.hpp"

class SetFolderPopup : public SetIDPopup, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetFolderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetFolderPopup, SetIDPopup)

    /**
     * @note[short] MacOS (ARM): 0x24bf9c
     * @note[short] MacOS (Intel): 0x2adba0
     * @note[short] Windows: 0x29c4f0
     * @note[short] iOS: 0x2dee20
     * @note[short] Android: Rebinded
     */
    static SetFolderPopup* create(int value, bool isCreated, gd::string title);

    /**
     * @note[short] MacOS (ARM): 0x24c5c8
     * @note[short] MacOS (Intel): 0x2ae220
     * @note[short] Windows: 0x29c8b0
     * @note[short] iOS: 0x2df310
     * @note[short] Android
     */
    virtual void valueChanged();

    /**
     * @note[short] MacOS (ARM): 0x24ca34
     * @note[short] MacOS (Intel): 0x2ae6e0
     * @note[short] Windows: 0x29cbf0
     * @note[short] iOS: 0x2df644
     * @note[short] Android: Rebinded
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x24c150
     * @note[short] MacOS (Intel): 0x2adda0
     * @note[short] Windows: 0x29c630
     * @note[short] iOS: 0x2def08
     * @note[short] Android: Rebinded
     */
    bool init(int value, bool isCreated, gd::string title);

    /**
     * @note[short] MacOS (ARM): 0x24c3c4
     * @note[short] MacOS (Intel): 0x2ae030
     * @note[short] Windows: 0x29c9f0
     * @note[short] iOS: 0x2df174
     * @note[short] Android
     */
    void onSetFolderName(cocos2d::CCObject* sender);
    bool m_isCreated;
    cocos2d::CCLabelBMFont* m_titleLabel;
};
