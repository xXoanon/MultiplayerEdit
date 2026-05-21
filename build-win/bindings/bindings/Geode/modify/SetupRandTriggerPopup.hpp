#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupRandTriggerPopup.hpp>
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onTargetID2Arrow
		#define GEODE_STATICS_onTargetID2Arrow
		GEODE_AS_STATIC_FUNCTION(onTargetID2Arrow) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateChance
		#define GEODE_STATICS_updateChance
		GEODE_AS_STATIC_FUNCTION(updateChance) 
	#endif

	#ifndef GEODE_STATICS_updateChanceLabel
		#define GEODE_STATICS_updateChanceLabel
		GEODE_AS_STATIC_FUNCTION(updateChanceLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID2
		#define GEODE_STATICS_updateTargetID2
		GEODE_AS_STATIC_FUNCTION(updateTargetID2) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel2
		#define GEODE_STATICS_updateTextInputLabel2
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel2) 
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetID2Arrow
		#define GEODE_CONCEPT_CHECK_onTargetID2Arrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetID2Arrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetIDArrow
		#define GEODE_CONCEPT_CHECK_onTargetIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChance
		#define GEODE_CONCEPT_CHECK_updateChance
		GEODE_CONCEPT_FUNCTION_CHECK(updateChance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateChanceLabel
		#define GEODE_CONCEPT_CHECK_updateChanceLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateChanceLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID
		#define GEODE_CONCEPT_CHECK_updateTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID2
		#define GEODE_CONCEPT_CHECK_updateTargetID2
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel2
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel2
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel2) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupRandTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupRandTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupRandTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupRandTriggerPopup>>::ModifyBase;
		using Base = SetupRandTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43f9f0, Default, SetupRandTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4408b0, Thiscall, SetupRandTriggerPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x441390, Thiscall, SetupRandTriggerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440bb0, Thiscall, SetupRandTriggerPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43fb30, Thiscall, SetupRandTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440b60, Thiscall, SetupRandTriggerPopup, onTargetID2Arrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440b10, Thiscall, SetupRandTriggerPopup, onTargetIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440a00, Thiscall, SetupRandTriggerPopup, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272a00, Thiscall, SetupRandTriggerPopup, updateChance, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440a40, Thiscall, SetupRandTriggerPopup, updateChanceLabel, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4411f0, Thiscall, SetupRandTriggerPopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4412c0, Thiscall, SetupRandTriggerPopup, updateTargetID2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x440e90, Thiscall, SetupRandTriggerPopup, updateTextInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x441040, Thiscall, SetupRandTriggerPopup, updateTextInputLabel2, )
		}
	};
}
