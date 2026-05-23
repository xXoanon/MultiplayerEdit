#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UILayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "UILayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UILayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4b3cc
     * @note[short] Android: Out of line
     */
     UILayer();

    /**
     * @note[short] MacOS (ARM): 0x429614
     * @note[short] MacOS (Intel): 0x4ca690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a97c
     * @note[short] Android: Rebinded
     */
     ~UILayer();

    /**
     * @note[short] MacOS (ARM): 0x426c64
     * @note[short] MacOS (Intel): 0x4c7ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x48f74
     * @note[short] Android
     */
    static UILayer* create(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static UILayer* get();

    /**
     * @note[short] MacOS (ARM): 0x4287fc
     * @note[short] MacOS (Intel): 0x4c99b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a0bc
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x42889c
     * @note[short] MacOS (Intel): 0x4c9a20
     * @note[short] Windows: 0x4ce230
     * @note[short] iOS: 0x4a0f4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x428b20
     * @note[short] MacOS (Intel): 0x4c9c20
     * @note[short] Windows: 0x4ce420
     * @note[short] iOS: 0x4a328
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x428c74
     * @note[short] MacOS (Intel): 0x4c9d30
     * @note[short] Windows: 0x4ce440
     * @note[short] iOS: 0x4a364
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4295c0
     * @note[short] MacOS (Intel): 0x4ca610
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x4a928
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4295dc
     * @note[short] MacOS (Intel): 0x4ca650
     * @note[short] Windows: 0x9b7d0
     * @note[short] iOS: 0x4a944
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x4283e4
     * @note[short] MacOS (Intel): 0x4c9570
     * @note[short] Windows: 0x4cde90
     * @note[short] iOS: 0x49f70
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4283a4
     * @note[short] MacOS (Intel): 0x4c94d0
     * @note[short] Windows: 0x4cde50
     * @note[short] iOS: 0x49f30
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x4283c4
     * @note[short] MacOS (Intel): 0x4c9520
     * @note[short] Windows: 0x4cde70
     * @note[short] iOS: 0x49f50
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x427f00
     * @note[short] MacOS (Intel): 0x4c8e80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49bcc
     * @note[short] Android
     */
    void disableMenu();

    /**
     * @note[short] MacOS (ARM): 0x4284a4
     * @note[short] MacOS (Intel): 0x4c9630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49ff0
     * @note[short] Android
     */
    void doPause();

    /**
     * @note[short] MacOS (ARM): 0x427f14
     * @note[short] MacOS (Intel): 0x4c8ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49be0
     * @note[short] Android
     */
    void editorPlaytest(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x427dc4
     * @note[short] MacOS (Intel): 0x4c8d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49b78
     * @note[short] Android
     */
    void enableEditorMode();

    /**
     * @note[short] MacOS (ARM): 0x4285ac
     * @note[short] MacOS (Intel): 0x4c9740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a03c
     * @note[short] Android
     */
    void enableMenu();

    /**
     * @note[short] MacOS (ARM): 0x428024
     * @note[short] MacOS (Intel): 0x4c8fc0
     * @note[short] Windows: 0x4cd830
     * @note[short] iOS: 0x49c30
     * @note[short] Android
     */
    void handleKeypress(cocos2d::enumKeyCodes key, bool down, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x426d68
     * @note[short] MacOS (Intel): 0x4c7c00
     * @note[short] Windows: 0x4ccb00
     * @note[short] iOS: 0x48fe8
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x428800
     * @note[short] MacOS (Intel): 0x4c99c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a0c0
     * @note[short] Android
     */
    bool isJumpButtonPressed();

    /**
     * @note[short] MacOS (ARM): 0x428850
     * @note[short] MacOS (Intel): 0x4c99f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isJumpButtonPressed(bool player1);

    /**
     * @note[short] MacOS (ARM): 0x42758c
     * @note[short] MacOS (Intel): 0x4c8480
     * @note[short] Windows: 0x4ce060
     * @note[short] iOS: 0x4958c
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4275e0
     * @note[short] MacOS (Intel): 0x4c84e0
     * @note[short] Windows: 0x4ce0e0
     * @note[short] iOS: 0x495e0
     * @note[short] Android
     */
    void onDeleteCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x427540
     * @note[short] MacOS (Intel): 0x4c8430
     * @note[short] Windows: 0x4cdf50
     * @note[short] iOS: 0x49540
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4289bc
     * @note[short] MacOS (Intel): 0x4c9b60
     * @note[short] Windows: 0x4ce520
     * @note[short] iOS: 0x4a264
     * @note[short] Android
     */
    bool processUINodesTouch(GJUITouchEvent event, cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x428e60
     * @note[short] MacOS (Intel): 0x4c9ed0
     * @note[short] Windows: 0x4ce5f0
     * @note[short] iOS: 0x4a3f4
     * @note[short] Android
     */
    bool processUINodeTouch(GJUITouchEvent event, int touchID, cocos2d::CCPoint position, GJUINode* node, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x427924
     * @note[short] MacOS (Intel): 0x4c8840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49858
     * @note[short] Android
     */
    void refreshDpad();

    /**
     * @note[short] MacOS (ARM): 0x42871c
     * @note[short] MacOS (Intel): 0x4c98c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a0a8
     * @note[short] Android
     */
    void resetAllButtons();

    /**
     * @note[short] MacOS (ARM): 0x427c68
     * @note[short] MacOS (Intel): 0x4c8be0
     * @note[short] Windows: 0x4cd6c0
     * @note[short] iOS: 0x49a9c
     * @note[short] Android
     */
    void resetUINodeState();

    /**
     * @note[short] MacOS (ARM): 0x427628
     * @note[short] MacOS (Intel): 0x4c8520
     * @note[short] Windows: 0x4cded0
     * @note[short] iOS: 0x49628
     * @note[short] Android
     */
    void toggleCheckpointsMenu(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x4285c0
     * @note[short] MacOS (Intel): 0x4c9760
     * @note[short] Windows: 0x4ce150
     * @note[short] iOS: 0x4a050
     * @note[short] Android
     */
    void toggleMenuVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x4277e8
     * @note[short] MacOS (Intel): 0x4c86f0
     * @note[short] Windows: 0x4cd610
     * @note[short] iOS: 0x497b0
     * @note[short] Android
     */
    void togglePlatformerMode(bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x42766c
     * @note[short] MacOS (Intel): 0x4c8560
     * @note[short] Windows: 0x4cd420
     * @note[short] iOS: 0x49638
     * @note[short] Android
     */
    void updateCheckState();

    /**
     * @note[short] MacOS (ARM): 0x42789c
     * @note[short] MacOS (Intel): 0x4c87b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4981c
     * @note[short] Android
     */
    void updateDualMode(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x427ba0
     * @note[short] MacOS (Intel): 0x4c8b00
     * @note[short] Windows: 0x4cd7d0
     * @note[short] iOS: 0x49a18
     * @note[short] Android
     */
    void updateUINodeVisibility(bool visible);
    void* m_stupidDelegate;
    void* m_pUnknown1;
    cocos2d::CCMenu* m_checkpointMenu;
    CCMenuItemSpriteExtra* m_pauseBtn;
    bool m_bUnknown2;
    bool m_bUnknown3;
    bool m_p1Jumping;
    bool m_p2Jumping;
    bool m_checkpointBtnDown;
    int m_p1TouchId;
    int m_p2TouchId;
    float m_clkTimer;
    bool m_inPlatformer;
    GJBaseGameLayer* m_gameLayer;
    bool m_initialized;
    cocos2d::CCArray* m_uiNodes;
    bool m_dualMode;
    bool m_dpadType;
    bool m_editorMode;
    cocos2d::CCArray* m_controllerButtons;
};
