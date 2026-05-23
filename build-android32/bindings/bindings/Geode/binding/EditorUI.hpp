#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObjectEditorState.hpp"
#include "GJTransformState.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "ColorSelectDelegate.hpp"
#include "GJRotationControlDelegate.hpp"
#include "GJScaleControlDelegate.hpp"
#include "GJTransformControlDelegate.hpp"
#include "MusicDownloadDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public GJTransformControlDelegate, public MusicDownloadDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorUI";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditorUI, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x48dac
     * @note[short] MacOS (Intel): 0x54440
     * @note[short] Windows: 0xde9e0
     * @note[short] iOS: 0x3fc538
     * @note[short] Android: Rebinded
     */
     EditorUI();

    /**
     * @note[short] MacOS (ARM): 0x7b30
     * @note[short] MacOS (Intel): 0x8d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c4c9c
     * @note[short] Android: Rebinded
     */
     ~EditorUI();

    /**
     * @note[short] MacOS (ARM): 0x7cfc
     * @note[short] MacOS (Intel): 0x9010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c4e00
     * @note[short] Android
     */
    static EditorUI* create(LevelEditorLayer* editorLayer);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static EditorUI* get();

    /**
     * @note[short] MacOS (ARM): 0x538324
     * @note[short] MacOS (Intel): 0x613120
     * @note[short] Windows: 0x12d520
     * @note[short] iOS: 0x7759c
     * @note[short] Android
     */
    static int getRandomStartKey(int specialTemplate);

    /**
     * @note[short] MacOS (ARM): 0x538560
     * @note[short] MacOS (Intel): 0x613350
     * @note[short] Windows: 0x12d7c0
     * @note[short] iOS: 0x777bc
     * @note[short] Android
     */
    static int getSmartObjectKey(int key, GJSmartDirection direction);

    /**
     * @note[short] MacOS (ARM): 0x538304
     * @note[short] MacOS (Intel): 0x613100
     * @note[short] Windows: 0x12d480
     * @note[short] iOS: 0x7757c
     * @note[short] Android
     */
    static int smartTypeForKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x438e0
     * @note[short] MacOS (Intel): 0x4e420
     * @note[short] Windows: 0x122cd0
     * @note[short] iOS: 0x3f8034
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x442c8
     * @note[short] MacOS (Intel): 0x4eeb0
     * @note[short] Windows: 0x123810
     * @note[short] iOS: 0x3f86b4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x448f0
     * @note[short] MacOS (Intel): 0x4f4c0
     * @note[short] Windows: 0x123e90
     * @note[short] iOS: 0x3f8be4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x44e10
     * @note[short] MacOS (Intel): 0x4fa50
     * @note[short] Windows: 0x1245e0
     * @note[short] iOS: 0x3f90c0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x455c8
     * @note[short] MacOS (Intel): 0x50320
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x3f982c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x455e4
     * @note[short] MacOS (Intel): 0x50360
     * @note[short] Windows: 0x9b7d0
     * @note[short] iOS: 0x3f9848
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x36d6c
     * @note[short] MacOS (Intel): 0x3ea00
     * @note[short] Windows: 0x114980
     * @note[short] iOS: 0x3ef050
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4561c
     * @note[short] MacOS (Intel): 0x503a0
     * @note[short] Windows: 0x125320
     * @note[short] iOS: 0x3f9880
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0xdee20
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual EditorUI* getUI();

    /**
     * @note[short] MacOS (ARM): 0x300f4
     * @note[short] MacOS (Intel): 0x33270
     * @note[short] Windows: 0xe6c50
     * @note[short] iOS: 0x3e9e84
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x2ff24
     * @note[short] MacOS (Intel): 0x330f0
     * @note[short] Windows: 0xe6a50
     * @note[short] iOS: 0x3e9dac
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x38498
     * @note[short] MacOS (Intel): 0x40470
     * @note[short] Windows: 0x115400
     * @note[short] iOS: 0x3eff48
     * @note[short] Android
     */
    virtual void updateTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x38d3c
     * @note[short] MacOS (Intel): 0x40e10
     * @note[short] Windows: 0x1158f0
     * @note[short] iOS: 0x3f06e8
     * @note[short] Android
     */
    virtual void transformChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x38de8
     * @note[short] MacOS (Intel): 0x40ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f0794
     * @note[short] Android
     */
    virtual void transformChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x48d5c
     * @note[short] MacOS (Intel): 0x54390
     * @note[short] Windows: 0xdee30
     * @note[short] iOS: 0x3fc520
     * @note[short] Android
     */
    virtual cocos2d::CCNode* getTransformNode();

    /**
     * @note[short] MacOS (ARM): 0x42348
     * @note[short] MacOS (Intel): 0x4cbd0
     * @note[short] Windows: 0x121820
     * @note[short] iOS: 0x3f76d8
     * @note[short] Android
     */
    virtual void transformScaleXChanged(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x42510
     * @note[short] MacOS (Intel): 0x4cde0
     * @note[short] Windows: 0x121840
     * @note[short] iOS: 0x3f7778
     * @note[short] Android
     */
    virtual void transformScaleYChanged(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x42644
     * @note[short] MacOS (Intel): 0x4cf40
     * @note[short] Windows: 0x121860
     * @note[short] iOS: 0x3f7790
     * @note[short] Android
     */
    virtual void transformScaleXYChanged(float scaleX, float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x4277c
     * @note[short] MacOS (Intel): 0x4d0b0
     * @note[short] Windows: 0x121880
     * @note[short] iOS: 0x3f77ac
     * @note[short] Android
     */
    virtual void transformSkewXChanged(float skewX);

    /**
     * @note[short] MacOS (ARM): 0x428b0
     * @note[short] MacOS (Intel): 0x4d210
     * @note[short] Windows: 0x1218a0
     * @note[short] iOS: 0x3f77c4
     * @note[short] Android
     */
    virtual void transformSkewYChanged(float skewY);

    /**
     * @note[short] MacOS (ARM): 0x429e4
     * @note[short] MacOS (Intel): 0x4d370
     * @note[short] Windows: 0x1218c0
     * @note[short] iOS: 0x3f77dc
     * @note[short] Android
     */
    virtual void transformRotationXChanged(float rotationX);

    /**
     * @note[short] MacOS (ARM): 0x42b18
     * @note[short] MacOS (Intel): 0x4d4d0
     * @note[short] Windows: 0x1218e0
     * @note[short] iOS: 0x3f77f4
     * @note[short] Android
     */
    virtual void transformRotationYChanged(float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x42c4c
     * @note[short] MacOS (Intel): 0x4d630
     * @note[short] Windows: 0x121900
     * @note[short] iOS: 0x3f780c
     * @note[short] Android
     */
    virtual void transformRotationChanged(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x42d84
     * @note[short] MacOS (Intel): 0x4d7a0
     * @note[short] Windows: 0x121920
     * @note[short] iOS: 0x3f7828
     * @note[short] Android
     */
    virtual void transformResetRotation();

    /**
     * @note[short] MacOS (ARM): 0x42e3c
     * @note[short] MacOS (Intel): 0x4d890
     * @note[short] Windows: 0x121950
     * @note[short] iOS: 0x3f786c
     * @note[short] Android
     */
    virtual void transformRestoreRotation();

    /**
     * @note[short] MacOS (ARM): 0x35be0
     * @note[short] MacOS (Intel): 0x3d8a0
     * @note[short] Windows: 0x1120a0
     * @note[short] iOS: 0x3ee5fc
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x40720
     * @note[short] MacOS (Intel): 0x4a070
     * @note[short] Windows: 0x11f6f0
     * @note[short] iOS: 0x3f5c98
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x464f0
     * @note[short] MacOS (Intel): 0x51620
     * @note[short] Windows: 0x1267b0
     * @note[short] iOS: 0x3fa6a0
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x46568
     * @note[short] MacOS (Intel): 0x516c0
     * @note[short] Windows: 0x1267f0
     * @note[short] iOS: 0x3fa718
     * @note[short] Android
     */
    virtual void scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x439bc
     * @note[short] MacOS (Intel): 0x4e500
     * @note[short] Windows: 0x123110
     * @note[short] iOS: 0x3f8110
     * @note[short] Android
     */
    virtual void angleChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x439d8
     * @note[short] MacOS (Intel): 0x4e540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f812c
     * @note[short] Android
     */
    virtual void angleChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x439e0
     * @note[short] MacOS (Intel): 0x4e560
     * @note[short] Windows: 0x123120
     * @note[short] iOS: 0x3f8134
     * @note[short] Android
     */
    virtual void angleChanged(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x37164
     * @note[short] MacOS (Intel): 0x3ee40
     * @note[short] Windows: 0x114df0
     * @note[short] iOS: 0x3ef2bc
     * @note[short] Android
     */
    virtual void updateScaleControl();

    /**
     * @note[short] MacOS (ARM): 0x38df0
     * @note[short] MacOS (Intel): 0x40f10
     * @note[short] Windows: 0x115900
     * @note[short] iOS: 0x3f079c
     * @note[short] Android
     */
    virtual void anchorPointMoved(cocos2d::CCPoint anchorPoint);

    /**
     * @note[short] MacOS (ARM): 0x377a8
     * @note[short] MacOS (Intel): 0x3f5e0
     * @note[short] Windows: 0x114f50
     * @note[short] iOS: 0x3ef7f0
     * @note[short] Android
     */
    virtual void scaleChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x377c4
     * @note[short] MacOS (Intel): 0x3f620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ef80c
     * @note[short] Android
     */
    virtual void scaleChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x377cc
     * @note[short] MacOS (Intel): 0x3f640
     * @note[short] Windows: 0x114f60
     * @note[short] iOS: 0x3ef814
     * @note[short] Android
     */
    virtual void scaleXChanged(float scaleX, bool lock);

    /**
     * @note[short] MacOS (ARM): 0x37dec
     * @note[short] MacOS (Intel): 0x3fd70
     * @note[short] Windows: 0x115010
     * @note[short] iOS: 0x3efc04
     * @note[short] Android
     */
    virtual void scaleYChanged(float scaleY, bool lock);

    /**
     * @note[short] MacOS (ARM): 0x37f20
     * @note[short] MacOS (Intel): 0x3feb0
     * @note[short] Windows: 0x1150c0
     * @note[short] iOS: 0x3efcac
     * @note[short] Android
     */
    virtual void scaleXYChanged(float scaleX, float scaleY, bool lock);

    /**
     * @note[short] MacOS (ARM): 0x35910
     * @note[short] MacOS (Intel): 0x3d5b0
     * @note[short] Windows: 0x122fd0
     * @note[short] iOS: 0x3ee398
     * @note[short] Android
     */
    void activateRotationControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x36e94
     * @note[short] MacOS (Intel): 0x3eb50
     * @note[short] Windows: 0x114b20
     * @note[short] iOS: 0x3ef100
     * @note[short] Android
     */
    void activateScaleControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x380ac
     * @note[short] MacOS (Intel): 0x40040
     * @note[short] Windows: 0x115170
     * @note[short] iOS: 0x3efd7c
     * @note[short] Android
     */
    void activateTransformControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39190
     * @note[short] MacOS (Intel): 0x41320
     * @note[short] Windows: 0x115c30
     * @note[short] iOS: 0x3f0a84
     * @note[short] Android
     */
    void addObjectsToSmartTemplate(GJSmartTemplate* smartTemplate, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x32f6c
     * @note[short] MacOS (Intel): 0x3a490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addSnapPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x42f84
     * @note[short] MacOS (Intel): 0x4da20
     * @note[short] Windows: 0x121f20
     * @note[short] iOS: 0x3f7930
     * @note[short] Android
     */
    void alignObjects(cocos2d::CCArray* objects, bool axisY);

    /**
     * @note[short] MacOS (ARM): 0x330b8
     * @note[short] MacOS (Intel): 0x3a5e0
     * @note[short] Windows: 0x1228f0
     * @note[short] iOS: 0x3ec7ec
     * @note[short] Android
     */
    void applyOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x43704
     * @note[short] MacOS (Intel): 0x4e210
     * @note[short] Windows: 0x122660
     * @note[short] iOS: 0x3f7ef8
     * @note[short] Android
     */
    cocos2d::CCPoint applySpecialOffset(cocos2d::CCPoint position, GameObject* object, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x3fa38
     * @note[short] MacOS (Intel): 0x49130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f51fc
     * @note[short] Android
     */
    bool arrayContainsClass(cocos2d::CCArray* objects, int classType);

    /**
     * @note[short] MacOS (ARM): 0x3c8a0
     * @note[short] MacOS (Intel): 0x45310
     * @note[short] Windows: 0x119220
     * @note[short] iOS: 0x3f338c
     * @note[short] Android
     */
    void assignNewGroups(bool groupY);

    /**
     * @note[short] MacOS (ARM): 0x3fab0
     * @note[short] MacOS (Intel): 0x491a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f5274
     * @note[short] Android
     */
    bool canAllowMultiActivate(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3453c
     * @note[short] MacOS (Intel): 0x3c090
     * @note[short] Windows: 0x110310
     * @note[short] iOS: 0x3ed510
     * @note[short] Android
     */
    bool canSelectObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x30454
     * @note[short] MacOS (Intel): 0x335b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ea128
     * @note[short] Android
     */
    void centerCameraOnObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x34ec4
     * @note[short] MacOS (Intel): 0x3cb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3edde4
     * @note[short] Android
     */
    void changeSelectedObjects(cocos2d::CCArray* objects, bool ignoreFilter);

    /**
     * @note[short] MacOS (ARM): 0x38f1c
     * @note[short] MacOS (Intel): 0x41060
     * @note[short] Windows: 0x115980
     * @note[short] iOS: 0x3f0810
     * @note[short] Android
     */
    cocos2d::CCPoint checkDiffAfterTransformAnchor(cocos2d::CCPoint diff, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x34ad0
     * @note[short] MacOS (Intel): 0x3c660
     * @note[short] Windows: 0x110630
     * @note[short] iOS: 0x3eda58
     * @note[short] Android
     */
    void checkLiveColorSelect();

    /**
     * @note[short] MacOS (ARM): 0x2ac2c
     * @note[short] MacOS (Intel): 0x2da70
     * @note[short] Windows: 0xe26e0
     * @note[short] iOS: 0x3e66f8
     * @note[short] Android
     */
    void clickOnPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x34c08
     * @note[short] MacOS (Intel): 0x3c7c0
     * @note[short] Windows: 0x11efa0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void closeLiveColorSelect();

    /**
     * @note[short] MacOS (ARM): 0x34d5c
     * @note[short] MacOS (Intel): 0x3c960
     * @note[short] Windows: 0x11f1f0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void closeLiveHSVSelect();

    /**
     * @note[short] MacOS (ARM): 0x4071c
     * @note[short] MacOS (Intel): 0x4a060
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void colorSelectClosed(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2c0f8
     * @note[short] MacOS (Intel): 0x2ef90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void constrainGameLayerPosition();

    /**
     * @note[short] MacOS (ARM): 0x2822c
     * @note[short] MacOS (Intel): 0x2a910
     * @note[short] Windows: 0x122980
     * @note[short] iOS: 0x3e4400
     * @note[short] Android
     */
    void constrainGameLayerPosition(float x, float y);

    /**
     * @note[short] MacOS (ARM): 0x538bfc
     * @note[short] MacOS (Intel): 0x613a10
     * @note[short] Windows: 0x12deb0
     * @note[short] iOS: 0x77dd8
     * @note[short] Android
     */
    int convertKeyBasedOnNeighbors(int smartKey, int objectID, cocos2d::CCPoint position, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x538b20
     * @note[short] MacOS (Intel): 0x613900
     * @note[short] Windows: 0x12ddb0
     * @note[short] iOS: 0x77cfc
     * @note[short] Android
     */
    int convertToBaseKey(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x2dccc
     * @note[short] MacOS (Intel): 0x30d50
     * @note[short] Windows: 0x112e00
     * @note[short] iOS: 0x3e8768
     * @note[short] Android
     */
    gd::string copyObjects(cocos2d::CCArray* objects, bool copyColors, bool sort);

    /**
     * @note[short] MacOS (ARM): 0x36180
     * @note[short] MacOS (Intel): 0x3de90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ee8f8
     * @note[short] Android
     */
    gd::string copyObjectsDetailed(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2e518
     * @note[short] MacOS (Intel): 0x31690
     * @note[short] Windows: 0xe4780
     * @note[short] iOS: 0x3e8c20
     * @note[short] Android
     */
    cocos2d::CCArray* createCustomItems();

    /**
     * @note[short] MacOS (ARM): 0x5394dc
     * @note[short] MacOS (Intel): 0x6144b0
     * @note[short] Windows: 0x12e690
     * @note[short] iOS: 0x786a0
     * @note[short] Android
     */
    GameObject* createEdgeForObject(GameObject* object, int type);

    /**
     * @note[short] MacOS (ARM): 0x53cd88
     * @note[short] MacOS (Intel): 0x618a40
     * @note[short] Windows: 0x132c80
     * @note[short] iOS: 0x7c008
     * @note[short] Android
     */
    void createExtraObject(int id, cocos2d::CCPoint position, GameObject* object, cocos2d::CCArray* objects, int zOrder, int editorLayer);

    /**
     * @note[short] MacOS (ARM): 0x53a938
     * @note[short] MacOS (Intel): 0x616090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x79bd4
     * @note[short] Android
     */
    cocos2d::CCArray* createExtras(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x53a9f4
     * @note[short] MacOS (Intel): 0x616120
     * @note[short] Windows: 0x12ff20
     * @note[short] iOS: 0x79c74
     * @note[short] Android
     */
    void createExtrasForObject(int id, GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3be60
     * @note[short] MacOS (Intel): 0x44660
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createGlow();

    /**
     * @note[short] MacOS (ARM): 0x3cc84
     * @note[short] MacOS (Intel): 0x45780
     * @note[short] Windows: 0x119630
     * @note[short] iOS: 0x3f3694
     * @note[short] Android
     */
    void createLoop();

    /**
     * @note[short] MacOS (ARM): 0x3d388
     * @note[short] MacOS (Intel): 0x45f90
     * @note[short] Windows: 0x11ad30
     * @note[short] iOS: 0x3f3bac
     * @note[short] Android
     */
    void createMoveMenu();

    /**
     * @note[short] MacOS (ARM): 0x3ca68
     * @note[short] MacOS (Intel): 0x454f0
     * @note[short] Windows: 0x119390
     * @note[short] iOS: 0x3f34d4
     * @note[short] Android
     */
    void createNewKeyframeAnim();

    /**
     * @note[short] MacOS (ARM): 0x32fb4
     * @note[short] MacOS (Intel): 0x3a4d0
     * @note[short] Windows: 0x10ff20
     * @note[short] iOS: 0x3ec6e8
     * @note[short] Android
     */
    GameObject* createObject(int objectID, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x53980c
     * @note[short] MacOS (Intel): 0x614820
     * @note[short] Windows: 0x12ecf0
     * @note[short] iOS: 0x789a0
     * @note[short] Android
     */
    cocos2d::CCArray* createOutlines(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3b104
     * @note[short] MacOS (Intel): 0x43800
     * @note[short] Windows: 0x1179a0
     * @note[short] iOS: 0x3f2244
     * @note[short] Android: Rebinded
     */
    void createPrefab(GJSmartTemplate* smartTemplate, gd::string key, int id);

    /**
     * @note[short] MacOS (ARM): 0x53a178
     * @note[short] MacOS (Intel): 0x6154b0
     * @note[short] Windows: 0x12f5f0
     * @note[short] iOS: 0x79380
     * @note[short] Android
     */
    cocos2d::CCArray* createRockBases(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5391a4
     * @note[short] MacOS (Intel): 0x614110
     * @note[short] Windows: 0x12e320
     * @note[short] iOS: 0x78378
     * @note[short] Android
     */
    cocos2d::CCArray* createRockEdges(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3a480
     * @note[short] MacOS (Intel): 0x42a20
     * @note[short] Windows: 0x116e20
     * @note[short] iOS: 0x3f16fc
     * @note[short] Android
     */
    void createSmartObjectsFromTemplate(GJSmartTemplate* smartTemplate, cocos2d::CCArray* objects, bool useNearby, bool dontDelete, bool referenceOnly, bool dontPaste);

    /**
     * @note[short] MacOS (ARM): 0x3b5e4
     * @note[short] MacOS (Intel): 0x43d70
     * @note[short] Windows: 0x117f10
     * @note[short] iOS: 0x3f25a8
     * @note[short] Android
     */
    void createSmartObjectsFromType(int type, cocos2d::CCArray* objects, bool extras, bool dontDelete);

    /**
     * @note[short] MacOS (ARM): 0x350dc
     * @note[short] MacOS (Intel): 0x3cd20
     * @note[short] Windows: 0x110f30
     * @note[short] iOS: 0x3edfdc
     * @note[short] Android
     */
    UndoObject* createUndoObject(UndoCommand command, bool addToList);

    /**
     * @note[short] MacOS (ARM): 0x2b814
     * @note[short] MacOS (Intel): 0x2e740
     * @note[short] Windows: 0x111250
     * @note[short] iOS: 0x3e6e0c
     * @note[short] Android
     */
    void createUndoSelectObject(bool redo);

    /**
     * @note[short] MacOS (ARM): 0xa3c4
     * @note[short] MacOS (Intel): 0xb8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c6f98
     * @note[short] Android
     */
    void deactivateRotationControl();

    /**
     * @note[short] MacOS (ARM): 0xa548
     * @note[short] MacOS (Intel): 0xbab0
     * @note[short] Windows: 0x114d20
     * @note[short] iOS: 0x3c7068
     * @note[short] Android
     */
    void deactivateScaleControl();

    /**
     * @note[short] MacOS (ARM): 0xa668
     * @note[short] MacOS (Intel): 0xbbb0
     * @note[short] Windows: 0x115370
     * @note[short] iOS: 0x3c717c
     * @note[short] Android
     */
    void deactivateTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x2f8b4
     * @note[short] MacOS (Intel): 0x32a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e9be8
     * @note[short] Android
     */
    void deleteObject(GameObject* object, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0x313d8
     * @note[short] MacOS (Intel): 0x34650
     * @note[short] Windows: 0x117db0
     * @note[short] iOS: 0x3eaea0
     * @note[short] Android
     */
    void deleteSmartBlocksFromObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x31498
     * @note[short] MacOS (Intel): 0x34710
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3eaf50
     * @note[short] Android
     */
    void deleteTypeFromObjects(int id, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2fb6c
     * @note[short] MacOS (Intel): 0x32cf0
     * @note[short] Windows: 0x111480
     * @note[short] iOS: 0x3e9cd0
     * @note[short] Android
     */
    void deselectAll();

    /**
     * @note[short] MacOS (ARM): 0x2fd54
     * @note[short] MacOS (Intel): 0x32f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e9d5c
     * @note[short] Android
     */
    void deselectObject();

    /**
     * @note[short] MacOS (ARM): 0x2fac4
     * @note[short] MacOS (Intel): 0x32c50
     * @note[short] Windows: 0x111360
     * @note[short] iOS: 0x3e9c4c
     * @note[short] Android
     */
    void deselectObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x34e54
     * @note[short] MacOS (Intel): 0x3ca80
     * @note[short] Windows: 0x110790
     * @note[short] iOS: 0x3edd74
     * @note[short] Android
     */
    void deselectObjectsColor();

    /**
     * @note[short] MacOS (ARM): 0x2f764
     * @note[short] MacOS (Intel): 0x328c0
     * @note[short] Windows: 0xe6870
     * @note[short] iOS: 0x3e9afc
     * @note[short] Android
     */
    void deselectTargetPortals();

    /**
     * @note[short] MacOS (ARM): 0x2bab4
     * @note[short] MacOS (Intel): 0x2e9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e7064
     * @note[short] Android
     */
    void disableButton(CreateMenuItem* button);

    /**
     * @note[short] MacOS (ARM): 0x36364
     * @note[short] MacOS (Intel): 0x3e050
     * @note[short] Windows: 0x1131a0
     * @note[short] iOS: 0x3eeaac
     * @note[short] Android
     */
    void doCopyObjects(bool withColor);

    /**
     * @note[short] MacOS (ARM): 0x3671c
     * @note[short] MacOS (Intel): 0x3e450
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void doPasteInPlace(bool withColor);

    /**
     * @note[short] MacOS (ARM): 0x3645c
     * @note[short] MacOS (Intel): 0x3e170
     * @note[short] Windows: 0x113330
     * @note[short] iOS: 0x3eeba4
     * @note[short] Android
     */
    void doPasteObjects(bool withColor);

    /**
     * @note[short] MacOS (ARM): 0x3be64
     * @note[short] MacOS (Intel): 0x44670
     * @note[short] Windows: 0x1188b0
     * @note[short] iOS: 0x3f2c64
     * @note[short] Android
     */
    void dynamicGroupUpdate(bool reGroup);

    /**
     * @note[short] MacOS (ARM): 0x5396a4
     * @note[short] MacOS (Intel): 0x614670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x78850
     * @note[short] Android
     */
    int edgeForObject(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x3f6bc
     * @note[short] MacOS (Intel): 0x48d80
     * @note[short] Windows: 0x11a520
     * @note[short] iOS: 0x3f4fb8
     * @note[short] Android
     */
    bool editButton2Usable();

    /**
     * @note[short] MacOS (ARM): 0x3f108
     * @note[short] MacOS (Intel): 0x48020
     * @note[short] Windows: 0x119cd0
     * @note[short] iOS: 0x3f4a44
     * @note[short] Android
     */
    bool editButtonUsable();

    /**
     * @note[short] MacOS (ARM): 0x34c38
     * @note[short] MacOS (Intel): 0x3c7f0
     * @note[short] Windows: 0x11ed90
     * @note[short] iOS: 0x3edb88
     * @note[short] Android
     */
    void editColor();

    /**
     * @note[short] MacOS (ARM): 0x40374
     * @note[short] MacOS (Intel): 0x49bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool editColorButtonUsable();

    /**
     * @note[short] MacOS (ARM): 0x295e8
     * @note[short] MacOS (Intel): 0x2c240
     * @note[short] Windows: 0x11f260
     * @note[short] iOS: 0x3e56ac
     * @note[short] Android
     */
    void editGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34d8c
     * @note[short] MacOS (Intel): 0x3c990
     * @note[short] Windows: 0x11f010
     * @note[short] iOS: 0x3edcac
     * @note[short] Android
     */
    void editHSV();

    /**
     * @note[short] MacOS (ARM): 0x28764
     * @note[short] MacOS (Intel): 0x2ae90
     * @note[short] Windows: 0x11bef0
     * @note[short] iOS: 0x3e4898
     * @note[short] Android
     */
    void editObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2875c
     * @note[short] MacOS (Intel): 0x2ae80
     * @note[short] Windows: 0x11de80
     * @note[short] iOS: 0x3e4890
     * @note[short] Android
     */
    void editObject2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4036c
     * @note[short] MacOS (Intel): 0x49ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void editObject3(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fdc0
     * @note[short] MacOS (Intel): 0x49460
     * @note[short] Windows: 0x11de90
     * @note[short] iOS: 0x3f54e8
     * @note[short] Android
     */
    void editObjectSpecial(int type);

    /**
     * @note[short] MacOS (ARM): 0x2ab40
     * @note[short] MacOS (Intel): 0x2d9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e665c
     * @note[short] Android
     */
    int editorLayerForArray(cocos2d::CCArray* objects, bool layer2);

    /**
     * @note[short] MacOS (ARM): 0x2b980
     * @note[short] MacOS (Intel): 0x2e8a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e6f30
     * @note[short] Android
     */
    void enableButton(CreateMenuItem* button);

    /**
     * @note[short] MacOS (ARM): 0x302a0
     * @note[short] MacOS (Intel): 0x333e0
     * @note[short] Windows: 0xe6ee0
     * @note[short] iOS: 0x3ea024
     * @note[short] Android
     */
    void findAndSelectObject(int id, bool useUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x43c20
     * @note[short] MacOS (Intel): 0x4e7a0
     * @note[short] Windows: 0x123340
     * @note[short] iOS: 0x3f835c
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCArray* objects, float offset);

    /**
     * @note[short] MacOS (ARM): 0x43b08
     * @note[short] MacOS (Intel): 0x4e690
     * @note[short] Windows: 0x123240
     * @note[short] iOS: 0x3f824c
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCPoint position, float offset);

    /**
     * @note[short] MacOS (ARM): 0x3ca18
     * @note[short] MacOS (Intel): 0x454a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void findTriggerTest();

    /**
     * @note[short] MacOS (ARM): 0x3af0c
     * @note[short] MacOS (Intel): 0x435f0
     * @note[short] Windows: 0x120c70
     * @note[short] iOS: 0x3f20bc
     * @note[short] Android
     */
    void flipObjectsX(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3ad6c
     * @note[short] MacOS (Intel): 0x43420
     * @note[short] Windows: 0x120e50
     * @note[short] iOS: 0x3f1f34
     * @note[short] Android
     */
    void flipObjectsY(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2bbc0
     * @note[short] MacOS (Intel): 0x2ea90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getButton(char const* text, int width, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu);

    /**
     * @note[short] MacOS (ARM): 0x305b0
     * @note[short] MacOS (Intel): 0x33700
     * @note[short] Windows: 0x10e980
     * @note[short] iOS: 0x3ea200
     * @note[short] Android
     */
    CreateMenuItem* getCreateBtn(int id, int bg);

    /**
     * @note[short] MacOS (ARM): 0x2be24
     * @note[short] MacOS (Intel): 0x2ecd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e7268
     * @note[short] Android
     */
    CreateMenuItem* getCreateMenuItemButton(cocos2d::CCSprite* sprite, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int background, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x2f53c
     * @note[short] MacOS (Intel): 0x326f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e9974
     * @note[short] Android
     */
    GameObject* getCycledObject(cocos2d::CCArray* objects, bool dontSkipSelected);

    /**
     * @note[short] MacOS (ARM): 0x403a4
     * @note[short] MacOS (Intel): 0x49be0
     * @note[short] Windows: 0x11eb00
     * @note[short] iOS: 0x3f59a0
     * @note[short] Android
     */
    void getEditColorTargets(ColorAction*& mainColor, ColorAction*& detailColor, EffectGameObject*& object);

    /**
     * @note[short] MacOS (ARM): 0x32358
     * @note[short] MacOS (Intel): 0x35690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3eb9e0
     * @note[short] Android
     */
    cocos2d::CCPoint getGridSnappedPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x33fa4
     * @note[short] MacOS (Intel): 0x3baf0
     * @note[short] Windows: 0x122d40
     * @note[short] iOS: 0x3ecf98
     * @note[short] Android
     */
    cocos2d::CCPoint getGroupCenter(cocos2d::CCArray* objects, bool absolute);

    /**
     * @note[short] MacOS (ARM): 0x3f5a4
     * @note[short] MacOS (Intel): 0x48c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f4ea0
     * @note[short] Android
     */
    void getGroupInfo(GameObject* selectedObject, cocos2d::CCArray* selectedObjects, int& objectID, int& classType, int& objectType);

    /**
     * @note[short] MacOS (ARM): 0x40d98
     * @note[short] MacOS (Intel): 0x4a790
     * @note[short] Windows: 0x120110
     * @note[short] iOS: 0x3f6204
     * @note[short] Android
     */
    cocos2d::CCPoint getLimitedPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xa6e4
     * @note[short] MacOS (Intel): 0xbc30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getModeBtn(char const* frameName, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3bd78
     * @note[short] MacOS (Intel): 0x44590
     * @note[short] Windows: 0x1187e0
     * @note[short] iOS: 0x3f2b84
     * @note[short] Android
     */
    cocos2d::CCNode* getNeighbor(int smartKey, cocos2d::CCPoint position, GJSmartDirection direction, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x32e74
     * @note[short] MacOS (Intel): 0x3a3b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ec600
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativeOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x35038
     * @note[short] MacOS (Intel): 0x3cc70
     * @note[short] Windows: 0x110e80
     * @note[short] iOS: 0x3edf40
     * @note[short] Android
     */
    cocos2d::CCArray* getSelectedObjects();

    /**
     * @note[short] MacOS (ARM): 0x2bd34
     * @note[short] MacOS (Intel): 0x2ebf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    CCMenuItemSpriteExtra* getSimpleButton(gd::string frameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu);

    /**
     * @note[short] MacOS (ARM): 0x3a380
     * @note[short] MacOS (Intel): 0x42920
     * @note[short] Windows: 0x1186c0
     * @note[short] iOS: 0x3f15fc
     * @note[short] Android
     */
    SmartGameObject* getSmartNeighbor(SmartGameObject* object, cocos2d::CCPoint position, GJSmartDirection direction, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x40e08
     * @note[short] MacOS (Intel): 0x4a800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f6270
     * @note[short] Android
     */
    float getSnapAngle(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xa73c
     * @note[short] MacOS (Intel): 0xbc80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* spriteFrameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (ARM): 0xa8a8
     * @note[short] MacOS (Intel): 0xbdf0
     * @note[short] Windows: 0xe2870
     * @note[short] iOS: 0x3c7260
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* spriteFrameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x2bc3c
     * @note[short] MacOS (Intel): 0x2eb00
     * @note[short] Windows: 0xe2900
     * @note[short] iOS: 0x3e7170
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(cocos2d::CCSprite* sprite, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x44118
     * @note[short] MacOS (Intel): 0x4ecd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f864c
     * @note[short] Android
     */
    cocos2d::CCPoint getTouchPoint(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x35260
     * @note[short] MacOS (Intel): 0x3cec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJTransformState& getTransformState();

    /**
     * @note[short] MacOS (ARM): 0x2c108
     * @note[short] MacOS (Intel): 0x2efb0
     * @note[short] Windows: 0x122bc0
     * @note[short] iOS: 0x3e74a8
     * @note[short] Android
     */
    float getXMin(int offset);

    /**
     * @note[short] MacOS (ARM): 0x7d7c
     * @note[short] MacOS (Intel): 0x9070
     * @note[short] Windows: 0xdf390
     * @note[short] iOS: 0x3c4e74
     * @note[short] Android
     */
    bool init(LevelEditorLayer* editorLayer);

    /**
     * @note[short] MacOS (ARM): 0x3fb78
     * @note[short] MacOS (Intel): 0x49250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isLiveColorSelectTrigger(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x42270
     * @note[short] MacOS (Intel): 0x4bec0
     * @note[short] Windows: 0x129060
     * @note[short] iOS: 0x3f7500
     * @note[short] Android
     */
    bool isSpecialSnapObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x3fb48
     * @note[short] MacOS (Intel): 0x49220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool liveEditColorUsable();

    /**
     * @note[short] MacOS (ARM): 0x2e884
     * @note[short] MacOS (Intel): 0x31a00
     * @note[short] Windows: 0x10e770
     * @note[short] iOS: 0x3e8ec8
     * @note[short] Android: Rebinded
     */
    CreateMenuItem* menuItemFromObjectString(gd::string str, int id);

    /**
     * @note[short] MacOS (ARM): 0x408f0
     * @note[short] MacOS (Intel): 0x4a270
     * @note[short] Windows: 0x11f840
     * @note[short] iOS: 0x3f5d9c
     * @note[short] Android
     */
    cocos2d::CCPoint moveForCommand(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0x2c46c
     * @note[short] MacOS (Intel): 0x2f3a0
     * @note[short] Windows: 0xe2d50
     * @note[short] iOS: 0x3e77d0
     * @note[short] Android
     */
    void moveGamelayer(cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x36bfc
     * @note[short] MacOS (Intel): 0x3e8a0
     * @note[short] Windows: 0x11fcb0
     * @note[short] iOS: 0x3eef68
     * @note[short] Android
     */
    void moveObject(GameObject* object, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x40a9c
     * @note[short] MacOS (Intel): 0x4a470
     * @note[short] Windows: 0x11fa20
     * @note[short] iOS: 0x3f5f1c
     * @note[short] Android
     */
    void moveObjectCall(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0x3fd58
     * @note[short] MacOS (Intel): 0x49400
     * @note[short] Windows: 0x11f9f0
     * @note[short] iOS: 0x3f5480
     * @note[short] Android
     */
    void moveObjectCall(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x32430
     * @note[short] MacOS (Intel): 0x35760
     * @note[short] Windows: 0x1269a0
     * @note[short] iOS: 0x3eba54
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4355c
     * @note[short] MacOS (Intel): 0x4e060
     * @note[short] Windows: 0x122550
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onAssignNewGroupID();

    /**
     * @note[short] MacOS (ARM): 0x2ee6c
     * @note[short] MacOS (Intel): 0x31fa0
     * @note[short] Windows: 0xe72a0
     * @note[short] iOS: 0x3e93dc
     * @note[short] Android
     */
    void onColorFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x286d4
     * @note[short] MacOS (Intel): 0x2ae00
     * @note[short] Windows: 0x113190
     * @note[short] iOS: 0x3e4814
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x296a8
     * @note[short] MacOS (Intel): 0x2c310
     * @note[short] Windows: 0x114360
     * @note[short] iOS: 0x3e5744
     * @note[short] Android
     */
    void onCopyState(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2b220
     * @note[short] MacOS (Intel): 0x2e160
     * @note[short] Windows: 0x10f3f0
     * @note[short] iOS: 0x3e6b84
     * @note[short] Android
     */
    bool onCreate();

    /**
     * @note[short] MacOS (ARM): 0x31564
     * @note[short] MacOS (Intel): 0x347d0
     * @note[short] Windows: 0x10ef60
     * @note[short] iOS: 0x3eb00c
     * @note[short] Android
     */
    void onCreateButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x31984
     * @note[short] MacOS (Intel): 0x34bf0
     * @note[short] Windows: 0x10f5f0
     * @note[short] iOS: 0x3eb2d0
     * @note[short] Android
     */
    void onCreateObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x2ad9c
     * @note[short] MacOS (Intel): 0x2dc20
     * @note[short] Windows: 0xe5e00
     * @note[short] iOS: 0x3e6850
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2fb48
     * @note[short] MacOS (Intel): 0x32cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e310
     * @note[short] MacOS (Intel): 0x31470
     * @note[short] Windows: 0xe4520
     * @note[short] iOS: 0x3e8b1c
     * @note[short] Android
     */
    void onDeleteCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ec60
     * @note[short] MacOS (Intel): 0x31df0
     * @note[short] Windows: 0xe5cb0
     * @note[short] iOS: 0x3e923c
     * @note[short] Android
     */
    void onDeleteInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xac00
     * @note[short] MacOS (Intel): 0xc150
     * @note[short] Windows: 0xe6430
     * @note[short] iOS: 0x3c752c
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eb94
     * @note[short] MacOS (Intel): 0x31d20
     * @note[short] Windows: 0xe69d0
     * @note[short] iOS: 0x3e9170
     * @note[short] Android
     */
    void onDeleteSelectedType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eb6c
     * @note[short] MacOS (Intel): 0x31cf0
     * @note[short] Windows: 0xe6a20
     * @note[short] iOS: 0x3e9148
     * @note[short] Android
     */
    void onDeleteStartPos(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29590
     * @note[short] MacOS (Intel): 0x2c1e0
     * @note[short] Windows: 0x111440
     * @note[short] iOS: 0x3e566c
     * @note[short] Android
     */
    void onDeselectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x284fc
     * @note[short] MacOS (Intel): 0x2ac40
     * @note[short] Windows: 0x112c80
     * @note[short] iOS: 0x3e4664
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x286e4
     * @note[short] MacOS (Intel): 0x2ae20
     * @note[short] Windows: 0x11ea90
     * @note[short] iOS: 0x3e4824
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ef24
     * @note[short] MacOS (Intel): 0x32060
     * @note[short] Windows: 0xe7e90
     * @note[short] iOS: 0x3e9494
     * @note[short] Android
     */
    void onFindObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2995c
     * @note[short] MacOS (Intel): 0x2c610
     * @note[short] Windows: 0x1147e0
     * @note[short] iOS: 0x3e591c
     * @note[short] Android
     */
    void onGoToBaseLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2978c
     * @note[short] MacOS (Intel): 0x2c410
     * @note[short] Windows: 0x114680
     * @note[short] iOS: 0x3e5828
     * @note[short] Android
     */
    void onGoToLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29940
     * @note[short] MacOS (Intel): 0x2c5e0
     * @note[short] Windows: 0x11f4b0
     * @note[short] iOS: 0x3e5900
     * @note[short] Android
     */
    void onGroupDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ed40
     * @note[short] MacOS (Intel): 0x31ea0
     * @note[short] Windows: 0xe7150
     * @note[short] iOS: 0x3e92d4
     * @note[short] Android
     */
    void onGroupIDFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb30c
     * @note[short] MacOS (Intel): 0xc8d0
     * @note[short] Windows: 0x1128e0
     * @note[short] iOS: 0x3c7b50
     * @note[short] Android
     */
    void onGroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29928
     * @note[short] MacOS (Intel): 0x2c5c0
     * @note[short] Windows: 0x11f490
     * @note[short] iOS: 0x3e58e8
     * @note[short] Android
     */
    void onGroupUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29970
     * @note[short] MacOS (Intel): 0x2c630
     * @note[short] Windows: 0x11f620
     * @note[short] iOS: 0x3e5930
     * @note[short] Android
     */
    void onLockLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d7ec
     * @note[short] MacOS (Intel): 0x30820
     * @note[short] Windows: 0xe4030
     * @note[short] iOS: 0x3e849c
     * @note[short] Android
     */
    void onNewCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x286dc
     * @note[short] MacOS (Intel): 0x2ae10
     * @note[short] Windows: 0x113320
     * @note[short] iOS: 0x3e481c
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29738
     * @note[short] MacOS (Intel): 0x2c3b0
     * @note[short] Windows: 0x114570
     * @note[short] iOS: 0x3e57d4
     * @note[short] Android
     */
    void onPasteColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x36714
     * @note[short] MacOS (Intel): 0x3e440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onPasteInPlace(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x296e4
     * @note[short] MacOS (Intel): 0x2c350
     * @note[short] Windows: 0x1143e0
     * @note[short] iOS: 0x3e5780
     * @note[short] Android
     */
    void onPasteState(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2801c
     * @note[short] MacOS (Intel): 0x2a6d0
     * @note[short] Windows: 0xe19c0
     * @note[short] iOS: 0x3e41f0
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xad68
     * @note[short] MacOS (Intel): 0xc2d0
     * @note[short] Windows: 0x111aa0
     * @note[short] iOS: 0x3c768c
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xaf5c
     * @note[short] MacOS (Intel): 0xc510
     * @note[short] Windows: 0x1120b0
     * @note[short] iOS: 0x3c7880
     * @note[short] Android
     */
    void onPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eec4
     * @note[short] MacOS (Intel): 0x32000
     * @note[short] Windows: 0xe7430
     * @note[short] iOS: 0x3e9434
     * @note[short] Android
     */
    void onResetSpecialFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30bec
     * @note[short] MacOS (Intel): 0x33da0
     * @note[short] Windows: 0x114800
     * @note[short] iOS: 0x3ea6d8
     * @note[short] Android
     */
    void onSelectBuildTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x28490
     * @note[short] MacOS (Intel): 0x2abc0
     * @note[short] Windows: 0xe1940
     * @note[short] iOS: 0x3e45f4
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb394
     * @note[short] MacOS (Intel): 0xc970
     * @note[short] Windows: 0x112960
     * @note[short] iOS: 0x3c7b0c
     * @note[short] Android
     */
    void onStickyToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb168
     * @note[short] MacOS (Intel): 0xc730
     * @note[short] Windows: 0x112530
     * @note[short] iOS: 0x3c7a18
     * @note[short] Android
     */
    void onStopPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43418
     * @note[short] MacOS (Intel): 0x4df20
     * @note[short] Windows: 0x1223e0
     * @note[short] iOS: 0x3f7d64
     * @note[short] Android
     */
    void onTargetIDChange(int change);

    /**
     * @note[short] MacOS (ARM): 0x2c3b0
     * @note[short] MacOS (Intel): 0x2f2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e7718
     * @note[short] Android
     */
    void onToggleGuide(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x2c3f4
     * @note[short] MacOS (Intel): 0x2f310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e7758
     * @note[short] Android
     */
    void onToggleSelectedOrder(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x2c41c
     * @note[short] MacOS (Intel): 0x2f340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e7780
     * @note[short] Android
     */
    void onToggleTraceIn(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x2c444
     * @note[short] MacOS (Intel): 0x2f370
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e77a8
     * @note[short] Android
     */
    void onToggleTraceOut(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb350
     * @note[short] MacOS (Intel): 0xc920
     * @note[short] Windows: 0x112920
     * @note[short] iOS: 0x3c7b94
     * @note[short] Android
     */
    void onUngroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ebd4
     * @note[short] MacOS (Intel): 0x31d60
     * @note[short] Windows: 0xe7500
     * @note[short] iOS: 0x3e91b0
     * @note[short] Android
     */
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e458
     * @note[short] MacOS (Intel): 0x315d0
     * @note[short] Windows: 0xe46f0
     * @note[short] iOS: 0x3e8bbc
     * @note[short] Android
     */
    void orderDownCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e398
     * @note[short] MacOS (Intel): 0x31510
     * @note[short] Windows: 0xe4660
     * @note[short] iOS: 0x3e8b58
     * @note[short] Android
     */
    void orderUpCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x33138
     * @note[short] MacOS (Intel): 0x3a660
     * @note[short] Windows: 0x1135b0
     * @note[short] iOS: 0x3ec86c
     * @note[short] Android: Rebinded
     */
    cocos2d::CCArray* pasteObjects(gd::string str, bool withColor, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0x3052c
     * @note[short] MacOS (Intel): 0x33690
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playCircleAnim(cocos2d::CCPoint position, float radius, float duration);

    /**
     * @note[short] MacOS (ARM): 0x44180
     * @note[short] MacOS (Intel): 0x4ed40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playerTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x44278
     * @note[short] MacOS (Intel): 0x4ee50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playerTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x35bec
     * @note[short] MacOS (Intel): 0x3d8d0
     * @note[short] Windows: 0x112570
     * @note[short] iOS: 0x3ee608
     * @note[short] Android
     */
    void playtestStopped();

    /**
     * @note[short] MacOS (ARM): 0x32eb8
     * @note[short] MacOS (Intel): 0x3a3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ec644
     * @note[short] Android
     */
    bool positionIsInSnapped(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x436a4
     * @note[short] MacOS (Intel): 0x4e1a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f7e98
     * @note[short] Android
     */
    cocos2d::CCPoint positionWithoutOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3551c
     * @note[short] MacOS (Intel): 0x3d1c0
     * @note[short] Windows: 0x111760
     * @note[short] iOS: 0x3ee17c
     * @note[short] Android
     */
    void processSelectObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3ba64
     * @note[short] MacOS (Intel): 0x44200
     * @note[short] Windows: 0x118430
     * @note[short] iOS: 0x3f2918
     * @note[short] Android
     */
    void processSmartObjectsFromType(int type, cocos2d::CCArray* objects, cocos2d::CCArray* objects2, cocos2d::CCArray* objects3, cocos2d::CCArray* objects4);

    /**
     * @note[short] MacOS (ARM): 0x2ead4
     * @note[short] MacOS (Intel): 0x31c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e90b0
     * @note[short] Android
     */
    void recreateButtonTabs();

    /**
     * @note[short] MacOS (ARM): 0xab9c
     * @note[short] MacOS (Intel): 0xc0f0
     * @note[short] Windows: 0x111890
     * @note[short] iOS: 0x3c74c8
     * @note[short] Android
     */
    void redoLastAction(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e2a4
     * @note[short] MacOS (Intel): 0x31400
     * @note[short] Windows: 0xe4c90
     * @note[short] iOS: 0x3e8ab0
     * @note[short] Android
     */
    void reloadCustomItems();

    /**
     * @note[short] MacOS (ARM): 0x33038
     * @note[short] MacOS (Intel): 0x3a560
     * @note[short] Windows: 0x122860
     * @note[short] iOS: 0x3ec76c
     * @note[short] Android
     */
    void removeOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3c5c0
     * @note[short] MacOS (Intel): 0x45080
     * @note[short] Windows: 0x118fe0
     * @note[short] iOS: 0x3f3138
     * @note[short] Android
     */
    void replaceGroupID(GameObject* object, int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x31338
     * @note[short] MacOS (Intel): 0x345b0
     * @note[short] Windows: 0x1142c0
     * @note[short] iOS: 0x3eae00
     * @note[short] Android
     */
    void repositionObjectsToCenter(cocos2d::CCArray* objects, cocos2d::CCPoint position, bool absolute);

    /**
     * @note[short] MacOS (ARM): 0x3869c
     * @note[short] MacOS (Intel): 0x406c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f00f0
     * @note[short] Android
     */
    void resetObjectEditorValues(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x40860
     * @note[short] MacOS (Intel): 0x4a1c0
     * @note[short] Windows: 0x11f770
     * @note[short] iOS: 0x3f5d08
     * @note[short] Android
     */
    void resetSelectedObjectsColor();

    /**
     * @note[short] MacOS (ARM): 0x27f08
     * @note[short] MacOS (Intel): 0x2a5c0
     * @note[short] Windows: 0xe4d70
     * @note[short] iOS: 0x3e40dc
     * @note[short] Android
     */
    void resetUI();

    /**
     * @note[short] MacOS (ARM): 0x341c0
     * @note[short] MacOS (Intel): 0x3bd00
     * @note[short] Windows: 0x121030
     * @note[short] iOS: 0x3ed19c
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint pivotPoint);

    /**
     * @note[short] MacOS (ARM): 0x40a7c
     * @note[short] MacOS (Intel): 0x4a450
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float rotationforCommand(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0x3785c
     * @note[short] MacOS (Intel): 0x3f6d0
     * @note[short] Windows: 0x121450
     * @note[short] iOS: 0x3ef8b4
     * @note[short] Android
     */
    void scaleObjects(cocos2d::CCArray* objects, float scaleX, float scaleY, cocos2d::CCPoint pivotPoint, ObjectScaleType type, bool lockMove);

    /**
     * @note[short] MacOS (ARM): 0x352fc
     * @note[short] MacOS (Intel): 0x3cf90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ee0b8
     * @note[short] Android
     */
    void selectAll();

    /**
     * @note[short] MacOS (ARM): 0x35604
     * @note[short] MacOS (Intel): 0x3d2a0
     * @note[short] Windows: 0x1115b0
     * @note[short] iOS: 0x3ee24c
     * @note[short] Android
     */
    void selectAllWithDirection(bool left);

    /**
     * @note[short] MacOS (ARM): 0x30c20
     * @note[short] MacOS (Intel): 0x33dd0
     * @note[short] Windows: 0x114830
     * @note[short] iOS: 0x3ea70c
     * @note[short] Android
     */
    void selectBuildTab(int tab);

    /**
     * @note[short] MacOS (ARM): 0x2b850
     * @note[short] MacOS (Intel): 0x2e780
     * @note[short] Windows: 0x110530
     * @note[short] iOS: 0x3e6e48
     * @note[short] Android
     */
    void selectObject(GameObject* object, bool ignoreFilter);

    /**
     * @note[short] MacOS (ARM): 0x34610
     * @note[short] MacOS (Intel): 0x3c150
     * @note[short] Windows: 0x110820
     * @note[short] iOS: 0x3ed5dc
     * @note[short] Android
     */
    void selectObjects(cocos2d::CCArray* objects, bool ignoreFilter);

    /**
     * @note[short] MacOS (ARM): 0x34f3c
     * @note[short] MacOS (Intel): 0x3cb70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ede5c
     * @note[short] Android
     */
    void selectObjectsInRect(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0xc1e4
     * @note[short] MacOS (Intel): 0xd8b0
     * @note[short] Windows: 0xe7fe0
     * @note[short] iOS: 0x3c858c
     * @note[short] Android
     */
    void setupCreateMenu();

    /**
     * @note[short] MacOS (ARM): 0xb3d8
     * @note[short] MacOS (Intel): 0xc9c0
     * @note[short] Windows: 0xe4f70
     * @note[short] iOS: 0x3c7bd8
     * @note[short] Android
     */
    void setupDeleteMenu();

    /**
     * @note[short] MacOS (ARM): 0x27ed0
     * @note[short] MacOS (Intel): 0x2a580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupEditMenu();

    /**
     * @note[short] MacOS (ARM): 0x2a238
     * @note[short] MacOS (Intel): 0x2cfe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x2f664
     * @note[short] MacOS (Intel): 0x32800
     * @note[short] Windows: 0xe6300
     * @note[short] iOS: 0x3e9a24
     * @note[short] Android
     */
    bool shouldDeleteObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x44014
     * @note[short] MacOS (Intel): 0x4ebe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldSnap(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x2fe4c
     * @note[short] MacOS (Intel): 0x33010
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showDeleteConfirmation();

    /**
     * @note[short] MacOS (ARM): 0x4069c
     * @note[short] MacOS (Intel): 0x49fb0
     * @note[short] Windows: 0x11eee0
     * @note[short] iOS: 0x3f5c18
     * @note[short] Android
     */
    void showLiveColorSelectForMode(int colorID);

    /**
     * @note[short] MacOS (ARM): 0x405c0
     * @note[short] MacOS (Intel): 0x49e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f5b94
     * @note[short] Android
     */
    void showLiveColorSelectForModeSpecial(int colorID);

    /**
     * @note[short] MacOS (ARM): 0x316f0
     * @note[short] MacOS (Intel): 0x34960
     * @note[short] Windows: 0x112b40
     * @note[short] iOS: 0x3eb124
     * @note[short] Android
     */
    void showMaxBasicError();

    /**
     * @note[short] MacOS (ARM): 0x31844
     * @note[short] MacOS (Intel): 0x34ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3eb204
     * @note[short] Android
     */
    void showMaxCoinError();

    /**
     * @note[short] MacOS (ARM): 0x315a0
     * @note[short] MacOS (Intel): 0x34810
     * @note[short] Windows: 0x112a10
     * @note[short] iOS: 0x3eb048
     * @note[short] Android
     */
    void showMaxError();

    /**
     * @note[short] MacOS (ARM): 0x35a78
     * @note[short] MacOS (Intel): 0x3d740
     * @note[short] Windows: 0x111900
     * @note[short] iOS: 0x3ee4a4
     * @note[short] Android
     */
    void showUI(bool show);

    /**
     * @note[short] MacOS (ARM): 0xa1f8
     * @note[short] MacOS (Intel): 0xb6f0
     * @note[short] Windows: 0xe2a40
     * @note[short] iOS: 0x3c6e90
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30d5c
     * @note[short] MacOS (Intel): 0x33f30
     * @note[short] Windows: 0x10de60
     * @note[short] iOS: 0x3ea840
     * @note[short] Android: Rebinded
     */
    cocos2d::CCSprite* spriteFromObjectString(gd::string str, bool absoluteCenter, bool useGroup, int objLimit, cocos2d::CCArray* objects, cocos2d::CCArray* group, GameObject* groupParent);

    /**
     * @note[short] MacOS (ARM): 0x2a4e0
     * @note[short] MacOS (Intel): 0x2d2b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e6358
     * @note[short] Android
     */
    void toggleDuplicateButton();

    /**
     * @note[short] MacOS (ARM): 0x2a41c
     * @note[short] MacOS (Intel): 0x2d1e0
     * @note[short] Windows: 0x11a8f0
     * @note[short] iOS: 0x3e6294
     * @note[short] Android
     */
    void toggleEditObjectButton();

    /**
     * @note[short] MacOS (ARM): 0xaa1c
     * @note[short] MacOS (Intel): 0xbf60
     * @note[short] Windows: 0x1101e0
     * @note[short] iOS: 0x3c73d4
     * @note[short] Android
     */
    void toggleEnableRotate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xa940
     * @note[short] MacOS (Intel): 0xbe70
     * @note[short] Windows: 0x110060
     * @note[short] iOS: 0x3c72f8
     * @note[short] Android
     */
    void toggleFreeMove(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a414
     * @note[short] MacOS (Intel): 0x2d1d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e628c
     * @note[short] Android
     */
    void toggleLockUI(bool lockUI);

    /**
     * @note[short] MacOS (ARM): 0x28188
     * @note[short] MacOS (Intel): 0x2a880
     * @note[short] Windows: 0xe4e90
     * @note[short] iOS: 0x3e435c
     * @note[short] Android
     */
    void toggleMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a1e0
     * @note[short] MacOS (Intel): 0x2cf90
     * @note[short] Windows: 0xe2dd0
     * @note[short] iOS: 0x3e6070
     * @note[short] Android
     */
    void toggleObjectInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0xa9a8
     * @note[short] MacOS (Intel): 0xbee0
     * @note[short] Windows: 0x110100
     * @note[short] iOS: 0x3c7360
     * @note[short] Android
     */
    void toggleSnap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a648
     * @note[short] MacOS (Intel): 0x2d420
     * @note[short] Windows: 0x11a9f0
     * @note[short] iOS: 0x3e6484
     * @note[short] Android
     */
    void toggleSpecialEditButtons();

    /**
     * @note[short] MacOS (ARM): 0xa840
     * @note[short] MacOS (Intel): 0xbd80
     * @note[short] Windows: 0x10ffc0
     * @note[short] iOS: 0x3c71f8
     * @note[short] Android
     */
    void toggleSwipe(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41c0c
     * @note[short] MacOS (Intel): 0x4b8d0
     * @note[short] Windows: 0x120720
     * @note[short] iOS: 0x3f6f48
     * @note[short] Android
     */
    void transformObject(GameObject* object, EditCommand command, bool noOffset);

    /**
     * @note[short] MacOS (ARM): 0x40ebc
     * @note[short] MacOS (Intel): 0x4a8b0
     * @note[short] Windows: 0x1201d0
     * @note[short] iOS: 0x3f6324
     * @note[short] Android
     */
    void transformObjectCall(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0x3fd8c
     * @note[short] MacOS (Intel): 0x49430
     * @note[short] Windows: 0x1201a0
     * @note[short] iOS: 0x3f54b4
     * @note[short] Android
     */
    void transformObjectCall(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x387ac
     * @note[short] MacOS (Intel): 0x407e0
     * @note[short] Windows: 0x121a40
     * @note[short] iOS: 0x3f01ac
     * @note[short] Android
     */
    void transformObjects(cocos2d::CCArray* objs, cocos2d::CCPoint anchor, float scaleX, float scaleY, float rotateX, float rotateY, float warpX, float warpY);

    /**
     * @note[short] MacOS (ARM): 0x423e0
     * @note[short] MacOS (Intel): 0x4cc80
     * @note[short] Windows: 0x121980
     * @note[short] iOS: 0x3f76e0
     * @note[short] Android
     */
    void transformObjectsActive();

    /**
     * @note[short] MacOS (ARM): 0x42ef0
     * @note[short] MacOS (Intel): 0x4d980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f78a8
     * @note[short] Android
     */
    void transformObjectsReset();

    /**
     * @note[short] MacOS (ARM): 0x44060
     * @note[short] MacOS (Intel): 0x4ec10
     * @note[short] Windows: 0x123730
     * @note[short] iOS: 0x3f8594
     * @note[short] Android
     */
    void triggerSwipeMode();

    /**
     * @note[short] MacOS (ARM): 0x2c3f0
     * @note[short] MacOS (Intel): 0x2f300
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryUpdateTimeMarkers();

    /**
     * @note[short] MacOS (ARM): 0xab38
     * @note[short] MacOS (Intel): 0xc090
     * @note[short] Windows: 0x111820
     * @note[short] iOS: 0x3c7464
     * @note[short] Android
     */
    void undoLastAction(cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x29ac4
     * @note[short] MacOS (Intel): 0x2c780
     * @note[short] Windows: 0xe1dd0
     * @note[short] iOS: 0x3e5a80
     * @note[short] Android
     */
    void updateButtons();

    /**
     * @note[short] MacOS (ARM): 0x2b358
     * @note[short] MacOS (Intel): 0x2e270
     * @note[short] Windows: 0x10efa0
     * @note[short] iOS: 0x3e6c70
     * @note[short] Android
     */
    void updateCreateMenu(bool selectTab);

    /**
     * @note[short] MacOS (ARM): 0x2ef6c
     * @note[short] MacOS (Intel): 0x320a0
     * @note[short] Windows: 0xe7680
     * @note[short] iOS: 0x3e94dc
     * @note[short] Android
     */
    void updateDeleteButtons();

    /**
     * @note[short] MacOS (ARM): 0x2a60c
     * @note[short] MacOS (Intel): 0x2d3e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDeleteMenu();

    /**
     * @note[short] MacOS (ARM): 0x36d78
     * @note[short] MacOS (Intel): 0x3ea30
     * @note[short] Windows: 0x114990
     * @note[short] iOS: 0x3ef05c
     * @note[short] Android
     */
    void updateEditButtonColor(int tag, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x3fbb4
     * @note[short] MacOS (Intel): 0x49280
     * @note[short] Windows: 0x11e920
     * @note[short] iOS: 0x3f52fc
     * @note[short] Android
     */
    void updateEditColorButton();

    /**
     * @note[short] MacOS (ARM): 0x2b938
     * @note[short] MacOS (Intel): 0x2e850
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateEditMenu();

    /**
     * @note[short] MacOS (ARM): 0x2c290
     * @note[short] MacOS (Intel): 0x2f160
     * @note[short] Windows: 0xe2c00
     * @note[short] iOS: 0x3e7630
     * @note[short] Android
     */
    void updateGridNodeSize();

    /**
     * @note[short] MacOS (ARM): 0x2c374
     * @note[short] MacOS (Intel): 0x2f290
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateGridNodeSize(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x36d48
     * @note[short] MacOS (Intel): 0x3e9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateGroupIDBtn2();

    /**
     * @note[short] MacOS (ARM): 0x299b8
     * @note[short] MacOS (Intel): 0x2c680
     * @note[short] Windows: 0x11f4e0
     * @note[short] iOS: 0x3e5978
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] MacOS (ARM): 0x2c4e8
     * @note[short] MacOS (Intel): 0x2f410
     * @note[short] Windows: 0xe2e60
     * @note[short] iOS: 0x3e784c
     * @note[short] Android
     */
    void updateObjectInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x2a2f4
     * @note[short] MacOS (Intel): 0x2d0c0
     * @note[short] Windows: 0x111f60
     * @note[short] iOS: 0x3e6180
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] MacOS (ARM): 0x283e4
     * @note[short] MacOS (Intel): 0x2ab00
     * @note[short] Windows: 0xe2b40
     * @note[short] iOS: 0x3e45b4
     * @note[short] Android
     */
    void updateSlider();

    /**
     * @note[short] MacOS (ARM): 0x2b954
     * @note[short] MacOS (Intel): 0x2e880
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSpecialUIElements();

    /**
     * @note[short] MacOS (ARM): 0x2a23c
     * @note[short] MacOS (Intel): 0x2cff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e60c8
     * @note[short] Android
     */
    void updateStickyControls();

    /**
     * @note[short] MacOS (ARM): 0x35cac
     * @note[short] MacOS (Intel): 0x3d9a0
     * @note[short] Windows: 0x1126e0
     * @note[short] iOS: 0x3ee6c8
     * @note[short] Android
     */
    void updateZoom(float zoom);

    /**
     * @note[short] MacOS (ARM): 0x2c200
     * @note[short] MacOS (Intel): 0x2f0d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e75a0
     * @note[short] Android
     */
    float valueFromXPos(float xPos);

    /**
     * @note[short] MacOS (ARM): 0x2c07c
     * @note[short] MacOS (Intel): 0x2ef10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e742c
     * @note[short] Android
     */
    float xPosFromValue(float value);

    /**
     * @note[short] MacOS (ARM): 0x35f30
     * @note[short] MacOS (Intel): 0x3dc70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void zoomGameLayer(bool zoomingIn);

    /**
     * @note[short] MacOS (ARM): 0xb250
     * @note[short] MacOS (Intel): 0xc830
     * @note[short] Windows: 0x112640
     * @note[short] iOS: 0x3c7a5c
     * @note[short] Android
     */
    void zoomIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb2a8
     * @note[short] MacOS (Intel): 0xc880
     * @note[short] Windows: 0x112690
     * @note[short] iOS: 0x3c7ab0
     * @note[short] Android
     */
    void zoomOut(cocos2d::CCObject* sender);
    gd::unordered_map<int, GameObjectEditorState> m_objectEditorStates;
    GJTransformState m_transformState;
    bool m_isPlayingMusic;
    EditButtonBar* m_customTabBar;
    bool m_alertShown;
    cocos2d::CCArray* m_uiItems;
    float m_gridSize;
    int m_playerTouchID1;
    int m_playerTouchID2;
    bool m_playbackActive;
    float m_playbackStartWarp;
    float m_playbackStartTime;
    UndoObject* m_undoObject;
    bool m_spaceSwiping;
    bool m_noSnapUndo;
    bool m_editingObject;
    bool m_increaseScale;
    bool m_refreshPosition;
    int m_rotationTouchID;
    int m_scaleTouchID;
    int m_touchID;
    int m_transformTouchID;
    cocos2d::CCLabelBMFont* m_objectInfoLabel;
    GJRotationControl* m_rotationControl;
    cocos2d::CCPoint m_pivotPoint;
    bool m_canActivateControls;
    GJScaleControl* m_scaleControl;
    GJTransformControl* m_transformControl;
    cocos2d::CCNode* m_transformNode;
    cocos2d::CCNode* m_transformChild;
    cocos2d::CCDictionary* m_editButtonDict;
    EditButtonBar* m_createButtonBar;
    EditButtonBar* m_editButtonBar;
    Slider* m_positionSlider;
    float m_unk308;
    float m_constrainedHeight;
    float m_toolbarHeight;
    bool m_swipeEnabled;
    bool m_swipeActive;
    bool m_swipeSelected;
    bool m_continuousSnap;
    bool m_freeMoveEnabled;
    bool m_snapObjectExists;
    bool m_snapSelected;
    bool m_stickyControlsEnabled;
    bool m_linkControlsDisabled;
    bool m_speedObjectsUpdated;
    cocos2d::CCPoint m_createPosition;
    cocos2d::CCArray* m_snapPositions;
    cocos2d::CCPoint m_snapPosition;
    cocos2d::CCArray* m_selectedObjects;
    cocos2d::CCMenu* m_deleteMenu;
    cocos2d::CCArray* m_customTabControls;
    CCMenuItemSpriteExtra* m_deleteModeBtn;
    CCMenuItemSpriteExtra* m_buildModeBtn;
    CCMenuItemSpriteExtra* m_editModeBtn;
    CCMenuItemSpriteExtra* m_swipeBtn;
    CCMenuItemSpriteExtra* m_freeMoveBtn;
    CCMenuItemSpriteExtra* m_deselectBtn;
    CCMenuItemSpriteExtra* m_snapBtn;
    CCMenuItemSpriteExtra* m_rotateBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_playtestBtn;
    CCMenuItemSpriteExtra* m_playtestStopBtn;
    CCMenuItemSpriteExtra* m_trashBtn;
    CCMenuItemSpriteExtra* m_linkBtn;
    CCMenuItemSpriteExtra* m_unlinkBtn;
    CCMenuItemSpriteExtra* m_enableLinkBtn;
    CCMenuItemSpriteExtra* m_undoBtn;
    CCMenuItemSpriteExtra* m_redoBtn;
    CCMenuItemSpriteExtra* m_editObjectBtn;
    CCMenuItemSpriteExtra* m_editGroupBtn;
    CCMenuItemSpriteExtra* m_editHSVBtn;
    CCMenuItemSpriteExtra* m_editSpecialBtn;
    cocos2d::CCObject* m_unk3F0;
    CCMenuItemSpriteExtra* m_copyPasteBtn;
    CCMenuItemSpriteExtra* m_copyBtn;
    CCMenuItemSpriteExtra* m_pasteBtn;
    CCMenuItemSpriteExtra* m_copyValuesBtn;
    CCMenuItemSpriteExtra* m_pasteStateBtn;
    CCMenuItemSpriteExtra* m_pasteColorBtn;
    CCMenuItemSpriteExtra* m_goToLayerBtn;
    cocos2d::CCArray* m_createButtonBars;
    cocos2d::CCMenu* m_tabsMenu;
    cocos2d::CCArray* m_tabsArray;
    cocos2d::CCSprite* m_deleteAllSprite;
    cocos2d::CCSprite* m_customDeleteSprite;
    CCMenuItemSpriteExtra* m_deleteButton;
    CCMenuItemSpriteExtra* m_deleteAllButton;
    CCMenuItemSpriteExtra* m_deleteFilterNone;
    CCMenuItemSpriteExtra* m_deleteFilterStatic;
    CCMenuItemSpriteExtra* m_deleteFilterDetails;
    CCMenuItemSpriteExtra* m_deleteFilterCustom;
    cocos2d::CCLabelBMFont* m_currentLayerLabel;
    CCMenuItemSpriteExtra* m_layerNextBtn;
    CCMenuItemSpriteExtra* m_layerPrevBtn;
    CCMenuItemSpriteExtra* m_goToBaseBtn;
    ButtonSprite* m_deleteGroupSprite;
    ButtonSprite* m_deleteColorSprite;
    void* m_unk4b8;
    void* m_unk4c0;
    int m_selectedObjectIndex;
    cocos2d::CCArray* m_createButtonArray;
    cocos2d::CCArray* m_customObjectButtonArray;
    cocos2d::CCArray* m_deleteObjects;
    int m_selectedMode;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCPoint m_swipeStart;
    cocos2d::CCPoint m_swipeEnd;
    cocos2d::CCPoint m_swipePosition;
    cocos2d::CCPoint m_lastTouchPoint;
    cocos2d::CCPoint m_cameraTest;
    cocos2d::CCPoint m_clickAtPosition;
    GameObject* m_selectedObject;
    GameObject* m_snapObject;
    bool m_isDraggingCamera;
    bool m_continueSwipe;
    bool m_findSnap;
    void* m_unk540;
    int m_selectedTab;
    int m_cycledObjectIndex;
    ColorSelectLiveOverlay* m_colorOverlay;
    HSVLiveOverlay* m_hsvOverlay;
    double m_keyTime;
    double m_keyTime2;
    bool m_swipeModeTriggered;
    cocos2d::CCSprite* m_layerLockSprite;
    void* m_unk580;
    bool m_pressedSpace;
    float m_editorZoom;
    bool m_isPaused;
    bool m_reloadItems;
};
