#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupEnterTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEnterType
		#define GEODE_STATICS_onEnterType
		GEODE_AS_STATIC_FUNCTION(onEnterType) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnterType
		#define GEODE_CONCEPT_CHECK_onEnterType
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupEnterTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupEnterTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupEnterTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupEnterTriggerPopup>>::ModifyBase;
		using Base = SetupEnterTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupEnterTriggerPopup, create, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28f7e0, Thiscall, SetupEnterTriggerPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28f260, Thiscall, SetupEnterTriggerPopup, init, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28f8b0, Thiscall, SetupEnterTriggerPopup, onEnterType, cocos2d::CCObject*)
		}
	};
}
