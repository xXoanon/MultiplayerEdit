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
#include "FLAlertLayerProtocol.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class GJMessageCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessageCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessageCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fd9ec
     * @note[short] MacOS (Intel): 0x258430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJMessageCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fd768
     * @note[short] MacOS (Intel): 0x258050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1125a8
     * @note[short] Android: Rebinded
     */
     ~GJMessageCell();

    /**
     * @note[short] MacOS (ARM): 0x1fda50
     * @note[short] MacOS (Intel): 0x2584e0
     * @note[short] Windows: 0xbc320
     * @note[short] iOS: 0x11267c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fdd20
     * @note[short] MacOS (Intel): 0x2587e0
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x11289c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1fddcc
     * @note[short] MacOS (Intel): 0x2588b0
     * @note[short] Windows: 0xbe160
     * @note[short] iOS: 0x112948
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1fdf30
     * @note[short] MacOS (Intel): 0x258a40
     * @note[short] Windows: 0xbe300
     * @note[short] iOS: 0x112a2c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1fe118
     * @note[short] MacOS (Intel): 0x258c20
     * @note[short] Windows: 0xbe480
     * @note[short] iOS: 0x112b30
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1fe280
     * @note[short] MacOS (Intel): 0x258d90
     * @note[short] Windows: 0xbc1b0
     * @note[short] iOS: 0x112bc8
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x1f3618
     * @note[short] MacOS (Intel): 0x24ca10
     * @note[short] Windows: 0xbd500
     * @note[short] iOS: 0x10a830
     * @note[short] Android
     */
    void loadFromMessage(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x1fdc94
     * @note[short] MacOS (Intel): 0x258750
     * @note[short] Windows: 0xbde90
     * @note[short] iOS: 0x112810
     * @note[short] Android
     */
    void markAsRead();

    /**
     * @note[short] MacOS (ARM): 0x1fdb38
     * @note[short] MacOS (Intel): 0x2585e0
     * @note[short] Windows: 0xbdfa0
     * @note[short] iOS: 0x1126e0
     * @note[short] Android
     */
    void onDeleteMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fdc7c
     * @note[short] MacOS (Intel): 0x258730
     * @note[short] Windows: 0xbe140
     * @note[short] iOS: 0x1127f8
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fda64
     * @note[short] MacOS (Intel): 0x258500
     * @note[short] Windows: 0xbddf0
     * @note[short] iOS: 0x112690
     * @note[short] Android
     */
    void onViewMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fdc44
     * @note[short] MacOS (Intel): 0x258700
     * @note[short] Windows: 0xbdf60
     * @note[short] iOS: 0x1127c0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f3f70
     * @note[short] MacOS (Intel): 0x24d380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10b13c
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x1f4f18
     * @note[short] MacOS (Intel): 0x24e5c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateToggle();
    GJUserMessage* m_message;
    UploadActionPopup* m_popup;
    CCMenuItemToggler* m_toggler;
};
