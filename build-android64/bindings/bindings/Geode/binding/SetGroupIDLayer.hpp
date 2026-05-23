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
#include "ConfigureValuePopupDelegate.hpp"

class SetGroupIDLayer : public FLAlertLayer, public TextInputDelegate, public ConfigureValuePopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetGroupIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetGroupIDLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41b10
     * @note[short] Android: Out of line
     */
     SetGroupIDLayer();

    /**
     * @note[short] MacOS (ARM): 0x2a13e0
     * @note[short] MacOS (Intel): 0x3121f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3adb4
     * @note[short] Android: Rebinded
     */
     ~SetGroupIDLayer();

    /**
     * @note[short] MacOS (ARM): 0x2a14b8
     * @note[short] MacOS (Intel): 0x312360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ae8c
     * @note[short] Android
     */
    static SetGroupIDLayer* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2a6748
     * @note[short] MacOS (Intel): 0x317cc0
     * @note[short] Windows: 0x3fdf20
     * @note[short] iOS: 0x3f14c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a6678
     * @note[short] MacOS (Intel): 0x317bc0
     * @note[short] Windows: 0x3fd3d0
     * @note[short] iOS: 0x3f0ec
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x2a5fd4
     * @note[short] MacOS (Intel): 0x317450
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x3eb68
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2a5ff0
     * @note[short] MacOS (Intel): 0x317490
     * @note[short] Windows: 0x3fbbb0
     * @note[short] iOS: 0x3eb84
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2a658c
     * @note[short] MacOS (Intel): 0x317ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f008
     * @note[short] Android
     */
    void addGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x2a6438
     * @note[short] MacOS (Intel): 0x317980
     * @note[short] Windows: 0x3fc7e0
     * @note[short] iOS: 0x3eed0
     * @note[short] Android
     */
    void callRemoveFromGroup(float dt);

    /**
     * @note[short] MacOS (ARM): 0x2a3c00
     * @note[short] MacOS (Intel): 0x314d50
     * @note[short] Windows: 0x3fac60
     * @note[short] iOS: 0x3cff8
     * @note[short] Android: Rebinded
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint position, int tag, int length, gd::string placeholder, float width, int arrow);

    /**
     * @note[short] MacOS (ARM): 0x2a433c
     * @note[short] MacOS (Intel): 0x3154a0
     * @note[short] Windows: 0x3fb300
     * @note[short] iOS: 0x3d608
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2a1628
     * @note[short] MacOS (Intel): 0x312540
     * @note[short] Windows: 0x3f85e0
     * @note[short] iOS: 0x3af10
     * @note[short] Android
     */
    bool init(GameObject* obj, cocos2d::CCArray* objs);

    /**
     * @note[short] MacOS (ARM): 0x2a41a8
     * @note[short] MacOS (Intel): 0x3152e0
     * @note[short] Windows: 0x3fca90
     * @note[short] iOS: 0x3d4dc
     * @note[short] Android
     */
    void onAddGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a41b0
     * @note[short] MacOS (Intel): 0x3152f0
     * @note[short] Windows: 0x3fcc00
     * @note[short] iOS: 0x3d4e4
     * @note[short] Android
     */
    void onAddGroupParent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a55a0
     * @note[short] MacOS (Intel): 0x316860
     * @note[short] Windows: 0x3fbb40
     * @note[short] iOS: 0x3e448
     * @note[short] Android
     */
    void onAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a56f0
     * @note[short] MacOS (Intel): 0x3169b0
     * @note[short] Windows: 0x3fb190
     * @note[short] iOS: 0x3e598
     * @note[short] Android
     */
    void onArrow(int tag, int increment);

    /**
     * @note[short] MacOS (ARM): 0x2a5680
     * @note[short] MacOS (Intel): 0x316950
     * @note[short] Windows: 0x3fb130
     * @note[short] iOS: 0x3e528
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a56b8
     * @note[short] MacOS (Intel): 0x316980
     * @note[short] Windows: 0x3fb160
     * @note[short] iOS: 0x3e560
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a3668
     * @note[short] MacOS (Intel): 0x314740
     * @note[short] Windows: 0x3fdb60
     * @note[short] iOS: 0x3cbb8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a5448
     * @note[short] MacOS (Intel): 0x3166e0
     * @note[short] Windows: 0x3fb680
     * @note[short] iOS: 0x3e35c
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a5550
     * @note[short] MacOS (Intel): 0x316800
     * @note[short] Windows: 0x3fb880
     * @note[short] iOS: 0x3e3f8
     * @note[short] Android
     */
    void onExtra(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a5578
     * @note[short] MacOS (Intel): 0x316830
     * @note[short] Windows: 0x3fba00
     * @note[short] iOS: 0x3e420
     * @note[short] Android
     */
    void onExtra2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a3a24
     * @note[short] MacOS (Intel): 0x314b90
     * @note[short] Windows: 0x3fd0d0
     * @note[short] iOS: 0x3ce84
     * @note[short] Android
     */
    void onGroupIDOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a384c
     * @note[short] MacOS (Intel): 0x314970
     * @note[short] Windows: 0x3fcf90
     * @note[short] iOS: 0x3cd9c
     * @note[short] Android
     */
    void onNextFreeEditorLayer1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a3938
     * @note[short] MacOS (Intel): 0x314a80
     * @note[short] Windows: 0x3fd030
     * @note[short] iOS: 0x3ce10
     * @note[short] Android
     */
    void onNextFreeEditorLayer2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a4970
     * @note[short] MacOS (Intel): 0x315b80
     * @note[short] Windows: 0x3fd890
     * @note[short] iOS: 0x3db58
     * @note[short] Android
     */
    void onNextFreeOrderChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a411c
     * @note[short] MacOS (Intel): 0x315240
     * @note[short] Windows: 0x3fc080
     * @note[short] iOS: 0x3d470
     * @note[short] Android
     */
    void onNextGroupID1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a5470
     * @note[short] MacOS (Intel): 0x316710
     * @note[short] Windows: 0x3fb6e0
     * @note[short] iOS: 0x3e384
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a6378
     * @note[short] MacOS (Intel): 0x3178c0
     * @note[short] Windows: 0x3fc9c0
     * @note[short] iOS: 0x3ee10
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a6730
     * @note[short] MacOS (Intel): 0x317ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onSmoothEase(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a55d0
     * @note[short] MacOS (Intel): 0x316890
     * @note[short] Windows: 0x3fa9f0
     * @note[short] iOS: 0x3e478
     * @note[short] Android
     */
    void onToggleGuide(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a55fc
     * @note[short] MacOS (Intel): 0x3168c0
     * @note[short] Windows: 0x3faa80
     * @note[short] iOS: 0x3e4a4
     * @note[short] Android
     */
    void onToggleSelectedOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a5654
     * @note[short] MacOS (Intel): 0x316920
     * @note[short] Windows: 0x3fab20
     * @note[short] iOS: 0x3e4fc
     * @note[short] Android
     */
    void onToggleTraceIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a5628
     * @note[short] MacOS (Intel): 0x3168f0
     * @note[short] Windows: 0x3fabc0
     * @note[short] iOS: 0x3e4d0
     * @note[short] Android
     */
    void onToggleTraceOut(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a4234
     * @note[short] MacOS (Intel): 0x315380
     * @note[short] Windows: 0x3fcd00
     * @note[short] iOS: 0x3d568
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a4624
     * @note[short] MacOS (Intel): 0x315840
     * @note[short] Windows: 0x3fcdc0
     * @note[short] iOS: 0x3d8e4
     * @note[short] Android
     */
    void onZLayerShift(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a64b0
     * @note[short] MacOS (Intel): 0x317a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ef3c
     * @note[short] Android
     */
    void removeGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x2a4bb0
     * @note[short] MacOS (Intel): 0x315dd0
     * @note[short] Windows: 0x3fd4f0
     * @note[short] iOS: 0x3dc6c
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] MacOS (ARM): 0x2a4cd8
     * @note[short] MacOS (Intel): 0x315ef0
     * @note[short] Windows: 0x3fd580
     * @note[short] iOS: 0x3dd0c
     * @note[short] Android
     */
    void updateEditorLabel2();

    /**
     * @note[short] MacOS (ARM): 0x2a5a50
     * @note[short] MacOS (Intel): 0x316da0
     * @note[short] Windows: 0x3fce90
     * @note[short] iOS: 0x3e70c
     * @note[short] Android
     */
    void updateEditorLayerID();

    /**
     * @note[short] MacOS (ARM): 0x2a5ac0
     * @note[short] MacOS (Intel): 0x316e20
     * @note[short] Windows: 0x3fcf10
     * @note[short] iOS: 0x3e774
     * @note[short] Android
     */
    void updateEditorLayerID2();

    /**
     * @note[short] MacOS (ARM): 0x2a5b30
     * @note[short] MacOS (Intel): 0x316ea0
     * @note[short] Windows: 0x3fda90
     * @note[short] iOS: 0x3e7dc
     * @note[short] Android
     */
    void updateEditorOrder();

    /**
     * @note[short] MacOS (ARM): 0x2a46e0
     * @note[short] MacOS (Intel): 0x315900
     * @note[short] Windows: 0x3fd730
     * @note[short] iOS: 0x3d9a0
     * @note[short] Android
     */
    void updateEditorOrderLabel();

    /**
     * @note[short] MacOS (ARM): 0x2a4fac
     * @note[short] MacOS (Intel): 0x3161c0
     * @note[short] Windows: 0x3fc120
     * @note[short] iOS: 0x3dee0
     * @note[short] Android
     */
    void updateGroupIDButtons();

    /**
     * @note[short] MacOS (ARM): 0x2a4a88
     * @note[short] MacOS (Intel): 0x315cb0
     * @note[short] Windows: 0x3fd6a0
     * @note[short] iOS: 0x3dbcc
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] MacOS (ARM): 0x2a5bd8
     * @note[short] MacOS (Intel): 0x316f50
     * @note[short] Windows: 0x3fd9c0
     * @note[short] iOS: 0x3e87c
     * @note[short] Android
     */
    void updateOrderChannel();

    /**
     * @note[short] MacOS (ARM): 0x2a4828
     * @note[short] MacOS (Intel): 0x315a40
     * @note[short] Windows: 0x3fd7e0
     * @note[short] iOS: 0x3da7c
     * @note[short] Android
     */
    void updateOrderChannelLabel();

    /**
     * @note[short] MacOS (ARM): 0x2a4f1c
     * @note[short] MacOS (Intel): 0x316130
     * @note[short] Windows: 0x3fd930
     * @note[short] iOS: 0x3de50
     * @note[short] Android
     */
    void updateZLayerButtons();

    /**
     * @note[short] MacOS (ARM): 0x2a5c80
     * @note[short] MacOS (Intel): 0x317000
     * @note[short] Windows: 0x3fd460
     * @note[short] iOS: 0x3e91c
     * @note[short] Android
     */
    void updateZOrder();

    /**
     * @note[short] MacOS (ARM): 0x2a4e00
     * @note[short] MacOS (Intel): 0x316010
     * @note[short] Windows: 0x3fd610
     * @note[short] iOS: 0x3ddac
     * @note[short] Android
     */
    void updateZOrderLabel();
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_zLayerButtons;
    cocos2d::CCArray* m_groupIDObjects;
    CCTextInputNode* m_editorLayerInput;
    CCTextInputNode* m_editorLayer2Input;
    CCTextInputNode* m_zOrderInput;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    bool m_showChannelOrder;
    int m_channelValue;
    bool m_channelUpdated;
    int m_groupIDValue;
    int m_editorLayerValue;
    int m_editorLayer2Value;
    int m_zOrderValue;
    ZLayer m_zLayerValue;
    int m_orderValue;
    bool m_channelOrderEdited;
    bool m_editorLayerEdited;
    bool m_removeGroupsLock;
    int m_groupToRemove;
    bool m_addedGroup;
    bool m_reverseChanged;
    bool m_hasTargetObjects;
    bool m_unk2ff;
    bool m_unk300;
    int m_nextFreeID;
    cocos2d::CCDictionary* m_parentGroups;
};
