#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSelectLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_updatePageWithObject
		#define GEODE_STATICS_updatePageWithObject
		GEODE_AS_STATIC_FUNCTION(updatePageWithObject) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerMoved
		#define GEODE_STATICS_scrollLayerMoved
		GEODE_AS_STATIC_FUNCTION(scrollLayerMoved) 
	#endif

	#ifndef GEODE_STATICS_colorForPage
		#define GEODE_STATICS_colorForPage
		GEODE_AS_STATIC_FUNCTION(colorForPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onDownload
		#define GEODE_STATICS_onDownload
		GEODE_AS_STATIC_FUNCTION(onDownload) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNext
		#define GEODE_STATICS_onNext
		GEODE_AS_STATIC_FUNCTION(onNext) 
	#endif

	#ifndef GEODE_STATICS_onPrev
		#define GEODE_STATICS_onPrev
		GEODE_AS_STATIC_FUNCTION(onPrev) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageWithObject
		#define GEODE_CONCEPT_CHECK_updatePageWithObject
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageWithObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerMoved
		#define GEODE_CONCEPT_CHECK_scrollLayerMoved
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForPage
		#define GEODE_CONCEPT_CHECK_colorForPage
		GEODE_CONCEPT_FUNCTION_CHECK(colorForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorValue
		#define GEODE_CONCEPT_CHECK_getColorValue
		GEODE_CONCEPT_FUNCTION_CHECK(getColorValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownload
		#define GEODE_CONCEPT_CHECK_onDownload
		GEODE_CONCEPT_FUNCTION_CHECK(onDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNext
		#define GEODE_CONCEPT_CHECK_onNext
		GEODE_CONCEPT_FUNCTION_CHECK(onNext) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlay
		#define GEODE_CONCEPT_CHECK_onPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrev
		#define GEODE_CONCEPT_CHECK_onPrev
		GEODE_CONCEPT_FUNCTION_CHECK(onPrev) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowAd
		#define GEODE_CONCEPT_CHECK_tryShowAd
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowAd) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSelectLayer> : ModifyBase<ModifyDerive<Der, LevelSelectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSelectLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelSelectLayer>>::ModifyBase;
		using Base = LevelSelectLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSelectLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3182c0, Default, LevelSelectLayer, scene, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319a80, Thiscall, LevelSelectLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319ad0, Thiscall, LevelSelectLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319200, Thiscall, LevelSelectLayer, updatePageWithObject, cocos2d::CCObject*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319270, Thiscall, LevelSelectLayer, scrollLayerMoved, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319590, Thiscall, LevelSelectLayer, colorForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSelectLayer, getColorValue, int, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3183f0, Thiscall, LevelSelectLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319a30, Thiscall, LevelSelectLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3191b0, Thiscall, LevelSelectLayer, onDownload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319bb0, Thiscall, LevelSelectLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x319930, Thiscall, LevelSelectLayer, onNext, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSelectLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3199b0, Thiscall, LevelSelectLayer, onPrev, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSelectLayer, tryShowAd, )
		}
	};
}
