#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRateLevelLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCustomButton
		#define GEODE_STATICS_onCustomButton
		GEODE_AS_STATIC_FUNCTION(onCustomButton) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_rateInfoFinished
		#define GEODE_STATICS_rateInfoFinished
		GEODE_AS_STATIC_FUNCTION(rateInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_rateInfoFailed
		#define GEODE_STATICS_rateInfoFailed
		GEODE_AS_STATIC_FUNCTION(rateInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_createStatPillar
		#define GEODE_STATICS_createStatPillar
		GEODE_AS_STATIC_FUNCTION(createStatPillar) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onFeature
		#define GEODE_STATICS_onFeature
		GEODE_AS_STATIC_FUNCTION(onFeature) 
	#endif

	#ifndef GEODE_STATICS_onRate
		#define GEODE_STATICS_onRate
		GEODE_AS_STATIC_FUNCTION(onRate) 
	#endif

	#ifndef GEODE_STATICS_onToggleCoins
		#define GEODE_STATICS_onToggleCoins
		GEODE_AS_STATIC_FUNCTION(onToggleCoins) 
	#endif

	#ifndef GEODE_STATICS_selectRating
		#define GEODE_STATICS_selectRating
		GEODE_AS_STATIC_FUNCTION(selectRating) 
	#endif

	#ifndef GEODE_STATICS_setupRateInfo
		#define GEODE_STATICS_setupRateInfo
		GEODE_AS_STATIC_FUNCTION(setupRateInfo) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomButton
		#define GEODE_CONCEPT_CHECK_onCustomButton
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateInfoFinished
		#define GEODE_CONCEPT_CHECK_rateInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rateInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateInfoFailed
		#define GEODE_CONCEPT_CHECK_rateInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(rateInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStatPillar
		#define GEODE_CONCEPT_CHECK_createStatPillar
		GEODE_CONCEPT_FUNCTION_CHECK(createStatPillar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStarsButton
		#define GEODE_CONCEPT_CHECK_getStarsButton
		GEODE_CONCEPT_FUNCTION_CHECK(getStarsButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFeature
		#define GEODE_CONCEPT_CHECK_onFeature
		GEODE_CONCEPT_FUNCTION_CHECK(onFeature) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRate
		#define GEODE_CONCEPT_CHECK_onRate
		GEODE_CONCEPT_FUNCTION_CHECK(onRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleCoins
		#define GEODE_CONCEPT_CHECK_onToggleCoins
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectRating
		#define GEODE_CONCEPT_CHECK_selectRating
		GEODE_CONCEPT_FUNCTION_CHECK(selectRating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupRateInfo
		#define GEODE_CONCEPT_CHECK_setupRateInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupRateInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRateLevelLayer> : ModifyBase<ModifyDerive<Der, GJRateLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRateLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, GJRateLevelLayer>>::ModifyBase;
		using Base = GJRateLevelLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRateLevelLayer, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6ec0, Thiscall, GJRateLevelLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28f250, Thiscall, GJRateLevelLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f54d0, Thiscall, GJRateLevelLayer, onCustomButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6ce0, Thiscall, GJRateLevelLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6d80, Thiscall, GJRateLevelLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6e60, Thiscall, GJRateLevelLayer, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6c20, Thiscall, GJRateLevelLayer, rateInfoFinished, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6cb0, Thiscall, GJRateLevelLayer, rateInfoFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f5750, Thiscall, GJRateLevelLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6540, Thiscall, GJRateLevelLayer, createStatPillar, int, int, int, cocos2d::ccColor3B, cocos2d::ccColor3B, cocos2d::CCPoint, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRateLevelLayer, getStarsButton, int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f4920, Thiscall, GJRateLevelLayer, init, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f5920, Thiscall, GJRateLevelLayer, onFeature, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f6ab0, Thiscall, GJRateLevelLayer, onRate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f58b0, Thiscall, GJRateLevelLayer, onToggleCoins, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f68c0, Thiscall, GJRateLevelLayer, selectRating, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2f5980, Thiscall, GJRateLevelLayer, setupRateInfo, gd::string)
		}
	};
}
