#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditGameObjectPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditGameObjectPopup> : ModifyBase<ModifyDerive<Der, EditGameObjectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditGameObjectPopup>>;
		using ModifyBase<ModifyDerive<Der, EditGameObjectPopup>>::ModifyBase;
		using Base = EditGameObjectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditGameObjectPopup, create, EffectGameObject*, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29af40, Thiscall, EditGameObjectPopup, init, EffectGameObject*, cocos2d::CCArray*, bool)
		}
	};
}
