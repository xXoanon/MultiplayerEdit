#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelBrowserLayer.hpp"
#include "TextInputDelegate.hpp"
#include "SelectListIconDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "LevelListDeleteDelegate.hpp"

class LevelListLayer : public LevelBrowserLayer, public TextInputDelegate, public SelectListIconDelegate, public LikeItemDelegate, public LevelListDeleteDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListLayer, LevelBrowserLayer)

    /**
     * @note[short] MacOS (ARM): 0x2ef188
     * @note[short] MacOS (Intel): 0x364390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x249d94
     * @note[short] Android: Out of line
     */
     LevelListLayer();

    /**
     * @note[short] MacOS (ARM): 0x2e6fd4
     * @note[short] MacOS (Intel): 0x35b9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x242f98
     * @note[short] Android: Rebinded
     */
     ~LevelListLayer();

    /**
     * @note[short] MacOS (ARM): 0x2e71dc
     * @note[short] MacOS (Intel): 0x35bc80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24312c
     * @note[short] Android
     */
    static LevelListLayer* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2e713c
     * @note[short] MacOS (Intel): 0x35bbf0
     * @note[short] Windows: 0x303410
     * @note[short] iOS: 0x2430e0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2ea32c
     * @note[short] MacOS (Intel): 0x35efb0
     * @note[short] Windows: 0x3050d0
     * @note[short] iOS: 0x24603c
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x2ea368
     * @note[short] MacOS (Intel): 0x35efe0
     * @note[short] Windows: 0x305100
     * @note[short] iOS: 0x246078
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2ea724
     * @note[short] MacOS (Intel): 0x35f3a0
     * @note[short] Windows: 0x3068d0
     * @note[short] iOS: 0x246344
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x2ea93c
     * @note[short] MacOS (Intel): 0x35f5d0
     * @note[short] Windows: 0x2cc550
     * @note[short] iOS: 0x2464a4
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x2eada4
     * @note[short] MacOS (Intel): 0x35fb10
     * @note[short] Windows: 0x307130
     * @note[short] iOS: 0x246770
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eb4d4
     * @note[short] MacOS (Intel): 0x360270
     * @note[short] Windows: 0x307930
     * @note[short] iOS: 0x246dac
     * @note[short] Android: Rebinded
     */
    virtual void shareCommentClosed(gd::string text, ShareCommentLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2eb124
     * @note[short] MacOS (Intel): 0x35fe90
     * @note[short] Windows: 0x307550
     * @note[short] iOS: 0x246a94
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2eac58
     * @note[short] MacOS (Intel): 0x35f9b0
     * @note[short] Windows: 0x307080
     * @note[short] iOS: 0x2466c0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x2ead9c
     * @note[short] MacOS (Intel): 0x35faf0
     * @note[short] Windows: 0x307120
     * @note[short] iOS: 0x246768
     * @note[short] Android
     */
    virtual cocos2d::CCArray* updateResultArray(cocos2d::CCArray* results);

    /**
     * @note[short] MacOS (ARM): 0x2ea948
     * @note[short] MacOS (Intel): 0x35f600
     * @note[short] Windows: 0x306c30
     * @note[short] iOS: 0x2464b0
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x2eb5c8
     * @note[short] MacOS (Intel): 0x360360
     * @note[short] Windows: 0x307b50
     * @note[short] iOS: 0x246e70
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType type, int id, bool liked);

    /**
     * @note[short] MacOS (ARM): 0x2eb79c
     * @note[short] MacOS (Intel): 0x3605a0
     * @note[short] Windows: 0x307e00
     * @note[short] iOS: 0x246f88
     * @note[short] Android
     */
    virtual void iconSelectClosed(SelectListIconLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2eb8cc
     * @note[short] MacOS (Intel): 0x360730
     * @note[short] Windows: 0x308720
     * @note[short] iOS: 0x24706c
     * @note[short] Android
     */
    virtual void levelListDeleteFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x2eb9bc
     * @note[short] MacOS (Intel): 0x360830
     * @note[short] Windows: 0x308850
     * @note[short] iOS: 0x247134
     * @note[short] Android
     */
    virtual void levelListDeleteFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x2ebcb8
     * @note[short] MacOS (Intel): 0x360b30
     * @note[short] Windows: 0x308c10
     * @note[short] iOS: 0x247360
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2ebaac
     * @note[short] MacOS (Intel): 0x360930
     * @note[short] Windows: 0x308980
     * @note[short] iOS: 0x2471fc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2ebdbc
     * @note[short] MacOS (Intel): 0x360c00
     * @note[short] Windows: 0x308d70
     * @note[short] iOS: 0x24745c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2eb290
     * @note[short] MacOS (Intel): 0x360000
     * @note[short] Windows: 0x3081e0
     * @note[short] iOS: 0x246ba4
     * @note[short] Android
     */
    void cloneList();

    /**
     * @note[short] MacOS (ARM): 0x2e8e44
     * @note[short] MacOS (Intel): 0x35da90
     * @note[short] Windows: 0x3080f0
     * @note[short] iOS: 0x244cac
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e90cc
     * @note[short] MacOS (Intel): 0x35dd20
     * @note[short] Windows: 0x308470
     * @note[short] iOS: 0x244ed4
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e8fd4
     * @note[short] MacOS (Intel): 0x35dc10
     * @note[short] Windows: 0x3085a0
     * @note[short] iOS: 0x244e18
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e725c
     * @note[short] MacOS (Intel): 0x35bce0
     * @note[short] Windows: 0x303640
     * @note[short] iOS: 0x2431a0
     * @note[short] Android
     */
    bool init(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2ea390
     * @note[short] MacOS (Intel): 0x35f000
     * @note[short] Windows: 0x3060a0
     * @note[short] iOS: 0x2460a0
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eb238
     * @note[short] MacOS (Intel): 0x35ffb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x246b4c
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x2e91b4
     * @note[short] MacOS (Intel): 0x35de00
     * @note[short] Windows: 0x307860
     * @note[short] iOS: 0x244f90
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e8f24
     * @note[short] MacOS (Intel): 0x35db70
     * @note[short] Windows: 0x307730
     * @note[short] iOS: 0x244d68
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e8da8
     * @note[short] MacOS (Intel): 0x35d9e0
     * @note[short] Windows: 0x307a30
     * @note[short] iOS: 0x244c10
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e8ddc
     * @note[short] MacOS (Intel): 0x35da10
     * @note[short] Windows: 0x307a70
     * @note[short] iOS: 0x244c44
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e946c
     * @note[short] MacOS (Intel): 0x35e0c0
     * @note[short] Windows: 0x3050c0
     * @note[short] iOS: 0x2451c0
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e8ca0
     * @note[short] MacOS (Intel): 0x35d8c0
     * @note[short] Windows: 0x306710
     * @note[short] iOS: 0x244b08
     * @note[short] Android
     */
    void onRefreshLevelList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e92fc
     * @note[short] MacOS (Intel): 0x35df30
     * @note[short] Windows: 0x307cb0
     * @note[short] iOS: 0x24508c
     * @note[short] Android
     */
    void onSelectIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e9344
     * @note[short] MacOS (Intel): 0x35df80
     * @note[short] Windows: 0x307e20
     * @note[short] iOS: 0x2450d0
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e92d4
     * @note[short] MacOS (Intel): 0x35def0
     * @note[short] Windows: 0x3080b0
     * @note[short] iOS: 0x245064
     * @note[short] Android
     */
    void onToggleEditMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e8c6c
     * @note[short] MacOS (Intel): 0x35d890
     * @note[short] Windows: 0x3076f0
     * @note[short] iOS: 0x244ad4
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eb478
     * @note[short] MacOS (Intel): 0x3601f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x246d50
     * @note[short] Android
     */
    void ownerDelete();

    /**
     * @note[short] MacOS (ARM): 0x2eaaec
     * @note[short] MacOS (Intel): 0x35f7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateEditMode();

    /**
     * @note[short] MacOS (ARM): 0x2e9474
     * @note[short] MacOS (Intel): 0x35e0e0
     * @note[short] Windows: 0x307bb0
     * @note[short] iOS: 0x2451c8
     * @note[short] Android
     */
    void updateSideButtons();

    /**
     * @note[short] MacOS (ARM): 0x2e9508
     * @note[short] MacOS (Intel): 0x35e170
     * @note[short] Windows: 0x305120
     * @note[short] iOS: 0x24525c
     * @note[short] Android
     */
    void updateStatsArt();

    /**
     * @note[short] MacOS (ARM): 0x2eaf84
     * @note[short] MacOS (Intel): 0x35fce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x246930
     * @note[short] Android
     */
    void verifyListName();
    cocos2d::CCMenu* m_buttonMenu;
    gd::string m_searchKey1;
    GJLevelList* m_levelList;
    gd::string m_searchKey2;
    CCMenuItemSpriteExtra* m_likeButton;
    bool m_exiting;
    CCTextInputNode* m_titleInput;
    int m_editMode;
    cocos2d::CCArray* m_objects;
    cocos2d::CCSprite* m_diffSprite;
    cocos2d::CCSprite* m_featureSprite;
    cocos2d::CCPoint m_rewardPosition;
    bool m_exited;
};
