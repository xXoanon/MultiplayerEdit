#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRotateCommandLayer.hpp>
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

	#ifndef GEODE_STATICS_onFollowRotation
		#define GEODE_STATICS_onFollowRotation
		GEODE_AS_STATIC_FUNCTION(onFollowRotation) 
	#endif

	#ifndef GEODE_STATICS_onLockRotation
		#define GEODE_STATICS_onLockRotation
		GEODE_AS_STATIC_FUNCTION(onLockRotation) 
	#endif

	#ifndef GEODE_STATICS_onUpdateGroupID
		#define GEODE_STATICS_onUpdateGroupID
		GEODE_AS_STATIC_FUNCTION(onUpdateGroupID) 
	#endif

	#ifndef GEODE_STATICS_onUpdateGroupID2
		#define GEODE_STATICS_onUpdateGroupID2
		GEODE_AS_STATIC_FUNCTION(onUpdateGroupID2) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderDegreesChanged
		#define GEODE_STATICS_sliderDegreesChanged
		GEODE_AS_STATIC_FUNCTION(sliderDegreesChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderTimesChanged
		#define GEODE_STATICS_sliderTimesChanged
		GEODE_AS_STATIC_FUNCTION(sliderTimesChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleEasingRateVisibility
		#define GEODE_STATICS_toggleEasingRateVisibility
		GEODE_AS_STATIC_FUNCTION(toggleEasingRateVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateCommandDegrees
		#define GEODE_STATICS_updateCommandDegrees
		GEODE_AS_STATIC_FUNCTION(updateCommandDegrees) 
	#endif

	#ifndef GEODE_STATICS_updateCommandTimes
		#define GEODE_STATICS_updateCommandTimes
		GEODE_AS_STATIC_FUNCTION(updateCommandTimes) 
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

	#ifndef GEODE_STATICS_updateTargetGroupID
		#define GEODE_STATICS_updateTargetGroupID
		GEODE_AS_STATIC_FUNCTION(updateTargetGroupID) 
	#endif

	#ifndef GEODE_STATICS_updateTargetGroupID2
		#define GEODE_STATICS_updateTargetGroupID2
		GEODE_AS_STATIC_FUNCTION(updateTargetGroupID2) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel2
		#define GEODE_STATICS_updateTextInputLabel2
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel2) 
	#endif

	#ifndef GEODE_STATICS_updateTimesLabel
		#define GEODE_STATICS_updateTimesLabel
		GEODE_AS_STATIC_FUNCTION(updateTimesLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_onFollowRotation
		#define GEODE_CONCEPT_CHECK_onFollowRotation
		GEODE_CONCEPT_FUNCTION_CHECK(onFollowRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLockRotation
		#define GEODE_CONCEPT_CHECK_onLockRotation
		GEODE_CONCEPT_FUNCTION_CHECK(onLockRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateGroupID
		#define GEODE_CONCEPT_CHECK_onUpdateGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateGroupID2
		#define GEODE_CONCEPT_CHECK_onUpdateGroupID2
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateGroupID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderDegreesChanged
		#define GEODE_CONCEPT_CHECK_sliderDegreesChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderDegreesChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderTimesChanged
		#define GEODE_CONCEPT_CHECK_sliderTimesChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderTimesChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEasingRateVisibility
		#define GEODE_CONCEPT_CHECK_toggleEasingRateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEasingRateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCommandDegrees
		#define GEODE_CONCEPT_CHECK_updateCommandDegrees
		GEODE_CONCEPT_FUNCTION_CHECK(updateCommandDegrees) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCommandTimes
		#define GEODE_CONCEPT_CHECK_updateCommandTimes
		GEODE_CONCEPT_FUNCTION_CHECK(updateCommandTimes) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateTargetGroupID
		#define GEODE_CONCEPT_CHECK_updateTargetGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetGroupID2
		#define GEODE_CONCEPT_CHECK_updateTargetGroupID2
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetGroupID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel2
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel2
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimesLabel
		#define GEODE_CONCEPT_CHECK_updateTimesLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimesLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRotateCommandLayer> : ModifyBase<ModifyDerive<Der, GJRotateCommandLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRotateCommandLayer>>;
		using ModifyBase<ModifyDerive<Der, GJRotateCommandLayer>>::ModifyBase;
		using Base = GJRotateCommandLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, create, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, determineStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, textChanged, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, valuePopupClosed, ConfigureValuePopup*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, init, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, onEasing, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, onEasingRate, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, onFollowRotation, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, onLockRotation, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, onUpdateGroupID, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, onUpdateGroupID2, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, sliderChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, sliderDegreesChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, sliderTimesChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, toggleEasingRateVisibility, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateCommandDegrees, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateCommandTimes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateDegreesLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateDuration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateDurLabel, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateEasingLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateEasingRateLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateMoveCommandEasing, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateMoveCommandEasingRate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateTargetGroupID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateTargetGroupID2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateTextInputLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateTextInputLabel2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotateCommandLayer, updateTimesLabel, )
		}
	};
}
