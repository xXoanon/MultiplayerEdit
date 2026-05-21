#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ShareLevelLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_selectRating
		#define GEODE_STATICS_selectRating
		GEODE_AS_STATIC_FUNCTION(selectRating) 
	#endif

	#ifndef GEODE_STATICS_setupStars
		#define GEODE_STATICS_setupStars
		GEODE_AS_STATIC_FUNCTION(setupStars) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShare
		#define GEODE_CONCEPT_CHECK_onShare
		GEODE_CONCEPT_FUNCTION_CHECK(onShare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectRating
		#define GEODE_CONCEPT_CHECK_selectRating
		GEODE_CONCEPT_FUNCTION_CHECK(selectRating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupStars
		#define GEODE_CONCEPT_CHECK_setupStars
		GEODE_CONCEPT_FUNCTION_CHECK(setupStars) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ShareLevelLayer> : ModifyBase<ModifyDerive<Der, ShareLevelLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ShareLevelLayer>>;
		using ModifyBase<ModifyDerive<Der, ShareLevelLayer>>::ModifyBase;
		using Base = ShareLevelLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShareLevelLayer, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, ShareLevelLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ShareLevelLayer, getStarsButton, int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48eec0, Thiscall, ShareLevelLayer, init, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, ShareLevelLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x490120, Thiscall, ShareLevelLayer, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x490270, Thiscall, ShareLevelLayer, onShare, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48ff90, Thiscall, ShareLevelLayer, selectRating, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x48fb80, Thiscall, ShareLevelLayer, setupStars, )
		}
	};
}
