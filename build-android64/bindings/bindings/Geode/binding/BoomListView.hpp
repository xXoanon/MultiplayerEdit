#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewDelegate.hpp"
#include "TableViewDataSource.hpp"

class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
    static constexpr auto CLASS_NAME = "BoomListView";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListView, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BoomListView();

    /**
     * @note[short] MacOS (ARM): 0x29bc44
     * @note[short] MacOS (Intel): 0x30c2f0
     * @note[short] Windows: 0x3bf80
     * @note[short] iOS: 0x1cfde0
     * @note[short] Android: Rebinded
     */
     ~BoomListView();

    /**
     * @note[short] MacOS (ARM): 0x29be54
     * @note[short] MacOS (Intel): 0x30c610
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static BoomListView* create(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y);

    /**
     * @note[short] MacOS (ARM): 0x29c910
     * @note[short] MacOS (Intel): 0x30d2b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d05f4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x29c154
     * @note[short] MacOS (Intel): 0x30c970
     * @note[short] Windows: 0x3c390
     * @note[short] iOS: 0x1d0064
     * @note[short] Android
     */
    virtual void setupList(float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x29c1d4
     * @note[short] MacOS (Intel): 0x30ca10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d00e4
     * @note[short] Android
     */
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& indexPath, TableViewCell* cell, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x29c1e4
     * @note[short] MacOS (Intel): 0x30ca50
     * @note[short] Windows: 0x3c420
     * @note[short] iOS: 0x1d00f4
     * @note[short] Android
     */
    virtual float cellHeightForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x29c1f4
     * @note[short] MacOS (Intel): 0x30ca70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d0104
     * @note[short] Android
     */
    virtual void didSelectRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x29c1fc
     * @note[short] MacOS (Intel): 0x30ca90
     * @note[short] Windows: 0x3c430
     * @note[short] iOS: 0x1d010c
     * @note[short] Android
     */
    virtual int numberOfRowsInSection(unsigned int section, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x29c20c
     * @note[short] MacOS (Intel): 0x30cac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d011c
     * @note[short] Android
     */
    virtual unsigned int numberOfSectionsInTableView(TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x29c21c
     * @note[short] MacOS (Intel): 0x30cae0
     * @note[short] Windows: 0x3c450
     * @note[short] iOS: 0x1d012c
     * @note[short] Android
     */
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x29c908
     * @note[short] MacOS (Intel): 0x30d290
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d05ec
     * @note[short] Android
     */
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* tableView, TableViewCellEditingStyle style, CCIndexPath& indexPath);

    /**
     * @note[short] MacOS (ARM): 0x29c1dc
     * @note[short] MacOS (Intel): 0x30ca30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d00ec
     * @note[short] Android
     */
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& indexPath, TableViewCell* cell, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x29c338
     * @note[short] MacOS (Intel): 0x30cc00
     * @note[short] Windows: 0x3c4e0
     * @note[short] iOS: 0x1d01c0
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* identifier);

    /**
     * @note[short] MacOS (ARM): 0x29c4dc
     * @note[short] MacOS (Intel): 0x30ce40
     * @note[short] Windows: 0x3c650
     * @note[short] iOS: 0x1d02b8
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* cell, int index);

    /**
     * @note[short] MacOS (ARM): 0x29c144
     * @note[short] MacOS (Intel): 0x30c950
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addObjectToList(cocos2d::CCNode* node);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x29bf60
     * @note[short] MacOS (Intel): 0x30c740
     * @note[short] Windows: 0x3c020
     * @note[short] iOS: 0x1cfe80
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y);

    /**
     * @note[short] MacOS (ARM): 0x29c0e8
     * @note[short] MacOS (Intel): 0x30c8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d0008
     * @note[short] Android
     */
    void lockList(bool locked);
    TableView* m_tableView;
    cocos2d::CCArray* m_entries;
    BoomListType m_type;
    float m_height;
    float m_width;
    float m_itemSeparation;
    int m_currentPage;
    bool m_locked;
};
