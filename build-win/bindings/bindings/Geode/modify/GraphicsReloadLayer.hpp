#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GraphicsReloadLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GraphicsReloadLayer, create, cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GraphicsReloadLayer, scene, cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GraphicsReloadLayer, init, cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c200, Thiscall, GraphicsReloadLayer, performReload, )
		}
	};
}
