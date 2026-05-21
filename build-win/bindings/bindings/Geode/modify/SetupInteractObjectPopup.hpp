#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupInteractObjectPopup.hpp>
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

	#ifndef GEODE_STATICS_onPlusButton
		#define GEODE_STATICS_onPlusButton
		GEODE_AS_STATIC_FUNCTION(onPlusButton) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateItems
		#define GEODE_STATICS_updateItems
		GEODE_AS_STATIC_FUNCTION(updateItems) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlusButton
		#define GEODE_CONCEPT_CHECK_onPlusButton
		GEODE_CONCEPT_FUNCTION_CHECK(onPlusButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItems
		#define GEODE_CONCEPT_CHECK_updateItems
		GEODE_CONCEPT_FUNCTION_CHECK(updateItems) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupInteractObjectPopup> : ModifyBase<ModifyDerive<Der, SetupInteractObjectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupInteractObjectPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupInteractObjectPopup>>::ModifyBase;
		using Base = SetupInteractObjectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x423990, Default, SetupInteractObjectPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4244b0, Thiscall, SetupInteractObjectPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x424360, Thiscall, SetupInteractObjectPopup, onPlusButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x424480, Thiscall, SetupInteractObjectPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x423aa0, Thiscall, SetupInteractObjectPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x424400, Thiscall, SetupInteractObjectPopup, updateItems, )
		}
	};
}
