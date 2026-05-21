#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupEnterEffectPopup.hpp>
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

	#ifndef GEODE_STATICS_updateInputValue
		#define GEODE_STATICS_updateInputValue
		GEODE_AS_STATIC_FUNCTION(updateInputValue) 
	#endif

	#ifndef GEODE_STATICS_updateInputNode
		#define GEODE_STATICS_updateInputNode
		GEODE_AS_STATIC_FUNCTION(updateInputNode) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_triggerValueFromSliderValue
		#define GEODE_STATICS_triggerValueFromSliderValue
		GEODE_AS_STATIC_FUNCTION(triggerValueFromSliderValue) 
	#endif

	#ifndef GEODE_STATICS_triggerSliderValueFromValue
		#define GEODE_STATICS_triggerSliderValueFromValue
		GEODE_AS_STATIC_FUNCTION(triggerSliderValueFromValue) 
	#endif

	#ifndef GEODE_STATICS_hsvPopupClosed
		#define GEODE_STATICS_hsvPopupClosed
		GEODE_AS_STATIC_FUNCTION(hsvPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEnterType
		#define GEODE_STATICS_onEnterType
		GEODE_AS_STATIC_FUNCTION(onEnterType) 
	#endif

	#ifndef GEODE_STATICS_onHSV
		#define GEODE_STATICS_onHSV
		GEODE_AS_STATIC_FUNCTION(onHSV) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEnterChannel
		#define GEODE_STATICS_onNextFreeEnterChannel
		GEODE_AS_STATIC_FUNCTION(onNextFreeEnterChannel) 
	#endif

	#ifndef GEODE_STATICS_onNextFreeEnterEffectID
		#define GEODE_STATICS_onNextFreeEnterEffectID
		GEODE_AS_STATIC_FUNCTION(onNextFreeEnterEffectID) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateInputValue
		#define GEODE_CONCEPT_CHECK_updateInputValue
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInputNode
		#define GEODE_CONCEPT_CHECK_updateInputNode
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerValueFromSliderValue
		#define GEODE_CONCEPT_CHECK_triggerValueFromSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(triggerValueFromSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerSliderValueFromValue
		#define GEODE_CONCEPT_CHECK_triggerSliderValueFromValue
		GEODE_CONCEPT_FUNCTION_CHECK(triggerSliderValueFromValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hsvPopupClosed
		#define GEODE_CONCEPT_CHECK_hsvPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(hsvPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnterType
		#define GEODE_CONCEPT_CHECK_onEnterType
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHSV
		#define GEODE_CONCEPT_CHECK_onHSV
		GEODE_CONCEPT_FUNCTION_CHECK(onHSV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextFreeEnterChannel
		#define GEODE_CONCEPT_CHECK_onNextFreeEnterChannel
		GEODE_CONCEPT_FUNCTION_CHECK(onNextFreeEnterChannel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextFreeEnterEffectID
		#define GEODE_CONCEPT_CHECK_onNextFreeEnterEffectID
		GEODE_CONCEPT_FUNCTION_CHECK(onNextFreeEnterEffectID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVButton
		#define GEODE_CONCEPT_CHECK_updateHSVButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVButton) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupEnterEffectPopup> : ModifyBase<ModifyDerive<Der, SetupEnterEffectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupEnterEffectPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupEnterEffectPopup>>::ModifyBase;
		using Base = SetupEnterEffectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupEnterEffectPopup, create, EnterEffectObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420250, Thiscall, SetupEnterEffectPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420870, Thiscall, SetupEnterEffectPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40e0b0, Thiscall, SetupEnterEffectPopup, updateInputValue, int, float&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40e080, Thiscall, SetupEnterEffectPopup, updateInputNode, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420420, Thiscall, SetupEnterEffectPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40e020, Thiscall, SetupEnterEffectPopup, triggerValueFromSliderValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40e050, Thiscall, SetupEnterEffectPopup, triggerSliderValueFromValue, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420780, Thiscall, SetupEnterEffectPopup, hsvPopupClosed, HSVWidgetPopup*, cocos2d::ccHSVValue)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41e240, Thiscall, SetupEnterEffectPopup, init, EnterEffectObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420620, Thiscall, SetupEnterEffectPopup, onEnterType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420700, Thiscall, SetupEnterEffectPopup, onHSV, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x420570, Thiscall, SetupEnterEffectPopup, onNextFreeEnterChannel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d9f0, Thiscall, SetupEnterEffectPopup, onNextFreeEnterEffectID, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4207a0, Thiscall, SetupEnterEffectPopup, updateHSVButton, )
		}
	};
}
