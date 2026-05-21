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

class GJRequestCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJRequestCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRequestCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fcebc
     * @note[short] MacOS (Intel): 0x257670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJRequestCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fcc38
     * @note[short] MacOS (Intel): 0x257290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x111ed0
     * @note[short] Android: Rebinded
     */
     ~GJRequestCell();

    /**
     * @note[short] MacOS (ARM): 0x1fcf20
     * @note[short] MacOS (Intel): 0x257720
     * @note[short] Windows: 0xbc320
     * @note[short] iOS: 0x111fa4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fd204
     * @note[short] MacOS (Intel): 0x257a40
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x1121e8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1fd2b0
     * @note[short] MacOS (Intel): 0x257b10
     * @note[short] Windows: 0xbcf10
     * @note[short] iOS: 0x112294
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1fd43c
     * @note[short] MacOS (Intel): 0x257ce0
     * @note[short] Windows: 0xbd0c0
     * @note[short] iOS: 0x112384
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1fd640
     * @note[short] MacOS (Intel): 0x257ef0
     * @note[short] Windows: 0xbd2a0
     * @note[short] iOS: 0x1124a4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1fd718
     * @note[short] MacOS (Intel): 0x258000
     * @note[short] Windows: 0xbc1b0
     * @note[short] iOS: 0x112558
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x1f2e88
     * @note[short] MacOS (Intel): 0x24c220
     * @note[short] Windows: 0xbc340
     * @note[short] iOS: 0x10a0cc
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1fd170
     * @note[short] MacOS (Intel): 0x2579a0
     * @note[short] Windows: 0xbcc70
     * @note[short] iOS: 0x112154
     * @note[short] Android
     */
    void markAsRead();

    /**
     * @note[short] MacOS (ARM): 0x1fd04c
     * @note[short] MacOS (Intel): 0x257870
     * @note[short] Windows: 0xbcd50
     * @note[short] iOS: 0x11205c
     * @note[short] Android
     */
    void onDeleteRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fd158
     * @note[short] MacOS (Intel): 0x257980
     * @note[short] Windows: 0xbcef0
     * @note[short] iOS: 0x11213c
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fcf6c
     * @note[short] MacOS (Intel): 0x257770
     * @note[short] Windows: 0xbcbc0
     * @note[short] iOS: 0x111ff0
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fcf34
     * @note[short] MacOS (Intel): 0x257740
     * @note[short] Windows: 0xbb500
     * @note[short] iOS: 0x111fb8
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f2e08
     * @note[short] MacOS (Intel): 0x24c1c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10a04c
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x1f4f34
     * @note[short] MacOS (Intel): 0x24e5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateToggle();
    GJUserScore* m_score;
    UploadActionPopup* m_popup;
    CCMenuItemToggler* m_toggler;
};
