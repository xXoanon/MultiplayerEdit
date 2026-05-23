#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextAreaDelegate.hpp"

class DialogLayer : public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "DialogLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x87860
     * @note[short] Android: Out of line
     */
     DialogLayer();

    /**
     * @note[short] MacOS (ARM): 0x3484d0
     * @note[short] MacOS (Intel): 0x3c6e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8673c
     * @note[short] Android: Rebinded
     */
     ~DialogLayer();

    /**
     * @note[short] MacOS (ARM): 0x348710
     * @note[short] MacOS (Intel): 0x3c7190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86800
     * @note[short] Android
     */
    static DialogLayer* create(DialogObject* object, int background);

    /**
     * @note[short] MacOS (ARM): 0x34871c
     * @note[short] MacOS (Intel): 0x3c71a0
     * @note[short] Windows: 0xd3490
     * @note[short] iOS: 0x8680c
     * @note[short] Android
     */
    static DialogLayer* createDialogLayer(DialogObject* object, cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x34882c
     * @note[short] MacOS (Intel): 0x3c72e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86898
     * @note[short] Android
     */
    static DialogLayer* createWithObjects(cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x3497c8
     * @note[short] MacOS (Intel): 0x3c8320
     * @note[short] Windows: 0x52e20
     * @note[short] iOS: 0x874a4
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x34969c
     * @note[short] MacOS (Intel): 0x3c81d0
     * @note[short] Windows: 0xd4090
     * @note[short] iOS: 0x87388
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x349744
     * @note[short] MacOS (Intel): 0x3c8270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x87420
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x34970c
     * @note[short] MacOS (Intel): 0x3c8230
     * @note[short] Windows: 0xd40c0
     * @note[short] iOS: 0x873e8
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x34974c
     * @note[short] MacOS (Intel): 0x3c8290
     * @note[short] Windows: 0xd40e0
     * @note[short] iOS: 0x87428
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x349790
     * @note[short] MacOS (Intel): 0x3c82e0
     * @note[short] Windows: 0x52dd0
     * @note[short] iOS: 0x8746c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x349578
     * @note[short] MacOS (Intel): 0x3c80a0
     * @note[short] Windows: 0xd4000
     * @note[short] iOS: 0x8737c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x349b24
     * @note[short] MacOS (Intel): 0x3c86a0
     * @note[short] Windows: 0xd43b0
     * @note[short] iOS: 0x87768
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3497cc
     * @note[short] MacOS (Intel): 0x3c8330
     * @note[short] Windows: 0xd4100
     * @note[short] iOS: 0x874a8
     * @note[short] Android
     */
    virtual void fadeInTextFinished(TextArea* textArea);

    /**
     * @note[short] MacOS (ARM): 0x349520
     * @note[short] MacOS (Intel): 0x3c8050
     * @note[short] Windows: 0xd3fa0
     * @note[short] iOS: 0x87324
     * @note[short] Android
     */
    void addToMainScene();

    /**
     * @note[short] MacOS (ARM): 0x349914
     * @note[short] MacOS (Intel): 0x3c8470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x87574
     * @note[short] Android
     */
    void animateIn(DialogAnimationType type);

    /**
     * @note[short] MacOS (ARM): 0x349b1c
     * @note[short] MacOS (Intel): 0x3c8690
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void animateInDialog();

    /**
     * @note[short] MacOS (ARM): 0x3498bc
     * @note[short] MacOS (Intel): 0x3c8420
     * @note[short] Windows: 0xd4170
     * @note[short] iOS: 0x87524
     * @note[short] Android
     */
    void animateInRandomSide();

    /**
     * @note[short] MacOS (ARM): 0x348db0
     * @note[short] MacOS (Intel): 0x3c7890
     * @note[short] Windows: 0xd3aa0
     * @note[short] iOS: 0x86d34
     * @note[short] Android
     */
    void displayDialogObject(DialogObject* object);

    /**
     * @note[short] MacOS (ARM): 0x348d10
     * @note[short] MacOS (Intel): 0x3c77e0
     * @note[short] Windows: 0xd3a40
     * @note[short] iOS: 0x86cd4
     * @note[short] Android
     */
    void displayNextObject();

    /**
     * @note[short] MacOS (ARM): 0x3493f8
     * @note[short] MacOS (Intel): 0x3c7f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8723c
     * @note[short] Android
     */
    void finishCurrentAnimation();

    /**
     * @note[short] MacOS (ARM): 0x349298
     * @note[short] MacOS (Intel): 0x3c7dc0
     * @note[short] Windows: 0xd3e70
     * @note[short] iOS: 0x87170
     * @note[short] Android
     */
    void handleDialogTap();

    /**
     * @note[short] MacOS (ARM): 0x34883c
     * @note[short] MacOS (Intel): 0x3c7300
     * @note[short] Windows: 0xd35e0
     * @note[short] iOS: 0x868a8
     * @note[short] Android
     */
    bool init(DialogObject* object, cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x349490
     * @note[short] MacOS (Intel): 0x3c7fc0
     * @note[short] Windows: 0xd4010
     * @note[short] iOS: 0x87294
     * @note[short] Android
     */
    void onClose();

    /**
     * @note[short] MacOS (ARM): 0x3491dc
     * @note[short] MacOS (Intel): 0x3c7cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x870b4
     * @note[short] Android
     */
    void updateChatPlacement(DialogChatPlacement placement);

    /**
     * @note[short] MacOS (ARM): 0x34917c
     * @note[short] MacOS (Intel): 0x3c7c80
     * @note[short] Windows: 0xd3df0
     * @note[short] iOS: 0x87054
     * @note[short] Android
     */
    void updateNavButtonFrame();
    float m_animateTime;
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLabelBMFont* m_characterLabel;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_characterSprite;
    cocos2d::CCArray* m_dialogObjects;
    int m_touchID;
    cocos2d::CCSprite* m_navButtonSprite;
    bool m_animating;
    bool m_skippable;
    DialogDelegate* m_delegate;
    bool m_handleTap;
    DialogAnimationType m_animationType;
    bool m_noRemove;
};
