#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAnimSettingsPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnimSettings
		#define GEODE_CONCEPT_CHECK_updateAnimSettings
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnimSettings) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAnimSettingsPopup> : ModifyBase<ModifyDerive<Der, SetupAnimSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAnimSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAnimSettingsPopup>>::ModifyBase;
		using Base = SetupAnimSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40a180, Default, SetupAnimSettingsPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40ab10, Thiscall, SetupAnimSettingsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40a290, Thiscall, SetupAnimSettingsPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupAnimSettingsPopup, updateAnimSettings, )
		}
	};
}
