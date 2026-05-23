#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MapSelectLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MapSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MapSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x20b78c
     * @note[short] MacOS (Intel): 0x267e20
     * @note[short] Android
     */
    static MapSelectLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x20b748
     * @note[short] MacOS (Intel): 0x267de0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x20c6d4
     * @note[short] MacOS (Intel): 0x268e90
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x20b878
     * @note[short] MacOS (Intel): 0x267f40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x20c984
     * @note[short] MacOS (Intel): 0x269130
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x20cf54
     * @note[short] MacOS (Intel): 0x2697d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x20d050
     * @note[short] MacOS (Intel): 0x2698e0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x20d218
     * @note[short] MacOS (Intel): 0x269b00
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x20d328
     * @note[short] MacOS (Intel): 0x269be0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x20d344
     * @note[short] MacOS (Intel): 0x269c20
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x20c8bc
     * @note[short] MacOS (Intel): 0x269070
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x20c4b4
     * @note[short] MacOS (Intel): 0x268c50
     * @note[short] Android
     */
    virtual void scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x20caf8
     * @note[short] MacOS (Intel): 0x2692e0
     * @note[short] Android
     */
    bool checkTouchMonster(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x20cf4c
     * @note[short] MacOS (Intel): 0x2697c0
     * @note[short] Android
     */
    GJMapObject* createObjectAtPoint(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x20c650
     * @note[short] MacOS (Intel): 0x268e10
     * @note[short] Android
     */
    cocos2d::CCPoint getConstrainedMapPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x20bf00
     * @note[short] MacOS (Intel): 0x268620
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    GJBigSprite* m_bigSprite;
    SimplePlayer* m_player;
    cocos2d::CCNode* m_mainLayer;
    bool m_unloadTexturesOnExit;
    bool m_backPressed;
    bool m_blockExit;
    bool m_inTouch;
    double m_lastTouchTime;
    bool m_editMode;
    cocos2d::CCPoint m_lastTouchPos;
    cocos2d::CCPoint m_mapPos;
    cocos2d::CCArray* m_monsters;
    LevelEditorLayer* m_editorLayer;
};
