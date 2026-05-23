#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EndLevelLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_showLayer
		#define GEODE_STATICS_showLayer
		GEODE_AS_STATIC_FUNCTION(showLayer) 
	#endif

	#ifndef GEODE_STATICS_enterAnimFinished
		#define GEODE_STATICS_enterAnimFinished
		GEODE_AS_STATIC_FUNCTION(enterAnimFinished) 
	#endif

	#ifndef GEODE_STATICS_keyUp
		#define GEODE_STATICS_keyUp
		GEODE_AS_STATIC_FUNCTION(keyUp) 
	#endif

	#ifndef GEODE_STATICS_coinEnterFinished
		#define GEODE_STATICS_coinEnterFinished
		GEODE_AS_STATIC_FUNCTION(coinEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_coinEnterFinishedO
		#define GEODE_STATICS_coinEnterFinishedO
		GEODE_AS_STATIC_FUNCTION(coinEnterFinishedO) 
	#endif

	#ifndef GEODE_STATICS_currencyEnterFinished
		#define GEODE_STATICS_currencyEnterFinished
		GEODE_AS_STATIC_FUNCTION(currencyEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_diamondEnterFinished
		#define GEODE_STATICS_diamondEnterFinished
		GEODE_AS_STATIC_FUNCTION(diamondEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_getCoinString
		#define GEODE_STATICS_getCoinString
		GEODE_AS_STATIC_FUNCTION(getCoinString) 
	#endif

	#ifndef GEODE_STATICS_getEndText
		#define GEODE_STATICS_getEndText
		GEODE_AS_STATIC_FUNCTION(getEndText) 
	#endif

	#ifndef GEODE_STATICS_goEdit
		#define GEODE_STATICS_goEdit
		GEODE_AS_STATIC_FUNCTION(goEdit) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEdit
		#define GEODE_STATICS_onEdit
		GEODE_AS_STATIC_FUNCTION(onEdit) 
	#endif

	#ifndef GEODE_STATICS_onEveryplay
		#define GEODE_STATICS_onEveryplay
		GEODE_AS_STATIC_FUNCTION(onEveryplay) 
	#endif

	#ifndef GEODE_STATICS_onHideLayer
		#define GEODE_STATICS_onHideLayer
		GEODE_AS_STATIC_FUNCTION(onHideLayer) 
	#endif

	#ifndef GEODE_STATICS_onLevelLeaderboard
		#define GEODE_STATICS_onLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_onMenu
		#define GEODE_STATICS_onMenu
		GEODE_AS_STATIC_FUNCTION(onMenu) 
	#endif

	#ifndef GEODE_STATICS_onReplay
		#define GEODE_STATICS_onReplay
		GEODE_AS_STATIC_FUNCTION(onReplay) 
	#endif

	#ifndef GEODE_STATICS_onRestartCheckpoint
		#define GEODE_STATICS_onRestartCheckpoint
		GEODE_AS_STATIC_FUNCTION(onRestartCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_playCoinEffect
		#define GEODE_STATICS_playCoinEffect
		GEODE_AS_STATIC_FUNCTION(playCoinEffect) 
	#endif

	#ifndef GEODE_STATICS_playCurrencyEffect
		#define GEODE_STATICS_playCurrencyEffect
		GEODE_AS_STATIC_FUNCTION(playCurrencyEffect) 
	#endif

	#ifndef GEODE_STATICS_playDiamondEffect
		#define GEODE_STATICS_playDiamondEffect
		GEODE_AS_STATIC_FUNCTION(playDiamondEffect) 
	#endif

	#ifndef GEODE_STATICS_playEndEffect
		#define GEODE_STATICS_playEndEffect
		GEODE_AS_STATIC_FUNCTION(playEndEffect) 
	#endif

	#ifndef GEODE_STATICS_playStarEffect
		#define GEODE_STATICS_playStarEffect
		GEODE_AS_STATIC_FUNCTION(playStarEffect) 
	#endif

	#ifndef GEODE_STATICS_starEnterFinished
		#define GEODE_STATICS_starEnterFinished
		GEODE_AS_STATIC_FUNCTION(starEnterFinished) 
	#endif

	#ifndef GEODE_STATICS_tryShowBanner
		#define GEODE_STATICS_tryShowBanner
		GEODE_AS_STATIC_FUNCTION(tryShowBanner) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLayer
		#define GEODE_CONCEPT_CHECK_showLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterAnimFinished
		#define GEODE_CONCEPT_CHECK_enterAnimFinished
		GEODE_CONCEPT_FUNCTION_CHECK(enterAnimFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_coinEnterFinished
		#define GEODE_CONCEPT_CHECK_coinEnterFinished
		GEODE_CONCEPT_FUNCTION_CHECK(coinEnterFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_coinEnterFinishedO
		#define GEODE_CONCEPT_CHECK_coinEnterFinishedO
		GEODE_CONCEPT_FUNCTION_CHECK(coinEnterFinishedO) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_currencyEnterFinished
		#define GEODE_CONCEPT_CHECK_currencyEnterFinished
		GEODE_CONCEPT_FUNCTION_CHECK(currencyEnterFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_diamondEnterFinished
		#define GEODE_CONCEPT_CHECK_diamondEnterFinished
		GEODE_CONCEPT_FUNCTION_CHECK(diamondEnterFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoinString
		#define GEODE_CONCEPT_CHECK_getCoinString
		GEODE_CONCEPT_FUNCTION_CHECK(getCoinString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndText
		#define GEODE_CONCEPT_CHECK_getEndText
		GEODE_CONCEPT_FUNCTION_CHECK(getEndText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goEdit
		#define GEODE_CONCEPT_CHECK_goEdit
		GEODE_CONCEPT_FUNCTION_CHECK(goEdit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEdit
		#define GEODE_CONCEPT_CHECK_onEdit
		GEODE_CONCEPT_FUNCTION_CHECK(onEdit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEveryplay
		#define GEODE_CONCEPT_CHECK_onEveryplay
		GEODE_CONCEPT_FUNCTION_CHECK(onEveryplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHideLayer
		#define GEODE_CONCEPT_CHECK_onHideLayer
		GEODE_CONCEPT_FUNCTION_CHECK(onHideLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelLeaderboard
		#define GEODE_CONCEPT_CHECK_onLevelLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMenu
		#define GEODE_CONCEPT_CHECK_onMenu
		GEODE_CONCEPT_FUNCTION_CHECK(onMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReplay
		#define GEODE_CONCEPT_CHECK_onReplay
		GEODE_CONCEPT_FUNCTION_CHECK(onReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRestartCheckpoint
		#define GEODE_CONCEPT_CHECK_onRestartCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(onRestartCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playCoinEffect
		#define GEODE_CONCEPT_CHECK_playCoinEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playCoinEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playCurrencyEffect
		#define GEODE_CONCEPT_CHECK_playCurrencyEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playCurrencyEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playDiamondEffect
		#define GEODE_CONCEPT_CHECK_playDiamondEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playDiamondEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEndEffect
		#define GEODE_CONCEPT_CHECK_playEndEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playEndEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStarEffect
		#define GEODE_CONCEPT_CHECK_playStarEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playStarEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_starEnterFinished
		#define GEODE_CONCEPT_CHECK_starEnterFinished
		GEODE_CONCEPT_FUNCTION_CHECK(starEnterFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowBanner
		#define GEODE_CONCEPT_CHECK_tryShowBanner
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowBanner) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EndLevelLayer> : ModifyBase<ModifyDerive<Der, EndLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EndLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, EndLevelLayer>>::ModifyBase;
		using Base = EndLevelLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13EndLevelLayerC2Ev")), Default, EndLevelLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13EndLevelLayerD2Ev")), Default, EndLevelLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<PlayLayer*>::func(&EndLevelLayer::create)), Default, EndLevelLayer, create, PlayLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EndLevelLayer::keyBackClicked)), Default, EndLevelLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::enumKeyCodes, double>::func(&EndLevelLayer::keyDown)), Default, EndLevelLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EndLevelLayer::customSetup)), Default, EndLevelLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&EndLevelLayer::showLayer)), Default, EndLevelLayer, showLayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&EndLevelLayer::enterAnimFinished)), Default, EndLevelLayer, enterAnimFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::enumKeyCodes, double>::func(&EndLevelLayer::keyUp)), Default, EndLevelLayer, keyUp, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCPoint>::func(&EndLevelLayer::coinEnterFinished)), Default, EndLevelLayer, coinEnterFinished, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EndLevelLayer::coinEnterFinishedO)), Default, EndLevelLayer, coinEnterFinishedO, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EndLevelLayer::currencyEnterFinished)), Default, EndLevelLayer, currencyEnterFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EndLevelLayer::diamondEnterFinished)), Default, EndLevelLayer, diamondEnterFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EndLevelLayer::getCoinString)), Default, EndLevelLayer, getCoinString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EndLevelLayer::getEndText)), Default, EndLevelLayer, getEndText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EndLevelLayer::goEdit)), Default, EndLevelLayer, goEdit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<PlayLayer*>::func(&EndLevelLayer::init)), Default, EndLevelLayer, init, PlayLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EndLevelLayer::onEdit)), Default, EndLevelLayer, onEdit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EndLevelLayer::onEveryplay)), Default, EndLevelLayer, onEveryplay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EndLevelLayer::onHideLayer)), Default, EndLevelLayer, onHideLayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EndLevelLayer::onLevelLeaderboard)), Default, EndLevelLayer, onLevelLeaderboard, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EndLevelLayer::onMenu)), Default, EndLevelLayer, onMenu, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EndLevelLayer::onReplay)), Default, EndLevelLayer, onReplay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&EndLevelLayer::onRestartCheckpoint)), Default, EndLevelLayer, onRestartCheckpoint, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&EndLevelLayer::playCoinEffect)), Default, EndLevelLayer, playCoinEffect, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&EndLevelLayer::playCurrencyEffect)), Default, EndLevelLayer, playCurrencyEffect, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&EndLevelLayer::playDiamondEffect)), Default, EndLevelLayer, playDiamondEffect, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EndLevelLayer::playEndEffect)), Default, EndLevelLayer, playEndEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&EndLevelLayer::playStarEffect)), Default, EndLevelLayer, playStarEffect, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&EndLevelLayer::starEnterFinished)), Default, EndLevelLayer, starEnterFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<float>::func(&EndLevelLayer::tryShowBanner)), Default, EndLevelLayer, tryShowBanner, float)
		}
	};
}
