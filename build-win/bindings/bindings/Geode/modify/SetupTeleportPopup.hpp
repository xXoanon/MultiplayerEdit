#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupTeleportPopup.hpp>
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

	#ifndef GEODE_STATICS_onTeleportGravity
		#define GEODE_STATICS_onTeleportGravity
		GEODE_AS_STATIC_FUNCTION(onTeleportGravity) 
	#endif

	#ifndef GEODE_STATICS_updateTeleportGravityState
		#define GEODE_STATICS_updateTeleportGravityState
		GEODE_AS_STATIC_FUNCTION(updateTeleportGravityState) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
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

	#ifndef GEODE_CONCEPT_CHECK_onTeleportGravity
		#define GEODE_CONCEPT_CHECK_onTeleportGravity
		GEODE_CONCEPT_FUNCTION_CHECK(onTeleportGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTeleportGravityState
		#define GEODE_CONCEPT_CHECK_updateTeleportGravityState
		GEODE_CONCEPT_FUNCTION_CHECK(updateTeleportGravityState) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupTeleportPopup> : ModifyBase<ModifyDerive<Der, SetupTeleportPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupTeleportPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupTeleportPopup>>::ModifyBase;
		using Base = SetupTeleportPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x460830, Default, SetupTeleportPopup, create, TeleportPortalObject*, cocos2d::CCArray*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28f240, Thiscall, SetupTeleportPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x461ad0, Thiscall, SetupTeleportPopup, updateDefaultTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x461b00, Thiscall, SetupTeleportPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x460970, Thiscall, SetupTeleportPopup, init, TeleportPortalObject*, cocos2d::CCArray*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x461c00, Thiscall, SetupTeleportPopup, onTeleportGravity, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x461c90, Thiscall, SetupTeleportPopup, updateTeleportGravityState, int)
		}
	};
}
