#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MoreVideoOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_addToggle
		#define GEODE_STATICS_addToggle
		GEODE_AS_STATIC_FUNCTION(addToggle) 
	#endif

	#ifndef GEODE_STATICS_countForPage
		#define GEODE_STATICS_countForPage
		GEODE_AS_STATIC_FUNCTION(countForPage) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_layerForPage
		#define GEODE_STATICS_layerForPage
		GEODE_AS_STATIC_FUNCTION(layerForPage) 
	#endif

	#ifndef GEODE_STATICS_objectsForPage
		#define GEODE_STATICS_objectsForPage
		GEODE_AS_STATIC_FUNCTION(objectsForPage) 
	#endif

	#ifndef GEODE_STATICS_onApplyFPS
		#define GEODE_STATICS_onApplyFPS
		GEODE_AS_STATIC_FUNCTION(onApplyFPS) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_updateFPSButtons
		#define GEODE_STATICS_updateFPSButtons
		GEODE_AS_STATIC_FUNCTION(updateFPSButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToggle
		#define GEODE_CONCEPT_CHECK_addToggle
		GEODE_CONCEPT_FUNCTION_CHECK(addToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countForPage
		#define GEODE_CONCEPT_CHECK_countForPage
		GEODE_CONCEPT_FUNCTION_CHECK(countForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementCountForPage
		#define GEODE_CONCEPT_CHECK_incrementCountForPage
		GEODE_CONCEPT_FUNCTION_CHECK(incrementCountForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_infoKey
		#define GEODE_CONCEPT_CHECK_infoKey
		GEODE_CONCEPT_FUNCTION_CHECK(infoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerForPage
		#define GEODE_CONCEPT_CHECK_layerForPage
		GEODE_CONCEPT_FUNCTION_CHECK(layerForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerKey
		#define GEODE_CONCEPT_CHECK_layerKey
		GEODE_CONCEPT_FUNCTION_CHECK(layerKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nextPosition
		#define GEODE_CONCEPT_CHECK_nextPosition
		GEODE_CONCEPT_FUNCTION_CHECK(nextPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectKey
		#define GEODE_CONCEPT_CHECK_objectKey
		GEODE_CONCEPT_FUNCTION_CHECK(objectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsForPage
		#define GEODE_CONCEPT_CHECK_objectsForPage
		GEODE_CONCEPT_FUNCTION_CHECK(objectsForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onApplyFPS
		#define GEODE_CONCEPT_CHECK_onApplyFPS
		GEODE_CONCEPT_FUNCTION_CHECK(onApplyFPS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageKey
		#define GEODE_CONCEPT_CHECK_pageKey
		GEODE_CONCEPT_FUNCTION_CHECK(pageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFPSButtons
		#define GEODE_CONCEPT_CHECK_updateFPSButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateFPSButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MoreVideoOptionsLayer> : ModifyBase<ModifyDerive<Der, MoreVideoOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MoreVideoOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, MoreVideoOptionsLayer>>::ModifyBase;
		using Base = MoreVideoOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreVideoOptionsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x378c20, Thiscall, MoreVideoOptionsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b540, Thiscall, MoreVideoOptionsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379720, Thiscall, MoreVideoOptionsLayer, addToggle, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379d80, Thiscall, MoreVideoOptionsLayer, countForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a1a0, Thiscall, MoreVideoOptionsLayer, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreVideoOptionsLayer, incrementCountForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreVideoOptionsLayer, infoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379fe0, Thiscall, MoreVideoOptionsLayer, layerForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreVideoOptionsLayer, layerKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreVideoOptionsLayer, nextPosition, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreVideoOptionsLayer, objectKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x379e50, Thiscall, MoreVideoOptionsLayer, objectsForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b020, Thiscall, MoreVideoOptionsLayer, onApplyFPS, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b4f0, Thiscall, MoreVideoOptionsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b310, Thiscall, MoreVideoOptionsLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a180, Thiscall, MoreVideoOptionsLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a190, Thiscall, MoreVideoOptionsLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a5b0, Thiscall, MoreVideoOptionsLayer, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MoreVideoOptionsLayer, pageKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37af50, Thiscall, MoreVideoOptionsLayer, updateFPSButtons, )
		}
	};
}
