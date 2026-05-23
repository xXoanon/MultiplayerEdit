#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSettingsDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_levelSettingsUpdated
		#define GEODE_CONCEPT_CHECK_levelSettingsUpdated
		GEODE_CONCEPT_FUNCTION_CHECK(levelSettingsUpdated) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSettingsDelegate> : ModifyBase<ModifyDerive<Der, LevelSettingsDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSettingsDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelSettingsDelegate>>::ModifyBase;
		using Base = LevelSettingsDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSettingsDelegate, levelSettingsUpdated, )
		}
	};
}
