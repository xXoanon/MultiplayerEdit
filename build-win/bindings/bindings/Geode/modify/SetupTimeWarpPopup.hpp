#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTimeWarpPopup.hpp>
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

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateTimeWarpLabel
		#define GEODE_STATICS_updateTimeWarpLabel
		GEODE_AS_STATIC_FUNCTION(updateTimeWarpLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeWarp
		#define GEODE_CONCEPT_CHECK_updateTimeWarp
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeWarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeWarpLabel
		#define GEODE_CONCEPT_CHECK_updateTimeWarpLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeWarpLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupTimeWarpPopup> : ModifyBase<ModifyDerive<Der, SetupTimeWarpPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTimeWarpPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTimeWarpPopup>>::ModifyBase;
		using Base = SetupTimeWarpPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x463340, Default, SetupTimeWarpPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4638d0, Thiscall, SetupTimeWarpPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28f250, Thiscall, SetupTimeWarpPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x463460, Thiscall, SetupTimeWarpPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4639e0, Thiscall, SetupTimeWarpPopup, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupTimeWarpPopup, updateTimeWarp, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x463ab0, Thiscall, SetupTimeWarpPopup, updateTimeWarpLabel, )
		}
	};
}
