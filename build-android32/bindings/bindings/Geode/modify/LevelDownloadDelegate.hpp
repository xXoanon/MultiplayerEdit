#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelDownloadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_levelDownloadFinished
		#define GEODE_CONCEPT_CHECK_levelDownloadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelDownloadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelDownloadFailed
		#define GEODE_CONCEPT_CHECK_levelDownloadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelDownloadFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelDownloadDelegate> : ModifyBase<ModifyDerive<Der, LevelDownloadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelDownloadDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelDownloadDelegate>>::ModifyBase;
		using Base = LevelDownloadDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelDownloadDelegate, levelDownloadFinished, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelDownloadDelegate, levelDownloadFailed, int)
		}
	};
}
