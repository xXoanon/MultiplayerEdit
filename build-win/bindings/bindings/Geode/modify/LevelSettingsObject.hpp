#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSettingsObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_objectFromDict
		#define GEODE_STATICS_objectFromDict
		GEODE_AS_STATIC_FUNCTION(objectFromDict) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_setupColorsFromLegacyMode
		#define GEODE_STATICS_setupColorsFromLegacyMode
		GEODE_AS_STATIC_FUNCTION(setupColorsFromLegacyMode) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectFromDict
		#define GEODE_CONCEPT_CHECK_objectFromDict
		GEODE_CONCEPT_FUNCTION_CHECK(objectFromDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectFromString
		#define GEODE_CONCEPT_CHECK_objectFromString
		GEODE_CONCEPT_FUNCTION_CHECK(objectFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupColorsFromLegacyMode
		#define GEODE_CONCEPT_CHECK_setupColorsFromLegacyMode
		GEODE_CONCEPT_FUNCTION_CHECK(setupColorsFromLegacyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldUseYSection
		#define GEODE_CONCEPT_CHECK_shouldUseYSection
		GEODE_CONCEPT_FUNCTION_CHECK(shouldUseYSection) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSettingsObject> : ModifyBase<ModifyDerive<Der, LevelSettingsObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSettingsObject>>;
		using ModifyBase<ModifyDerive<Der, LevelSettingsObject>>::ModifyBase;
		using Base = LevelSettingsObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2eab20, Default, LevelSettingsObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2eca40, Default, LevelSettingsObject, objectFromDict, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSettingsObject, objectFromString, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2eac60, Thiscall, LevelSettingsObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2eaf70, Thiscall, LevelSettingsObject, getSaveString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ee2f0, Thiscall, LevelSettingsObject, setupColorsFromLegacyMode, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSettingsObject, shouldUseYSection, )
		}
	};
}
