#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupRotateGameplayPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlusButton
		#define GEODE_CONCEPT_CHECK_onPlusButton
		GEODE_CONCEPT_FUNCTION_CHECK(onPlusButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupRotateGameplayPopup> : ModifyBase<ModifyDerive<Der, SetupRotateGameplayPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupRotateGameplayPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupRotateGameplayPopup>>::ModifyBase;
		using Base = SetupRotateGameplayPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupRotateGameplayPopup, create, RotateGameplayGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x441f20, Thiscall, SetupRotateGameplayPopup, onPlusButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x441fd0, Thiscall, SetupRotateGameplayPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x441550, Thiscall, SetupRotateGameplayPopup, init, RotateGameplayGameObject*, cocos2d::CCArray*)
		}
	};
}
