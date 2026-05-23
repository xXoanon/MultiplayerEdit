#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelUploadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_levelUploadFinished
		#define GEODE_CONCEPT_CHECK_levelUploadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelUploadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelUploadFailed
		#define GEODE_CONCEPT_CHECK_levelUploadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelUploadFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelUploadDelegate> : ModifyBase<ModifyDerive<Der, LevelUploadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelUploadDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelUploadDelegate>>::ModifyBase;
		using Base = LevelUploadDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelUploadDelegate, levelUploadFinished, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelUploadDelegate, levelUploadFailed, GJGameLevel*)
		}
	};
}
