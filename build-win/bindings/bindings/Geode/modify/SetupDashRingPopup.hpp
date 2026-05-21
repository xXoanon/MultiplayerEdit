#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupDashRingPopup.hpp>
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
	struct ModifyDerive<Der, SetupDashRingPopup> : ModifyBase<ModifyDerive<Der, SetupDashRingPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupDashRingPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupDashRingPopup>>::ModifyBase;
		using Base = SetupDashRingPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupDashRingPopup, create, DashRingObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4731f0, Thiscall, SetupDashRingPopup, init, DashRingObject*, cocos2d::CCArray*)
		}
	};
}
