#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DailyLevelPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
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

	#ifndef GEODE_STATICS_dailyStatusFinished
		#define GEODE_STATICS_dailyStatusFinished
		GEODE_AS_STATIC_FUNCTION(dailyStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_dailyStatusFailed
		#define GEODE_STATICS_dailyStatusFailed
		GEODE_AS_STATIC_FUNCTION(dailyStatusFailed) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFinished
		#define GEODE_STATICS_levelDownloadFinished
		GEODE_AS_STATIC_FUNCTION(levelDownloadFinished) 
	#endif

	#ifndef GEODE_STATICS_levelDownloadFailed
		#define GEODE_STATICS_levelDownloadFailed
		GEODE_AS_STATIC_FUNCTION(levelDownloadFailed) 
	#endif

	#ifndef GEODE_STATICS_claimLevelReward
		#define GEODE_STATICS_claimLevelReward
		GEODE_AS_STATIC_FUNCTION(claimLevelReward) 
	#endif

	#ifndef GEODE_STATICS_createDailyNode
		#define GEODE_STATICS_createDailyNode
		GEODE_AS_STATIC_FUNCTION(createDailyNode) 
	#endif

	#ifndef GEODE_STATICS_createNodeIfLoaded
		#define GEODE_STATICS_createNodeIfLoaded
		GEODE_AS_STATIC_FUNCTION(createNodeIfLoaded) 
	#endif

	#ifndef GEODE_STATICS_downloadAndCreateNode
		#define GEODE_STATICS_downloadAndCreateNode
		GEODE_AS_STATIC_FUNCTION(downloadAndCreateNode) 
	#endif

	#ifndef GEODE_STATICS_exitDailyNode
		#define GEODE_STATICS_exitDailyNode
		GEODE_AS_STATIC_FUNCTION(exitDailyNode) 
	#endif

	#ifndef GEODE_STATICS_getDailyTime
		#define GEODE_STATICS_getDailyTime
		GEODE_AS_STATIC_FUNCTION(getDailyTime) 
	#endif

	#ifndef GEODE_STATICS_getDailyTimeString
		#define GEODE_STATICS_getDailyTimeString
		GEODE_AS_STATIC_FUNCTION(getDailyTimeString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onTheSafe
		#define GEODE_STATICS_onTheSafe
		GEODE_AS_STATIC_FUNCTION(onTheSafe) 
	#endif

	#ifndef GEODE_STATICS_refreshDailyPage
		#define GEODE_STATICS_refreshDailyPage
		GEODE_AS_STATIC_FUNCTION(refreshDailyPage) 
	#endif

	#ifndef GEODE_STATICS_skipDailyLevel
		#define GEODE_STATICS_skipDailyLevel
		GEODE_AS_STATIC_FUNCTION(skipDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_tryGetDailyStatus
		#define GEODE_STATICS_tryGetDailyStatus
		GEODE_AS_STATIC_FUNCTION(tryGetDailyStatus) 
	#endif

	#ifndef GEODE_STATICS_updateTimers
		#define GEODE_STATICS_updateTimers
		GEODE_AS_STATIC_FUNCTION(updateTimers) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
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

	#ifndef GEODE_CONCEPT_CHECK_dailyStatusFinished
		#define GEODE_CONCEPT_CHECK_dailyStatusFinished
		GEODE_CONCEPT_FUNCTION_CHECK(dailyStatusFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dailyStatusFailed
		#define GEODE_CONCEPT_CHECK_dailyStatusFailed
		GEODE_CONCEPT_FUNCTION_CHECK(dailyStatusFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelDownloadFinished
		#define GEODE_CONCEPT_CHECK_levelDownloadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(levelDownloadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelDownloadFailed
		#define GEODE_CONCEPT_CHECK_levelDownloadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(levelDownloadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimLevelReward
		#define GEODE_CONCEPT_CHECK_claimLevelReward
		GEODE_CONCEPT_FUNCTION_CHECK(claimLevelReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createDailyNode
		#define GEODE_CONCEPT_CHECK_createDailyNode
		GEODE_CONCEPT_FUNCTION_CHECK(createDailyNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNodeIfLoaded
		#define GEODE_CONCEPT_CHECK_createNodeIfLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(createNodeIfLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadAndCreateNode
		#define GEODE_CONCEPT_CHECK_downloadAndCreateNode
		GEODE_CONCEPT_FUNCTION_CHECK(downloadAndCreateNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitDailyNode
		#define GEODE_CONCEPT_CHECK_exitDailyNode
		GEODE_CONCEPT_FUNCTION_CHECK(exitDailyNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDailyTime
		#define GEODE_CONCEPT_CHECK_getDailyTime
		GEODE_CONCEPT_FUNCTION_CHECK(getDailyTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDailyTimeString
		#define GEODE_CONCEPT_CHECK_getDailyTimeString
		GEODE_CONCEPT_FUNCTION_CHECK(getDailyTimeString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTheSafe
		#define GEODE_CONCEPT_CHECK_onTheSafe
		GEODE_CONCEPT_FUNCTION_CHECK(onTheSafe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshDailyPage
		#define GEODE_CONCEPT_CHECK_refreshDailyPage
		GEODE_CONCEPT_FUNCTION_CHECK(refreshDailyPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_skipDailyLevel
		#define GEODE_CONCEPT_CHECK_skipDailyLevel
		GEODE_CONCEPT_FUNCTION_CHECK(skipDailyLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetDailyStatus
		#define GEODE_CONCEPT_CHECK_tryGetDailyStatus
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetDailyStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimers
		#define GEODE_CONCEPT_CHECK_updateTimers
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimers) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DailyLevelPage> : ModifyBase<ModifyDerive<Der, DailyLevelPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DailyLevelPage>>;
		using ModifyBase<ModifyDerive<Der, DailyLevelPage>>::ModifyBase;
		using Base = DailyLevelPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJTimedLevelType>::func(&DailyLevelPage::create)), Default, DailyLevelPage, create, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&DailyLevelPage::registerWithTouchDispatcher)), Default, DailyLevelPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&DailyLevelPage::keyBackClicked)), Default, DailyLevelPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&DailyLevelPage::show)), Default, DailyLevelPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<FLAlertLayer*, bool>::func(&DailyLevelPage::FLAlert_Clicked)), Default, DailyLevelPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJTimedLevelType>::func(&DailyLevelPage::dailyStatusFinished)), Default, DailyLevelPage, dailyStatusFinished, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJTimedLevelType, GJErrorCode>::func(&DailyLevelPage::dailyStatusFailed)), Default, DailyLevelPage, dailyStatusFailed, GJTimedLevelType, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<GJGameLevel*>::func(&DailyLevelPage::levelDownloadFinished)), Default, DailyLevelPage, levelDownloadFinished, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<int>::func(&DailyLevelPage::levelDownloadFailed)), Default, DailyLevelPage, levelDownloadFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DailyLevelNode*, GJGameLevel*, cocos2d::CCPoint>::func(&DailyLevelPage::claimLevelReward)), Default, DailyLevelPage, claimLevelReward, DailyLevelNode*, GJGameLevel*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJGameLevel*, bool, float, bool>::func(&DailyLevelPage::createDailyNode)), Default, DailyLevelPage, createDailyNode, GJGameLevel*, bool, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DailyLevelPage::createNodeIfLoaded)), Default, DailyLevelPage, createNodeIfLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DailyLevelPage::downloadAndCreateNode)), Default, DailyLevelPage, downloadAndCreateNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DailyLevelNode*, float>::func(&DailyLevelPage::exitDailyNode)), Default, DailyLevelPage, exitDailyNode, DailyLevelNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DailyLevelPage::getDailyTime)), Default, DailyLevelPage, getDailyTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&DailyLevelPage::getDailyTimeString)), Default, DailyLevelPage, getDailyTimeString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<GJTimedLevelType>::func(&DailyLevelPage::init)), Default, DailyLevelPage, init, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&DailyLevelPage::onClose)), Default, DailyLevelPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&DailyLevelPage::onTheSafe)), Default, DailyLevelPage, onTheSafe, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DailyLevelPage::refreshDailyPage)), Default, DailyLevelPage, refreshDailyPage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DailyLevelNode*, GJGameLevel*>::func(&DailyLevelPage::skipDailyLevel)), Default, DailyLevelPage, skipDailyLevel, DailyLevelNode*, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&DailyLevelPage::tryGetDailyStatus)), Default, DailyLevelPage, tryGetDailyStatus, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&DailyLevelPage::updateTimers)), Default, DailyLevelPage, updateTimers, float)
		}
	};
}
