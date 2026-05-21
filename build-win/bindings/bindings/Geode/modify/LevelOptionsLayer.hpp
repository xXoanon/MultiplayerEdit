#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_setupOptions
		#define GEODE_STATICS_setupOptions
		GEODE_AS_STATIC_FUNCTION(setupOptions) 
	#endif

	#ifndef GEODE_STATICS_didToggle
		#define GEODE_STATICS_didToggle
		GEODE_AS_STATIC_FUNCTION(didToggle) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupOptions
		#define GEODE_CONCEPT_CHECK_setupOptions
		GEODE_CONCEPT_FUNCTION_CHECK(setupOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didToggle
		#define GEODE_CONCEPT_CHECK_didToggle
		GEODE_CONCEPT_FUNCTION_CHECK(didToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelOptionsLayer> : ModifyBase<ModifyDerive<Der, LevelOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelOptionsLayer>>::ModifyBase;
		using Base = LevelOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelOptionsLayer, create, LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x324710, Thiscall, LevelOptionsLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x324730, Thiscall, LevelOptionsLayer, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x324070, Thiscall, LevelOptionsLayer, setupOptions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x324750, Thiscall, LevelOptionsLayer, didToggle, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x324000, Thiscall, LevelOptionsLayer, init, LevelSettingsObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x324530, Thiscall, LevelOptionsLayer, onSettings, cocos2d::CCObject*)
		}
	};
}
