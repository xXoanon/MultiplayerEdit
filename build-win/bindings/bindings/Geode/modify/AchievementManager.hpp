#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AchievementManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_achievementForUnlock
		#define GEODE_STATICS_achievementForUnlock
		GEODE_AS_STATIC_FUNCTION(achievementForUnlock) 
	#endif

	#ifndef GEODE_STATICS_addAchievement
		#define GEODE_STATICS_addAchievement
		GEODE_AS_STATIC_FUNCTION(addAchievement) 
	#endif

	#ifndef GEODE_STATICS_addManualAchievements
		#define GEODE_STATICS_addManualAchievements
		GEODE_AS_STATIC_FUNCTION(addManualAchievements) 
	#endif

	#ifndef GEODE_STATICS_getAchievementRewardDict
		#define GEODE_STATICS_getAchievementRewardDict
		GEODE_AS_STATIC_FUNCTION(getAchievementRewardDict) 
	#endif

	#ifndef GEODE_STATICS_getAchievementsWithID
		#define GEODE_STATICS_getAchievementsWithID
		GEODE_AS_STATIC_FUNCTION(getAchievementsWithID) 
	#endif

	#ifndef GEODE_STATICS_getAllAchievementsSorted
		#define GEODE_STATICS_getAllAchievementsSorted
		GEODE_AS_STATIC_FUNCTION(getAllAchievementsSorted) 
	#endif

	#ifndef GEODE_STATICS_isAchievementEarned
		#define GEODE_STATICS_isAchievementEarned
		GEODE_AS_STATIC_FUNCTION(isAchievementEarned) 
	#endif

	#ifndef GEODE_STATICS_notifyAchievementWithID
		#define GEODE_STATICS_notifyAchievementWithID
		GEODE_AS_STATIC_FUNCTION(notifyAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_percentForAchievement
		#define GEODE_STATICS_percentForAchievement
		GEODE_AS_STATIC_FUNCTION(percentForAchievement) 
	#endif

	#ifndef GEODE_STATICS_reportAchievementWithID
		#define GEODE_STATICS_reportAchievementWithID
		GEODE_AS_STATIC_FUNCTION(reportAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_reportPlatformAchievementWithID
		#define GEODE_STATICS_reportPlatformAchievementWithID
		GEODE_AS_STATIC_FUNCTION(reportPlatformAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_storeAchievementUnlocks
		#define GEODE_STATICS_storeAchievementUnlocks
		GEODE_AS_STATIC_FUNCTION(storeAchievementUnlocks) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_achievementForUnlock
		#define GEODE_CONCEPT_CHECK_achievementForUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(achievementForUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAchievement
		#define GEODE_CONCEPT_CHECK_addAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(addAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addManualAchievements
		#define GEODE_CONCEPT_CHECK_addManualAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(addManualAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areAchievementsEarned
		#define GEODE_CONCEPT_CHECK_areAchievementsEarned
		GEODE_CONCEPT_FUNCTION_CHECK(areAchievementsEarned) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkAchFromUnlock
		#define GEODE_CONCEPT_CHECK_checkAchFromUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(checkAchFromUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAchievementRewardDict
		#define GEODE_CONCEPT_CHECK_getAchievementRewardDict
		GEODE_CONCEPT_FUNCTION_CHECK(getAchievementRewardDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAchievementsWithID
		#define GEODE_CONCEPT_CHECK_getAchievementsWithID
		GEODE_CONCEPT_FUNCTION_CHECK(getAchievementsWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllAchievements
		#define GEODE_CONCEPT_CHECK_getAllAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(getAllAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllAchievementsSorted
		#define GEODE_CONCEPT_CHECK_getAllAchievementsSorted
		GEODE_CONCEPT_FUNCTION_CHECK(getAllAchievementsSorted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isAchievementAvailable
		#define GEODE_CONCEPT_CHECK_isAchievementAvailable
		GEODE_CONCEPT_FUNCTION_CHECK(isAchievementAvailable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isAchievementEarned
		#define GEODE_CONCEPT_CHECK_isAchievementEarned
		GEODE_CONCEPT_FUNCTION_CHECK(isAchievementEarned) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_limitForAchievement
		#define GEODE_CONCEPT_CHECK_limitForAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(limitForAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_notifyAchievement
		#define GEODE_CONCEPT_CHECK_notifyAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(notifyAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_notifyAchievementWithID
		#define GEODE_CONCEPT_CHECK_notifyAchievementWithID
		GEODE_CONCEPT_FUNCTION_CHECK(notifyAchievementWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_percentageForCount
		#define GEODE_CONCEPT_CHECK_percentageForCount
		GEODE_CONCEPT_FUNCTION_CHECK(percentageForCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_percentForAchievement
		#define GEODE_CONCEPT_CHECK_percentForAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(percentForAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportAchievementWithID
		#define GEODE_CONCEPT_CHECK_reportAchievementWithID
		GEODE_CONCEPT_FUNCTION_CHECK(reportAchievementWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportPlatformAchievementWithID
		#define GEODE_CONCEPT_CHECK_reportPlatformAchievementWithID
		GEODE_CONCEPT_FUNCTION_CHECK(reportPlatformAchievementWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAchievement
		#define GEODE_CONCEPT_CHECK_resetAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(resetAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAchievements
		#define GEODE_CONCEPT_CHECK_resetAchievements
		GEODE_CONCEPT_FUNCTION_CHECK(resetAchievements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setup
		#define GEODE_CONCEPT_CHECK_setup
		GEODE_CONCEPT_FUNCTION_CHECK(setup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeAchievementUnlocks
		#define GEODE_CONCEPT_CHECK_storeAchievementUnlocks
		GEODE_CONCEPT_FUNCTION_CHECK(storeAchievementUnlocks) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AchievementManager> : ModifyBase<ModifyDerive<Der, AchievementManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AchievementManager>>;
		using ModifyBase<ModifyDerive<Der, AchievementManager>>::ModifyBase;
		using Base = AchievementManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7da0, Default, AchievementManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e60, Thiscall, AchievementManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a1c0, Thiscall, AchievementManager, achievementForUnlock, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ef0, Thiscall, AchievementManager, addAchievement, gd::string, gd::string, gd::string, gd::string, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8410, Thiscall, AchievementManager, addManualAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, areAchievementsEarned, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, checkAchFromUnlock, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AchievementManager, getAchievementRewardDict, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39d70, Thiscall, AchievementManager, getAchievementsWithID, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, getAllAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39b50, Thiscall, AchievementManager, getAllAchievementsSorted, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, isAchievementAvailable, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39a70, Thiscall, AchievementManager, isAchievementEarned, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, limitForAchievement, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, notifyAchievement, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a470, Thiscall, AchievementManager, notifyAchievementWithID, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, percentageForCount, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39a90, Thiscall, AchievementManager, percentForAchievement, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AchievementManager, reportAchievementWithID, char const*, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AchievementManager, reportPlatformAchievementWithID, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, resetAchievement, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, resetAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AchievementManager, setup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e20, Thiscall, AchievementManager, storeAchievementUnlocks, )
		}
	};
}
