#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupObjectControlPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

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
	struct ModifyDerive<Der, SetupObjectControlPopup> : ModifyBase<ModifyDerive<Der, SetupObjectControlPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupObjectControlPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupObjectControlPopup>>::ModifyBase;
		using Base = SetupObjectControlPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x472e30, Default, SetupObjectControlPopup, create, ObjectControlGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x472f40, Thiscall, SetupObjectControlPopup, init, ObjectControlGameObject*, cocos2d::CCArray*)
		}
	};
}
