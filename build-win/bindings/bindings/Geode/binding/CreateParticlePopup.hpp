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
#include "ColorSelectDelegate.hpp"
#include "SliderDelegate.hpp"

class CreateParticlePopup : public FLAlertLayer, public TextInputDelegate, public ColorSelectDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "CreateParticlePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateParticlePopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x3d6384
     * @note[short] MacOS (Intel): 0x46e820
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
    static CreateParticlePopup* create(gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x3d615c
     * @note[short] MacOS (Intel): 0x46e590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ca2fc
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3d6184
     * @note[short] MacOS (Intel): 0x46e5b0
     * @note[short] Windows: 0x42bf00
     * @note[short] iOS: 0x2ca378
     * @note[short] Android: Rebinded
     */
    static CreateParticlePopup* create(ParticleGameObject* object, cocos2d::CCArray* objects, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x3dd50c
     * @note[short] MacOS (Intel): 0x4764f0
     * @note[short] Windows: 0x4325b0
     * @note[short] iOS: 0x2d0600
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3de07c
     * @note[short] MacOS (Intel): 0x477120
     * @note[short] Windows: 0x435290
     * @note[short] iOS: 0x2d0f10
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3de16c
     * @note[short] MacOS (Intel): 0x477230
     * @note[short] Windows: 0x435390
     * @note[short] iOS: 0x2d1000
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3de500
     * @note[short] MacOS (Intel): 0x477610
     * @note[short] Windows: 0x4357c0
     * @note[short] iOS: 0x2d1398
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3de53c
     * @note[short] MacOS (Intel): 0x477660
     * @note[short] Windows: 0x71240
     * @note[short] iOS: 0x2d13d4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3ddee8
     * @note[short] MacOS (Intel): 0x476f80
     * @note[short] Windows: 0x435280
     * @note[short] iOS: 0x2d0e38
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3ddd98
     * @note[short] MacOS (Intel): 0x476e40
     * @note[short] Windows: 0x4349c0
     * @note[short] iOS: 0x2d0d08
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x3ddeb0
     * @note[short] MacOS (Intel): 0x476f20
     * @note[short] Windows: 0x434a80
     * @note[short] iOS: 0x2d0e20
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x3dd240
     * @note[short] MacOS (Intel): 0x476210
     * @note[short] Windows: 0x431e70
     * @note[short] iOS: 0x2d0358
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x3ddef4
     * @note[short] MacOS (Intel): 0x476fb0
     * @note[short] Windows: 0x7b600
     * @note[short] iOS: 0x2d0e44
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x3ddfc4
     * @note[short] MacOS (Intel): 0x477070
     * @note[short] Windows: 0x7b660
     * @note[short] iOS: 0x2d0eb0
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3dd700
     * @note[short] MacOS (Intel): 0x476710
     * @note[short] Windows: 0x8b850
     * @note[short] iOS: 0x2d07dc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3dd71c
     * @note[short] MacOS (Intel): 0x476750
     * @note[short] Windows: 0x4328d0
     * @note[short] iOS: 0x2d07f8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3da91c
     * @note[short] MacOS (Intel): 0x473470
     * @note[short] Windows: 0x432360
     * @note[short] iOS: 0x2cddb0
     * @note[short] Android
     */
    void centerAlignParticle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3db07c
     * @note[short] MacOS (Intel): 0x473bb0
     * @note[short] Windows: 0x430930
     * @note[short] iOS: 0x2ce4c8
     * @note[short] Android
     */
    void createParticleSlider(gjParticleValue value, int page, bool centerLabel, cocos2d::CCPoint position, cocos2d::CCArray* displayNodes);

    /**
     * @note[short] MacOS (ARM): 0x3dad10
     * @note[short] MacOS (Intel): 0x473830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* getPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x3dbfa4
     * @note[short] MacOS (Intel): 0x474b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getPageButton(int page);

    /**
     * @note[short] MacOS (ARM): 0x3dad1c
     * @note[short] MacOS (Intel): 0x473850
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getPageContainer(int page);

    /**
     * @note[short] MacOS (ARM): 0x3db06c
     * @note[short] MacOS (Intel): 0x473b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* getPageInputNodes(int page);

    /**
     * @note[short] MacOS (ARM): 0x3dad08
     * @note[short] MacOS (Intel): 0x473820
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCMenu* getPageMenu(int page);

    /**
     * @note[short] MacOS (ARM): 0x3db074
     * @note[short] MacOS (Intel): 0x473b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* getPageSliders(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d6424
     * @note[short] MacOS (Intel): 0x46e8a0
     * @note[short] Windows: 0x42c110
     * @note[short] iOS: 0x2ca460
     * @note[short] Android: Rebinded
     */
    bool init(ParticleGameObject* object, cocos2d::CCArray* objects, gd::string str);

    /**
     * @note[short] MacOS (ARM): 0x3ddd78
     * @note[short] MacOS (Intel): 0x476e10
     * @note[short] Windows: 0x433ac0
     * @note[short] iOS: 0x2d0ce8
     * @note[short] Android
     */
    float maxSliderValueForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3ddd58
     * @note[short] MacOS (Intel): 0x476df0
     * @note[short] Windows: 0x433b90
     * @note[short] iOS: 0x2d0cc8
     * @note[short] Android
     */
    float minSliderValueForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3dbb60
     * @note[short] MacOS (Intel): 0x4746b0
     * @note[short] Windows: 0x431510
     * @note[short] iOS: 0x2cef5c
     * @note[short] Android
     */
    void onAnimateActiveOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dbae8
     * @note[short] MacOS (Intel): 0x474620
     * @note[short] Windows: 0x431480
     * @note[short] iOS: 0x2ceee4
     * @note[short] Android
     */
    void onAnimateOnTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dc810
     * @note[short] MacOS (Intel): 0x475450
     * @note[short] Windows: 0x432ac0
     * @note[short] iOS: 0x2cf92c
     * @note[short] Android
     */
    void onCalcEmission(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3da510
     * @note[short] MacOS (Intel): 0x473000
     * @note[short] Windows: 0x435140
     * @note[short] iOS: 0x2cda64
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3da6a4
     * @note[short] MacOS (Intel): 0x4731d0
     * @note[short] Windows: 0x431a90
     * @note[short] iOS: 0x2cdba8
     * @note[short] Android
     */
    void onCopySettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3daf20
     * @note[short] MacOS (Intel): 0x473a40
     * @note[short] Windows: 0x431960
     * @note[short] iOS: 0x2ce37c
     * @note[short] Android
     */
    void onDuplicateColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dc780
     * @note[short] MacOS (Intel): 0x4753b0
     * @note[short] Windows: 0x432a20
     * @note[short] iOS: 0x2cf89c
     * @note[short] Android
     */
    void onDurationForever(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dbc50
     * @note[short] MacOS (Intel): 0x4747d0
     * @note[short] Windows: 0x431630
     * @note[short] iOS: 0x2cf04c
     * @note[short] Android
     */
    void onDynamicColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dbac8
     * @note[short] MacOS (Intel): 0x4745f0
     * @note[short] Windows: 0x4313c0
     * @note[short] iOS: 0x2ceec4
     * @note[short] Android
     */
    void onDynamicRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dad28
     * @note[short] MacOS (Intel): 0x473870
     * @note[short] Windows: 0x434de0
     * @note[short] iOS: 0x2ce190
     * @note[short] Android
     */
    void onEmitterMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dbe24
     * @note[short] MacOS (Intel): 0x474a10
     * @note[short] Windows: 0x431450
     * @note[short] iOS: 0x2cf21c
     * @note[short] Android
     */
    void onEndRGBVarSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dc7c8
     * @note[short] MacOS (Intel): 0x475400
     * @note[short] Windows: 0x432a70
     * @note[short] iOS: 0x2cf8e4
     * @note[short] Android
     */
    void onMaxEmission(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3da864
     * @note[short] MacOS (Intel): 0x4733b0
     * @note[short] Windows: 0x432150
     * @note[short] iOS: 0x2cdcf8
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dbde4
     * @note[short] MacOS (Intel): 0x4749b0
     * @note[short] Windows: 0x4313f0
     * @note[short] iOS: 0x2cf1dc
     * @note[short] Android
     */
    void onOrderSensitive(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3daa7c
     * @note[short] MacOS (Intel): 0x4735a0
     * @note[short] Windows: 0x4323b0
     * @note[short] iOS: 0x2cdf10
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3da7bc
     * @note[short] MacOS (Intel): 0x4732f0
     * @note[short] Windows: 0x431ce0
     * @note[short] iOS: 0x2cdc98
     * @note[short] Android
     */
    void onPasteSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dac78
     * @note[short] MacOS (Intel): 0x4737a0
     * @note[short] Windows: 0x434d60
     * @note[short] iOS: 0x2ce100
     * @note[short] Android
     */
    void onPosType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dbbd8
     * @note[short] MacOS (Intel): 0x474740
     * @note[short] Windows: 0x4315a0
     * @note[short] iOS: 0x2cefd4
     * @note[short] Android
     */
    void onQuickStart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3da96c
     * @note[short] MacOS (Intel): 0x4734c0
     * @note[short] Windows: 0x431830
     * @note[short] iOS: 0x2cde00
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dbe44
     * @note[short] MacOS (Intel): 0x474a40
     * @note[short] Windows: 0x432230
     * @note[short] iOS: 0x2cf23c
     * @note[short] Android
     */
    void onSelectParticleTexture(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dbe04
     * @note[short] MacOS (Intel): 0x4749e0
     * @note[short] Windows: 0x431420
     * @note[short] iOS: 0x2cf1fc
     * @note[short] Android
     */
    void onStartRGBVarSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3db9e8
     * @note[short] MacOS (Intel): 0x4744e0
     * @note[short] Windows: 0x4312b0
     * @note[short] iOS: 0x2cede4
     * @note[short] Android
     */
    void onToggleBlending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dada8
     * @note[short] MacOS (Intel): 0x4738f0
     * @note[short] Windows: 0x432810
     * @note[short] iOS: 0x2ce210
     * @note[short] Android
     */
    void onTogglePerfLog(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dba68
     * @note[short] MacOS (Intel): 0x474580
     * @note[short] Windows: 0x431320
     * @note[short] iOS: 0x2cee64
     * @note[short] Android
     */
    void onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dba88
     * @note[short] MacOS (Intel): 0x4745b0
     * @note[short] Windows: 0x431380
     * @note[short] iOS: 0x2cee84
     * @note[short] Android
     */
    void onToggleStartRotationIsDir(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dba28
     * @note[short] MacOS (Intel): 0x474520
     * @note[short] Windows: 0x4312f0
     * @note[short] iOS: 0x2cee24
     * @note[short] Android
     */
    void onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dba48
     * @note[short] MacOS (Intel): 0x474550
     * @note[short] Windows: 0x431350
     * @note[short] iOS: 0x2cee44
     * @note[short] Android
     */
    void onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dbd28
     * @note[short] MacOS (Intel): 0x4748d0
     * @note[short] Windows: 0x431750
     * @note[short] iOS: 0x2cf120
     * @note[short] Android
     */
    void onUniformColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ddec8
     * @note[short] MacOS (Intel): 0x476f60
     * @note[short] Windows: 0x434b40
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool particleValueIsInt(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3dc5f0
     * @note[short] MacOS (Intel): 0x4751f0
     * @note[short] Windows: 0x434a90
     * @note[short] iOS: 0x2cf70c
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dc3c0
     * @note[short] MacOS (Intel): 0x474fd0
     * @note[short] Windows: 0x432b80
     * @note[short] iOS: 0x2cf58c
     * @note[short] Android
     */
    gd::string titleForParticleValue(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3dbfb0
     * @note[short] MacOS (Intel): 0x474b90
     * @note[short] Windows: 0x434e60
     * @note[short] iOS: 0x2cf39c
     * @note[short] Android
     */
    void toggleGravityMode(bool gravityMode);

    /**
     * @note[short] MacOS (ARM): 0x3dae00
     * @note[short] MacOS (Intel): 0x473950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ce268
     * @note[short] Android
     */
    void updateColorSprite(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3dc3ec
     * @note[short] MacOS (Intel): 0x475010
     * @note[short] Windows: 0x434bb0
     * @note[short] iOS: 0x2cf5b8
     * @note[short] Android
     */
    void updateInputNodeStringForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3dc8ac
     * @note[short] MacOS (Intel): 0x475500
     * @note[short] Windows: 0x433cb0
     * @note[short] iOS: 0x2cf9c8
     * @note[short] Android
     */
    void updateParticleValueForType(float value, gjParticleValue type, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x3dc6c0
     * @note[short] MacOS (Intel): 0x4752e0
     * @note[short] Windows: 0x434920
     * @note[short] iOS: 0x2cf7dc
     * @note[short] Android
     */
    void updateSliderForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3dd804
     * @note[short] MacOS (Intel): 0x476830
     * @note[short] Windows: 0x433430
     * @note[short] iOS: 0x2d08e0
     * @note[short] Android
     */
    float valueForParticleValue(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3dd1d8
     * @note[short] MacOS (Intel): 0x4761a0
     * @note[short] Windows: 0x4350b0
     * @note[short] iOS: 0x2d02f0
     * @note[short] Android
     */
    void willClose();
    ParticleGameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_particles;
    bool m_disableTextDelegate;
    cocos2d::CCParticleSystemQuad* m_particle;
    cocos2d::CCParticleSystemQuad* m_standaloneParticle;
    int m_touchID;
    cocos2d::CCPoint m_touchDelta;
    cocos2d::CCArray* m_inputDicts;
    cocos2d::CCArray* m_sliderDicts;
    cocos2d::CCArray* m_pageNodes;
    cocos2d::CCArray* m_pageButtons;
    cocos2d::CCArray* m_pageMenus;
    cocos2d::CCArray* m_pageObjectArrays;
    ParticlePreviewLayer* m_previewLayer;
    CCMenuItemSpriteExtra* m_mode1Button;
    CCMenuItemSpriteExtra* m_mode2Button;
    CCMenuItemSpriteExtra* m_mode3Button;
    float m_elapsed;
    int m_selectedMode;
    CCMenuItemToggler* m_freeToggler;
    CCMenuItemToggler* m_relativeToggler;
    CCMenuItemToggler* m_groupedToggler;
    CCMenuItemToggler* m_objColorToggler;
    CCMenuItemToggler* m_uniformColorToggler;
    CCMenuItemToggler* m_gravityToggler;
    CCMenuItemToggler* m_radiusToggler;
    cocos2d::CCSprite* m_selectSprite;
    cocos2d::CCSprite* m_particleColorSprite;
    cocos2d::CCSprite* m_startColorSprite;
    cocos2d::CCSprite* m_endColorSprite;
    cocos2d::CCArray* m_gravityObjects;
    cocos2d::CCArray* m_radiusObjects;
    bool m_perfLogEnabled;
    float m_perfLogElapsed;
    cocos2d::CCLabelBMFont* m_perfLogLabel;
    int m_particleIndex;
    int m_page;
    bool m_useObjectColor;
    bool m_animateOnTrigger;
    bool m_onlyAnimateActive;
    bool m_quickStart;
    float m_respawnResult;
};
