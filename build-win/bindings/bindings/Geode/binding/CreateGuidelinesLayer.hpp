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
#include "FLAlertLayerProtocol.hpp"

class CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CreateGuidelinesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateGuidelinesLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x99600
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CreateGuidelinesLayer();

    /**
     * @note[short] MacOS (ARM): 0x46257c
     * @note[short] MacOS (Intel): 0x50aec0
     * @note[short] Windows: 0x99750
     * @note[short] iOS: 0x7c1dc
     * @note[short] Android: Rebinded
     */
     ~CreateGuidelinesLayer();

    /**
     * @note[short] MacOS (ARM): 0x462810
     * @note[short] MacOS (Intel): 0x50b230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7c2a4
     * @note[short] Android
     */
    static CreateGuidelinesLayer* create(CustomSongDelegate* delegate, AudioGuidelinesType type);

    /**
     * @note[short] MacOS (ARM): 0x464594
     * @note[short] MacOS (Intel): 0x50cff0
     * @note[short] Windows: 0x9b420
     * @note[short] iOS: 0x7dc5c
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x4647f0
     * @note[short] MacOS (Intel): 0x50d260
     * @note[short] Windows: 0x9b6f0
     * @note[short] iOS: 0x7de5c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x464920
     * @note[short] MacOS (Intel): 0x50d350
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7df0c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x464928
     * @note[short] MacOS (Intel): 0x50d370
     * @note[short] Windows: 0x9b770
     * @note[short] iOS: 0x7df14
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x464a08
     * @note[short] MacOS (Intel): 0x50d430
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x7dfe4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x464a24
     * @note[short] MacOS (Intel): 0x50d470
     * @note[short] Windows: 0x9b7d0
     * @note[short] iOS: 0x7e000
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x46476c
     * @note[short] MacOS (Intel): 0x50d1c0
     * @note[short] Windows: 0x9b670
     * @note[short] iOS: 0x7ddd8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x464a5c
     * @note[short] MacOS (Intel): 0x50d4b0
     * @note[short] Windows: 0x9b820
     * @note[short] iOS: 0x7e038
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x464660
     * @note[short] MacOS (Intel): 0x50d0c0
     * @note[short] Windows: 0x9b590
     * @note[short] iOS: 0x7dd04
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x464730
     * @note[short] MacOS (Intel): 0x50d190
     * @note[short] Windows: 0x84670
     * @note[short] iOS: 0x7dd9c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x464aa0
     * @note[short] MacOS (Intel): 0x50d500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7e07c
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x463b68
     * @note[short] MacOS (Intel): 0x50c680
     * @note[short] Windows: 0x9acd0
     * @note[short] iOS: 0x7d520
     * @note[short] Android
     */
    virtual void playMusic();

    /**
     * @note[short] MacOS (ARM): 0x4647a8
     * @note[short] MacOS (Intel): 0x50d210
     * @note[short] Windows: 0x9b690
     * @note[short] iOS: 0x7de14
     * @note[short] Android
     */
    virtual void registerTouch();

    /**
     * @note[short] MacOS (ARM): 0x4645a4
     * @note[short] MacOS (Intel): 0x50d010
     * @note[short] Windows: 0x9b440
     * @note[short] iOS: 0x7dc6c
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x463a54
     * @note[short] MacOS (Intel): 0x50c570
     * @note[short] Windows: 0x9ab40
     * @note[short] iOS: 0x7d410
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x463c08
     * @note[short] MacOS (Intel): 0x50c710
     * @note[short] Windows: 0x9ae30
     * @note[short] iOS: 0x7d5b0
     * @note[short] Android
     */
    virtual void recordingDidStop();

    /**
     * @note[short] MacOS (ARM): 0x4639ac
     * @note[short] MacOS (Intel): 0x50c4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7d35c
     * @note[short] Android
     */
    void doClearGuidelines();

    /**
     * @note[short] MacOS (ARM): 0x463f50
     * @note[short] MacOS (Intel): 0x50ca60
     * @note[short] Windows: 0x9b0c0
     * @note[short] iOS: 0x7d8a8
     * @note[short] Android: Rebinded
     */
    gd::string getMergedRecordString(gd::string str1, gd::string str2);

    /**
     * @note[short] MacOS (ARM): 0x46293c
     * @note[short] MacOS (Intel): 0x50b3b0
     * @note[short] Windows: 0x99810
     * @note[short] iOS: 0x7c384
     * @note[short] Android
     */
    bool init(CustomSongDelegate* delegate, AudioGuidelinesType type);

    /**
     * @note[short] MacOS (ARM): 0x4637d4
     * @note[short] MacOS (Intel): 0x50c2f0
     * @note[short] Windows: 0x9aa10
     * @note[short] iOS: 0x7d1a8
     * @note[short] Android
     */
    void onClearGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4638a4
     * @note[short] MacOS (Intel): 0x50c3c0
     * @note[short] Windows: 0x9ad60
     * @note[short] iOS: 0x7d254
     * @note[short] Android
     */
    void onStop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x463904
     * @note[short] MacOS (Intel): 0x50c420
     * @note[short] Windows: 0x9b340
     * @note[short] iOS: 0x7d2b4
     * @note[short] Android
     */
    void toggleItems(bool visible);
    CustomSongDelegate* m_delegate;
    CCTextInputNode* m_offsetInput;
    cocos2d::CCArray* m_nonRecordingObjects;
    cocos2d::CCArray* m_recordingObjects;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCSprite* m_circleSprite;
    float m_elapsed;
    bool m_recording;
    bool m_unk2b5;
    int m_guidelines;
    gd::string m_guidelineString;
};
