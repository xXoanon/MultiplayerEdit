#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJTransformControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJTransformControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJTransformControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x493ec
     * @note[short] MacOS (Intel): 0x54c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fc8b4
     * @note[short] Android: Rebinded
     */
     GJTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x47ac0
     * @note[short] MacOS (Intel): 0x52e60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fb824
     * @note[short] Android: Rebinded
     */
     ~GJTransformControl();

    /**
     * @note[short] MacOS (ARM): 0xa5e8
     * @note[short] MacOS (Intel): 0xbb50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c7108
     * @note[short] Android
     */
    static GJTransformControl* create();

    /**
     * @note[short] MacOS (ARM): 0x47cd8
     * @note[short] MacOS (Intel): 0x53170
     * @note[short] Windows: 0x12ae50
     * @note[short] iOS: 0x3fb8c4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x48158
     * @note[short] MacOS (Intel): 0x53620
     * @note[short] Windows: 0x12c4e0
     * @note[short] iOS: 0x3fbc5c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x48544
     * @note[short] MacOS (Intel): 0x53aa0
     * @note[short] Windows: 0x12c6b0
     * @note[short] iOS: 0x3fbe04
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x48a78
     * @note[short] MacOS (Intel): 0x54020
     * @note[short] Windows: 0x12cc10
     * @note[short] iOS: 0x3fc32c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x48c50
     * @note[short] MacOS (Intel): 0x54230
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x3fc504
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x38cd4
     * @note[short] MacOS (Intel): 0x40d90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f0680
     * @note[short] Android
     */
    void applyRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x4810c
     * @note[short] MacOS (Intel): 0x535d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void calculateRotationOffset();

    /**
     * @note[short] MacOS (ARM): 0x3846c
     * @note[short] MacOS (Intel): 0x40440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] MacOS (ARM): 0x48060
     * @note[short] MacOS (Intel): 0x53510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3fbbb0
     * @note[short] Android
     */
    void loadFromState(GJTransformState& state);

    /**
     * @note[short] MacOS (ARM): 0x38b74
     * @note[short] MacOS (Intel): 0x40c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f056c
     * @note[short] Android: Rebinded
     */
    void loadValues(GameObject* object, cocos2d::CCArray* objects, gd::unordered_map<int, GameObjectEditorState>& states);

    /**
     * @note[short] MacOS (ARM): 0x48c6c
     * @note[short] MacOS (Intel): 0x54270
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void logCurrentZeroPos();

    /**
     * @note[short] MacOS (ARM): 0x47fe4
     * @note[short] MacOS (Intel): 0x53490
     * @note[short] Windows: 0x12b530
     * @note[short] iOS: 0x3fbb40
     * @note[short] Android
     */
    void onToggleLockScale(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x40c3c
     * @note[short] MacOS (Intel): 0x4a630
     * @note[short] Windows: 0x12b3a0
     * @note[short] iOS: 0x3f60a8
     * @note[short] Android
     */
    void refreshControl();

    /**
     * @note[short] MacOS (ARM): 0x38d58
     * @note[short] MacOS (Intel): 0x40e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f0704
     * @note[short] Android
     */
    void saveToState(GJTransformState& state);

    /**
     * @note[short] MacOS (ARM): 0x35fa0
     * @note[short] MacOS (Intel): 0x3dcd0
     * @note[short] Windows: 0x12b5c0
     * @note[short] iOS: 0x3ee858
     * @note[short] Android
     */
    void scaleButtons(float scale);

    /**
     * @note[short] MacOS (ARM): 0x48054
     * @note[short] MacOS (Intel): 0x534f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCSprite* spriteByTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x38414
     * @note[short] MacOS (Intel): 0x403f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3efef0
     * @note[short] Android
     */
    void updateAnchorSprite(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x411f0
     * @note[short] MacOS (Intel): 0x4ac60
     * @note[short] Windows: 0x12b680
     * @note[short] iOS: 0x3f662c
     * @note[short] Android
     */
    void updateButtons(bool transform, bool skew);

    /**
     * @note[short] MacOS (ARM): 0x48c70
     * @note[short] MacOS (Intel): 0x54280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMinMaxPositions();
    cocos2d::CCNode* m_mainNodeParent;
    cocos2d::CCNode* m_mainNode;
    cocos2d::CCArray* m_objects;
    int m_touchID;
    short m_transformButtonType;
    GJTransformControlDelegate* m_delegate;
    cocos2d::CCPoint m_cursorDifference;
    cocos2d::CCPoint m_topRight;
    cocos2d::CCPoint m_bottomLeft;
    cocos2d::CCPoint m_topRightPosition;
    cocos2d::CCPoint m_bottomLeftPosition;
    cocos2d::CCPoint m_topRightOrigin;
    cocos2d::CCPoint m_bottomLeftOrigin;
    cocos2d::CCArray* m_warpSprites;
    cocos2d::CCPoint m_rotatePosition;
    CCMenuItemSpriteExtra* m_warpLockButton;
    float m_scaleX;
    float m_scaleY;
    bool m_warpLocked;
    float m_rotationX;
    float m_rotationY;
    float m_rotation;
    float m_buttonScale;
};
