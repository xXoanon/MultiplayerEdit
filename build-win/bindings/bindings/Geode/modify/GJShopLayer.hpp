#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJShopLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_didPurchaseItem
		#define GEODE_STATICS_didPurchaseItem
		GEODE_AS_STATIC_FUNCTION(didPurchaseItem) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoFinished
		#define GEODE_STATICS_rewardedVideoFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_exitVideoAdItems
		#define GEODE_STATICS_exitVideoAdItems
		GEODE_AS_STATIC_FUNCTION(exitVideoAdItems) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onCommunityCredits
		#define GEODE_STATICS_onCommunityCredits
		GEODE_AS_STATIC_FUNCTION(onCommunityCredits) 
	#endif

	#ifndef GEODE_STATICS_onSelectItem
		#define GEODE_STATICS_onSelectItem
		GEODE_AS_STATIC_FUNCTION(onSelectItem) 
	#endif

	#ifndef GEODE_STATICS_onVideoAd
		#define GEODE_STATICS_onVideoAd
		GEODE_AS_STATIC_FUNCTION(onVideoAd) 
	#endif

	#ifndef GEODE_STATICS_showCantAffordMessage
		#define GEODE_STATICS_showCantAffordMessage
		GEODE_AS_STATIC_FUNCTION(showCantAffordMessage) 
	#endif

	#ifndef GEODE_STATICS_showReactMessage
		#define GEODE_STATICS_showReactMessage
		GEODE_AS_STATIC_FUNCTION(showReactMessage) 
	#endif

	#ifndef GEODE_STATICS_updateCurrencyCounter
		#define GEODE_STATICS_updateCurrencyCounter
		GEODE_AS_STATIC_FUNCTION(updateCurrencyCounter) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didPurchaseItem
		#define GEODE_CONCEPT_CHECK_didPurchaseItem
		GEODE_CONCEPT_FUNCTION_CHECK(didPurchaseItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardedVideoFinished
		#define GEODE_CONCEPT_CHECK_rewardedVideoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitVideoAdItems
		#define GEODE_CONCEPT_CHECK_exitVideoAdItems
		GEODE_CONCEPT_FUNCTION_CHECK(exitVideoAdItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCommunityCredits
		#define GEODE_CONCEPT_CHECK_onCommunityCredits
		GEODE_CONCEPT_FUNCTION_CHECK(onCommunityCredits) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlushies
		#define GEODE_CONCEPT_CHECK_onPlushies
		GEODE_CONCEPT_FUNCTION_CHECK(onPlushies) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectItem
		#define GEODE_CONCEPT_CHECK_onSelectItem
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onVideoAd
		#define GEODE_CONCEPT_CHECK_onVideoAd
		GEODE_CONCEPT_FUNCTION_CHECK(onVideoAd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCantAffordMessage
		#define GEODE_CONCEPT_CHECK_showCantAffordMessage
		GEODE_CONCEPT_FUNCTION_CHECK(showCantAffordMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showReactMessage
		#define GEODE_CONCEPT_CHECK_showReactMessage
		GEODE_CONCEPT_FUNCTION_CHECK(showReactMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCurrencyCounter
		#define GEODE_CONCEPT_CHECK_updateCurrencyCounter
		GEODE_CONCEPT_FUNCTION_CHECK(updateCurrencyCounter) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJShopLayer> : ModifyBase<ModifyDerive<Der, GJShopLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJShopLayer>>;
		using ModifyBase<ModifyDerive<Der, GJShopLayer>>::ModifyBase;
		using Base = GJShopLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJShopLayer, create, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a95b0, Default, GJShopLayer, scene, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ab820, Thiscall, GJShopLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ae950, Thiscall, GJShopLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJShopLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJShopLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71240, Thiscall, GJShopLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, GJShopLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2acf90, Thiscall, GJShopLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ac590, Thiscall, GJShopLayer, didPurchaseItem, GJStoreItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2abbe0, Thiscall, GJShopLayer, rewardedVideoFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ae620, Thiscall, GJShopLayer, dialogClosed, DialogLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJShopLayer, exitVideoAdItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a9730, Thiscall, GJShopLayer, init, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2acd70, Thiscall, GJShopLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2abaa0, Thiscall, GJShopLayer, onCommunityCredits, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJShopLayer, onPlushies, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2abcb0, Thiscall, GJShopLayer, onSelectItem, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJShopLayer, onVideoAd, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2abec0, Thiscall, GJShopLayer, showCantAffordMessage, GJStoreItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2acfa0, Thiscall, GJShopLayer, showReactMessage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2abc40, Thiscall, GJShopLayer, updateCurrencyCounter, )
		}
	};
}
