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

class GJUserCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJUserCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJUserCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fbdb8
     * @note[short] MacOS (Intel): 0x256350
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJUserCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fbb38
     * @note[short] MacOS (Intel): 0x255f50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1114e0
     * @note[short] Android: Rebinded
     */
     ~GJUserCell();

    /**
     * @note[short] MacOS (ARM): 0x1fbe18
     * @note[short] MacOS (Intel): 0x2563f0
     * @note[short] Windows: 0xbac40
     * @note[short] iOS: 0x111598
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fc580
     * @note[short] MacOS (Intel): 0x256b50
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x111a1c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1fc62c
     * @note[short] MacOS (Intel): 0x256c20
     * @note[short] Windows: 0xbbb70
     * @note[short] iOS: 0x111ac8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1fc874
     * @note[short] MacOS (Intel): 0x256ed0
     * @note[short] Windows: 0xbbf30
     * @note[short] iOS: 0x111cc4
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1fca80
     * @note[short] MacOS (Intel): 0x2570d0
     * @note[short] Windows: 0xbc0e0
     * @note[short] iOS: 0x111de8
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1fcbe8
     * @note[short] MacOS (Intel): 0x257240
     * @note[short] Windows: 0xbc1b0
     * @note[short] iOS: 0x111e80
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x1f2654
     * @note[short] MacOS (Intel): 0x24ba20
     * @note[short] Windows: 0xbac60
     * @note[short] iOS: 0x1098cc
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1fc0f4
     * @note[short] MacOS (Intel): 0x2566d0
     * @note[short] Windows: 0xbb750
     * @note[short] iOS: 0x11176c
     * @note[short] Android
     */
    void onCancelFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fc240
     * @note[short] MacOS (Intel): 0x256810
     * @note[short] Windows: 0xbb8f0
     * @note[short] iOS: 0x111888
     * @note[short] Android
     */
    void onRemoveFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fc208
     * @note[short] MacOS (Intel): 0x2567e0
     * @note[short] Windows: 0xbbb30
     * @note[short] iOS: 0x111850
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fbe60
     * @note[short] MacOS (Intel): 0x256440
     * @note[short] Windows: 0xbb540
     * @note[short] iOS: 0x1115e0
     * @note[short] Android
     */
    void onUnblockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fc4dc
     * @note[short] MacOS (Intel): 0x256aa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fbe28
     * @note[short] MacOS (Intel): 0x256410
     * @note[short] Windows: 0xbb500
     * @note[short] iOS: 0x1115a8
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f25d4
     * @note[short] MacOS (Intel): 0x24b9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10984c
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJUserScore* m_userScore;
    UploadActionPopup* m_uploadPopup;
};
