#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCameraRotatePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_valuePopupClosed
		#define GEODE_STATICS_valuePopupClosed
		GEODE_AS_STATIC_FUNCTION(valuePopupClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEasing
		#define GEODE_STATICS_onEasing
		GEODE_AS_STATIC_FUNCTION(onEasing) 
	#endif

	#ifndef GEODE_STATICS_onEasingRate
		#define GEODE_STATICS_onEasingRate
		GEODE_AS_STATIC_FUNCTION(onEasingRate) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderDegreesChanged
		#define GEODE_STATICS_sliderDegreesChanged
		GEODE_AS_STATIC_FUNCTION(sliderDegreesChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleEasingRateVisibility
		#define GEODE_STATICS_toggleEasingRateVisibility
		GEODE_AS_STATIC_FUNCTION(toggleEasingRateVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateCommandDegrees
		#define GEODE_STATICS_updateCommandDegrees
		GEODE_AS_STATIC_FUNCTION(updateCommandDegrees) 
	#endif

	#ifndef GEODE_STATICS_updateDegreesLabel
		#define GEODE_STATICS_updateDegreesLabel
		GEODE_AS_STATIC_FUNCTION(updateDegreesLabel) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEasingLabel
		#define GEODE_STATICS_updateEasingLabel
		GEODE_AS_STATIC_FUNCTION(updateEasingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEasingRateLabel
		#define GEODE_STATICS_updateEasingRateLabel
		GEODE_AS_STATIC_FUNCTION(updateEasingRateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandEasing
		#define GEODE_STATICS_updateMoveCommandEasing
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandEasing) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandEasingRate
		#define GEODE_STATICS_updateMoveCommandEasingRate
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandEasingRate) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valuePopupClosed
		#define GEODE_CONCEPT_CHECK_valuePopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(valuePopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEasing
		#define GEODE_CONCEPT_CHECK_onEasing
		GEODE_CONCEPT_FUNCTION_CHECK(onEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEasingRate
		#define GEODE_CONCEPT_CHECK_onEasingRate
		GEODE_CONCEPT_FUNCTION_CHECK(onEasingRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderDegreesChanged
		#define GEODE_CONCEPT_CHECK_sliderDegreesChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderDegreesChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEasingRateVisibility
		#define GEODE_CONCEPT_CHECK_toggleEasingRateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEasingRateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCommandDegrees
		#define GEODE_CONCEPT_CHECK_updateCommandDegrees
		GEODE_CONCEPT_FUNCTION_CHECK(updateCommandDegrees) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDegreesLabel
		#define GEODE_CONCEPT_CHECK_updateDegreesLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateDegreesLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDuration
		#define GEODE_CONCEPT_CHECK_updateDuration
		GEODE_CONCEPT_FUNCTION_CHECK(updateDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDurLabel
		#define GEODE_CONCEPT_CHECK_updateDurLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateDurLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEasingLabel
		#define GEODE_CONCEPT_CHECK_updateEasingLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEasingLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEasingRateLabel
		#define GEODE_CONCEPT_CHECK_updateEasingRateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEasingRateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandEasing
		#define GEODE_CONCEPT_CHECK_updateMoveCommandEasing
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandEasingRate
		#define GEODE_CONCEPT_CHECK_updateMoveCommandEasingRate
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandEasingRate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupCameraRotatePopup> : ModifyBase<ModifyDerive<Der, SetupCameraRotatePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCameraRotatePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCameraRotatePopup>>::ModifyBase;
		using Base = SetupCameraRotatePopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, create, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, determineStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, textChanged, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, valuePopupClosed, ConfigureValuePopup*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, init, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, onEasing, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, onEasingRate, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, sliderChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, sliderDegreesChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, toggleEasingRateVisibility, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, updateCommandDegrees, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, updateDegreesLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, updateDuration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, updateDurLabel, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, updateEasingLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, updateEasingRateLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, updateMoveCommandEasing, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupCameraRotatePopup, updateMoveCommandEasingRate, )
		}
	};
}
