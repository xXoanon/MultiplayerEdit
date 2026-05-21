#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupPortalPopup.hpp>
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

	#ifndef GEODE_STATICS_onEditCameraSettings
		#define GEODE_STATICS_onEditCameraSettings
		GEODE_AS_STATIC_FUNCTION(onEditCameraSettings) 
	#endif

	#ifndef GEODE_STATICS_onUnboundMode
		#define GEODE_STATICS_onUnboundMode
		GEODE_AS_STATIC_FUNCTION(onUnboundMode) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateCameraEasing
		#define GEODE_STATICS_updateCameraEasing
		GEODE_AS_STATIC_FUNCTION(updateCameraEasing) 
	#endif

	#ifndef GEODE_STATICS_updateCameraEasingLabel
		#define GEODE_STATICS_updateCameraEasingLabel
		GEODE_AS_STATIC_FUNCTION(updateCameraEasingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateCameraPadding
		#define GEODE_STATICS_updateCameraPadding
		GEODE_AS_STATIC_FUNCTION(updateCameraPadding) 
	#endif

	#ifndef GEODE_STATICS_updateCameraPaddingLabel
		#define GEODE_STATICS_updateCameraPaddingLabel
		GEODE_AS_STATIC_FUNCTION(updateCameraPaddingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateItemVisibility
		#define GEODE_STATICS_updateItemVisibility
		GEODE_AS_STATIC_FUNCTION(updateItemVisibility) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_onEditCameraSettings
		#define GEODE_CONCEPT_CHECK_onEditCameraSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onEditCameraSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnboundMode
		#define GEODE_CONCEPT_CHECK_onUnboundMode
		GEODE_CONCEPT_FUNCTION_CHECK(onUnboundMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraEasing
		#define GEODE_CONCEPT_CHECK_updateCameraEasing
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraEasingLabel
		#define GEODE_CONCEPT_CHECK_updateCameraEasingLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraEasingLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraPadding
		#define GEODE_CONCEPT_CHECK_updateCameraPadding
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraPadding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraPaddingLabel
		#define GEODE_CONCEPT_CHECK_updateCameraPaddingLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraPaddingLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemVisibility
		#define GEODE_CONCEPT_CHECK_updateItemVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupPortalPopup> : ModifyBase<ModifyDerive<Der, SetupPortalPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupPortalPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupPortalPopup>>::ModifyBase;
		using Base = SetupPortalPopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, create, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, determineStartValues, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, init, EffectGameObject*, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, onEditCameraSettings, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, onUnboundMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, sliderChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, updateCameraEasing, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, updateCameraEasingLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, updateCameraPadding, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, updateCameraPaddingLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupPortalPopup, updateItemVisibility, )
		}
	};
}
