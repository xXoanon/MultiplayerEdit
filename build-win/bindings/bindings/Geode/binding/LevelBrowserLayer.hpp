#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "SetIDPopupDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "ShareCommentDelegate.hpp"

class LevelBrowserLayer : public cocos2d::CCLayerColor, public LevelManagerDelegate, public FLAlertLayerProtocol, public SetIDPopupDelegate, public SetTextPopupDelegate, public TableViewCellDelegate, public ShareCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelBrowserLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x2c87d0
     * @note[short] iOS: 0x249ea8
     * @note[short] Android: Out of line
     */
     LevelBrowserLayer();

    /**
     * @note[short] MacOS (ARM): 0x3f01d8
     * @note[short] MacOS (Intel): 0x48ac00
     * @note[short] Windows: 0x2c89c0
     * @note[short] iOS: 0x414084
     * @note[short] Android: Rebinded
     */
     ~LevelBrowserLayer();

    /**
     * @note[short] MacOS (ARM): 0x3f0374
     * @note[short] MacOS (Intel): 0x48ae40
     * @note[short] Windows: 0x2c8bf0
     * @note[short] iOS: 0x414210
     * @note[short] Android
     */
    static LevelBrowserLayer* create(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3f0328
     * @note[short] MacOS (Intel): 0x48ae00
     * @note[short] Windows: 0x2c8ba0
     * @note[short] iOS: 0x4141c4
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3f6b74
     * @note[short] MacOS (Intel): 0x491c40
     * @note[short] Windows: 0x2cfc90
     * @note[short] iOS: 0x4198a4
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x3f6d64
     * @note[short] MacOS (Intel): 0x491de0
     * @note[short] Windows: 0x2490b0
     * @note[short] iOS: 0x4199d8
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0x3f6e34
     * @note[short] MacOS (Intel): 0x491ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419aac
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f6e54
     * @note[short] MacOS (Intel): 0x491f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419acc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f6e44
     * @note[short] MacOS (Intel): 0x491ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419abc
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f6e4c
     * @note[short] MacOS (Intel): 0x491f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419ac4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f6d68
     * @note[short] MacOS (Intel): 0x491df0
     * @note[short] Windows: 0x2cfdd0
     * @note[short] iOS: 0x4199dc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f6118
     * @note[short] MacOS (Intel): 0x491150
     * @note[short] Windows: 0x2ccf10
     * @note[short] iOS: 0x418fac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f613c
     * @note[short] MacOS (Intel): 0x491190
     * @note[short] Windows: 0x2ccf30
     * @note[short] iOS: 0x418fd0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3f5654
     * @note[short] MacOS (Intel): 0x490670
     * @note[short] Windows: 0x2cc420
     * @note[short] iOS: 0x4188dc
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x3f577c
     * @note[short] MacOS (Intel): 0x4907d0
     * @note[short] Windows: 0x2cc550
     * @note[short] iOS: 0x4189fc
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x3f5868
     * @note[short] MacOS (Intel): 0x4908b0
     * @note[short] Windows: 0x2cc5a0
     * @note[short] iOS: 0x418a78
     * @note[short] Android: Rebinded
     */
    virtual void setupPageInfo(gd::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x3f6064
     * @note[short] MacOS (Intel): 0x4910a0
     * @note[short] Windows: 0x2cce80
     * @note[short] iOS: 0x418f34
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f646c
     * @note[short] MacOS (Intel): 0x491480
     * @note[short] Windows: 0x2ce130
     * @note[short] iOS: 0x4192a8
     * @note[short] Android: Rebinded
     */
    virtual void shareCommentClosed(gd::string text, ShareCommentLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x3f6538
     * @note[short] MacOS (Intel): 0x491560
     * @note[short] Windows: 0x2ceea0
     * @note[short] iOS: 0x419314
     * @note[short] Android: Rebinded
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, gd::string text);

    /**
     * @note[short] MacOS (ARM): 0x3f66dc
     * @note[short] MacOS (Intel): 0x491750
     * @note[short] Windows: 0x2cf6d0
     * @note[short] iOS: 0x4194a4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3f5f54
     * @note[short] MacOS (Intel): 0x490f70
     * @note[short] Windows: 0x2cca50
     * @note[short] iOS: 0x418e30
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x3f6e5c
     * @note[short] MacOS (Intel): 0x491f40
     * @note[short] Windows: 0x2c8970
     * @note[short] iOS: 0x419ad4
     * @note[short] Android
     */
    virtual cocos2d::CCArray* updateResultArray(cocos2d::CCArray* results);

    /**
     * @note[short] MacOS (ARM): 0x3f6c24
     * @note[short] MacOS (Intel): 0x491cc0
     * @note[short] Windows: 0x2cfd30
     * @note[short] iOS: 0x419934
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x3f63f4
     * @note[short] MacOS (Intel): 0x491410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419230
     * @note[short] Android
     */
    void createNewLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f6280
     * @note[short] MacOS (Intel): 0x4912f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4190e8
     * @note[short] Android
     */
    void createNewList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f6218
     * @note[short] MacOS (Intel): 0x491290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x419080
     * @note[short] Android
     */
    void createNewSmartTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f65dc
     * @note[short] MacOS (Intel): 0x491630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4193b8
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] MacOS (ARM): 0x3f60d4
     * @note[short] MacOS (Intel): 0x491110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x418f68
     * @note[short] Android
     */
    void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f4a48
     * @note[short] MacOS (Intel): 0x48f880
     * @note[short] Windows: 0x2cef60
     * @note[short] iOS: 0x417d8c
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* getItemsMatchingSearch(cocos2d::CCArray* items, gd::string query, GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3f50a4
     * @note[short] MacOS (Intel): 0x48ff30
     * @note[short] Windows: 0x2cbbc0
     * @note[short] iOS: 0x418374
     * @note[short] Android
     */
    gd::string getSearchTitle();

    /**
     * @note[short] MacOS (ARM): 0x3f04ac
     * @note[short] MacOS (Intel): 0x48b010
     * @note[short] Windows: 0x2c8c60
     * @note[short] iOS: 0x414284
     * @note[short] Android
     */
    bool init(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3f4890
     * @note[short] MacOS (Intel): 0x48f6b0
     * @note[short] Windows: 0x2ca550
     * @note[short] iOS: 0x417c9c
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x3f38b0
     * @note[short] MacOS (Intel): 0x48e430
     * @note[short] Windows: 0x2ca720
     * @note[short] iOS: 0x416f64
     * @note[short] Android
     */
    void loadPage(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3f3834
     * @note[short] MacOS (Intel): 0x48e3b0
     * @note[short] Windows: 0x2ceb80
     * @note[short] iOS: 0x416ee0
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f2b2c
     * @note[short] MacOS (Intel): 0x48d6f0
     * @note[short] Windows: 0x2ce5d0
     * @note[short] iOS: 0x416558
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f21c4
     * @note[short] MacOS (Intel): 0x48cde0
     * @note[short] Windows: 0x2cf2f0
     * @note[short] iOS: 0x415f58
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f2e14
     * @note[short] MacOS (Intel): 0x48d9b0
     * @note[short] Windows: 0x2ce410
     * @note[short] iOS: 0x41679c
     * @note[short] Android
     */
    void onFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3478
     * @note[short] MacOS (Intel): 0x48e000
     * @note[short] Windows: 0x2cc9a0
     * @note[short] iOS: 0x416c10
     * @note[short] Android
     */
    void onGoToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3540
     * @note[short] MacOS (Intel): 0x48e0b0
     * @note[short] Windows: 0x2cc820
     * @note[short] iOS: 0x416cd0
     * @note[short] Android
     */
    void onGoToLastPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f2094
     * @note[short] MacOS (Intel): 0x48ccd0
     * @note[short] Windows: 0x2cc890
     * @note[short] iOS: 0x415e54
     * @note[short] Android
     */
    void onGoToPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f6214
     * @note[short] MacOS (Intel): 0x491280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3060
     * @note[short] MacOS (Intel): 0x48dbf0
     * @note[short] Windows: 0x2ccfd0
     * @note[short] iOS: 0x41692c
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f28f4
     * @note[short] MacOS (Intel): 0x48d4e0
     * @note[short] Windows: 0x2ce050
     * @note[short] iOS: 0x416384
     * @note[short] Android
     */
    void onLocalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f2638
     * @note[short] MacOS (Intel): 0x48d240
     * @note[short] Windows: 0x2ce240
     * @note[short] iOS: 0x4161e8
     * @note[short] Android
     */
    void onMyOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f253c
     * @note[short] MacOS (Intel): 0x48d150
     * @note[short] Windows: 0x2cdba0
     * @note[short] iOS: 0x4161c0
     * @note[short] Android
     */
    void onNew(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f1f54
     * @note[short] MacOS (Intel): 0x48cb70
     * @note[short] Windows: 0x2ccd80
     * @note[short] iOS: 0x415d1c
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f1f20
     * @note[short] MacOS (Intel): 0x48cb30
     * @note[short] Windows: 0x2cce00
     * @note[short] iOS: 0x415ce8
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f2f2c
     * @note[short] MacOS (Intel): 0x48dad0
     * @note[short] Windows: 0x2cea40
     * @note[short] iOS: 0x416884
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f29cc
     * @note[short] MacOS (Intel): 0x48d5b0
     * @note[short] Windows: 0x2ce770
     * @note[short] iOS: 0x41642c
     * @note[short] Android
     */
    void onRemoveAllFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f2cfc
     * @note[short] MacOS (Intel): 0x48d890
     * @note[short] Windows: 0x2ce4f0
     * @note[short] iOS: 0x4166b4
     * @note[short] Android
     */
    void onSaved(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f2c24
     * @note[short] MacOS (Intel): 0x48d7c0
     * @note[short] Windows: 0x2cdf70
     * @note[short] iOS: 0x41660c
     * @note[short] Android
     */
    void onSavedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3578
     * @note[short] MacOS (Intel): 0x48e0f0
     * @note[short] Windows: 0x2cec20
     * @note[short] iOS: 0x416d08
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f24b4
     * @note[short] MacOS (Intel): 0x48d0c0
     * @note[short] Windows: 0x2cf630
     * @note[short] iOS: 0x416138
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f66d0
     * @note[short] MacOS (Intel): 0x491730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reloadAllObjects();

    /**
     * @note[short] MacOS (ARM): 0x3f1ed8
     * @note[short] MacOS (Intel): 0x48cae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x415ca0
     * @note[short] Android
     */
    void setSearchObject(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3f4e04
     * @note[short] MacOS (Intel): 0x48fc40
     * @note[short] Windows: 0x2cb8b0
     * @note[short] iOS: 0x4180d4
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* items);

    /**
     * @note[short] MacOS (ARM): 0x3f6db0
     * @note[short] MacOS (Intel): 0x491e40
     * @note[short] Windows: 0x2cfe40
     * @note[short] iOS: 0x419a30
     * @note[short] Android
     */
    void show();

    /**
     * @note[short] MacOS (ARM): 0x3f5ebc
     * @note[short] MacOS (Intel): 0x490ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x418d9c
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] MacOS (ARM): 0x3f1f88
     * @note[short] MacOS (Intel): 0x48cbb0
     * @note[short] Windows: 0x2ccc50
     * @note[short] iOS: 0x415d50
     * @note[short] Android
     */
    void updatePageLabel();
    bool m_unk;
    bool m_allSelected;
    TextArea* m_noInternet;
    GJListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_lastBtn;
    CCMenuItemSpriteExtra* m_cancelSearchBtn;
    CCMenuItemSpriteExtra* m_refreshBtn;
    cocos2d::CCArray* m_levels;
    GJSearchObject* m_searchObject;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCLabelBMFont* m_pageText;
    CCMenuItemSpriteExtra* m_pageBtn;
    cocos2d::CCLabelBMFont* m_folderText;
    CCMenuItemSpriteExtra* m_folderBtn;
    CCMenuItemToggler* m_allObjectsToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    LoadingCircle* m_circle;
    int m_lastPage;
    bool m_isOverlay;
    cocos2d::CCScene* m_scene;
    int m_zOffset;
    bool m_unk2;
    int m_listHeight;
    float m_unkFloat;
    float m_unkFloat2;
    TableViewCellDelegate* m_delegate;
    bool m_cached;
};
