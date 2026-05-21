#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer6.hpp>
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

	#ifndef GEODE_STATICS_startGame01
		#define GEODE_STATICS_startGame01
		GEODE_AS_STATIC_FUNCTION(startGame01) 
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

	#ifndef GEODE_CONCEPT_CHECK_startGame01
		#define GEODE_CONCEPT_CHECK_startGame01
		GEODE_CONCEPT_FUNCTION_CHECK(startGame01) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretLayer6> : ModifyBase<ModifyDerive<Der, SecretLayer6>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretLayer6>>;
		using ModifyBase<ModifyDerive<Der, SecretLayer6>>::ModifyBase;
		using Base = SecretLayer6;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretLayer6, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretLayer6, scene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretLayer6, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretLayer6, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretLayer6, onBack, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SecretLayer6, startGame01, )
		}
	};
}
