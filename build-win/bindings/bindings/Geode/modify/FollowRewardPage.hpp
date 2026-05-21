#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FollowRewardPage.hpp>
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

	#ifndef GEODE_STATICS_rewardedVideoFinished
		#define GEODE_STATICS_rewardedVideoFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_STATICS_updateRate
		#define GEODE_STATICS_updateRate
		GEODE_AS_STATIC_FUNCTION(updateRate) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onRewardedVideo
		#define GEODE_STATICS_onRewardedVideo
		GEODE_AS_STATIC_FUNCTION(onRewardedVideo) 
	#endif

	#ifndef GEODE_STATICS_onSpecialItem
		#define GEODE_STATICS_onSpecialItem
		GEODE_AS_STATIC_FUNCTION(onSpecialItem) 
	#endif

	#ifndef GEODE_STATICS_switchToOpenedState
		#define GEODE_STATICS_switchToOpenedState
		GEODE_AS_STATIC_FUNCTION(switchToOpenedState) 
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

	#ifndef GEODE_CONCEPT_CHECK_rewardedVideoFinished
		#define GEODE_CONCEPT_CHECK_rewardedVideoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRate
		#define GEODE_CONCEPT_CHECK_updateRate
		GEODE_CONCEPT_FUNCTION_CHECK(updateRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRewardedVideo
		#define GEODE_CONCEPT_CHECK_onRewardedVideo
		GEODE_CONCEPT_FUNCTION_CHECK(onRewardedVideo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSpecialItem
		#define GEODE_CONCEPT_CHECK_onSpecialItem
		GEODE_CONCEPT_FUNCTION_CHECK(onSpecialItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToOpenedState
		#define GEODE_CONCEPT_CHECK_switchToOpenedState
		GEODE_CONCEPT_FUNCTION_CHECK(switchToOpenedState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FollowRewardPage> : ModifyBase<ModifyDerive<Der, FollowRewardPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FollowRewardPage>>;
		using ModifyBase<ModifyDerive<Der, FollowRewardPage>>::ModifyBase;
		using Base = FollowRewardPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x139c00, Default, FollowRewardPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x139d20, Thiscall, FollowRewardPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42640, Thiscall, FollowRewardPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, FollowRewardPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x867f0, Thiscall, FollowRewardPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13d230, Thiscall, FollowRewardPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13bf70, Thiscall, FollowRewardPage, rewardedVideoFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13ba40, Thiscall, FollowRewardPage, updateRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, FollowRewardPage, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FollowRewardPage, onRewardedVideo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13bf80, Thiscall, FollowRewardPage, onSpecialItem, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13d150, Thiscall, FollowRewardPage, switchToOpenedState, CCMenuItemSpriteExtra*)
		}
	};
}
