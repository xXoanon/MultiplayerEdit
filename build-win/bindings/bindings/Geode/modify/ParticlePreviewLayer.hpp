#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ParticlePreviewLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postVisit
		#define GEODE_CONCEPT_CHECK_postVisit
		GEODE_CONCEPT_FUNCTION_CHECK(postVisit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		#define GEODE_CONCEPT_CHECK_preVisitWithClippingRect
		GEODE_CONCEPT_FUNCTION_CHECK(preVisitWithClippingRect) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ParticlePreviewLayer> : ModifyBase<ModifyDerive<Der, ParticlePreviewLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ParticlePreviewLayer>>;
		using ModifyBase<ModifyDerive<Der, ParticlePreviewLayer>>::ModifyBase;
		using Base = ParticlePreviewLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ParticlePreviewLayer, create, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x435920, Thiscall, ParticlePreviewLayer, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x435840, Thiscall, ParticlePreviewLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ParticlePreviewLayer, init, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ParticlePreviewLayer, postVisit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ParticlePreviewLayer, preVisitWithClippingRect, cocos2d::CCRect)
		}
	};
}
