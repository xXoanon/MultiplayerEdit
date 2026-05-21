#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RateStarsLayer.hpp>
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFeature
		#define GEODE_STATICS_onFeature
		GEODE_AS_STATIC_FUNCTION(onFeature) 
	#endif

	#ifndef GEODE_STATICS_onRate
		#define GEODE_STATICS_onRate
		GEODE_AS_STATIC_FUNCTION(onRate) 
	#endif

	#ifndef GEODE_STATICS_selectRating
		#define GEODE_STATICS_selectRating
		GEODE_AS_STATIC_FUNCTION(selectRating) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_getStarsButton
		#define GEODE_CONCEPT_CHECK_getStarsButton
		GEODE_CONCEPT_FUNCTION_CHECK(getStarsButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
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


	template<class Der>
	struct ModifyDerive<Der, RateStarsLayer> : ModifyBase<ModifyDerive<Der, RateStarsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RateStarsLayer>>;
		using ModifyBase<ModifyDerive<Der, RateStarsLayer>>::ModifyBase;
		using Base = RateStarsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ca000, Default, RateStarsLayer, create, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3caef0, Thiscall, RateStarsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cacf0, Thiscall, RateStarsLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cad70, Thiscall, RateStarsLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cae30, Thiscall, RateStarsLayer, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(RateStarsLayer, getStarsButton, int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ca150, Thiscall, RateStarsLayer, init, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3caeb0, Thiscall, RateStarsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ca8e0, Thiscall, RateStarsLayer, onFeature, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cab00, Thiscall, RateStarsLayer, onRate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(RateStarsLayer, onToggleCoins, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ca910, Thiscall, RateStarsLayer, selectRating, cocos2d::CCObject*)
		}
	};
}
