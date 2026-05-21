#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSpawnParticlePopup.hpp>
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
	struct ModifyDerive<Der, SetupSpawnParticlePopup> : ModifyBase<ModifyDerive<Der, SetupSpawnParticlePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSpawnParticlePopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSpawnParticlePopup>>::ModifyBase;
		using Base = SetupSpawnParticlePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x468340, Default, SetupSpawnParticlePopup, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x468450, Thiscall, SetupSpawnParticlePopup, init, EffectGameObject*, cocos2d::CCArray*)
		}
	};
}
