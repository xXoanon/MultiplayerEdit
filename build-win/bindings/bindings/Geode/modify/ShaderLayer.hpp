#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShaderLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_objectPosToShaderPos
		#define GEODE_STATICS_objectPosToShaderPos
		GEODE_AS_STATIC_FUNCTION(objectPosToShaderPos) 
	#endif

	#ifndef GEODE_STATICS_performCalculations
		#define GEODE_STATICS_performCalculations
		GEODE_AS_STATIC_FUNCTION(performCalculations) 
	#endif

	#ifndef GEODE_STATICS_preChromaticGlitchShader
		#define GEODE_STATICS_preChromaticGlitchShader
		GEODE_AS_STATIC_FUNCTION(preChromaticGlitchShader) 
	#endif

	#ifndef GEODE_STATICS_preGlitchShader
		#define GEODE_STATICS_preGlitchShader
		GEODE_AS_STATIC_FUNCTION(preGlitchShader) 
	#endif

	#ifndef GEODE_STATICS_preLensCircleShader
		#define GEODE_STATICS_preLensCircleShader
		GEODE_AS_STATIC_FUNCTION(preLensCircleShader) 
	#endif

	#ifndef GEODE_STATICS_preMotionBlurShader
		#define GEODE_STATICS_preMotionBlurShader
		GEODE_AS_STATIC_FUNCTION(preMotionBlurShader) 
	#endif

	#ifndef GEODE_STATICS_prepareTargetContainer
		#define GEODE_STATICS_prepareTargetContainer
		GEODE_AS_STATIC_FUNCTION(prepareTargetContainer) 
	#endif

	#ifndef GEODE_STATICS_prePixelateShader
		#define GEODE_STATICS_prePixelateShader
		GEODE_AS_STATIC_FUNCTION(prePixelateShader) 
	#endif

	#ifndef GEODE_STATICS_preShockLineShader
		#define GEODE_STATICS_preShockLineShader
		GEODE_AS_STATIC_FUNCTION(preShockLineShader) 
	#endif

	#ifndef GEODE_STATICS_preShockWaveShader
		#define GEODE_STATICS_preShockWaveShader
		GEODE_AS_STATIC_FUNCTION(preShockWaveShader) 
	#endif

	#ifndef GEODE_STATICS_preSplitScreenShader
		#define GEODE_STATICS_preSplitScreenShader
		GEODE_AS_STATIC_FUNCTION(preSplitScreenShader) 
	#endif

	#ifndef GEODE_STATICS_resetAllShaders
		#define GEODE_STATICS_resetAllShaders
		GEODE_AS_STATIC_FUNCTION(resetAllShaders) 
	#endif

	#ifndef GEODE_STATICS_setupCommonUniforms
		#define GEODE_STATICS_setupCommonUniforms
		GEODE_AS_STATIC_FUNCTION(setupCommonUniforms) 
	#endif

	#ifndef GEODE_STATICS_setupShader
		#define GEODE_STATICS_setupShader
		GEODE_AS_STATIC_FUNCTION(setupShader) 
	#endif

	#ifndef GEODE_STATICS_setupShockLineUniforms
		#define GEODE_STATICS_setupShockLineUniforms
		GEODE_AS_STATIC_FUNCTION(setupShockLineUniforms) 
	#endif

	#ifndef GEODE_STATICS_setupShockWaveUniforms
		#define GEODE_STATICS_setupShockWaveUniforms
		GEODE_AS_STATIC_FUNCTION(setupShockWaveUniforms) 
	#endif

	#ifndef GEODE_STATICS_setupSplitScreenShader
		#define GEODE_STATICS_setupSplitScreenShader
		GEODE_AS_STATIC_FUNCTION(setupSplitScreenShader) 
	#endif

	#ifndef GEODE_STATICS_toggleAntiAlias
		#define GEODE_STATICS_toggleAntiAlias
		GEODE_AS_STATIC_FUNCTION(toggleAntiAlias) 
	#endif

	#ifndef GEODE_STATICS_triggerBulge
		#define GEODE_STATICS_triggerBulge
		GEODE_AS_STATIC_FUNCTION(triggerBulge) 
	#endif

	#ifndef GEODE_STATICS_triggerChromaticGlitch
		#define GEODE_STATICS_triggerChromaticGlitch
		GEODE_AS_STATIC_FUNCTION(triggerChromaticGlitch) 
	#endif

	#ifndef GEODE_STATICS_triggerColorChange
		#define GEODE_STATICS_triggerColorChange
		GEODE_AS_STATIC_FUNCTION(triggerColorChange) 
	#endif

	#ifndef GEODE_STATICS_triggerInvertColor
		#define GEODE_STATICS_triggerInvertColor
		GEODE_AS_STATIC_FUNCTION(triggerInvertColor) 
	#endif

	#ifndef GEODE_STATICS_triggerLensCircle
		#define GEODE_STATICS_triggerLensCircle
		GEODE_AS_STATIC_FUNCTION(triggerLensCircle) 
	#endif

	#ifndef GEODE_STATICS_triggerPinchX
		#define GEODE_STATICS_triggerPinchX
		GEODE_AS_STATIC_FUNCTION(triggerPinchX) 
	#endif

	#ifndef GEODE_STATICS_triggerPinchY
		#define GEODE_STATICS_triggerPinchY
		GEODE_AS_STATIC_FUNCTION(triggerPinchY) 
	#endif

	#ifndef GEODE_STATICS_triggerRadialBlur
		#define GEODE_STATICS_triggerRadialBlur
		GEODE_AS_STATIC_FUNCTION(triggerRadialBlur) 
	#endif

	#ifndef GEODE_STATICS_triggerShockLine
		#define GEODE_STATICS_triggerShockLine
		GEODE_AS_STATIC_FUNCTION(triggerShockLine) 
	#endif

	#ifndef GEODE_STATICS_triggerShockWave
		#define GEODE_STATICS_triggerShockWave
		GEODE_AS_STATIC_FUNCTION(triggerShockWave) 
	#endif

	#ifndef GEODE_STATICS_tweenValue
		#define GEODE_STATICS_tweenValue
		GEODE_AS_STATIC_FUNCTION(tweenValue) 
	#endif

	#ifndef GEODE_STATICS_tweenValueAuto
		#define GEODE_STATICS_tweenValueAuto
		GEODE_AS_STATIC_FUNCTION(tweenValueAuto) 
	#endif

	#ifndef GEODE_STATICS_updateEffectOffsets
		#define GEODE_STATICS_updateEffectOffsets
		GEODE_AS_STATIC_FUNCTION(updateEffectOffsets) 
	#endif

	#ifndef GEODE_STATICS_updateZLayer
		#define GEODE_STATICS_updateZLayer
		GEODE_AS_STATIC_FUNCTION(updateZLayer) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectPosToShaderPos
		#define GEODE_CONCEPT_CHECK_objectPosToShaderPos
		GEODE_CONCEPT_FUNCTION_CHECK(objectPosToShaderPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performCalculations
		#define GEODE_CONCEPT_CHECK_performCalculations
		GEODE_CONCEPT_FUNCTION_CHECK(performCalculations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preBulgeShader
		#define GEODE_CONCEPT_CHECK_preBulgeShader
		GEODE_CONCEPT_FUNCTION_CHECK(preBulgeShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preChromaticGlitchShader
		#define GEODE_CONCEPT_CHECK_preChromaticGlitchShader
		GEODE_CONCEPT_FUNCTION_CHECK(preChromaticGlitchShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preChromaticShader
		#define GEODE_CONCEPT_CHECK_preChromaticShader
		GEODE_CONCEPT_FUNCTION_CHECK(preChromaticShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preColorChangeShader
		#define GEODE_CONCEPT_CHECK_preColorChangeShader
		GEODE_CONCEPT_FUNCTION_CHECK(preColorChangeShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preCommonShader
		#define GEODE_CONCEPT_CHECK_preCommonShader
		GEODE_CONCEPT_FUNCTION_CHECK(preCommonShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preGlitchShader
		#define GEODE_CONCEPT_CHECK_preGlitchShader
		GEODE_CONCEPT_FUNCTION_CHECK(preGlitchShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preGrayscaleShader
		#define GEODE_CONCEPT_CHECK_preGrayscaleShader
		GEODE_CONCEPT_FUNCTION_CHECK(preGrayscaleShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preHueShiftShader
		#define GEODE_CONCEPT_CHECK_preHueShiftShader
		GEODE_CONCEPT_FUNCTION_CHECK(preHueShiftShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preInvertColorShader
		#define GEODE_CONCEPT_CHECK_preInvertColorShader
		GEODE_CONCEPT_FUNCTION_CHECK(preInvertColorShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preLensCircleShader
		#define GEODE_CONCEPT_CHECK_preLensCircleShader
		GEODE_CONCEPT_FUNCTION_CHECK(preLensCircleShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preMotionBlurShader
		#define GEODE_CONCEPT_CHECK_preMotionBlurShader
		GEODE_CONCEPT_FUNCTION_CHECK(preMotionBlurShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareTargetContainer
		#define GEODE_CONCEPT_CHECK_prepareTargetContainer
		GEODE_CONCEPT_FUNCTION_CHECK(prepareTargetContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prePinchShader
		#define GEODE_CONCEPT_CHECK_prePinchShader
		GEODE_CONCEPT_FUNCTION_CHECK(prePinchShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prePixelateShader
		#define GEODE_CONCEPT_CHECK_prePixelateShader
		GEODE_CONCEPT_FUNCTION_CHECK(prePixelateShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preRadialBlurShader
		#define GEODE_CONCEPT_CHECK_preRadialBlurShader
		GEODE_CONCEPT_FUNCTION_CHECK(preRadialBlurShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preSepiaShader
		#define GEODE_CONCEPT_CHECK_preSepiaShader
		GEODE_CONCEPT_FUNCTION_CHECK(preSepiaShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preShockLineShader
		#define GEODE_CONCEPT_CHECK_preShockLineShader
		GEODE_CONCEPT_FUNCTION_CHECK(preShockLineShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preShockWaveShader
		#define GEODE_CONCEPT_CHECK_preShockWaveShader
		GEODE_CONCEPT_FUNCTION_CHECK(preShockWaveShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preSplitScreenShader
		#define GEODE_CONCEPT_CHECK_preSplitScreenShader
		GEODE_CONCEPT_FUNCTION_CHECK(preSplitScreenShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAllShaders
		#define GEODE_CONCEPT_CHECK_resetAllShaders
		GEODE_CONCEPT_FUNCTION_CHECK(resetAllShaders) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTargetContainer
		#define GEODE_CONCEPT_CHECK_resetTargetContainer
		GEODE_CONCEPT_FUNCTION_CHECK(resetTargetContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupBulgeShader
		#define GEODE_CONCEPT_CHECK_setupBulgeShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupBulgeShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupChromaticGlitchUniforms
		#define GEODE_CONCEPT_CHECK_setupChromaticGlitchUniforms
		GEODE_CONCEPT_FUNCTION_CHECK(setupChromaticGlitchUniforms) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupChromaticUniforms
		#define GEODE_CONCEPT_CHECK_setupChromaticUniforms
		GEODE_CONCEPT_FUNCTION_CHECK(setupChromaticUniforms) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupColorChangeShader
		#define GEODE_CONCEPT_CHECK_setupColorChangeShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupColorChangeShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCommonUniforms
		#define GEODE_CONCEPT_CHECK_setupCommonUniforms
		GEODE_CONCEPT_FUNCTION_CHECK(setupCommonUniforms) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupGlitchUniforms
		#define GEODE_CONCEPT_CHECK_setupGlitchUniforms
		GEODE_CONCEPT_FUNCTION_CHECK(setupGlitchUniforms) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupGrayscaleShader
		#define GEODE_CONCEPT_CHECK_setupGrayscaleShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupGrayscaleShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupHueShiftShader
		#define GEODE_CONCEPT_CHECK_setupHueShiftShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupHueShiftShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupInvertColorShader
		#define GEODE_CONCEPT_CHECK_setupInvertColorShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupInvertColorShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLensCircleShader
		#define GEODE_CONCEPT_CHECK_setupLensCircleShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupLensCircleShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupMotionBlurShader
		#define GEODE_CONCEPT_CHECK_setupMotionBlurShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupMotionBlurShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPinchShader
		#define GEODE_CONCEPT_CHECK_setupPinchShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupPinchShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupRadialBlurShader
		#define GEODE_CONCEPT_CHECK_setupRadialBlurShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupRadialBlurShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSepiaShader
		#define GEODE_CONCEPT_CHECK_setupSepiaShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupSepiaShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupShader
		#define GEODE_CONCEPT_CHECK_setupShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupShockLineUniforms
		#define GEODE_CONCEPT_CHECK_setupShockLineUniforms
		GEODE_CONCEPT_FUNCTION_CHECK(setupShockLineUniforms) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupShockWaveUniforms
		#define GEODE_CONCEPT_CHECK_setupShockWaveUniforms
		GEODE_CONCEPT_FUNCTION_CHECK(setupShockWaveUniforms) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSplitScreenShader
		#define GEODE_CONCEPT_CHECK_setupSplitScreenShader
		GEODE_CONCEPT_FUNCTION_CHECK(setupSplitScreenShader) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleAntiAlias
		#define GEODE_CONCEPT_CHECK_toggleAntiAlias
		GEODE_CONCEPT_FUNCTION_CHECK(toggleAntiAlias) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerBulge
		#define GEODE_CONCEPT_CHECK_triggerBulge
		GEODE_CONCEPT_FUNCTION_CHECK(triggerBulge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerChromaticGlitch
		#define GEODE_CONCEPT_CHECK_triggerChromaticGlitch
		GEODE_CONCEPT_FUNCTION_CHECK(triggerChromaticGlitch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerChromaticX
		#define GEODE_CONCEPT_CHECK_triggerChromaticX
		GEODE_CONCEPT_FUNCTION_CHECK(triggerChromaticX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerChromaticY
		#define GEODE_CONCEPT_CHECK_triggerChromaticY
		GEODE_CONCEPT_FUNCTION_CHECK(triggerChromaticY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerColorChange
		#define GEODE_CONCEPT_CHECK_triggerColorChange
		GEODE_CONCEPT_FUNCTION_CHECK(triggerColorChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerGlitch
		#define GEODE_CONCEPT_CHECK_triggerGlitch
		GEODE_CONCEPT_FUNCTION_CHECK(triggerGlitch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerGrayscale
		#define GEODE_CONCEPT_CHECK_triggerGrayscale
		GEODE_CONCEPT_FUNCTION_CHECK(triggerGrayscale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerHueShift
		#define GEODE_CONCEPT_CHECK_triggerHueShift
		GEODE_CONCEPT_FUNCTION_CHECK(triggerHueShift) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerInvertColor
		#define GEODE_CONCEPT_CHECK_triggerInvertColor
		GEODE_CONCEPT_FUNCTION_CHECK(triggerInvertColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerLensCircle
		#define GEODE_CONCEPT_CHECK_triggerLensCircle
		GEODE_CONCEPT_FUNCTION_CHECK(triggerLensCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerMotionBlurX
		#define GEODE_CONCEPT_CHECK_triggerMotionBlurX
		GEODE_CONCEPT_FUNCTION_CHECK(triggerMotionBlurX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerMotionBlurY
		#define GEODE_CONCEPT_CHECK_triggerMotionBlurY
		GEODE_CONCEPT_FUNCTION_CHECK(triggerMotionBlurY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerPinchX
		#define GEODE_CONCEPT_CHECK_triggerPinchX
		GEODE_CONCEPT_FUNCTION_CHECK(triggerPinchX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerPinchY
		#define GEODE_CONCEPT_CHECK_triggerPinchY
		GEODE_CONCEPT_FUNCTION_CHECK(triggerPinchY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerPixelateX
		#define GEODE_CONCEPT_CHECK_triggerPixelateX
		GEODE_CONCEPT_FUNCTION_CHECK(triggerPixelateX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerPixelateY
		#define GEODE_CONCEPT_CHECK_triggerPixelateY
		GEODE_CONCEPT_FUNCTION_CHECK(triggerPixelateY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerRadialBlur
		#define GEODE_CONCEPT_CHECK_triggerRadialBlur
		GEODE_CONCEPT_FUNCTION_CHECK(triggerRadialBlur) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerSepia
		#define GEODE_CONCEPT_CHECK_triggerSepia
		GEODE_CONCEPT_FUNCTION_CHECK(triggerSepia) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerShockLine
		#define GEODE_CONCEPT_CHECK_triggerShockLine
		GEODE_CONCEPT_FUNCTION_CHECK(triggerShockLine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerShockWave
		#define GEODE_CONCEPT_CHECK_triggerShockWave
		GEODE_CONCEPT_FUNCTION_CHECK(triggerShockWave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerSplitScreenCols
		#define GEODE_CONCEPT_CHECK_triggerSplitScreenCols
		GEODE_CONCEPT_FUNCTION_CHECK(triggerSplitScreenCols) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerSplitScreenRows
		#define GEODE_CONCEPT_CHECK_triggerSplitScreenRows
		GEODE_CONCEPT_FUNCTION_CHECK(triggerSplitScreenRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tweenValue
		#define GEODE_CONCEPT_CHECK_tweenValue
		GEODE_CONCEPT_FUNCTION_CHECK(tweenValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tweenValueAuto
		#define GEODE_CONCEPT_CHECK_tweenValueAuto
		GEODE_CONCEPT_FUNCTION_CHECK(tweenValueAuto) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEffectOffsets
		#define GEODE_CONCEPT_CHECK_updateEffectOffsets
		GEODE_CONCEPT_FUNCTION_CHECK(updateEffectOffsets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMotionBlurSpeedX
		#define GEODE_CONCEPT_CHECK_updateMotionBlurSpeedX
		GEODE_CONCEPT_FUNCTION_CHECK(updateMotionBlurSpeedX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMotionBlurSpeedY
		#define GEODE_CONCEPT_CHECK_updateMotionBlurSpeedY
		GEODE_CONCEPT_FUNCTION_CHECK(updateMotionBlurSpeedY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShockLineCenter
		#define GEODE_CONCEPT_CHECK_updateShockLineCenter
		GEODE_CONCEPT_FUNCTION_CHECK(updateShockLineCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShockWaveCenter
		#define GEODE_CONCEPT_CHECK_updateShockWaveCenter
		GEODE_CONCEPT_FUNCTION_CHECK(updateShockWaveCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZLayer
		#define GEODE_CONCEPT_CHECK_updateZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(updateZLayer) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShaderLayer> : ModifyBase<ModifyDerive<Der, ShaderLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShaderLayer>>;
		using ModifyBase<ModifyDerive<Der, ShaderLayer>>::ModifyBase;
		using Base = ShaderLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x481c90, Thiscall, ShaderLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x482a40, Thiscall, ShaderLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x488a60, Thiscall, ShaderLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x482d70, Thiscall, ShaderLayer, objectPosToShaderPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4880b0, Thiscall, ShaderLayer, performCalculations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, preBulgeShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x485d20, Thiscall, ShaderLayer, preChromaticGlitchShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, preChromaticShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, preColorChangeShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, preCommonShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4855b0, Thiscall, ShaderLayer, preGlitchShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, preGrayscaleShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, preHueShiftShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, preInvertColorShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x486860, Thiscall, ShaderLayer, preLensCircleShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x486d30, Thiscall, ShaderLayer, preMotionBlurShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x486250, Thiscall, ShaderLayer, prepareTargetContainer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, prePinchShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4860a0, Thiscall, ShaderLayer, prePixelateShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, preRadialBlurShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, preSepiaShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4850a0, Thiscall, ShaderLayer, preShockLineShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x484550, Thiscall, ShaderLayer, preShockWaveShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x487d90, Thiscall, ShaderLayer, preSplitScreenShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4895d0, Thiscall, ShaderLayer, resetAllShaders, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, resetTargetContainer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupBulgeShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupChromaticGlitchUniforms, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupChromaticUniforms, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupColorChangeShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x482bc0, Thiscall, ShaderLayer, setupCommonUniforms, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupGlitchUniforms, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupGrayscaleShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupHueShiftShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupInvertColorShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupLensCircleShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupMotionBlurShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupPinchShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupRadialBlurShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, setupSepiaShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x481da0, Thiscall, ShaderLayer, setupShader, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x484ea0, Thiscall, ShaderLayer, setupShockLineUniforms, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x484350, Thiscall, ShaderLayer, setupShockWaveUniforms, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x487be0, Thiscall, ShaderLayer, setupSplitScreenShader, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4829d0, Thiscall, ShaderLayer, toggleAntiAlias, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x487040, Thiscall, ShaderLayer, triggerBulge, float, float, float, float, float, int, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x485a00, Thiscall, ShaderLayer, triggerChromaticGlitch, bool, float, float, float, float, float, float, float, int, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerChromaticX, float, float, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerChromaticY, float, float, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x487910, Thiscall, ShaderLayer, triggerColorChange, float, float, float, float, float, float, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerGlitch, float, float, float, float, float, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerGrayscale, float, float, bool, int, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerHueShift, float, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x487690, Thiscall, ShaderLayer, triggerInvertColor, float, float, float, float, float, bool, bool, bool, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4865c0, Thiscall, ShaderLayer, triggerLensCircle, float, float, float, float, int, int, float, float, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerMotionBlurX, float, float, float, float, int, float, bool, int, int, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerMotionBlurY, float, float, float, float, int, float, bool, int, int, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x487250, Thiscall, ShaderLayer, triggerPinchX, float, float, float, float, float, bool, int, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x487470, Thiscall, ShaderLayer, triggerPinchY, float, float, float, float, float, bool, int, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerPixelateX, float, float, bool, bool, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerPixelateY, float, float, bool, bool, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x486a90, Thiscall, ShaderLayer, triggerRadialBlur, float, float, float, float, int, float, float, bool, int, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerSepia, float, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4849f0, Thiscall, ShaderLayer, triggerShockLine, float, float, bool, bool, bool, bool, float, float, float, float, float, float, int, bool, bool, bool, float, bool, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x483d90, Thiscall, ShaderLayer, triggerShockWave, float, float, float, float, float, float, float, bool, float, float, float, int, bool, bool, bool, float, float, bool, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerSplitScreenCols, float, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, triggerSplitScreenRows, float, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x489440, Thiscall, ShaderLayer, tweenValue, float, float, int, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x488d40, Thiscall, ShaderLayer, tweenValueAuto, float, int, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x482f30, Thiscall, ShaderLayer, updateEffectOffsets, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, updateMotionBlurSpeedX, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, updateMotionBlurSpeedY, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, updateShockLineCenter, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShaderLayer, updateShockWaveCenter, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x489550, Thiscall, ShaderLayer, updateZLayer, int, int, bool)
		}
	};
}
