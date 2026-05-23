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
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CommentCell : public TableViewCell, public LikeItemDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CommentCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommentCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1fac00
     * @note[short] MacOS (Intel): 0x254d10
     * @note[short] Windows: 0xb5b40
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CommentCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1fa9e4
     * @note[short] MacOS (Intel): 0x2549e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x110a18
     * @note[short] Android: Rebinded
     */
     ~CommentCell();

    /**
     * @note[short] MacOS (ARM): 0x1fac60
     * @note[short] MacOS (Intel): 0x254db0
     * @note[short] Windows: 0xb5be0
     * @note[short] iOS: 0x110abc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1faf24
     * @note[short] MacOS (Intel): 0x2550c0
     * @note[short] Windows: 0xade20
     * @note[short] iOS: 0x110d54
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1fafd0
     * @note[short] MacOS (Intel): 0x255190
     * @note[short] Windows: 0xb7f60
     * @note[short] iOS: 0x110e00
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType type, int id, bool liked);

    /**
     * @note[short] MacOS (ARM): 0x1fb34c
     * @note[short] MacOS (Intel): 0x255540
     * @note[short] Windows: 0xb81d0
     * @note[short] iOS: 0x110f70
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1fb16c
     * @note[short] MacOS (Intel): 0x255330
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementDislikes();

    /**
     * @note[short] MacOS (ARM): 0x1fb0b8
     * @note[short] MacOS (Intel): 0x255280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementLikes();

    /**
     * @note[short] MacOS (ARM): 0x1ee754
     * @note[short] MacOS (Intel): 0x2477c0
     * @note[short] Windows: 0xb5c00
     * @note[short] iOS: 0x105c94
     * @note[short] Android
     */
    void loadFromComment(GJComment* comment);

    /**
     * @note[short] MacOS (ARM): 0x1fae3c
     * @note[short] MacOS (Intel): 0x254fd0
     * @note[short] Windows: 0xb8060
     * @note[short] iOS: 0x110c98
     * @note[short] Android
     */
    void onConfirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fb2d8
     * @note[short] MacOS (Intel): 0x2554b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x110f10
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x1faca8
     * @note[short] MacOS (Intel): 0x254e10
     * @note[short] Windows: 0xb8330
     * @note[short] iOS: 0x110b04
     * @note[short] Android
     */
    void onGoToLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fad5c
     * @note[short] MacOS (Intel): 0x254ee0
     * @note[short] Windows: 0xb7e00
     * @note[short] iOS: 0x110bb8
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fb338
     * @note[short] MacOS (Intel): 0x255520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onUndelete();

    /**
     * @note[short] MacOS (ARM): 0x1fad50
     * @note[short] MacOS (Intel): 0x254ec0
     * @note[short] Windows: 0xb8310
     * @note[short] iOS: 0x110bac
     * @note[short] Android
     */
    void onUnhide(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fac78
     * @note[short] MacOS (Intel): 0x254de0
     * @note[short] Windows: 0xb8190
     * @note[short] iOS: 0x110ad4
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1f0268
     * @note[short] MacOS (Intel): 0x249640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1076cc
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x1fb228
     * @note[short] MacOS (Intel): 0x255400
     * @note[short] Windows: 0xb7fa0
     * @note[short] iOS: 0x110e64
     * @note[short] Android
     */
    void updateLabelValues();
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCLabelBMFont* m_likeLabel;
    GJComment* m_comment;
    bool m_accountComment;
    bool m_unk259;
    bool m_compactMode;
};
