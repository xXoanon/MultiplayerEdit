#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "EditorPauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorPauseLayer, CCBlockLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditorPauseLayer();

    /**
     * @note[short] MacOS (ARM): 0x2315c8
     * @note[short] MacOS (Intel): 0x2910a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39bad0
     * @note[short] Android
     */
    static EditorPauseLayer* create(LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x235320
     * @note[short] MacOS (Intel): 0x294f30
     * @note[short] Windows: 0xde600
     * @note[short] iOS: 0x39e8bc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2353f8
     * @note[short] MacOS (Intel): 0x295020
     * @note[short] Windows: 0xde610
     * @note[short] iOS: 0x39e8c8
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x232190
     * @note[short] MacOS (Intel): 0x2919f0
     * @note[short] Windows: 0xda550
     * @note[short] iOS: 0x39c134
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x235244
     * @note[short] MacOS (Intel): 0x294e50
     * @note[short] Windows: 0xde4e0
     * @note[short] iOS: 0x39e7f8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2346ac
     * @note[short] MacOS (Intel): 0x294230
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void doResetUnused();

    /**
     * @note[short] MacOS (ARM): 0x2316a0
     * @note[short] MacOS (Intel): 0x2911a0
     * @note[short] Windows: 0xd9ec0
     * @note[short] iOS: 0x39bb9c
     * @note[short] Android
     */
    bool init(LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x23440c
     * @note[short] MacOS (Intel): 0x293f00
     * @note[short] Windows: 0xdcf10
     * @note[short] iOS: 0x39e02c
     * @note[short] Android
     */
    void onAlignX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234440
     * @note[short] MacOS (Intel): 0x293f30
     * @note[short] Windows: 0xdcf40
     * @note[short] iOS: 0x39e060
     * @note[short] Android
     */
    void onAlignY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2343e0
     * @note[short] MacOS (Intel): 0x293ea0
     * @note[short] Windows: 0xdcce0
     * @note[short] iOS: 0x39e000
     * @note[short] Android
     */
    void onBuildHelper(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2343d0
     * @note[short] MacOS (Intel): 0x293e80
     * @note[short] Windows: 0xdcd20
     * @note[short] iOS: 0x39dff0
     * @note[short] Android
     */
    void onCopyWColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234390
     * @note[short] MacOS (Intel): 0x293e30
     * @note[short] Windows: 0xdcc90
     * @note[short] iOS: 0x39dfb0
     * @note[short] Android
     */
    void onCreateExtras(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2343f0
     * @note[short] MacOS (Intel): 0x293ec0
     * @note[short] Windows: 0xdcd00
     * @note[short] iOS: 0x39e010
     * @note[short] Android
     */
    void onCreateLoop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2346b4
     * @note[short] MacOS (Intel): 0x294250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23520c
     * @note[short] MacOS (Intel): 0x294e10
     * @note[short] Windows: 0xde2a0
     * @note[short] iOS: 0x39e7c0
     * @note[short] Android
     */
    void onExitEditor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x233f94
     * @note[short] MacOS (Intel): 0x2939b0
     * @note[short] Windows: 0xde370
     * @note[short] iOS: 0x39dc84
     * @note[short] Android
     */
    void onExitNoSave(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234144
     * @note[short] MacOS (Intel): 0x293b90
     * @note[short] Windows: 0xde590
     * @note[short] iOS: 0x39dda0
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234674
     * @note[short] MacOS (Intel): 0x2941f0
     * @note[short] Windows: 0xdcf70
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2344a0
     * @note[short] MacOS (Intel): 0x293fd0
     * @note[short] Windows: 0xdcd60
     * @note[short] iOS: 0x39e0c0
     * @note[short] Android
     */
    void onNewGroupX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2344b0
     * @note[short] MacOS (Intel): 0x293ff0
     * @note[short] Windows: 0xdcd80
     * @note[short] iOS: 0x39e0d0
     * @note[short] Android
     */
    void onNewGroupY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234690
     * @note[short] MacOS (Intel): 0x294210
     * @note[short] Windows: 0xdc8c0
     * @note[short] iOS: 0x39e294
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2343c0
     * @note[short] MacOS (Intel): 0x293e60
     * @note[short] Windows: 0xdcd40
     * @note[short] iOS: 0x39dfe0
     * @note[short] Android
     */
    void onPasteWColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2343fc
     * @note[short] MacOS (Intel): 0x293ee0
     * @note[short] Windows: 0xdccc0
     * @note[short] iOS: 0x39e01c
     * @note[short] Android
     */
    void onReGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234298
     * @note[short] MacOS (Intel): 0x293d10
     * @note[short] Windows: 0xdcaf0
     * @note[short] iOS: 0x39deec
     * @note[short] Android
     */
    void onResetUnusedColors(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x233d64
     * @note[short] MacOS (Intel): 0x293790
     * @note[short] Windows: 0xdd670
     * @note[short] iOS: 0x39da90
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x233eb4
     * @note[short] MacOS (Intel): 0x2938e0
     * @note[short] Windows: 0xde130
     * @note[short] iOS: 0x39dbc8
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x233e50
     * @note[short] MacOS (Intel): 0x293870
     * @note[short] Windows: 0xde260
     * @note[short] iOS: 0x39db7c
     * @note[short] Android
     */
    void onSaveAndExit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x233dcc
     * @note[short] MacOS (Intel): 0x293800
     * @note[short] Windows: 0xddee0
     * @note[short] iOS: 0x39daf8
     * @note[short] Android
     */
    void onSaveAndPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234474
     * @note[short] MacOS (Intel): 0x293f70
     * @note[short] Windows: 0xdcda0
     * @note[short] iOS: 0x39e094
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234480
     * @note[short] MacOS (Intel): 0x293f90
     * @note[short] Windows: 0xdced0
     * @note[short] iOS: 0x39e0a0
     * @note[short] Android
     */
    void onSelectAllLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234490
     * @note[short] MacOS (Intel): 0x293fb0
     * @note[short] Windows: 0xdcef0
     * @note[short] iOS: 0x39e0b0
     * @note[short] Android
     */
    void onSelectAllRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2340bc
     * @note[short] MacOS (Intel): 0x293b00
     * @note[short] Windows: 0xdd510
     * @note[short] iOS: 0x39dd68
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234388
     * @note[short] MacOS (Intel): 0x293e10
     * @note[short] Windows: 0xdcc50
     * @note[short] iOS: 0x39dfa8
     * @note[short] Android
     */
    void onUnlockAllLayers(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2350e0
     * @note[short] MacOS (Intel): 0x294ce0
     * @note[short] Windows: 0xddf60
     * @note[short] iOS: 0x39e6b8
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x2351b0
     * @note[short] MacOS (Intel): 0x294db0
     * @note[short] Windows: 0xde090
     * @note[short] iOS: 0x39e788
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x234c98
     * @note[short] MacOS (Intel): 0x294850
     * @note[short] Windows: 0xdd840
     * @note[short] iOS: 0x39e2b0
     * @note[short] Android
     */
    void saveLevel();

    /**
     * @note[short] MacOS (ARM): 0x234658
     * @note[short] MacOS (Intel): 0x2941d0
     * @note[short] Windows: 0xdd300
     * @note[short] iOS: 0x39e278
     * @note[short] Android
     */
    void toggleDebugDraw(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234bc0
     * @note[short] MacOS (Intel): 0x294760
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleEditorBackground(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23460c
     * @note[short] MacOS (Intel): 0x294180
     * @note[short] Windows: 0xdcfe0
     * @note[short] iOS: 0x39e22c
     * @note[short] Android
     */
    void toggleEditorColorMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2344f8
     * @note[short] MacOS (Intel): 0x294050
     * @note[short] Windows: 0xdd410
     * @note[short] iOS: 0x39e118
     * @note[short] Android
     */
    void toggleEditorGrid(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234548
     * @note[short] MacOS (Intel): 0x2940b0
     * @note[short] Windows: 0xdd350
     * @note[short] iOS: 0x39e168
     * @note[short] Android
     */
    void toggleEditorGround(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234b88
     * @note[short] MacOS (Intel): 0x294720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleEffectDuration(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234ba4
     * @note[short] MacOS (Intel): 0x294740
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleEffectLines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234b50
     * @note[short] MacOS (Intel): 0x2946e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleFollowPlayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234c08
     * @note[short] MacOS (Intel): 0x2947b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGridOnTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23463c
     * @note[short] MacOS (Intel): 0x2941b0
     * @note[short] Windows: 0xdd040
     * @note[short] iOS: 0x39e25c
     * @note[short] Android
     */
    void toggleHideInvisible(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2344c0
     * @note[short] MacOS (Intel): 0x294010
     * @note[short] Windows: 0xdcf90
     * @note[short] iOS: 0x39e0e0
     * @note[short] Android
     */
    void toggleIgnoreDamage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234b6c
     * @note[short] MacOS (Intel): 0x294700
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void togglePlaytestMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2345dc
     * @note[short] MacOS (Intel): 0x294150
     * @note[short] Windows: 0xdd140
     * @note[short] iOS: 0x39e1fc
     * @note[short] Android
     */
    void togglePreviewAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2345ac
     * @note[short] MacOS (Intel): 0x294120
     * @note[short] Windows: 0xdd090
     * @note[short] iOS: 0x39e1cc
     * @note[short] Android
     */
    void togglePreviewParticles(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234590
     * @note[short] MacOS (Intel): 0x294100
     * @note[short] Windows: 0xdd0f0
     * @note[short] iOS: 0x39e1b0
     * @note[short] Android
     */
    void togglePreviewShaders(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234c7c
     * @note[short] MacOS (Intel): 0x294830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleRecordOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2344dc
     * @note[short] MacOS (Intel): 0x294030
     * @note[short] Windows: 0xdd4c0
     * @note[short] iOS: 0x39e0fc
     * @note[short] Android
     */
    void toggleSelectFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234514
     * @note[short] MacOS (Intel): 0x294070
     * @note[short] Windows: 0xdd460
     * @note[short] iOS: 0x39e134
     * @note[short] Android
     */
    void toggleShowObjectInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2341c8
     * @note[short] MacOS (Intel): 0x293c30
     * @note[short] Windows: 0xdca10
     * @note[short] iOS: 0x39de24
     * @note[short] Android
     */
    void uncheckAllPortals(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234158
     * @note[short] MacOS (Intel): 0x293bb0
     * @note[short] Windows: 0xdd5c0
     * @note[short] iOS: 0x39ddb4
     * @note[short] Android
     */
    void updateSongButton();
    bool m_saved;
    CCMenuItemSpriteExtra* m_guidelinesOffButton;
    CCMenuItemSpriteExtra* m_guidelinesOnButton;
    LevelEditorLayer* m_editorLayer;
    GEODE_PAD(32);
};
