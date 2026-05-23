#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreateParticlePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_sliderBegan
		#define GEODE_STATICS_sliderBegan
		GEODE_AS_STATIC_FUNCTION(sliderBegan) 
	#endif

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif

	#ifndef GEODE_STATICS_colorSelectClosed
		#define GEODE_STATICS_colorSelectClosed
		GEODE_AS_STATIC_FUNCTION(colorSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_centerAlignParticle
		#define GEODE_STATICS_centerAlignParticle
		GEODE_AS_STATIC_FUNCTION(centerAlignParticle) 
	#endif

	#ifndef GEODE_STATICS_createParticleSlider
		#define GEODE_STATICS_createParticleSlider
		GEODE_AS_STATIC_FUNCTION(createParticleSlider) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_getPageButton
		#define GEODE_STATICS_getPageButton
		GEODE_AS_STATIC_FUNCTION(getPageButton) 
	#endif

	#ifndef GEODE_STATICS_getPageContainer
		#define GEODE_STATICS_getPageContainer
		GEODE_AS_STATIC_FUNCTION(getPageContainer) 
	#endif

	#ifndef GEODE_STATICS_getPageInputNodes
		#define GEODE_STATICS_getPageInputNodes
		GEODE_AS_STATIC_FUNCTION(getPageInputNodes) 
	#endif

	#ifndef GEODE_STATICS_getPageMenu
		#define GEODE_STATICS_getPageMenu
		GEODE_AS_STATIC_FUNCTION(getPageMenu) 
	#endif

	#ifndef GEODE_STATICS_getPageSliders
		#define GEODE_STATICS_getPageSliders
		GEODE_AS_STATIC_FUNCTION(getPageSliders) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_maxSliderValueForType
		#define GEODE_STATICS_maxSliderValueForType
		GEODE_AS_STATIC_FUNCTION(maxSliderValueForType) 
	#endif

	#ifndef GEODE_STATICS_minSliderValueForType
		#define GEODE_STATICS_minSliderValueForType
		GEODE_AS_STATIC_FUNCTION(minSliderValueForType) 
	#endif

	#ifndef GEODE_STATICS_onAnimateActiveOnly
		#define GEODE_STATICS_onAnimateActiveOnly
		GEODE_AS_STATIC_FUNCTION(onAnimateActiveOnly) 
	#endif

	#ifndef GEODE_STATICS_onAnimateOnTrigger
		#define GEODE_STATICS_onAnimateOnTrigger
		GEODE_AS_STATIC_FUNCTION(onAnimateOnTrigger) 
	#endif

	#ifndef GEODE_STATICS_onCalcEmission
		#define GEODE_STATICS_onCalcEmission
		GEODE_AS_STATIC_FUNCTION(onCalcEmission) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopySettings
		#define GEODE_STATICS_onCopySettings
		GEODE_AS_STATIC_FUNCTION(onCopySettings) 
	#endif

	#ifndef GEODE_STATICS_onDuplicateColor
		#define GEODE_STATICS_onDuplicateColor
		GEODE_AS_STATIC_FUNCTION(onDuplicateColor) 
	#endif

	#ifndef GEODE_STATICS_onDurationForever
		#define GEODE_STATICS_onDurationForever
		GEODE_AS_STATIC_FUNCTION(onDurationForever) 
	#endif

	#ifndef GEODE_STATICS_onDynamicColor
		#define GEODE_STATICS_onDynamicColor
		GEODE_AS_STATIC_FUNCTION(onDynamicColor) 
	#endif

	#ifndef GEODE_STATICS_onDynamicRotation
		#define GEODE_STATICS_onDynamicRotation
		GEODE_AS_STATIC_FUNCTION(onDynamicRotation) 
	#endif

	#ifndef GEODE_STATICS_onEmitterMode
		#define GEODE_STATICS_onEmitterMode
		GEODE_AS_STATIC_FUNCTION(onEmitterMode) 
	#endif

	#ifndef GEODE_STATICS_onEndRGBVarSync
		#define GEODE_STATICS_onEndRGBVarSync
		GEODE_AS_STATIC_FUNCTION(onEndRGBVarSync) 
	#endif

	#ifndef GEODE_STATICS_onMaxEmission
		#define GEODE_STATICS_onMaxEmission
		GEODE_AS_STATIC_FUNCTION(onMaxEmission) 
	#endif

	#ifndef GEODE_STATICS_onMode
		#define GEODE_STATICS_onMode
		GEODE_AS_STATIC_FUNCTION(onMode) 
	#endif

	#ifndef GEODE_STATICS_onOrderSensitive
		#define GEODE_STATICS_onOrderSensitive
		GEODE_AS_STATIC_FUNCTION(onOrderSensitive) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onPasteSettings
		#define GEODE_STATICS_onPasteSettings
		GEODE_AS_STATIC_FUNCTION(onPasteSettings) 
	#endif

	#ifndef GEODE_STATICS_onPosType
		#define GEODE_STATICS_onPosType
		GEODE_AS_STATIC_FUNCTION(onPosType) 
	#endif

	#ifndef GEODE_STATICS_onQuickStart
		#define GEODE_STATICS_onQuickStart
		GEODE_AS_STATIC_FUNCTION(onQuickStart) 
	#endif

	#ifndef GEODE_STATICS_onSelectColor
		#define GEODE_STATICS_onSelectColor
		GEODE_AS_STATIC_FUNCTION(onSelectColor) 
	#endif

	#ifndef GEODE_STATICS_onSelectParticleTexture
		#define GEODE_STATICS_onSelectParticleTexture
		GEODE_AS_STATIC_FUNCTION(onSelectParticleTexture) 
	#endif

	#ifndef GEODE_STATICS_onStartRGBVarSync
		#define GEODE_STATICS_onStartRGBVarSync
		GEODE_AS_STATIC_FUNCTION(onStartRGBVarSync) 
	#endif

	#ifndef GEODE_STATICS_onToggleBlending
		#define GEODE_STATICS_onToggleBlending
		GEODE_AS_STATIC_FUNCTION(onToggleBlending) 
	#endif

	#ifndef GEODE_STATICS_onTogglePerfLog
		#define GEODE_STATICS_onTogglePerfLog
		GEODE_AS_STATIC_FUNCTION(onTogglePerfLog) 
	#endif

	#ifndef GEODE_STATICS_onToggleStartRadiusEqualToEnd
		#define GEODE_STATICS_onToggleStartRadiusEqualToEnd
		GEODE_AS_STATIC_FUNCTION(onToggleStartRadiusEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_onToggleStartRotationIsDir
		#define GEODE_STATICS_onToggleStartRotationIsDir
		GEODE_AS_STATIC_FUNCTION(onToggleStartRotationIsDir) 
	#endif

	#ifndef GEODE_STATICS_onToggleStartSizeEqualToEnd
		#define GEODE_STATICS_onToggleStartSizeEqualToEnd
		GEODE_AS_STATIC_FUNCTION(onToggleStartSizeEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_onToggleStartSpinEqualToEnd
		#define GEODE_STATICS_onToggleStartSpinEqualToEnd
		GEODE_AS_STATIC_FUNCTION(onToggleStartSpinEqualToEnd) 
	#endif

	#ifndef GEODE_STATICS_onUniformColor
		#define GEODE_STATICS_onUniformColor
		GEODE_AS_STATIC_FUNCTION(onUniformColor) 
	#endif

	#ifndef GEODE_STATICS_particleValueIsInt
		#define GEODE_STATICS_particleValueIsInt
		GEODE_AS_STATIC_FUNCTION(particleValueIsInt) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_titleForParticleValue
		#define GEODE_STATICS_titleForParticleValue
		GEODE_AS_STATIC_FUNCTION(titleForParticleValue) 
	#endif

	#ifndef GEODE_STATICS_toggleGravityMode
		#define GEODE_STATICS_toggleGravityMode
		GEODE_AS_STATIC_FUNCTION(toggleGravityMode) 
	#endif

	#ifndef GEODE_STATICS_updateColorSprite
		#define GEODE_STATICS_updateColorSprite
		GEODE_AS_STATIC_FUNCTION(updateColorSprite) 
	#endif

	#ifndef GEODE_STATICS_updateInputNodeStringForType
		#define GEODE_STATICS_updateInputNodeStringForType
		GEODE_AS_STATIC_FUNCTION(updateInputNodeStringForType) 
	#endif

	#ifndef GEODE_STATICS_updateParticleValueForType
		#define GEODE_STATICS_updateParticleValueForType
		GEODE_AS_STATIC_FUNCTION(updateParticleValueForType) 
	#endif

	#ifndef GEODE_STATICS_updateSliderForType
		#define GEODE_STATICS_updateSliderForType
		GEODE_AS_STATIC_FUNCTION(updateSliderForType) 
	#endif

	#ifndef GEODE_STATICS_valueForParticleValue
		#define GEODE_STATICS_valueForParticleValue
		GEODE_AS_STATIC_FUNCTION(valueForParticleValue) 
	#endif

	#ifndef GEODE_STATICS_willClose
		#define GEODE_STATICS_willClose
		GEODE_AS_STATIC_FUNCTION(willClose) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderBegan
		#define GEODE_CONCEPT_CHECK_sliderBegan
		GEODE_CONCEPT_FUNCTION_CHECK(sliderBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderEnded
		#define GEODE_CONCEPT_CHECK_sliderEnded
		GEODE_CONCEPT_FUNCTION_CHECK(sliderEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_centerAlignParticle
		#define GEODE_CONCEPT_CHECK_centerAlignParticle
		GEODE_CONCEPT_FUNCTION_CHECK(centerAlignParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createParticleSlider
		#define GEODE_CONCEPT_CHECK_createParticleSlider
		GEODE_CONCEPT_FUNCTION_CHECK(createParticleSlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPage
		#define GEODE_CONCEPT_CHECK_getPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageButton
		#define GEODE_CONCEPT_CHECK_getPageButton
		GEODE_CONCEPT_FUNCTION_CHECK(getPageButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageContainer
		#define GEODE_CONCEPT_CHECK_getPageContainer
		GEODE_CONCEPT_FUNCTION_CHECK(getPageContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageInputNodes
		#define GEODE_CONCEPT_CHECK_getPageInputNodes
		GEODE_CONCEPT_FUNCTION_CHECK(getPageInputNodes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageMenu
		#define GEODE_CONCEPT_CHECK_getPageMenu
		GEODE_CONCEPT_FUNCTION_CHECK(getPageMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageSliders
		#define GEODE_CONCEPT_CHECK_getPageSliders
		GEODE_CONCEPT_FUNCTION_CHECK(getPageSliders) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_maxSliderValueForType
		#define GEODE_CONCEPT_CHECK_maxSliderValueForType
		GEODE_CONCEPT_FUNCTION_CHECK(maxSliderValueForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_minSliderValueForType
		#define GEODE_CONCEPT_CHECK_minSliderValueForType
		GEODE_CONCEPT_FUNCTION_CHECK(minSliderValueForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAnimateActiveOnly
		#define GEODE_CONCEPT_CHECK_onAnimateActiveOnly
		GEODE_CONCEPT_FUNCTION_CHECK(onAnimateActiveOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAnimateOnTrigger
		#define GEODE_CONCEPT_CHECK_onAnimateOnTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(onAnimateOnTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCalcEmission
		#define GEODE_CONCEPT_CHECK_onCalcEmission
		GEODE_CONCEPT_FUNCTION_CHECK(onCalcEmission) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopySettings
		#define GEODE_CONCEPT_CHECK_onCopySettings
		GEODE_CONCEPT_FUNCTION_CHECK(onCopySettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDuplicateColor
		#define GEODE_CONCEPT_CHECK_onDuplicateColor
		GEODE_CONCEPT_FUNCTION_CHECK(onDuplicateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDurationForever
		#define GEODE_CONCEPT_CHECK_onDurationForever
		GEODE_CONCEPT_FUNCTION_CHECK(onDurationForever) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDynamicColor
		#define GEODE_CONCEPT_CHECK_onDynamicColor
		GEODE_CONCEPT_FUNCTION_CHECK(onDynamicColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDynamicRotation
		#define GEODE_CONCEPT_CHECK_onDynamicRotation
		GEODE_CONCEPT_FUNCTION_CHECK(onDynamicRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEmitterMode
		#define GEODE_CONCEPT_CHECK_onEmitterMode
		GEODE_CONCEPT_FUNCTION_CHECK(onEmitterMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEndRGBVarSync
		#define GEODE_CONCEPT_CHECK_onEndRGBVarSync
		GEODE_CONCEPT_FUNCTION_CHECK(onEndRGBVarSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMaxEmission
		#define GEODE_CONCEPT_CHECK_onMaxEmission
		GEODE_CONCEPT_FUNCTION_CHECK(onMaxEmission) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMode
		#define GEODE_CONCEPT_CHECK_onMode
		GEODE_CONCEPT_FUNCTION_CHECK(onMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOrderSensitive
		#define GEODE_CONCEPT_CHECK_onOrderSensitive
		GEODE_CONCEPT_FUNCTION_CHECK(onOrderSensitive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPasteSettings
		#define GEODE_CONCEPT_CHECK_onPasteSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onPasteSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPosType
		#define GEODE_CONCEPT_CHECK_onPosType
		GEODE_CONCEPT_FUNCTION_CHECK(onPosType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onQuickStart
		#define GEODE_CONCEPT_CHECK_onQuickStart
		GEODE_CONCEPT_FUNCTION_CHECK(onQuickStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectColor
		#define GEODE_CONCEPT_CHECK_onSelectColor
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectParticleTexture
		#define GEODE_CONCEPT_CHECK_onSelectParticleTexture
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectParticleTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStartRGBVarSync
		#define GEODE_CONCEPT_CHECK_onStartRGBVarSync
		GEODE_CONCEPT_FUNCTION_CHECK(onStartRGBVarSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleBlending
		#define GEODE_CONCEPT_CHECK_onToggleBlending
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleBlending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTogglePerfLog
		#define GEODE_CONCEPT_CHECK_onTogglePerfLog
		GEODE_CONCEPT_FUNCTION_CHECK(onTogglePerfLog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleStartRadiusEqualToEnd
		#define GEODE_CONCEPT_CHECK_onToggleStartRadiusEqualToEnd
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleStartRadiusEqualToEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleStartRotationIsDir
		#define GEODE_CONCEPT_CHECK_onToggleStartRotationIsDir
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleStartRotationIsDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleStartSizeEqualToEnd
		#define GEODE_CONCEPT_CHECK_onToggleStartSizeEqualToEnd
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleStartSizeEqualToEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleStartSpinEqualToEnd
		#define GEODE_CONCEPT_CHECK_onToggleStartSpinEqualToEnd
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleStartSpinEqualToEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUniformColor
		#define GEODE_CONCEPT_CHECK_onUniformColor
		GEODE_CONCEPT_FUNCTION_CHECK(onUniformColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_particleValueIsInt
		#define GEODE_CONCEPT_CHECK_particleValueIsInt
		GEODE_CONCEPT_FUNCTION_CHECK(particleValueIsInt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_titleForParticleValue
		#define GEODE_CONCEPT_CHECK_titleForParticleValue
		GEODE_CONCEPT_FUNCTION_CHECK(titleForParticleValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGravityMode
		#define GEODE_CONCEPT_CHECK_toggleGravityMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGravityMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColorSprite
		#define GEODE_CONCEPT_CHECK_updateColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInputNodeStringForType
		#define GEODE_CONCEPT_CHECK_updateInputNodeStringForType
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputNodeStringForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleValueForType
		#define GEODE_CONCEPT_CHECK_updateParticleValueForType
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleValueForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSliderForType
		#define GEODE_CONCEPT_CHECK_updateSliderForType
		GEODE_CONCEPT_FUNCTION_CHECK(updateSliderForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueForParticleValue
		#define GEODE_CONCEPT_CHECK_valueForParticleValue
		GEODE_CONCEPT_FUNCTION_CHECK(valueForParticleValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willClose
		#define GEODE_CONCEPT_CHECK_willClose
		GEODE_CONCEPT_FUNCTION_CHECK(willClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreateParticlePopup> : ModifyBase<ModifyDerive<Der, CreateParticlePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreateParticlePopup>>;
		using ModifyBase<ModifyDerive<Der, CreateParticlePopup>>::ModifyBase;
		using Base = CreateParticlePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19CreateParticlePopup6createESs")), Default, CreateParticlePopup, create, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<ParticleGameObject*, cocos2d::CCArray*>::func(&CreateParticlePopup::create)), Default, CreateParticlePopup, create, ParticleGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19CreateParticlePopup6createEP18ParticleGameObjectPN7cocos2d7CCArrayESs")), Default, CreateParticlePopup, create, ParticleGameObject*, cocos2d::CCArray*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<float>::func(&CreateParticlePopup::update)), Default, CreateParticlePopup, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchBegan)), Default, CreateParticlePopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchMoved)), Default, CreateParticlePopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchEnded)), Default, CreateParticlePopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchCancelled)), Default, CreateParticlePopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CreateParticlePopup::keyBackClicked)), Default, CreateParticlePopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<Slider*>::func(&CreateParticlePopup::sliderBegan)), Default, CreateParticlePopup, sliderBegan, Slider*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<Slider*>::func(&CreateParticlePopup::sliderEnded)), Default, CreateParticlePopup, sliderEnded, Slider*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCNode*>::func(&CreateParticlePopup::colorSelectClosed)), Default, CreateParticlePopup, colorSelectClosed, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*, float>::func(&CreateParticlePopup::textInputShouldOffset)), Default, CreateParticlePopup, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textInputReturn)), Default, CreateParticlePopup, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textInputClosed)), Default, CreateParticlePopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textChanged)), Default, CreateParticlePopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::centerAlignParticle)), Default, CreateParticlePopup, centerAlignParticle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gjParticleValue, int, bool, cocos2d::CCPoint, cocos2d::CCArray*>::func(&CreateParticlePopup::createParticleSlider)), Default, CreateParticlePopup, createParticleSlider, gjParticleValue, int, bool, cocos2d::CCPoint, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CreateParticlePopup::getPage)), Default, CreateParticlePopup, getPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CreateParticlePopup::getPageButton)), Default, CreateParticlePopup, getPageButton, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CreateParticlePopup::getPageContainer)), Default, CreateParticlePopup, getPageContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CreateParticlePopup::getPageInputNodes)), Default, CreateParticlePopup, getPageInputNodes, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CreateParticlePopup::getPageMenu)), Default, CreateParticlePopup, getPageMenu, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CreateParticlePopup::getPageSliders)), Default, CreateParticlePopup, getPageSliders, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN19CreateParticlePopup4initEP18ParticleGameObjectPN7cocos2d7CCArrayESs")), Default, CreateParticlePopup, init, ParticleGameObject*, cocos2d::CCArray*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gjParticleValue>::func(&CreateParticlePopup::maxSliderValueForType)), Default, CreateParticlePopup, maxSliderValueForType, gjParticleValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gjParticleValue>::func(&CreateParticlePopup::minSliderValueForType)), Default, CreateParticlePopup, minSliderValueForType, gjParticleValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onAnimateActiveOnly)), Default, CreateParticlePopup, onAnimateActiveOnly, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onAnimateOnTrigger)), Default, CreateParticlePopup, onAnimateOnTrigger, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onCalcEmission)), Default, CreateParticlePopup, onCalcEmission, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onClose)), Default, CreateParticlePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onCopySettings)), Default, CreateParticlePopup, onCopySettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onDuplicateColor)), Default, CreateParticlePopup, onDuplicateColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onDurationForever)), Default, CreateParticlePopup, onDurationForever, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onDynamicColor)), Default, CreateParticlePopup, onDynamicColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onDynamicRotation)), Default, CreateParticlePopup, onDynamicRotation, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onEmitterMode)), Default, CreateParticlePopup, onEmitterMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onEndRGBVarSync)), Default, CreateParticlePopup, onEndRGBVarSync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onMaxEmission)), Default, CreateParticlePopup, onMaxEmission, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onMode)), Default, CreateParticlePopup, onMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onOrderSensitive)), Default, CreateParticlePopup, onOrderSensitive, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onPage)), Default, CreateParticlePopup, onPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onPasteSettings)), Default, CreateParticlePopup, onPasteSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onPosType)), Default, CreateParticlePopup, onPosType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onQuickStart)), Default, CreateParticlePopup, onQuickStart, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onSelectColor)), Default, CreateParticlePopup, onSelectColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onSelectParticleTexture)), Default, CreateParticlePopup, onSelectParticleTexture, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onStartRGBVarSync)), Default, CreateParticlePopup, onStartRGBVarSync, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onToggleBlending)), Default, CreateParticlePopup, onToggleBlending, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onTogglePerfLog)), Default, CreateParticlePopup, onTogglePerfLog, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onToggleStartRadiusEqualToEnd)), Default, CreateParticlePopup, onToggleStartRadiusEqualToEnd, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onToggleStartRotationIsDir)), Default, CreateParticlePopup, onToggleStartRotationIsDir, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onToggleStartSizeEqualToEnd)), Default, CreateParticlePopup, onToggleStartSizeEqualToEnd, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onToggleStartSpinEqualToEnd)), Default, CreateParticlePopup, onToggleStartSpinEqualToEnd, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::onUniformColor)), Default, CreateParticlePopup, onUniformColor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gjParticleValue>::func(&CreateParticlePopup::particleValueIsInt)), Default, CreateParticlePopup, particleValueIsInt, gjParticleValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreateParticlePopup::sliderChanged)), Default, CreateParticlePopup, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gjParticleValue>::func(&CreateParticlePopup::titleForParticleValue)), Default, CreateParticlePopup, titleForParticleValue, gjParticleValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&CreateParticlePopup::toggleGravityMode)), Default, CreateParticlePopup, toggleGravityMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&CreateParticlePopup::updateColorSprite)), Default, CreateParticlePopup, updateColorSprite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gjParticleValue>::func(&CreateParticlePopup::updateInputNodeStringForType)), Default, CreateParticlePopup, updateInputNodeStringForType, gjParticleValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float, gjParticleValue, cocos2d::CCParticleSystemQuad*>::func(&CreateParticlePopup::updateParticleValueForType)), Default, CreateParticlePopup, updateParticleValueForType, float, gjParticleValue, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gjParticleValue>::func(&CreateParticlePopup::updateSliderForType)), Default, CreateParticlePopup, updateSliderForType, gjParticleValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gjParticleValue>::func(&CreateParticlePopup::valueForParticleValue)), Default, CreateParticlePopup, valueForParticleValue, gjParticleValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CreateParticlePopup::willClose)), Default, CreateParticlePopup, willClose, )
		}
	};
}
