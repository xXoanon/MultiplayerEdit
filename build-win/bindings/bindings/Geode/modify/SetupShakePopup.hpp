#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupShakePopup.hpp>
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

	#ifndef GEODE_STATICS_updateInterval
		#define GEODE_STATICS_updateInterval
		GEODE_AS_STATIC_FUNCTION(updateInterval) 
	#endif

	#ifndef GEODE_STATICS_updateIntervalLabel
		#define GEODE_STATICS_updateIntervalLabel
		GEODE_AS_STATIC_FUNCTION(updateIntervalLabel) 
	#endif

	#ifndef GEODE_STATICS_updateShake
		#define GEODE_STATICS_updateShake
		GEODE_AS_STATIC_FUNCTION(updateShake) 
	#endif

	#ifndef GEODE_STATICS_updateShakeLabel
		#define GEODE_STATICS_updateShakeLabel
		GEODE_AS_STATIC_FUNCTION(updateShakeLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateInterval
		#define GEODE_CONCEPT_CHECK_updateInterval
		GEODE_CONCEPT_FUNCTION_CHECK(updateInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateIntervalLabel
		#define GEODE_CONCEPT_CHECK_updateIntervalLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateIntervalLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShake
		#define GEODE_CONCEPT_CHECK_updateShake
		GEODE_CONCEPT_FUNCTION_CHECK(updateShake) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShakeLabel
		#define GEODE_CONCEPT_CHECK_updateShakeLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateShakeLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupShakePopup> : ModifyBase<ModifyDerive<Der, SetupShakePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupShakePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupShakePopup>>::ModifyBase;
		using Base = SetupShakePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454bf0, Default, SetupShakePopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455a70, Thiscall, SetupShakePopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4564c0, Thiscall, SetupShakePopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x456100, Thiscall, SetupShakePopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454d20, Thiscall, SetupShakePopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455c40, Thiscall, SetupShakePopup, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x272a00, Thiscall, SetupShakePopup, updateDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x271de0, Thiscall, SetupShakePopup, updateDurLabel, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x456080, Thiscall, SetupShakePopup, updateInterval, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455fb0, Thiscall, SetupShakePopup, updateIntervalLabel, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455f30, Thiscall, SetupShakePopup, updateShake, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455e60, Thiscall, SetupShakePopup, updateShakeLabel, bool)
		}
	};
}
