#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupItemEditTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onOpButton
		#define GEODE_STATICS_onOpButton
		GEODE_AS_STATIC_FUNCTION(onOpButton) 
	#endif

	#ifndef GEODE_STATICS_updateFormulaLabel
		#define GEODE_STATICS_updateFormulaLabel
		GEODE_AS_STATIC_FUNCTION(updateFormulaLabel) 
	#endif

	#ifndef GEODE_STATICS_updateOpButton
		#define GEODE_STATICS_updateOpButton
		GEODE_AS_STATIC_FUNCTION(updateOpButton) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		#define GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpButton
		#define GEODE_CONCEPT_CHECK_onOpButton
		GEODE_CONCEPT_FUNCTION_CHECK(onOpButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFormulaLabel
		#define GEODE_CONCEPT_CHECK_updateFormulaLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateFormulaLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpButton
		#define GEODE_CONCEPT_CHECK_updateOpButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpButton) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupItemEditTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupItemEditTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupItemEditTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupItemEditTriggerPopup>>::ModifyBase;
		using Base = SetupItemEditTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46aa40, Default, SetupItemEditTriggerPopup, create, ItemTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46d250, Thiscall, SetupItemEditTriggerPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46cfb0, Thiscall, SetupItemEditTriggerPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46ab60, Thiscall, SetupItemEditTriggerPopup, init, ItemTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46bd50, Thiscall, SetupItemEditTriggerPopup, onOpButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46c420, Thiscall, SetupItemEditTriggerPopup, updateFormulaLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46c1c0, Thiscall, SetupItemEditTriggerPopup, updateOpButton, CCMenuItemSpriteExtra*, int, int)
		}
	};
}
