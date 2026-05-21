#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelDeleteDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_levelDeleteFinished
		#define GEODE_CONCEPT_CHECK_levelDeleteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelDeleteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelDeleteFailed
		#define GEODE_CONCEPT_CHECK_levelDeleteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelDeleteFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelDeleteDelegate> : ModifyBase<ModifyDerive<Der, LevelDeleteDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelDeleteDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelDeleteDelegate>>::ModifyBase;
		using Base = LevelDeleteDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelDeleteDelegate, levelDeleteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelDeleteDelegate, levelDeleteFailed, int)
		}
	};
}
