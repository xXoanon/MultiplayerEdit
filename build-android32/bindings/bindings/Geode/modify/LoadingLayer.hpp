#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LoadingLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_getLoadingString
		#define GEODE_STATICS_getLoadingString
		GEODE_AS_STATIC_FUNCTION(getLoadingString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadAssets
		#define GEODE_STATICS_loadAssets
		GEODE_AS_STATIC_FUNCTION(loadAssets) 
	#endif

	#ifndef GEODE_STATICS_loadingFinished
		#define GEODE_STATICS_loadingFinished
		GEODE_AS_STATIC_FUNCTION(loadingFinished) 
	#endif

	#ifndef GEODE_STATICS_updateProgress
		#define GEODE_STATICS_updateProgress
		GEODE_AS_STATIC_FUNCTION(updateProgress) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLoadingString
		#define GEODE_CONCEPT_CHECK_getLoadingString
		GEODE_CONCEPT_FUNCTION_CHECK(getLoadingString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadAssets
		#define GEODE_CONCEPT_CHECK_loadAssets
		GEODE_CONCEPT_FUNCTION_CHECK(loadAssets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadingFinished
		#define GEODE_CONCEPT_CHECK_loadingFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadingFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProgress
		#define GEODE_CONCEPT_CHECK_updateProgress
		GEODE_CONCEPT_FUNCTION_CHECK(updateProgress) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LoadingLayer> : ModifyBase<ModifyDerive<Der, LoadingLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LoadingLayer>>;
		using ModifyBase<ModifyDerive<Der, LoadingLayer>>::ModifyBase;
		using Base = LoadingLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN12LoadingLayerD2Ev")), Default, LoadingLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LoadingLayer::create)), Default, LoadingLayer, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LoadingLayer::scene)), Default, LoadingLayer, scene, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LoadingLayer::getLoadingString)), Default, LoadingLayer, getLoadingString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<bool>::func(&LoadingLayer::init)), Default, LoadingLayer, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LoadingLayer::loadAssets)), Default, LoadingLayer, loadAssets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&LoadingLayer::loadingFinished)), Default, LoadingLayer, loadingFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&LoadingLayer::updateProgress)), Default, LoadingLayer, updateProgress, int)
		}
	};
}
