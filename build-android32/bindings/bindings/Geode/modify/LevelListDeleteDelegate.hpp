#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelListDeleteDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_levelListDeleteFinished
		#define GEODE_CONCEPT_CHECK_levelListDeleteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelListDeleteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelListDeleteFailed
		#define GEODE_CONCEPT_CHECK_levelListDeleteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelListDeleteFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelListDeleteDelegate> : ModifyBase<ModifyDerive<Der, LevelListDeleteDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelListDeleteDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelListDeleteDelegate>>::ModifyBase;
		using Base = LevelListDeleteDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListDeleteDelegate, levelListDeleteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelListDeleteDelegate, levelListDeleteFailed, int)
		}
	};
}
