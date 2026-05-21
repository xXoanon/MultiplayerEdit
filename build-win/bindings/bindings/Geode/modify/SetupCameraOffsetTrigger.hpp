#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCameraOffsetTrigger.hpp>
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

	#ifndef GEODE_STATICS_onTargetMode
		#define GEODE_STATICS_onTargetMode
		GEODE_AS_STATIC_FUNCTION(onTargetMode) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderXChanged
		#define GEODE_STATICS_sliderXChanged
		GEODE_AS_STATIC_FUNCTION(sliderXChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderYChanged
		#define GEODE_STATICS_sliderYChanged
		GEODE_AS_STATIC_FUNCTION(sliderYChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleEasingRateVisibility
		#define GEODE_STATICS_toggleEasingRateVisibility
		GEODE_AS_STATIC_FUNCTION(toggleEasingRateVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateEasingLabel
		#define GEODE_STATICS_updateEasingLabel
		GEODE_AS_STATIC_FUNCTION(updateEasingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEasingRateLabel
		#define GEODE_STATICS_updateEasingRateLabel
		GEODE_AS_STATIC_FUNCTION(updateEasingRateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandPosX
		#define GEODE_STATICS_updateMoveCommandPosX
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandPosX) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandPosY
		#define GEODE_STATICS_updateMoveCommandPosY
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandPosY) 
	#endif

	#ifndef GEODE_STATICS_updateValueXLabel
		#define GEODE_STATICS_updateValueXLabel
		GEODE_AS_STATIC_FUNCTION(updateValueXLabel) 
	#endif

	#ifndef GEODE_STATICS_updateValueYLabel
		#define GEODE_STATICS_updateValueYLabel
		GEODE_AS_STATIC_FUNCTION(updateValueYLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_onTargetMode
		#define GEODE_CONCEPT_CHECK_onTargetMode
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_posFromSliderValue
		#define GEODE_CONCEPT_CHECK_posFromSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(posFromSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderValueFromPos
		#define GEODE_CONCEPT_CHECK_sliderValueFromPos
		GEODE_CONCEPT_FUNCTION_CHECK(sliderValueFromPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderXChanged
		#define GEODE_CONCEPT_CHECK_sliderXChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderXChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderYChanged
		#define GEODE_CONCEPT_CHECK_sliderYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEasingRateVisibility
		#define GEODE_CONCEPT_CHECK_toggleEasingRateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEasingRateVisibility) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandPosX
		#define GEODE_CONCEPT_CHECK_updateMoveCommandPosX
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandPosX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandPosY
		#define GEODE_CONCEPT_CHECK_updateMoveCommandPosY
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandPosY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValueXLabel
		#define GEODE_CONCEPT_CHECK_updateValueXLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateValueXLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValueYLabel
		#define GEODE_CONCEPT_CHECK_updateValueYLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateValueYLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupCameraOffsetTrigger> : ModifyBase<ModifyDerive<Der, SetupCameraOffsetTrigger>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCameraOffsetTrigger>>;
		using ModifyBase<ModifyDerive<Der, SetupCameraOffsetTrigger>>::ModifyBase;
		using Base = SetupCameraOffsetTrigger;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x415350, Default, SetupCameraOffsetTrigger, create, CameraTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4166b0, Thiscall, SetupCameraOffsetTrigger, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x417950, Thiscall, SetupCameraOffsetTrigger, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4173c0, Thiscall, SetupCameraOffsetTrigger, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x416ac0, Thiscall, SetupCameraOffsetTrigger, valuePopupClosed, ConfigureValuePopup*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x415470, Thiscall, SetupCameraOffsetTrigger, init, CameraTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x416e80, Thiscall, SetupCameraOffsetTrigger, onEasing, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4169f0, Thiscall, SetupCameraOffsetTrigger, onEasingRate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4172e0, Thiscall, SetupCameraOffsetTrigger, onTargetMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupCameraOffsetTrigger, posFromSliderValue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271d20, Thiscall, SetupCameraOffsetTrigger, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupCameraOffsetTrigger, sliderValueFromPos, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4170e0, Thiscall, SetupCameraOffsetTrigger, sliderXChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x417130, Thiscall, SetupCameraOffsetTrigger, sliderYChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x416d70, Thiscall, SetupCameraOffsetTrigger, toggleEasingRateVisibility, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272a00, Thiscall, SetupCameraOffsetTrigger, updateDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupCameraOffsetTrigger, updateDurLabel, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x416f40, Thiscall, SetupCameraOffsetTrigger, updateEasingLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x416b90, Thiscall, SetupCameraOffsetTrigger, updateEasingRateLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupCameraOffsetTrigger, updateMoveCommandEasing, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupCameraOffsetTrigger, updateMoveCommandEasingRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x417770, Thiscall, SetupCameraOffsetTrigger, updateMoveCommandPosX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x417860, Thiscall, SetupCameraOffsetTrigger, updateMoveCommandPosY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x417180, Thiscall, SetupCameraOffsetTrigger, updateValueXLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x417230, Thiscall, SetupCameraOffsetTrigger, updateValueYLabel, )
		}
	};
}
