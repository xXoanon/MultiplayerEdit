#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupOptionsTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_addOption
		#define GEODE_STATICS_addOption
		GEODE_AS_STATIC_FUNCTION(addOption) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		#define GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addOption
		#define GEODE_CONCEPT_CHECK_addOption
		GEODE_CONCEPT_FUNCTION_CHECK(addOption) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupOptionsTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupOptionsTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupOptionsTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupOptionsTriggerPopup>>::ModifyBase;
		using Base = SetupOptionsTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupOptionsTriggerPopup, create, GameOptionsTrigger*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x436940, Thiscall, SetupOptionsTriggerPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4366e0, Thiscall, SetupOptionsTriggerPopup, addOption, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x435ee0, Thiscall, SetupOptionsTriggerPopup, init, GameOptionsTrigger*, cocos2d::CCArray*)
		}
	};
}
