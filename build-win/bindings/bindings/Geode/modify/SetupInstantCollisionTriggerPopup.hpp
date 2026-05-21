#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupInstantCollisionTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultTriggerValues
		#define GEODE_STATICS_updateDefaultTriggerValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialNodes
		#define GEODE_STATICS_updateSpecialNodes
		GEODE_AS_STATIC_FUNCTION(updateSpecialNodes) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		#define GEODE_CONCEPT_CHECK_updateDefaultTriggerValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateDefaultTriggerValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialNodes
		#define GEODE_CONCEPT_CHECK_updateSpecialNodes
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialNodes) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupInstantCollisionTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupInstantCollisionTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupInstantCollisionTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupInstantCollisionTriggerPopup>>::ModifyBase;
		using Base = SetupInstantCollisionTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x418140, Thiscall, SetupInstantCollisionTriggerPopup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x419eb0, Default, SetupInstantCollisionTriggerPopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41a890, Thiscall, SetupInstantCollisionTriggerPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41a660, Thiscall, SetupInstantCollisionTriggerPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x419f40, Thiscall, SetupInstantCollisionTriggerPopup, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41a680, Thiscall, SetupInstantCollisionTriggerPopup, updateSpecialNodes, )
		}
	};
}
