#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupCameraEdgePopup.hpp>
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

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCameraEdge
		#define GEODE_STATICS_onCameraEdge
		GEODE_AS_STATIC_FUNCTION(onCameraEdge) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_onUnlockEdge
		#define GEODE_STATICS_onUnlockEdge
		GEODE_AS_STATIC_FUNCTION(onUnlockEdge) 
	#endif

	#ifndef GEODE_STATICS_updateTargetID
		#define GEODE_STATICS_updateTargetID
		GEODE_AS_STATIC_FUNCTION(updateTargetID) 
	#endif

	#ifndef GEODE_STATICS_updateTextInputLabel
		#define GEODE_STATICS_updateTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateTextInputLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCameraEdge
		#define GEODE_CONCEPT_CHECK_onCameraEdge
		GEODE_CONCEPT_FUNCTION_CHECK(onCameraEdge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetIDArrow
		#define GEODE_CONCEPT_CHECK_onTargetIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnlockEdge
		#define GEODE_CONCEPT_CHECK_onUnlockEdge
		GEODE_CONCEPT_FUNCTION_CHECK(onUnlockEdge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID
		#define GEODE_CONCEPT_CHECK_updateTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupCameraEdgePopup> : ModifyBase<ModifyDerive<Der, SetupCameraEdgePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupCameraEdgePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupCameraEdgePopup>>::ModifyBase;
		using Base = SetupCameraEdgePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x412b60, Default, SetupCameraEdgePopup, create, CameraTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4139d0, Thiscall, SetupCameraEdgePopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413ec0, Thiscall, SetupCameraEdgePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413c80, Thiscall, SetupCameraEdgePopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x412c90, Thiscall, SetupCameraEdgePopup, init, CameraTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413ad0, Thiscall, SetupCameraEdgePopup, onCameraEdge, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413c30, Thiscall, SetupCameraEdgePopup, onTargetIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413c00, Thiscall, SetupCameraEdgePopup, onUnlockEdge, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413df0, Thiscall, SetupCameraEdgePopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x413d70, Thiscall, SetupCameraEdgePopup, updateTextInputLabel, )
		}
	};
}
