#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AchievementNotifier.hpp>
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

	#ifndef GEODE_STATICS_achievementDisplayFinished
		#define GEODE_STATICS_achievementDisplayFinished
		GEODE_AS_STATIC_FUNCTION(achievementDisplayFinished) 
	#endif

	#ifndef GEODE_STATICS_notifyAchievement
		#define GEODE_STATICS_notifyAchievement
		GEODE_AS_STATIC_FUNCTION(notifyAchievement) 
	#endif

	#ifndef GEODE_STATICS_showNextAchievement
		#define GEODE_STATICS_showNextAchievement
		GEODE_AS_STATIC_FUNCTION(showNextAchievement) 
	#endif

	#ifndef GEODE_STATICS_willSwitchToScene
		#define GEODE_STATICS_willSwitchToScene
		GEODE_AS_STATIC_FUNCTION(willSwitchToScene) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_achievementDisplayFinished
		#define GEODE_CONCEPT_CHECK_achievementDisplayFinished
		GEODE_CONCEPT_FUNCTION_CHECK(achievementDisplayFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_notifyAchievement
		#define GEODE_CONCEPT_CHECK_notifyAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(notifyAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showNextAchievement
		#define GEODE_CONCEPT_CHECK_showNextAchievement
		GEODE_CONCEPT_FUNCTION_CHECK(showNextAchievement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_willSwitchToScene
		#define GEODE_CONCEPT_CHECK_willSwitchToScene
		GEODE_CONCEPT_FUNCTION_CHECK(willSwitchToScene) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AchievementNotifier> : ModifyBase<ModifyDerive<Der, AchievementNotifier>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AchievementNotifier>>;
		using ModifyBase<ModifyDerive<Der, AchievementNotifier>>::ModifyBase;
		using Base = AchievementNotifier;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementNotifier::sharedState)), Default, AchievementNotifier, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&AchievementNotifier::init)), Default, AchievementNotifier, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementNotifier::achievementDisplayFinished)), Default, AchievementNotifier, achievementDisplayFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, char const*, bool>::func(&AchievementNotifier::notifyAchievement)), Default, AchievementNotifier, notifyAchievement, char const*, char const*, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&AchievementNotifier::showNextAchievement)), Default, AchievementNotifier, showNextAchievement, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCScene*>::func(&AchievementNotifier::willSwitchToScene)), Default, AchievementNotifier, willSwitchToScene, cocos2d::CCScene*)
		}
	};
}
