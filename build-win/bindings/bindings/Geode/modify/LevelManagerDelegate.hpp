#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFinished
		#define GEODE_CONCEPT_CHECK_loadLevelsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFailed
		#define GEODE_CONCEPT_CHECK_loadLevelsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelManagerDelegate> : ModifyBase<ModifyDerive<Der, LevelManagerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelManagerDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelManagerDelegate>>::ModifyBase;
		using Base = LevelManagerDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelManagerDelegate, loadLevelsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelManagerDelegate, loadLevelsFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelManagerDelegate, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelManagerDelegate, loadLevelsFailed, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelManagerDelegate, setupPageInfo, gd::string, char const*)
		}
	};
}
