#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelCommentDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_loadCommentsFinished
		#define GEODE_CONCEPT_CHECK_loadCommentsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadCommentsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCommentsFailed
		#define GEODE_CONCEPT_CHECK_loadCommentsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadCommentsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFinished
		#define GEODE_CONCEPT_CHECK_updateUserScoreFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelCommentDelegate> : ModifyBase<ModifyDerive<Der, LevelCommentDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelCommentDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelCommentDelegate>>::ModifyBase;
		using Base = LevelCommentDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelCommentDelegate, loadCommentsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelCommentDelegate, loadCommentsFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelCommentDelegate, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelCommentDelegate, setupPageInfo, gd::string, char const*)
		}
	};
}
