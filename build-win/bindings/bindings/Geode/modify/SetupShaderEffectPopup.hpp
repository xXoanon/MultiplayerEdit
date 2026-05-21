#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupShaderEffectPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupShaderEffectPopup, create, EffectGameObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4549f0, Thiscall, SetupShaderEffectPopup, toggleGroup, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28f250, Thiscall, SetupShaderEffectPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a5b0, Thiscall, SetupShaderEffectPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4545c0, Thiscall, SetupShaderEffectPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a2c0, Thiscall, SetupShaderEffectPopup, init, EffectGameObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x453f20, Thiscall, SetupShaderEffectPopup, onResetColors, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b0a0, Thiscall, SetupShaderEffectPopup, onZLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4511a0, Thiscall, SetupShaderEffectPopup, setupBulge, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44ddd0, Thiscall, SetupShaderEffectPopup, setupChromatic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44e350, Thiscall, SetupShaderEffectPopup, setupChromaticGlitch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x453850, Thiscall, SetupShaderEffectPopup, setupColorChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44d750, Thiscall, SetupShaderEffectPopup, setupGlitch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x452660, Thiscall, SetupShaderEffectPopup, setupGrayscale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x453500, Thiscall, SetupShaderEffectPopup, setupHueShift, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x452e90, Thiscall, SetupShaderEffectPopup, setupInvertColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44f2a0, Thiscall, SetupShaderEffectPopup, setupLensCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x450630, Thiscall, SetupShaderEffectPopup, setupMotionBlur, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451a70, Thiscall, SetupShaderEffectPopup, setupPinch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44ec00, Thiscall, SetupShaderEffectPopup, setupPixelate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44fbf0, Thiscall, SetupShaderEffectPopup, setupRadialBlur, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x452b60, Thiscall, SetupShaderEffectPopup, setupSepia, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a6a0, Thiscall, SetupShaderEffectPopup, setupShaderTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44c550, Thiscall, SetupShaderEffectPopup, setupShockLine, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b240, Thiscall, SetupShaderEffectPopup, setupShockWave, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4540e0, Thiscall, SetupShaderEffectPopup, setupSplitScreen, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b190, Thiscall, SetupShaderEffectPopup, updateZLayerButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44adc0, Thiscall, SetupShaderEffectPopup, zLayerToString, int)
		}
	};
}
