#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaFadeTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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
	struct ModifyDerive<Der, SetupAreaFadeTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaFadeTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaFadeTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaFadeTriggerPopup>>::ModifyBase;
		using Base = SetupAreaFadeTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupAreaFadeTriggerPopup, create, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40f0f0, Thiscall, SetupAreaFadeTriggerPopup, init, EnterEffectObject*, cocos2d::CCArray*)
		}
	};
}
