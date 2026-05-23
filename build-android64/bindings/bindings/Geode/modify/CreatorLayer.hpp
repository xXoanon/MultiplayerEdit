#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreatorLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_sceneWillResume
		#define GEODE_STATICS_sceneWillResume
		GEODE_AS_STATIC_FUNCTION(sceneWillResume) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_canPlayOnlineLevels
		#define GEODE_STATICS_canPlayOnlineLevels
		GEODE_AS_STATIC_FUNCTION(canPlayOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_checkQuestsStatus
		#define GEODE_STATICS_checkQuestsStatus
		GEODE_AS_STATIC_FUNCTION(checkQuestsStatus) 
	#endif

	#ifndef GEODE_STATICS_onAdventureMap
		#define GEODE_STATICS_onAdventureMap
		GEODE_AS_STATIC_FUNCTION(onAdventureMap) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onChallenge
		#define GEODE_STATICS_onChallenge
		GEODE_AS_STATIC_FUNCTION(onChallenge) 
	#endif

	#ifndef GEODE_STATICS_onDailyLevel
		#define GEODE_STATICS_onDailyLevel
		GEODE_AS_STATIC_FUNCTION(onDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_onEventLevel
		#define GEODE_STATICS_onEventLevel
		GEODE_AS_STATIC_FUNCTION(onEventLevel) 
	#endif

	#ifndef GEODE_STATICS_onFameLevels
		#define GEODE_STATICS_onFameLevels
		GEODE_AS_STATIC_FUNCTION(onFameLevels) 
	#endif

	#ifndef GEODE_STATICS_onFeaturedLevels
		#define GEODE_STATICS_onFeaturedLevels
		GEODE_AS_STATIC_FUNCTION(onFeaturedLevels) 
	#endif

	#ifndef GEODE_STATICS_onGauntlets
		#define GEODE_STATICS_onGauntlets
		GEODE_AS_STATIC_FUNCTION(onGauntlets) 
	#endif

	#ifndef GEODE_STATICS_onLeaderboards
		#define GEODE_STATICS_onLeaderboards
		GEODE_AS_STATIC_FUNCTION(onLeaderboards) 
	#endif

	#ifndef GEODE_STATICS_onMapPacks
		#define GEODE_STATICS_onMapPacks
		GEODE_AS_STATIC_FUNCTION(onMapPacks) 
	#endif

	#ifndef GEODE_STATICS_onMultiplayer
		#define GEODE_STATICS_onMultiplayer
		GEODE_AS_STATIC_FUNCTION(onMultiplayer) 
	#endif

	#ifndef GEODE_STATICS_onMyLevels
		#define GEODE_STATICS_onMyLevels
		GEODE_AS_STATIC_FUNCTION(onMyLevels) 
	#endif

	#ifndef GEODE_STATICS_onOnlineLevels
		#define GEODE_STATICS_onOnlineLevels
		GEODE_AS_STATIC_FUNCTION(onOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_onOnlyFullVersion
		#define GEODE_STATICS_onOnlyFullVersion
		GEODE_AS_STATIC_FUNCTION(onOnlyFullVersion) 
	#endif

	#ifndef GEODE_STATICS_onPaths
		#define GEODE_STATICS_onPaths
		GEODE_AS_STATIC_FUNCTION(onPaths) 
	#endif

	#ifndef GEODE_STATICS_onSavedLevels
		#define GEODE_STATICS_onSavedLevels
		GEODE_AS_STATIC_FUNCTION(onSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_onSecretVault
		#define GEODE_STATICS_onSecretVault
		GEODE_AS_STATIC_FUNCTION(onSecretVault) 
	#endif

	#ifndef GEODE_STATICS_onTopLists
		#define GEODE_STATICS_onTopLists
		GEODE_AS_STATIC_FUNCTION(onTopLists) 
	#endif

	#ifndef GEODE_STATICS_onTreasureRoom
		#define GEODE_STATICS_onTreasureRoom
		GEODE_AS_STATIC_FUNCTION(onTreasureRoom) 
	#endif

	#ifndef GEODE_STATICS_onWeeklyLevel
		#define GEODE_STATICS_onWeeklyLevel
		GEODE_AS_STATIC_FUNCTION(onWeeklyLevel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sceneWillResume
		#define GEODE_CONCEPT_CHECK_sceneWillResume
		GEODE_CONCEPT_FUNCTION_CHECK(sceneWillResume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canPlayOnlineLevels
		#define GEODE_CONCEPT_CHECK_canPlayOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(canPlayOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkQuestsStatus
		#define GEODE_CONCEPT_CHECK_checkQuestsStatus
		GEODE_CONCEPT_FUNCTION_CHECK(checkQuestsStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdventureMap
		#define GEODE_CONCEPT_CHECK_onAdventureMap
		GEODE_CONCEPT_FUNCTION_CHECK(onAdventureMap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChallenge
		#define GEODE_CONCEPT_CHECK_onChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(onChallenge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDailyLevel
		#define GEODE_CONCEPT_CHECK_onDailyLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onDailyLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEventLevel
		#define GEODE_CONCEPT_CHECK_onEventLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onEventLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFameLevels
		#define GEODE_CONCEPT_CHECK_onFameLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onFameLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFeaturedLevels
		#define GEODE_CONCEPT_CHECK_onFeaturedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onFeaturedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGauntlets
		#define GEODE_CONCEPT_CHECK_onGauntlets
		GEODE_CONCEPT_FUNCTION_CHECK(onGauntlets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLeaderboards
		#define GEODE_CONCEPT_CHECK_onLeaderboards
		GEODE_CONCEPT_FUNCTION_CHECK(onLeaderboards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMapPacks
		#define GEODE_CONCEPT_CHECK_onMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(onMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMultiplayer
		#define GEODE_CONCEPT_CHECK_onMultiplayer
		GEODE_CONCEPT_FUNCTION_CHECK(onMultiplayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMyLevels
		#define GEODE_CONCEPT_CHECK_onMyLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onMyLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOnlineLevels
		#define GEODE_CONCEPT_CHECK_onOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOnlyFullVersion
		#define GEODE_CONCEPT_CHECK_onOnlyFullVersion
		GEODE_CONCEPT_FUNCTION_CHECK(onOnlyFullVersion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaths
		#define GEODE_CONCEPT_CHECK_onPaths
		GEODE_CONCEPT_FUNCTION_CHECK(onPaths) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSavedLevels
		#define GEODE_CONCEPT_CHECK_onSavedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onSavedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSecretVault
		#define GEODE_CONCEPT_CHECK_onSecretVault
		GEODE_CONCEPT_FUNCTION_CHECK(onSecretVault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTopLists
		#define GEODE_CONCEPT_CHECK_onTopLists
		GEODE_CONCEPT_FUNCTION_CHECK(onTopLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTreasureRoom
		#define GEODE_CONCEPT_CHECK_onTreasureRoom
		GEODE_CONCEPT_FUNCTION_CHECK(onTreasureRoom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onWeeklyLevel
		#define GEODE_CONCEPT_CHECK_onWeeklyLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onWeeklyLevel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreatorLayer> : ModifyBase<ModifyDerive<Der, CreatorLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreatorLayer>>;
		using ModifyBase<ModifyDerive<Der, CreatorLayer>>::ModifyBase;
		using Base = CreatorLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CreatorLayer::create)), Default, CreatorLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CreatorLayer::scene)), Default, CreatorLayer, scene, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CreatorLayer::init)), Default, CreatorLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CreatorLayer::keyBackClicked)), Default, CreatorLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&CreatorLayer::sceneWillResume)), Default, CreatorLayer, sceneWillResume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<DialogLayer*>::func(&CreatorLayer::dialogClosed)), Default, CreatorLayer, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CreatorLayer::canPlayOnlineLevels)), Default, CreatorLayer, canPlayOnlineLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&CreatorLayer::checkQuestsStatus)), Default, CreatorLayer, checkQuestsStatus, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onAdventureMap)), Default, CreatorLayer, onAdventureMap, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onBack)), Default, CreatorLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onChallenge)), Default, CreatorLayer, onChallenge, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onDailyLevel)), Default, CreatorLayer, onDailyLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onEventLevel)), Default, CreatorLayer, onEventLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onFameLevels)), Default, CreatorLayer, onFameLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onFeaturedLevels)), Default, CreatorLayer, onFeaturedLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onGauntlets)), Default, CreatorLayer, onGauntlets, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onLeaderboards)), Default, CreatorLayer, onLeaderboards, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onMapPacks)), Default, CreatorLayer, onMapPacks, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onMultiplayer)), Default, CreatorLayer, onMultiplayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onMyLevels)), Default, CreatorLayer, onMyLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onOnlineLevels)), Default, CreatorLayer, onOnlineLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onOnlyFullVersion)), Default, CreatorLayer, onOnlyFullVersion, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onPaths)), Default, CreatorLayer, onPaths, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onSavedLevels)), Default, CreatorLayer, onSavedLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onSecretVault)), Default, CreatorLayer, onSecretVault, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onTopLists)), Default, CreatorLayer, onTopLists, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onTreasureRoom)), Default, CreatorLayer, onTreasureRoom, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&CreatorLayer::onWeeklyLevel)), Default, CreatorLayer, onWeeklyLevel, cocos2d::CCObject*)
		}
	};
}
