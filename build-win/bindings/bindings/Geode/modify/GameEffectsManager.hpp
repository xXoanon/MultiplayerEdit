#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameEffectsManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addParticleEffect
		#define GEODE_STATICS_addParticleEffect
		GEODE_AS_STATIC_FUNCTION(addParticleEffect) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_scaleParticle
		#define GEODE_STATICS_scaleParticle
		GEODE_AS_STATIC_FUNCTION(scaleParticle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addParticleEffect
		#define GEODE_CONCEPT_CHECK_addParticleEffect
		GEODE_CONCEPT_FUNCTION_CHECK(addParticleEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleParticle
		#define GEODE_CONCEPT_CHECK_scaleParticle
		GEODE_CONCEPT_FUNCTION_CHECK(scaleParticle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameEffectsManager> : ModifyBase<ModifyDerive<Der, GameEffectsManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameEffectsManager>>;
		using ModifyBase<ModifyDerive<Der, GameEffectsManager>>::ModifyBase;
		using Base = GameEffectsManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameEffectsManager, create, PlayLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameEffectsManager, addParticleEffect, cocos2d::CCParticleSystemQuad*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameEffectsManager, init, PlayLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameEffectsManager, scaleParticle, cocos2d::CCParticleSystemQuad*, float)
		}
	};
}
