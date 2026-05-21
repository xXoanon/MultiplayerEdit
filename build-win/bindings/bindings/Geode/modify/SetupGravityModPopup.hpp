#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupGravityModPopup.hpp>
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

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onItemIDArrow
		#define GEODE_STATICS_onItemIDArrow
		GEODE_AS_STATIC_FUNCTION(onItemIDArrow) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateItemID
		#define GEODE_STATICS_updateItemID
		GEODE_AS_STATIC_FUNCTION(updateItemID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateValue
		#define GEODE_STATICS_updateValue
		GEODE_AS_STATIC_FUNCTION(updateValue) 
	#endif

	#ifndef GEODE_STATICS_updateValueLabel
		#define GEODE_STATICS_updateValueLabel
		GEODE_AS_STATIC_FUNCTION(updateValueLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onItemIDArrow
		#define GEODE_CONCEPT_CHECK_onItemIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onItemIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemID
		#define GEODE_CONCEPT_CHECK_updateItemID
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValue
		#define GEODE_CONCEPT_CHECK_updateValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValueLabel
		#define GEODE_CONCEPT_CHECK_updateValueLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateValueLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupGravityModPopup> : ModifyBase<ModifyDerive<Der, SetupGravityModPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupGravityModPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupGravityModPopup>>::ModifyBase;
		using Base = SetupGravityModPopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, create, EffectGameObject*, cocos2d::CCArray*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, show, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, textInputClosed, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, textChanged, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, determineStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, init, EffectGameObject*, cocos2d::CCArray*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, onItemIDArrow, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, sliderChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, updateItemID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, updateTextInputLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, updateValue, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupGravityModPopup, updateValueLabel, )
		}
	};
}
