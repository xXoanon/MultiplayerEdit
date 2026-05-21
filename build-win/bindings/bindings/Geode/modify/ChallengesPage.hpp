#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ChallengesPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ChallengesPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x85350, Thiscall, ChallengesPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, ChallengesPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x869d0, Thiscall, ChallengesPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x867f0, Thiscall, ChallengesPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ChallengesPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x85e00, Thiscall, ChallengesPage, challengeStatusFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x85f90, Thiscall, ChallengesPage, challengeStatusFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86d10, Thiscall, ChallengesPage, currencyWillExit, CurrencyRewardLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86a20, Thiscall, ChallengesPage, claimItem, ChallengeNode*, GJChallengeItem*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x860e0, Thiscall, ChallengesPage, createChallengeNode, int, bool, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86410, Thiscall, ChallengesPage, exitNodeAtSlot, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86990, Thiscall, ChallengesPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86060, Thiscall, ChallengesPage, tryGetChallenges, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x85d60, Thiscall, ChallengesPage, updateDots, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86500, Thiscall, ChallengesPage, updateTimers, float)
		}
	};
}
