#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAreaTintTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_hsvPopupClosed
		#define GEODE_STATICS_hsvPopupClosed
		GEODE_AS_STATIC_FUNCTION(hsvPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onHSV
		#define GEODE_STATICS_onHSV
		GEODE_AS_STATIC_FUNCTION(onHSV) 
	#endif

	#ifndef GEODE_STATICS_updateHSVButton
		#define GEODE_STATICS_updateHSVButton
		GEODE_AS_STATIC_FUNCTION(updateHSVButton) 
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

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hsvPopupClosed
		#define GEODE_CONCEPT_CHECK_hsvPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(hsvPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHSV
		#define GEODE_CONCEPT_CHECK_onHSV
		GEODE_CONCEPT_FUNCTION_CHECK(onHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVButton
		#define GEODE_CONCEPT_CHECK_updateHSVButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVButton) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAreaTintTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupAreaTintTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAreaTintTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAreaTintTriggerPopup>>::ModifyBase;
		using Base = SetupAreaTintTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x40af10, Thiscall, SetupAreaTintTriggerPopup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupAreaTintTriggerPopup, create, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410500, Thiscall, SetupAreaTintTriggerPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410810, Thiscall, SetupAreaTintTriggerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410340, Thiscall, SetupAreaTintTriggerPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410720, Thiscall, SetupAreaTintTriggerPopup, hsvPopupClosed, HSVWidgetPopup*, cocos2d::ccHSVValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40f900, Thiscall, SetupAreaTintTriggerPopup, init, EnterEffectObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4106a0, Thiscall, SetupAreaTintTriggerPopup, onHSV, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410740, Thiscall, SetupAreaTintTriggerPopup, updateHSVButton, )
		}
	};
}
