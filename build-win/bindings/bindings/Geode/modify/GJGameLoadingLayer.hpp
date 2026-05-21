#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGameLoadingLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_transitionToLoadingLayer
		#define GEODE_STATICS_transitionToLoadingLayer
		GEODE_AS_STATIC_FUNCTION(transitionToLoadingLayer) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_loadLevel
		#define GEODE_STATICS_loadLevel
		GEODE_AS_STATIC_FUNCTION(loadLevel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transitionToLoadingLayer
		#define GEODE_CONCEPT_CHECK_transitionToLoadingLayer
		GEODE_CONCEPT_FUNCTION_CHECK(transitionToLoadingLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		#define GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameLayerDidUnload
		#define GEODE_CONCEPT_CHECK_gameLayerDidUnload
		GEODE_CONCEPT_FUNCTION_CHECK(gameLayerDidUnload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevel
		#define GEODE_CONCEPT_CHECK_loadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGameLoadingLayer> : ModifyBase<ModifyDerive<Der, GJGameLoadingLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGameLoadingLayer>>;
		using ModifyBase<ModifyDerive<Der, GJGameLoadingLayer>>::ModifyBase;
		using Base = GJGameLoadingLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLoadingLayer, create, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x248e20, Default, GJGameLoadingLayer, transitionToLoadingLayer, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52e20, Thiscall, GJGameLoadingLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2490b0, Thiscall, GJGameLoadingLayer, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLoadingLayer, gameLayerDidUnload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLoadingLayer, init, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x249010, Thiscall, GJGameLoadingLayer, loadLevel, )
		}
	};
}
