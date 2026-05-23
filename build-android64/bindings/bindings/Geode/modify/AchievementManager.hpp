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

	#ifndef GEODE_STATICS_areAchievementsEarned
		#define GEODE_STATICS_areAchievementsEarned
		GEODE_AS_STATIC_FUNCTION(areAchievementsEarned) 
	#endif

	#ifndef GEODE_STATICS_checkAchFromUnlock
		#define GEODE_STATICS_checkAchFromUnlock
		GEODE_AS_STATIC_FUNCTION(checkAchFromUnlock) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_getAchievementRewardDict
		#define GEODE_STATICS_getAchievementRewardDict
		GEODE_AS_STATIC_FUNCTION(getAchievementRewardDict) 
	#endif

	#ifndef GEODE_STATICS_getAchievementsWithID
		#define GEODE_STATICS_getAchievementsWithID
		GEODE_AS_STATIC_FUNCTION(getAchievementsWithID) 
	#endif

	#ifndef GEODE_STATICS_getAllAchievements
		#define GEODE_STATICS_getAllAchievements
		GEODE_AS_STATIC_FUNCTION(getAllAchievements) 
	#endif

	#ifndef GEODE_STATICS_getAllAchievementsSorted
		#define GEODE_STATICS_getAllAchievementsSorted
		GEODE_AS_STATIC_FUNCTION(getAllAchievementsSorted) 
	#endif

	#ifndef GEODE_STATICS_isAchievementAvailable
		#define GEODE_STATICS_isAchievementAvailable
		GEODE_AS_STATIC_FUNCTION(isAchievementAvailable) 
	#endif

	#ifndef GEODE_STATICS_isAchievementEarned
		#define GEODE_STATICS_isAchievementEarned
		GEODE_AS_STATIC_FUNCTION(isAchievementEarned) 
	#endif

	#ifndef GEODE_STATICS_limitForAchievement
		#define GEODE_STATICS_limitForAchievement
		GEODE_AS_STATIC_FUNCTION(limitForAchievement) 
	#endif

	#ifndef GEODE_STATICS_notifyAchievement
		#define GEODE_STATICS_notifyAchievement
		GEODE_AS_STATIC_FUNCTION(notifyAchievement) 
	#endif

	#ifndef GEODE_STATICS_notifyAchievementWithID
		#define GEODE_STATICS_notifyAchievementWithID
		GEODE_AS_STATIC_FUNCTION(notifyAchievementWithID) 
	#endif

	#ifndef GEODE_STATICS_percentageForCount
		#define GEODE_STATICS_percentageForCount
		GEODE_AS_STATIC_FUNCTION(percentageForCount) 
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

	#ifndef GEODE_STATICS_resetAchievement
		#define GEODE_STATICS_resetAchievement
		GEODE_AS_STATIC_FUNCTION(resetAchievement) 
	#endif

	#ifndef GEODE_STATICS_resetAchievements
		#define GEODE_STATICS_resetAchievements
		GEODE_AS_STATIC_FUNCTION(resetAchievements) 
	#endif

	#ifndef GEODE_STATICS_setup
		#define GEODE_STATICS_setup
		GEODE_AS_STATIC_FUNCTION(setup) 
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementManager::sharedState)), Default, AchievementManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AchievementManager::init)), Default, AchievementManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, UnlockType>::func(&AchievementManager::achievementForUnlock)), Default, AchievementManager, achievementForUnlock, int, UnlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN18AchievementManager14addAchievementESsSsSsSsSsi")), Default, AchievementManager, addAchievement, gd::string, gd::string, gd::string, gd::string, gd::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementManager::addManualAchievements)), Default, AchievementManager, addManualAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&AchievementManager::areAchievementsEarned)), Default, AchievementManager, areAchievementsEarned, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&AchievementManager::checkAchFromUnlock)), Default, AchievementManager, checkAchFromUnlock, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&AchievementManager::dataLoaded)), Default, AchievementManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&AchievementManager::encodeDataTo)), Default, AchievementManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementManager::firstSetup)), Default, AchievementManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementManager::getAchievementRewardDict)), Default, AchievementManager, getAchievementRewardDict, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&AchievementManager::getAchievementsWithID)), Default, AchievementManager, getAchievementsWithID, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementManager::getAllAchievements)), Default, AchievementManager, getAllAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&AchievementManager::getAllAchievementsSorted)), Default, AchievementManager, getAllAchievementsSorted, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN18AchievementManager22isAchievementAvailableESs")), Default, AchievementManager, isAchievementAvailable, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&AchievementManager::isAchievementEarned)), Default, AchievementManager, isAchievementEarned, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN18AchievementManager19limitForAchievementESs")), Default, AchievementManager, limitForAchievement, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, char const*>::func(&AchievementManager::notifyAchievement)), Default, AchievementManager, notifyAchievement, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&AchievementManager::notifyAchievementWithID)), Default, AchievementManager, notifyAchievementWithID, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&AchievementManager::percentageForCount)), Default, AchievementManager, percentageForCount, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&AchievementManager::percentForAchievement)), Default, AchievementManager, percentForAchievement, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int, bool>::func(&AchievementManager::reportAchievementWithID)), Default, AchievementManager, reportAchievementWithID, char const*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&AchievementManager::reportPlatformAchievementWithID)), Default, AchievementManager, reportPlatformAchievementWithID, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&AchievementManager::resetAchievement)), Default, AchievementManager, resetAchievement, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementManager::resetAchievements)), Default, AchievementManager, resetAchievements, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementManager::setup)), Default, AchievementManager, setup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementManager::storeAchievementUnlocks)), Default, AchievementManager, storeAchievementUnlocks, )
		}
	};
}
