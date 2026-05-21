#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UISaveLoadLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onLoad
		#define GEODE_STATICS_onLoad
		GEODE_AS_STATIC_FUNCTION(onLoad) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLoad
		#define GEODE_CONCEPT_CHECK_onLoad
		GEODE_CONCEPT_FUNCTION_CHECK(onLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UISaveLoadLayer> : ModifyBase<ModifyDerive<Der, UISaveLoadLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UISaveLoadLayer>>;
		using ModifyBase<ModifyDerive<Der, UISaveLoadLayer>>::ModifyBase;
		using Base = UISaveLoadLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UISaveLoadLayer, create, UIOptionsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a4000, Thiscall, UISaveLoadLayer, init, UIOptionsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a47e0, Thiscall, UISaveLoadLayer, onLoad, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a4550, Thiscall, UISaveLoadLayer, onSave, cocos2d::CCObject*)
		}
	};
}
