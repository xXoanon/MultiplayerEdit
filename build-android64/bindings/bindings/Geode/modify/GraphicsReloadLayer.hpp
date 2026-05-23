#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GraphicsReloadLayer.hpp>
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_performReload
		#define GEODE_STATICS_performReload
		GEODE_AS_STATIC_FUNCTION(performReload) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performReload
		#define GEODE_CONCEPT_CHECK_performReload
		GEODE_CONCEPT_FUNCTION_CHECK(performReload) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GraphicsReloadLayer> : ModifyBase<ModifyDerive<Der, GraphicsReloadLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GraphicsReloadLayer>>;
		using ModifyBase<ModifyDerive<Der, GraphicsReloadLayer>>::ModifyBase;
		using Base = GraphicsReloadLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool>::func(&GraphicsReloadLayer::create)), Default, GraphicsReloadLayer, create, cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool>::func(&GraphicsReloadLayer::scene)), Default, GraphicsReloadLayer, scene, cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool>::func(&GraphicsReloadLayer::init)), Default, GraphicsReloadLayer, init, cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&GraphicsReloadLayer::performReload)), Default, GraphicsReloadLayer, performReload, )
		}
	};
}
