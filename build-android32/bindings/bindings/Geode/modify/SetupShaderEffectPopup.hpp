#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupShaderEffectPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onResetColors
		#define GEODE_STATICS_onResetColors
		GEODE_AS_STATIC_FUNCTION(onResetColors) 
	#endif

	#ifndef GEODE_STATICS_onZLayer
		#define GEODE_STATICS_onZLayer
		GEODE_AS_STATIC_FUNCTION(onZLayer) 
	#endif

	#ifndef GEODE_STATICS_setupBulge
		#define GEODE_STATICS_setupBulge
		GEODE_AS_STATIC_FUNCTION(setupBulge) 
	#endif

	#ifndef GEODE_STATICS_setupChromatic
		#define GEODE_STATICS_setupChromatic
		GEODE_AS_STATIC_FUNCTION(setupChromatic) 
	#endif

	#ifndef GEODE_STATICS_setupChromaticGlitch
		#define GEODE_STATICS_setupChromaticGlitch
		GEODE_AS_STATIC_FUNCTION(setupChromaticGlitch) 
	#endif

	#ifndef GEODE_STATICS_setupColorChange
		#define GEODE_STATICS_setupColorChange
		GEODE_AS_STATIC_FUNCTION(setupColorChange) 
	#endif

	#ifndef GEODE_STATICS_setupGlitch
		#define GEODE_STATICS_setupGlitch
		GEODE_AS_STATIC_FUNCTION(setupGlitch) 
	#endif

	#ifndef GEODE_STATICS_setupGrayscale
		#define GEODE_STATICS_setupGrayscale
		GEODE_AS_STATIC_FUNCTION(setupGrayscale) 
	#endif

	#ifndef GEODE_STATICS_setupHueShift
		#define GEODE_STATICS_setupHueShift
		GEODE_AS_STATIC_FUNCTION(setupHueShift) 
	#endif

	#ifndef GEODE_STATICS_setupInvertColor
		#define GEODE_STATICS_setupInvertColor
		GEODE_AS_STATIC_FUNCTION(setupInvertColor) 
	#endif

	#ifndef GEODE_STATICS_setupLensCircle
		#define GEODE_STATICS_setupLensCircle
		GEODE_AS_STATIC_FUNCTION(setupLensCircle) 
	#endif

	#ifndef GEODE_STATICS_setupMotionBlur
		#define GEODE_STATICS_setupMotionBlur
		GEODE_AS_STATIC_FUNCTION(setupMotionBlur) 
	#endif

	#ifndef GEODE_STATICS_setupPinch
		#define GEODE_STATICS_setupPinch
		GEODE_AS_STATIC_FUNCTION(setupPinch) 
	#endif

	#ifndef GEODE_STATICS_setupPixelate
		#define GEODE_STATICS_setupPixelate
		GEODE_AS_STATIC_FUNCTION(setupPixelate) 
	#endif

	#ifndef GEODE_STATICS_setupRadialBlur
		#define GEODE_STATICS_setupRadialBlur
		GEODE_AS_STATIC_FUNCTION(setupRadialBlur) 
	#endif

	#ifndef GEODE_STATICS_setupSepia
		#define GEODE_STATICS_setupSepia
		GEODE_AS_STATIC_FUNCTION(setupSepia) 
	#endif

	#ifndef GEODE_STATICS_setupShaderTrigger
		#define GEODE_STATICS_setupShaderTrigger
		GEODE_AS_STATIC_FUNCTION(setupShaderTrigger) 
	#endif

	#ifndef GEODE_STATICS_setupShockLine
		#define GEODE_STATICS_setupShockLine
		GEODE_AS_STATIC_FUNCTION(setupShockLine) 
	#endif

	#ifndef GEODE_STATICS_setupShockWave
		#define GEODE_STATICS_setupShockWave
		GEODE_AS_STATIC_FUNCTION(setupShockWave) 
	#endif

	#ifndef GEODE_STATICS_setupSplitScreen
		#define GEODE_STATICS_setupSplitScreen
		GEODE_AS_STATIC_FUNCTION(setupSplitScreen) 
	#endif

	#ifndef GEODE_STATICS_updateZLayerButtons
		#define GEODE_STATICS_updateZLayerButtons
		GEODE_AS_STATIC_FUNCTION(updateZLayerButtons) 
	#endif

	#ifndef GEODE_STATICS_zLayerToString
		#define GEODE_STATICS_zLayerToString
		GEODE_AS_STATIC_FUNCTION(zLayerToString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroup
		#define GEODE_CONCEPT_CHECK_toggleGroup
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		#define GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResetColors
		#define GEODE_CONCEPT_CHECK_onResetColors
		GEODE_CONCEPT_FUNCTION_CHECK(onResetColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onZLayer
		#define GEODE_CONCEPT_CHECK_onZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(onZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupBulge
		#define GEODE_CONCEPT_CHECK_setupBulge
		GEODE_CONCEPT_FUNCTION_CHECK(setupBulge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupChromatic
		#define GEODE_CONCEPT_CHECK_setupChromatic
		GEODE_CONCEPT_FUNCTION_CHECK(setupChromatic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupChromaticGlitch
		#define GEODE_CONCEPT_CHECK_setupChromaticGlitch
		GEODE_CONCEPT_FUNCTION_CHECK(setupChromaticGlitch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupColorChange
		#define GEODE_CONCEPT_CHECK_setupColorChange
		GEODE_CONCEPT_FUNCTION_CHECK(setupColorChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupGlitch
		#define GEODE_CONCEPT_CHECK_setupGlitch
		GEODE_CONCEPT_FUNCTION_CHECK(setupGlitch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupGrayscale
		#define GEODE_CONCEPT_CHECK_setupGrayscale
		GEODE_CONCEPT_FUNCTION_CHECK(setupGrayscale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupHueShift
		#define GEODE_CONCEPT_CHECK_setupHueShift
		GEODE_CONCEPT_FUNCTION_CHECK(setupHueShift) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupInvertColor
		#define GEODE_CONCEPT_CHECK_setupInvertColor
		GEODE_CONCEPT_FUNCTION_CHECK(setupInvertColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLensCircle
		#define GEODE_CONCEPT_CHECK_setupLensCircle
		GEODE_CONCEPT_FUNCTION_CHECK(setupLensCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupMotionBlur
		#define GEODE_CONCEPT_CHECK_setupMotionBlur
		GEODE_CONCEPT_FUNCTION_CHECK(setupMotionBlur) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPinch
		#define GEODE_CONCEPT_CHECK_setupPinch
		GEODE_CONCEPT_FUNCTION_CHECK(setupPinch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPixelate
		#define GEODE_CONCEPT_CHECK_setupPixelate
		GEODE_CONCEPT_FUNCTION_CHECK(setupPixelate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupRadialBlur
		#define GEODE_CONCEPT_CHECK_setupRadialBlur
		GEODE_CONCEPT_FUNCTION_CHECK(setupRadialBlur) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSepia
		#define GEODE_CONCEPT_CHECK_setupSepia
		GEODE_CONCEPT_FUNCTION_CHECK(setupSepia) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupShaderTrigger
		#define GEODE_CONCEPT_CHECK_setupShaderTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(setupShaderTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupShockLine
		#define GEODE_CONCEPT_CHECK_setupShockLine
		GEODE_CONCEPT_FUNCTION_CHECK(setupShockLine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupShockWave
		#define GEODE_CONCEPT_CHECK_setupShockWave
		GEODE_CONCEPT_FUNCTION_CHECK(setupShockWave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSplitScreen
		#define GEODE_CONCEPT_CHECK_setupSplitScreen
		GEODE_CONCEPT_FUNCTION_CHECK(setupSplitScreen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZLayerButtons
		#define GEODE_CONCEPT_CHECK_updateZLayerButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateZLayerButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_zLayerToString
		#define GEODE_CONCEPT_CHECK_zLayerToString
		GEODE_CONCEPT_FUNCTION_CHECK(zLayerToString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupShaderEffectPopup> : ModifyBase<ModifyDerive<Der, SetupShaderEffectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupShaderEffectPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupShaderEffectPopup>>::ModifyBase;
		using Base = SetupShaderEffectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN22SetupShaderEffectPopupD2Ev")), Default, SetupShaderEffectPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*, int>::func(&SetupShaderEffectPopup::create)), Default, SetupShaderEffectPopup, create, EffectGameObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, bool>::func(&SetupShaderEffectPopup::toggleGroup)), Default, SetupShaderEffectPopup, toggleGroup, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject*>::func(&SetupShaderEffectPopup::onClose)), Default, SetupShaderEffectPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&SetupShaderEffectPopup::updateDefaultTriggerValues)), Default, SetupShaderEffectPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int, float>::func(&SetupShaderEffectPopup::valueDidChange)), Default, SetupShaderEffectPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<EffectGameObject*, cocos2d::CCArray*, int>::func(&SetupShaderEffectPopup::init)), Default, SetupShaderEffectPopup, init, EffectGameObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupShaderEffectPopup::onResetColors)), Default, SetupShaderEffectPopup, onResetColors, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&SetupShaderEffectPopup::onZLayer)), Default, SetupShaderEffectPopup, onZLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupBulge)), Default, SetupShaderEffectPopup, setupBulge, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupChromatic)), Default, SetupShaderEffectPopup, setupChromatic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupChromaticGlitch)), Default, SetupShaderEffectPopup, setupChromaticGlitch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupColorChange)), Default, SetupShaderEffectPopup, setupColorChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupGlitch)), Default, SetupShaderEffectPopup, setupGlitch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupGrayscale)), Default, SetupShaderEffectPopup, setupGrayscale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupHueShift)), Default, SetupShaderEffectPopup, setupHueShift, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupInvertColor)), Default, SetupShaderEffectPopup, setupInvertColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupLensCircle)), Default, SetupShaderEffectPopup, setupLensCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupMotionBlur)), Default, SetupShaderEffectPopup, setupMotionBlur, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupPinch)), Default, SetupShaderEffectPopup, setupPinch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupPixelate)), Default, SetupShaderEffectPopup, setupPixelate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupRadialBlur)), Default, SetupShaderEffectPopup, setupRadialBlur, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupSepia)), Default, SetupShaderEffectPopup, setupSepia, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupShaderTrigger)), Default, SetupShaderEffectPopup, setupShaderTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupShockLine)), Default, SetupShaderEffectPopup, setupShockLine, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupShockWave)), Default, SetupShaderEffectPopup, setupShockWave, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::setupSplitScreen)), Default, SetupShaderEffectPopup, setupSplitScreen, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SetupShaderEffectPopup::updateZLayerButtons)), Default, SetupShaderEffectPopup, updateZLayerButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&SetupShaderEffectPopup::zLayerToString)), Default, SetupShaderEffectPopup, zLayerToString, int)
		}
	};
}
