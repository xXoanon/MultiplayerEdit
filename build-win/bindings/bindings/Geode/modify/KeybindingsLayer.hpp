#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindingsLayer.hpp>
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_addKeyPair
		#define GEODE_STATICS_addKeyPair
		GEODE_AS_STATIC_FUNCTION(addKeyPair) 
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
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

	#ifndef GEODE_CONCEPT_CHECK_addKeyPair
		#define GEODE_CONCEPT_CHECK_addKeyPair
		GEODE_CONCEPT_FUNCTION_CHECK(addKeyPair) 
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


	template<class Der>
	struct ModifyDerive<Der, KeybindingsLayer> : ModifyBase<ModifyDerive<Der, KeybindingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindingsLayer>>;
		using ModifyBase<ModifyDerive<Der, KeybindingsLayer>>::ModifyBase;
		using Base = KeybindingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf8a0, Default, KeybindingsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2bf990, Thiscall, KeybindingsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x846a0, Thiscall, KeybindingsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c02a0, Thiscall, KeybindingsLayer, addKeyPair, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0650, Thiscall, KeybindingsLayer, countForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c08f0, Thiscall, KeybindingsLayer, goToPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, incrementCountForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, infoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c0720, Thiscall, KeybindingsLayer, layerForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, layerKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, nextPosition, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, objectKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, objectsForPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84670, Thiscall, KeybindingsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c08d0, Thiscall, KeybindingsLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2c08e0, Thiscall, KeybindingsLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, pageKey, int)
		}
	};
}
