#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelFeatureLayer.hpp>
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDown
		#define GEODE_STATICS_onDown
		GEODE_AS_STATIC_FUNCTION(onDown) 
	#endif

	#ifndef GEODE_STATICS_onDown2
		#define GEODE_STATICS_onDown2
		GEODE_AS_STATIC_FUNCTION(onDown2) 
	#endif

	#ifndef GEODE_STATICS_onRemoveValues
		#define GEODE_STATICS_onRemoveValues
		GEODE_AS_STATIC_FUNCTION(onRemoveValues) 
	#endif

	#ifndef GEODE_STATICS_onSetEpicOnly
		#define GEODE_STATICS_onSetEpicOnly
		GEODE_AS_STATIC_FUNCTION(onSetEpicOnly) 
	#endif

	#ifndef GEODE_STATICS_onSetFeatured
		#define GEODE_STATICS_onSetFeatured
		GEODE_AS_STATIC_FUNCTION(onSetFeatured) 
	#endif

	#ifndef GEODE_STATICS_onToggleEpic
		#define GEODE_STATICS_onToggleEpic
		GEODE_AS_STATIC_FUNCTION(onToggleEpic) 
	#endif

	#ifndef GEODE_STATICS_onUp
		#define GEODE_STATICS_onUp
		GEODE_AS_STATIC_FUNCTION(onUp) 
	#endif

	#ifndef GEODE_STATICS_onUp2
		#define GEODE_STATICS_onUp2
		GEODE_AS_STATIC_FUNCTION(onUp2) 
	#endif

	#ifndef GEODE_STATICS_updateStars
		#define GEODE_STATICS_updateStars
		GEODE_AS_STATIC_FUNCTION(updateStars) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDown
		#define GEODE_CONCEPT_CHECK_onDown
		GEODE_CONCEPT_FUNCTION_CHECK(onDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDown2
		#define GEODE_CONCEPT_CHECK_onDown2
		GEODE_CONCEPT_FUNCTION_CHECK(onDown2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveValues
		#define GEODE_CONCEPT_CHECK_onRemoveValues
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetEpicOnly
		#define GEODE_CONCEPT_CHECK_onSetEpicOnly
		GEODE_CONCEPT_FUNCTION_CHECK(onSetEpicOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetFeatured
		#define GEODE_CONCEPT_CHECK_onSetFeatured
		GEODE_CONCEPT_FUNCTION_CHECK(onSetFeatured) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleEpic
		#define GEODE_CONCEPT_CHECK_onToggleEpic
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleEpic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUp
		#define GEODE_CONCEPT_CHECK_onUp
		GEODE_CONCEPT_FUNCTION_CHECK(onUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUp2
		#define GEODE_CONCEPT_CHECK_onUp2
		GEODE_CONCEPT_FUNCTION_CHECK(onUp2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStars
		#define GEODE_CONCEPT_CHECK_updateStars
		GEODE_CONCEPT_FUNCTION_CHECK(updateStars) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelFeatureLayer> : ModifyBase<ModifyDerive<Der, LevelFeatureLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelFeatureLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelFeatureLayer>>::ModifyBase;
		using Base = LevelFeatureLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, create, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, init, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, onDown, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, onDown2, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, onRemoveValues, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, onSetEpicOnly, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, onSetFeatured, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, onToggleEpic, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, onUp, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, onUp2, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelFeatureLayer, updateStars, )
		}
	};
}
