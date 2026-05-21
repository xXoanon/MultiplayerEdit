#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomizeObjectSettingsPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		#define GEODE_CONCEPT_CHECK_onCustomToggleTriggerValue
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomToggleTriggerValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomizeObjectSettingsPopup> : ModifyBase<ModifyDerive<Der, CustomizeObjectSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomizeObjectSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, CustomizeObjectSettingsPopup>>::ModifyBase;
		using Base = CustomizeObjectSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomizeObjectSettingsPopup, create, GameObject*, cocos2d::CCArray*, CustomizeObjectLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa560, Thiscall, CustomizeObjectSettingsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa4b0, Thiscall, CustomizeObjectSettingsPopup, onCustomToggleTriggerValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaa100, Thiscall, CustomizeObjectSettingsPopup, init, GameObject*, cocos2d::CCArray*, CustomizeObjectLayer*)
		}
	};
}
