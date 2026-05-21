#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupOpacityPopup.hpp>
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

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onTargetIDArrow
		#define GEODE_STATICS_onTargetIDArrow
		GEODE_AS_STATIC_FUNCTION(onTargetIDArrow) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateOpacityLabel
		#define GEODE_STATICS_updateOpacityLabel
		GEODE_AS_STATIC_FUNCTION(updateOpacityLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetIDArrow
		#define GEODE_CONCEPT_CHECK_onTargetIDArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetIDArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDuration
		#define GEODE_CONCEPT_CHECK_updateDuration
		GEODE_CONCEPT_FUNCTION_CHECK(updateDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDurLabel
		#define GEODE_CONCEPT_CHECK_updateDurLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateDurLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacity
		#define GEODE_CONCEPT_CHECK_updateOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOpacityLabel
		#define GEODE_CONCEPT_CHECK_updateOpacityLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateOpacityLabel) 
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
	struct ModifyDerive<Der, SetupOpacityPopup> : ModifyBase<ModifyDerive<Der, SetupOpacityPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupOpacityPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupOpacityPopup>>::ModifyBase;
		using Base = SetupOpacityPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42a4b0, Default, SetupOpacityPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42b3e0, Thiscall, SetupOpacityPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40a100, Thiscall, SetupOpacityPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b850, Thiscall, SetupOpacityPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42b7d0, Thiscall, SetupOpacityPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42a5e0, Thiscall, SetupOpacityPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42b570, Thiscall, SetupOpacityPopup, onTargetIDArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42b5c0, Thiscall, SetupOpacityPopup, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42bbd0, Thiscall, SetupOpacityPopup, updateDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42ba10, Thiscall, SetupOpacityPopup, updateDurLabel, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupOpacityPopup, updateOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42bae0, Thiscall, SetupOpacityPopup, updateOpacityLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42bc60, Thiscall, SetupOpacityPopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42bb50, Thiscall, SetupOpacityPopup, updateTextInputLabel, )
		}
	};
}
