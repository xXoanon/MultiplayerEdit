#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupBGSpeedTrigger.hpp>
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
	struct ModifyDerive<Der, SetupBGSpeedTrigger> : ModifyBase<ModifyDerive<Der, SetupBGSpeedTrigger>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupBGSpeedTrigger>>;
		using ModifyBase<ModifyDerive<Der, SetupBGSpeedTrigger>>::ModifyBase;
		using Base = SetupBGSpeedTrigger;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4289b0, Default, SetupBGSpeedTrigger, create, EffectGameObject*, cocos2d::CCArray*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x428ad0, Thiscall, SetupBGSpeedTrigger, init, EffectGameObject*, cocos2d::CCArray*, int)
		}
	};
}
