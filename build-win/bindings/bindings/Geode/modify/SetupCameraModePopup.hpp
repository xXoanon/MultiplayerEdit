#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCameraModePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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
	struct ModifyDerive<Der, SetupCameraModePopup> : ModifyBase<ModifyDerive<Der, SetupCameraModePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCameraModePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCameraModePopup>>::ModifyBase;
		using Base = SetupCameraModePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x414020, Default, SetupCameraModePopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x414bf0, Thiscall, SetupCameraModePopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28f250, Thiscall, SetupCameraModePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x414140, Thiscall, SetupCameraModePopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x414e60, Thiscall, SetupCameraModePopup, onEditCameraSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x414db0, Thiscall, SetupCameraModePopup, onUnboundMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x414fe0, Thiscall, SetupCameraModePopup, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4150f0, Thiscall, SetupCameraModePopup, updateCameraEasing, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x415090, Thiscall, SetupCameraModePopup, updateCameraEasingLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4151f0, Thiscall, SetupCameraModePopup, updateCameraPadding, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x415180, Thiscall, SetupCameraModePopup, updateCameraPaddingLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x414f10, Thiscall, SetupCameraModePopup, updateItemVisibility, )
		}
	};
}
