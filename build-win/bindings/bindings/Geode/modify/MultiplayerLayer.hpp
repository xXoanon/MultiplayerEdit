#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MultiplayerLayer.hpp>
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onBtn1
		#define GEODE_STATICS_onBtn1
		GEODE_AS_STATIC_FUNCTION(onBtn1) 
	#endif

	#ifndef GEODE_STATICS_onBtn2
		#define GEODE_STATICS_onBtn2
		GEODE_AS_STATIC_FUNCTION(onBtn2) 
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

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBtn1
		#define GEODE_CONCEPT_CHECK_onBtn1
		GEODE_CONCEPT_FUNCTION_CHECK(onBtn1) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBtn2
		#define GEODE_CONCEPT_CHECK_onBtn2
		GEODE_CONCEPT_FUNCTION_CHECK(onBtn2) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MultiplayerLayer> : ModifyBase<ModifyDerive<Der, MultiplayerLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MultiplayerLayer>>;
		using ModifyBase<ModifyDerive<Der, MultiplayerLayer>>::ModifyBase;
		using Base = MultiplayerLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MultiplayerLayer, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MultiplayerLayer, scene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MultiplayerLayer, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MultiplayerLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MultiplayerLayer, onBack, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MultiplayerLayer, onBtn1, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MultiplayerLayer, onBtn2, cocos2d::CCObject*)
		}
	};
}
