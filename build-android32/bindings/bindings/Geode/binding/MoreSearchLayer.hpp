#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class MoreSearchLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreSearchLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreSearchLayer();

    /**
     * @note[short] MacOS (ARM): 0x54ff40
     * @note[short] MacOS (Intel): 0x62ccc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x553b4
     * @note[short] Android: Rebinded
     */
     ~MoreSearchLayer();

    /**
     * @note[short] MacOS (ARM): 0x54edb0
     * @note[short] MacOS (Intel): 0x62bb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x54744
     * @note[short] Android
     */
    static MoreSearchLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x550180
     * @note[short] MacOS (Intel): 0x62d030
     * @note[short] Windows: 0x312bd0
     * @note[short] iOS: 0x55478
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x55218c
     * @note[short] MacOS (Intel): 0x62f1b0
     * @note[short] Windows: 0x317940
     * @note[short] iOS: 0x57160
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x552004
     * @note[short] MacOS (Intel): 0x62f040
     * @note[short] Windows: 0x7b600
     * @note[short] iOS: 0x57094
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x5520d4
     * @note[short] MacOS (Intel): 0x62f100
     * @note[short] Windows: 0x7b660
     * @note[short] iOS: 0x57100
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x551bb0
     * @note[short] MacOS (Intel): 0x62ebf0
     * @note[short] Windows: 0x316810
     * @note[short] iOS: 0x56d3c
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x551b3c
     * @note[short] MacOS (Intel): 0x62eb80
     * @note[short] Windows: 0x316930
     * @note[short] iOS: 0x56cf8
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x551424
     * @note[short] MacOS (Intel): 0x62e4b0
     * @note[short] Windows: 0x3172e0
     * @note[short] iOS: 0x565e8
     * @note[short] Android: Rebinded
     */
    CCMenuItemToggler* createToggleButton(gd::string label, cocos2d::SEL_MenuHandler callback, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x551340
     * @note[short] MacOS (Intel): 0x62e3d0
     * @note[short] Windows: 0x317540
     * @note[short] iOS: 0x56504
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55175c
     * @note[short] MacOS (Intel): 0x62e790
     * @note[short] Windows: 0x315c70
     * @note[short] iOS: 0x5690c
     * @note[short] Android
     */
    void onCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5516dc
     * @note[short] MacOS (Intel): 0x62e710
     * @note[short] Windows: 0x314c10
     * @note[short] iOS: 0x5688c
     * @note[short] Android
     */
    void onCompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55192c
     * @note[short] MacOS (Intel): 0x62e970
     * @note[short] Windows: 0x315040
     * @note[short] iOS: 0x56adc
     * @note[short] Android
     */
    void onEpic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5518ec
     * @note[short] MacOS (Intel): 0x62e930
     * @note[short] Windows: 0x314e30
     * @note[short] iOS: 0x56a9c
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x551cf4
     * @note[short] MacOS (Intel): 0x62ed10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x551d34
     * @note[short] MacOS (Intel): 0x62ed50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x551c18
     * @note[short] MacOS (Intel): 0x62ec60
     * @note[short] Windows: 0x317190
     * @note[short] iOS: 0x56d84
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55196c
     * @note[short] MacOS (Intel): 0x62e9b0
     * @note[short] Windows: 0x315240
     * @note[short] iOS: 0x56b1c
     * @note[short] Android
     */
    void onLegendary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5519ac
     * @note[short] MacOS (Intel): 0x62e9f0
     * @note[short] Windows: 0x315460
     * @note[short] iOS: 0x56b5c
     * @note[short] Android
     */
    void onMythic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5518ac
     * @note[short] MacOS (Intel): 0x62e8f0
     * @note[short] Windows: 0x315a70
     * @note[short] iOS: 0x56a5c
     * @note[short] Android
     */
    void onNoStar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55171c
     * @note[short] MacOS (Intel): 0x62e750
     * @note[short] Windows: 0x315660
     * @note[short] iOS: 0x568cc
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5517dc
     * @note[short] MacOS (Intel): 0x62e810
     * @note[short] Windows: 0x315e70
     * @note[short] iOS: 0x5698c
     * @note[short] Android
     */
    void onSongFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5519ec
     * @note[short] MacOS (Intel): 0x62ea30
     * @note[short] Windows: 0x316b90
     * @note[short] iOS: 0x56b9c
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55179c
     * @note[short] MacOS (Intel): 0x62e7d0
     * @note[short] Windows: 0x315870
     * @note[short] iOS: 0x5694c
     * @note[short] Android
     */
    void onTwoPlayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55169c
     * @note[short] MacOS (Intel): 0x62e6d0
     * @note[short] Windows: 0x3149e0
     * @note[short] iOS: 0x5684c
     * @note[short] Android
     */
    void onUncompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x551e6c
     * @note[short] MacOS (Intel): 0x62eed0
     * @note[short] Windows: 0x316a50
     * @note[short] iOS: 0x56f14
     * @note[short] Android
     */
    void selectSong(int songID);

    /**
     * @note[short] MacOS (ARM): 0x551d74
     * @note[short] MacOS (Intel): 0x62ed90
     * @note[short] Windows: 0x317050
     * @note[short] iOS: 0x56e1c
     * @note[short] Android
     */
    void toggleSongNodes(bool custom, bool disable);

    /**
     * @note[short] MacOS (ARM): 0x551eb4
     * @note[short] MacOS (Intel): 0x62ef20
     * @note[short] Windows: 0x316550
     * @note[short] iOS: 0x56f5c
     * @note[short] Android
     */
    void updateAudioLabel();
    cocos2d::CCLabelBMFont* m_audioTrackName;
    CCMenuItemSpriteExtra* m_songLeftBtn;
    CCMenuItemSpriteExtra* m_songRightBtn;
    CCMenuItemSpriteExtra* m_normalBtn;
    CCMenuItemSpriteExtra* m_customBtn;
    CCTextInputNode* m_enterSongID;
    cocos2d::CCArray* m_commonSongNodes;
    cocos2d::CCArray* m_normalSongNodes;
    cocos2d::CCArray* m_customSongNodes;
};
