#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupAdvFollowEditPhysicsPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupAdvFollowEditPhysicsPopup> : ModifyBase<ModifyDerive<Der, SetupAdvFollowEditPhysicsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupAdvFollowEditPhysicsPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupAdvFollowEditPhysicsPopup>>::ModifyBase;
		using Base = SetupAdvFollowEditPhysicsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x407220, Default, SetupAdvFollowEditPhysicsPopup, create, AdvancedFollowEditObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4080c0, Thiscall, SetupAdvFollowEditPhysicsPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x407330, Thiscall, SetupAdvFollowEditPhysicsPopup, init, AdvancedFollowEditObject*, cocos2d::CCArray*)
		}
	};
}
