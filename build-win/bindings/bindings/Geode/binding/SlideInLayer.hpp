#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SlideInLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "SlideInLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SlideInLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x22ef3c
     * @note[short] MacOS (Intel): 0x28e4b0
     * @note[short] Android
     */
    static SlideInLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x22f030
     * @note[short] MacOS (Intel): 0x28e5d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x22f6f8
     * @note[short] MacOS (Intel): 0x28ecf0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x22f734
     * @note[short] MacOS (Intel): 0x28ed20
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x22f754
     * @note[short] MacOS (Intel): 0x28ed80
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x22f744
     * @note[short] MacOS (Intel): 0x28ed40
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x22f74c
     * @note[short] MacOS (Intel): 0x28ed60
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x22f414
     * @note[short] MacOS (Intel): 0x28e9f0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x22f44c
     * @note[short] MacOS (Intel): 0x28ea30
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x22f3b0
     * @note[short] MacOS (Intel): 0x28e970
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x22f3dc
     * @note[short] MacOS (Intel): 0x28e9c0
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x22f470
     * @note[short] MacOS (Intel): 0x28ea70
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22f4d4
     * @note[short] MacOS (Intel): 0x28eac0
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x22f5c4
     * @note[short] MacOS (Intel): 0x28ebb0
     * @note[short] Android
     */
    virtual void hideLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x22f694
     * @note[short] MacOS (Intel): 0x28ec90
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x22f6a4
     * @note[short] MacOS (Intel): 0x28ecb0
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x22f690
     * @note[short] MacOS (Intel): 0x28ec80
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x22f3b4
     * @note[short] MacOS (Intel): 0x28e980
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x22f3c8
     * @note[short] MacOS (Intel): 0x28e9a0
     * @note[short] Android
     */
    virtual void enableUI();
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCSprite* m_exitSprite;
    CCMenuItemSpriteExtra* m_exitButton;
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    void* m_delegate;
    bool m_closeOnHide;
};
