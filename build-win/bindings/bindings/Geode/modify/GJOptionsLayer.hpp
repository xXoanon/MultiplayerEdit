#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_didToggleGV
		#define GEODE_STATICS_didToggleGV
		GEODE_AS_STATIC_FUNCTION(didToggleGV) 
	#endif

	#ifndef GEODE_STATICS_addGVToggle
		#define GEODE_STATICS_addGVToggle
		GEODE_AS_STATIC_FUNCTION(addGVToggle) 
	#endif

	#ifndef GEODE_STATICS_addToggleInternal
		#define GEODE_STATICS_addToggleInternal
		GEODE_AS_STATIC_FUNCTION(addToggleInternal) 
	#endif

	#ifndef GEODE_STATICS_countForPage
		#define GEODE_STATICS_countForPage
		GEODE_AS_STATIC_FUNCTION(countForPage) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_incrementCountForPage
		#define GEODE_STATICS_incrementCountForPage
		GEODE_AS_STATIC_FUNCTION(incrementCountForPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_layerForPage
		#define GEODE_STATICS_layerForPage
		GEODE_AS_STATIC_FUNCTION(layerForPage) 
	#endif

	#ifndef GEODE_STATICS_objectsForPage
		#define GEODE_STATICS_objectsForPage
		GEODE_AS_STATIC_FUNCTION(objectsForPage) 
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupOptions
		#define GEODE_CONCEPT_CHECK_setupOptions
		GEODE_CONCEPT_FUNCTION_CHECK(setupOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didToggleGV
		#define GEODE_CONCEPT_CHECK_didToggleGV
		GEODE_CONCEPT_FUNCTION_CHECK(didToggleGV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didToggle
		#define GEODE_CONCEPT_CHECK_didToggle
		GEODE_CONCEPT_FUNCTION_CHECK(didToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGVToggle
		#define GEODE_CONCEPT_CHECK_addGVToggle
		GEODE_CONCEPT_FUNCTION_CHECK(addGVToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToggle
		#define GEODE_CONCEPT_CHECK_addToggle
		GEODE_CONCEPT_FUNCTION_CHECK(addToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToggleInternal
		#define GEODE_CONCEPT_CHECK_addToggleInternal
		GEODE_CONCEPT_FUNCTION_CHECK(addToggleInternal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countForPage
		#define GEODE_CONCEPT_CHECK_countForPage
		GEODE_CONCEPT_FUNCTION_CHECK(countForPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getToggleButton
		#define GEODE_CONCEPT_CHECK_getToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(getToggleButton) 
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_offsetToNextPage
		#define GEODE_CONCEPT_CHECK_offsetToNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(offsetToNextPage) 
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


	template<class Der>
	struct ModifyDerive<Der, GJOptionsLayer> : ModifyBase<ModifyDerive<Der, GJOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, GJOptionsLayer>>::ModifyBase;
		using Base = GJOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x28d270, Thiscall, GJOptionsLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x28f990, Thiscall, GJOptionsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, setupOptions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f5ce0, Thiscall, GJOptionsLayer, didToggleGV, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, didToggle, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28fda0, Thiscall, GJOptionsLayer, addGVToggle, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, addToggle, char const*, int, bool, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28fee0, Thiscall, GJOptionsLayer, addToggleInternal, char const*, int, bool, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290420, Thiscall, GJOptionsLayer, countForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290940, Thiscall, GJOptionsLayer, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2904f0, Thiscall, GJOptionsLayer, incrementCountForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, infoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28fa60, Thiscall, GJOptionsLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290780, Thiscall, GJOptionsLayer, layerForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, layerKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, nextPosition, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, objectKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2905f0, Thiscall, GJOptionsLayer, objectsForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, offsetToNextPage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290e60, Thiscall, GJOptionsLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290920, Thiscall, GJOptionsLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290930, Thiscall, GJOptionsLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290d50, Thiscall, GJOptionsLayer, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOptionsLayer, pageKey, int)
		}
	};
}
