#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPathPage.hpp>
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

	#ifndef GEODE_STATICS_didPurchaseItem
		#define GEODE_STATICS_didPurchaseItem
		GEODE_AS_STATIC_FUNCTION(didPurchaseItem) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onActivatePath
		#define GEODE_STATICS_onActivatePath
		GEODE_AS_STATIC_FUNCTION(onActivatePath) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onIconInfo
		#define GEODE_STATICS_onIconInfo
		GEODE_AS_STATIC_FUNCTION(onIconInfo) 
	#endif

	#ifndef GEODE_STATICS_onUnlock
		#define GEODE_STATICS_onUnlock
		GEODE_AS_STATIC_FUNCTION(onUnlock) 
	#endif

	#ifndef GEODE_STATICS_playUnlockAnimation
		#define GEODE_STATICS_playUnlockAnimation
		GEODE_AS_STATIC_FUNCTION(playUnlockAnimation) 
	#endif

	#ifndef GEODE_STATICS_showCantAffordMessage
		#define GEODE_STATICS_showCantAffordMessage
		GEODE_AS_STATIC_FUNCTION(showCantAffordMessage) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationFinished
		#define GEODE_STATICS_unlockAnimationFinished
		GEODE_AS_STATIC_FUNCTION(unlockAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationStep2
		#define GEODE_STATICS_unlockAnimationStep2
		GEODE_AS_STATIC_FUNCTION(unlockAnimationStep2) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationStep3
		#define GEODE_STATICS_unlockAnimationStep3
		GEODE_AS_STATIC_FUNCTION(unlockAnimationStep3) 
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

	#ifndef GEODE_CONCEPT_CHECK_didPurchaseItem
		#define GEODE_CONCEPT_CHECK_didPurchaseItem
		GEODE_CONCEPT_FUNCTION_CHECK(didPurchaseItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onActivatePath
		#define GEODE_CONCEPT_CHECK_onActivatePath
		GEODE_CONCEPT_FUNCTION_CHECK(onActivatePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onIconInfo
		#define GEODE_CONCEPT_CHECK_onIconInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onIconInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnlock
		#define GEODE_CONCEPT_CHECK_onUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(onUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playUnlockAnimation
		#define GEODE_CONCEPT_CHECK_playUnlockAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playUnlockAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCantAffordMessage
		#define GEODE_CONCEPT_CHECK_showCantAffordMessage
		GEODE_CONCEPT_FUNCTION_CHECK(showCantAffordMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockAnimationFinished
		#define GEODE_CONCEPT_CHECK_unlockAnimationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(unlockAnimationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockAnimationStep2
		#define GEODE_CONCEPT_CHECK_unlockAnimationStep2
		GEODE_CONCEPT_FUNCTION_CHECK(unlockAnimationStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockAnimationStep3
		#define GEODE_CONCEPT_CHECK_unlockAnimationStep3
		GEODE_CONCEPT_FUNCTION_CHECK(unlockAnimationStep3) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPathPage> : ModifyBase<ModifyDerive<Der, GJPathPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPathPage>>;
		using ModifyBase<ModifyDerive<Der, GJPathPage>>::ModifyBase;
		using Base = GJPathPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2854b0, Default, GJPathPage, create, int, GJPathsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, GJPathPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x289040, Thiscall, GJPathPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x867f0, Thiscall, GJPathPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x287470, Thiscall, GJPathPage, didPurchaseItem, GJStoreItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2855e0, Thiscall, GJPathPage, init, int, GJPathsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x287210, Thiscall, GJPathPage, onActivatePath, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288fa0, Thiscall, GJPathPage, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x287280, Thiscall, GJPathPage, onIconInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x287480, Thiscall, GJPathPage, onUnlock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x287d30, Thiscall, GJPathPage, playUnlockAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x287660, Thiscall, GJPathPage, showCantAffordMessage, GJStoreItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288e70, Thiscall, GJPathPage, unlockAnimationFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288380, Thiscall, GJPathPage, unlockAnimationStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x288600, Thiscall, GJPathPage, unlockAnimationStep3, )
		}
	};
}
