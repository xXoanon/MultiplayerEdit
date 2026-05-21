#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupPlatformerEndPopup.hpp>
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
	struct ModifyDerive<Der, SetupPlatformerEndPopup> : ModifyBase<ModifyDerive<Der, SetupPlatformerEndPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupPlatformerEndPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupPlatformerEndPopup>>::ModifyBase;
		using Base = SetupPlatformerEndPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41da70, Default, SetupPlatformerEndPopup, create, EndTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41db80, Thiscall, SetupPlatformerEndPopup, init, EndTriggerGameObject*, cocos2d::CCArray*)
		}
	};
}
