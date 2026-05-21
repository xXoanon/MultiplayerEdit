#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LeaderboardManagerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFinished
		#define GEODE_CONCEPT_CHECK_updateUserScoreFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFailed
		#define GEODE_CONCEPT_CHECK_updateUserScoreFailed
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LeaderboardManagerDelegate> : ModifyBase<ModifyDerive<Der, LeaderboardManagerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LeaderboardManagerDelegate>>;
		using ModifyBase<ModifyDerive<Der, LeaderboardManagerDelegate>>::ModifyBase;
		using Base = LeaderboardManagerDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LeaderboardManagerDelegate, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LeaderboardManagerDelegate, updateUserScoreFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LeaderboardManagerDelegate, loadLeaderboardFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LeaderboardManagerDelegate, loadLeaderboardFailed, char const*)
		}
	};
}
