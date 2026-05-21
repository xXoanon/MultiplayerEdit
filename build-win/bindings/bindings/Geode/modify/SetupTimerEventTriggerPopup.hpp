#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTimerEventTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupTimerEventTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupTimerEventTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTimerEventTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTimerEventTriggerPopup>>::ModifyBase;
		using Base = SetupTimerEventTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4626a0, Default, SetupTimerEventTriggerPopup, create, TimerTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4627b0, Thiscall, SetupTimerEventTriggerPopup, init, TimerTriggerGameObject*, cocos2d::CCArray*)
		}
	};
}
