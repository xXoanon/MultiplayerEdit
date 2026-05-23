#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ChallengesPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_challengeStatusFinished
		#define GEODE_STATICS_challengeStatusFinished
		GEODE_AS_STATIC_FUNCTION(challengeStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_challengeStatusFailed
		#define GEODE_STATICS_challengeStatusFailed
		GEODE_AS_STATIC_FUNCTION(challengeStatusFailed) 
	#endif

	#ifndef GEODE_STATICS_currencyWillExit
		#define GEODE_STATICS_currencyWillExit
		GEODE_AS_STATIC_FUNCTION(currencyWillExit) 
	#endif

	#ifndef GEODE_STATICS_claimItem
		#define GEODE_STATICS_claimItem
		GEODE_AS_STATIC_FUNCTION(claimItem) 
	#endif

	#ifndef GEODE_STATICS_createChallengeNode
		#define GEODE_STATICS_createChallengeNode
		GEODE_AS_STATIC_FUNCTION(createChallengeNode) 
	#endif

	#ifndef GEODE_STATICS_exitNodeAtSlot
		#define GEODE_STATICS_exitNodeAtSlot
		GEODE_AS_STATIC_FUNCTION(exitNodeAtSlot) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_tryGetChallenges
		#define GEODE_STATICS_tryGetChallenges
		GEODE_AS_STATIC_FUNCTION(tryGetChallenges) 
	#endif

	#ifndef GEODE_STATICS_updateDots
		#define GEODE_STATICS_updateDots
		GEODE_AS_STATIC_FUNCTION(updateDots) 
	#endif

	#ifndef GEODE_STATICS_updateTimers
		#define GEODE_STATICS_updateTimers
		GEODE_AS_STATIC_FUNCTION(updateTimers) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_challengeStatusFinished
		#define GEODE_CONCEPT_CHECK_challengeStatusFinished
		GEODE_CONCEPT_FUNCTION_CHECK(challengeStatusFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_challengeStatusFailed
		#define GEODE_CONCEPT_CHECK_challengeStatusFailed
		GEODE_CONCEPT_FUNCTION_CHECK(challengeStatusFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_currencyWillExit
		#define GEODE_CONCEPT_CHECK_currencyWillExit
		GEODE_CONCEPT_FUNCTION_CHECK(currencyWillExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimItem
		#define GEODE_CONCEPT_CHECK_claimItem
		GEODE_CONCEPT_FUNCTION_CHECK(claimItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createChallengeNode
		#define GEODE_CONCEPT_CHECK_createChallengeNode
		GEODE_CONCEPT_FUNCTION_CHECK(createChallengeNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitNodeAtSlot
		#define GEODE_CONCEPT_CHECK_exitNodeAtSlot
		GEODE_CONCEPT_FUNCTION_CHECK(exitNodeAtSlot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetChallenges
		#define GEODE_CONCEPT_CHECK_tryGetChallenges
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetChallenges) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDots
		#define GEODE_CONCEPT_CHECK_updateDots
		GEODE_CONCEPT_FUNCTION_CHECK(updateDots) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimers
		#define GEODE_CONCEPT_CHECK_updateTimers
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimers) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ChallengesPage> : ModifyBase<ModifyDerive<Der, ChallengesPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ChallengesPage>>;
		using ModifyBase<ModifyDerive<Der, ChallengesPage>>::ModifyBase;
		using Base = ChallengesPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN14ChallengesPageD2Ev")), Default, ChallengesPage)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ChallengesPage::create)), Default, ChallengesPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ChallengesPage::init)), Default, ChallengesPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ChallengesPage::registerWithTouchDispatcher)), Default, ChallengesPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ChallengesPage::keyBackClicked)), Default, ChallengesPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ChallengesPage::show)), Default, ChallengesPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&ChallengesPage::FLAlert_Clicked)), Default, ChallengesPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ChallengesPage::challengeStatusFinished)), Default, ChallengesPage, challengeStatusFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&ChallengesPage::challengeStatusFailed)), Default, ChallengesPage, challengeStatusFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<CurrencyRewardLayer*>::func(&ChallengesPage::currencyWillExit)), Default, ChallengesPage, currencyWillExit, CurrencyRewardLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<ChallengeNode*, GJChallengeItem*, cocos2d::CCPoint>::func(&ChallengesPage::claimItem)), Default, ChallengesPage, claimItem, ChallengeNode*, GJChallengeItem*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, bool, float, bool>::func(&ChallengesPage::createChallengeNode)), Default, ChallengesPage, createChallengeNode, int, bool, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, float>::func(&ChallengesPage::exitNodeAtSlot)), Default, ChallengesPage, exitNodeAtSlot, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&ChallengesPage::onClose)), Default, ChallengesPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ChallengesPage::tryGetChallenges)), Default, ChallengesPage, tryGetChallenges, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&ChallengesPage::updateDots)), Default, ChallengesPage, updateDots, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&ChallengesPage::updateTimers)), Default, ChallengesPage, updateTimers, float)
		}
	};
}
