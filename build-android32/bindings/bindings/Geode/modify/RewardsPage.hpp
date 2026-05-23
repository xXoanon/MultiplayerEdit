#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RewardsPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getRewardFrame
		#define GEODE_STATICS_getRewardFrame
		GEODE_AS_STATIC_FUNCTION(getRewardFrame) 
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

	#ifndef GEODE_STATICS_rewardsStatusFinished
		#define GEODE_STATICS_rewardsStatusFinished
		GEODE_AS_STATIC_FUNCTION(rewardsStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_rewardsStatusFailed
		#define GEODE_STATICS_rewardsStatusFailed
		GEODE_AS_STATIC_FUNCTION(rewardsStatusFailed) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFreeStuff
		#define GEODE_STATICS_onFreeStuff
		GEODE_AS_STATIC_FUNCTION(onFreeStuff) 
	#endif

	#ifndef GEODE_STATICS_onReward
		#define GEODE_STATICS_onReward
		GEODE_AS_STATIC_FUNCTION(onReward) 
	#endif

	#ifndef GEODE_STATICS_tryGetRewards
		#define GEODE_STATICS_tryGetRewards
		GEODE_AS_STATIC_FUNCTION(tryGetRewards) 
	#endif

	#ifndef GEODE_STATICS_unlockLayerClosed
		#define GEODE_STATICS_unlockLayerClosed
		GEODE_AS_STATIC_FUNCTION(unlockLayerClosed) 
	#endif

	#ifndef GEODE_STATICS_updateTimers
		#define GEODE_STATICS_updateTimers
		GEODE_AS_STATIC_FUNCTION(updateTimers) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRewardFrame
		#define GEODE_CONCEPT_CHECK_getRewardFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getRewardFrame) 
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

	#ifndef GEODE_CONCEPT_CHECK_rewardsStatusFinished
		#define GEODE_CONCEPT_CHECK_rewardsStatusFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rewardsStatusFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardsStatusFailed
		#define GEODE_CONCEPT_CHECK_rewardsStatusFailed
		GEODE_CONCEPT_FUNCTION_CHECK(rewardsStatusFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFreeStuff
		#define GEODE_CONCEPT_CHECK_onFreeStuff
		GEODE_CONCEPT_FUNCTION_CHECK(onFreeStuff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReward
		#define GEODE_CONCEPT_CHECK_onReward
		GEODE_CONCEPT_FUNCTION_CHECK(onReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetRewards
		#define GEODE_CONCEPT_CHECK_tryGetRewards
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetRewards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockLayerClosed
		#define GEODE_CONCEPT_CHECK_unlockLayerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(unlockLayerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimers
		#define GEODE_CONCEPT_CHECK_updateTimers
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimers) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RewardsPage> : ModifyBase<ModifyDerive<Der, RewardsPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RewardsPage>>;
		using ModifyBase<ModifyDerive<Der, RewardsPage>>::ModifyBase;
		using Base = RewardsPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN11RewardsPageD2Ev")), Default, RewardsPage)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&RewardsPage::create)), Default, RewardsPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int, int>::func(&RewardsPage::getRewardFrame)), Default, RewardsPage, getRewardFrame, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&RewardsPage::init)), Default, RewardsPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&RewardsPage::registerWithTouchDispatcher)), Default, RewardsPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&RewardsPage::keyBackClicked)), Default, RewardsPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&RewardsPage::show)), Default, RewardsPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&RewardsPage::FLAlert_Clicked)), Default, RewardsPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&RewardsPage::rewardsStatusFinished)), Default, RewardsPage, rewardsStatusFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&RewardsPage::rewardsStatusFailed)), Default, RewardsPage, rewardsStatusFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&RewardsPage::onClose)), Default, RewardsPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&RewardsPage::onFreeStuff)), Default, RewardsPage, onFreeStuff, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&RewardsPage::onReward)), Default, RewardsPage, onReward, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&RewardsPage::tryGetRewards)), Default, RewardsPage, tryGetRewards, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<RewardUnlockLayer*>::func(&RewardsPage::unlockLayerClosed)), Default, RewardsPage, unlockLayerClosed, RewardUnlockLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&RewardsPage::updateTimers)), Default, RewardsPage, updateTimers, float)
		}
	};
}
