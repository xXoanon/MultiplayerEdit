#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GhostTrailEffect.hpp>
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

	#ifndef GEODE_STATICS_trailSnapshot
		#define GEODE_STATICS_trailSnapshot
		GEODE_AS_STATIC_FUNCTION(trailSnapshot) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doBlendAdditive
		#define GEODE_CONCEPT_CHECK_doBlendAdditive
		GEODE_CONCEPT_FUNCTION_CHECK(doBlendAdditive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runWithTarget
		#define GEODE_CONCEPT_CHECK_runWithTarget
		GEODE_CONCEPT_FUNCTION_CHECK(runWithTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopTrail
		#define GEODE_CONCEPT_CHECK_stopTrail
		GEODE_CONCEPT_FUNCTION_CHECK(stopTrail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trailSnapshot
		#define GEODE_CONCEPT_CHECK_trailSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(trailSnapshot) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GhostTrailEffect> : ModifyBase<ModifyDerive<Der, GhostTrailEffect>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GhostTrailEffect>>;
		using ModifyBase<ModifyDerive<Der, GhostTrailEffect>>::ModifyBase;
		using Base = GhostTrailEffect;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a000, Default, GhostTrailEffect, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a0e0, Thiscall, GhostTrailEffect, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GhostTrailEffect, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GhostTrailEffect, doBlendAdditive, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GhostTrailEffect, runWithTarget, cocos2d::CCSprite*, float, float, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GhostTrailEffect, stopTrail, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a140, Thiscall, GhostTrailEffect, trailSnapshot, float)
		}
	};
}
