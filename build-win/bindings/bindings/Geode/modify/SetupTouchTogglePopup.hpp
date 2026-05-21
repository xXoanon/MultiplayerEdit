#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTouchTogglePopup.hpp>
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

	#ifndef GEODE_STATICS_onControlMode
		#define GEODE_STATICS_onControlMode
		GEODE_AS_STATIC_FUNCTION(onControlMode) 
	#endif

	#ifndef GEODE_STATICS_onDualTouchMode
		#define GEODE_STATICS_onDualTouchMode
		GEODE_AS_STATIC_FUNCTION(onDualTouchMode) 
	#endif

	#ifndef GEODE_STATICS_onHoldMode
		#define GEODE_STATICS_onHoldMode
		GEODE_AS_STATIC_FUNCTION(onHoldMode) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onTouchMode
		#define GEODE_STATICS_onTouchMode
		GEODE_AS_STATIC_FUNCTION(onTouchMode) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_onControlMode
		#define GEODE_CONCEPT_CHECK_onControlMode
		GEODE_CONCEPT_FUNCTION_CHECK(onControlMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDualTouchMode
		#define GEODE_CONCEPT_CHECK_onDualTouchMode
		GEODE_CONCEPT_FUNCTION_CHECK(onDualTouchMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHoldMode
		#define GEODE_CONCEPT_CHECK_onHoldMode
		GEODE_CONCEPT_FUNCTION_CHECK(onHoldMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetIDArrow
		#define GEODE_CONCEPT_CHECK_onTargetIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTouchMode
		#define GEODE_CONCEPT_CHECK_onTouchMode
		GEODE_CONCEPT_FUNCTION_CHECK(onTouchMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID
		#define GEODE_CONCEPT_CHECK_updateTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupTouchTogglePopup> : ModifyBase<ModifyDerive<Der, SetupTouchTogglePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTouchTogglePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTouchTogglePopup>>::ModifyBase;
		using Base = SetupTouchTogglePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x463bf0, Default, SetupTouchTogglePopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x464960, Thiscall, SetupTouchTogglePopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x464e90, Thiscall, SetupTouchTogglePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x464d70, Thiscall, SetupTouchTogglePopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x463d30, Thiscall, SetupTouchTogglePopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x464cb0, Thiscall, SetupTouchTogglePopup, onControlMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x464b50, Thiscall, SetupTouchTogglePopup, onDualTouchMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x464ac0, Thiscall, SetupTouchTogglePopup, onHoldMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413c30, Thiscall, SetupTouchTogglePopup, onTargetIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x464be0, Thiscall, SetupTouchTogglePopup, onTouchMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413df0, Thiscall, SetupTouchTogglePopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413d70, Thiscall, SetupTouchTogglePopup, updateTextInputLabel, )
		}
	};
}
