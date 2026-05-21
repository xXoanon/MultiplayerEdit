#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MapSelectLayer.hpp>
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

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_scrollWheel
		#define GEODE_STATICS_scrollWheel
		GEODE_AS_STATIC_FUNCTION(scrollWheel) 
	#endif

	#ifndef GEODE_STATICS_checkTouchMonster
		#define GEODE_STATICS_checkTouchMonster
		GEODE_AS_STATIC_FUNCTION(checkTouchMonster) 
	#endif

	#ifndef GEODE_STATICS_createObjectAtPoint
		#define GEODE_STATICS_createObjectAtPoint
		GEODE_AS_STATIC_FUNCTION(createObjectAtPoint) 
	#endif

	#ifndef GEODE_STATICS_getConstrainedMapPos
		#define GEODE_STATICS_getConstrainedMapPos
		GEODE_AS_STATIC_FUNCTION(getConstrainedMapPos) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollWheel
		#define GEODE_CONCEPT_CHECK_scrollWheel
		GEODE_CONCEPT_FUNCTION_CHECK(scrollWheel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkTouchMonster
		#define GEODE_CONCEPT_CHECK_checkTouchMonster
		GEODE_CONCEPT_FUNCTION_CHECK(checkTouchMonster) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjectAtPoint
		#define GEODE_CONCEPT_CHECK_createObjectAtPoint
		GEODE_CONCEPT_FUNCTION_CHECK(createObjectAtPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getConstrainedMapPos
		#define GEODE_CONCEPT_CHECK_getConstrainedMapPos
		GEODE_CONCEPT_FUNCTION_CHECK(getConstrainedMapPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MapSelectLayer> : ModifyBase<ModifyDerive<Der, MapSelectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MapSelectLayer>>;
		using ModifyBase<ModifyDerive<Der, MapSelectLayer>>::ModifyBase;
		using Base = MapSelectLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, scene, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, update, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, onExit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, registerWithTouchDispatcher, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, scrollWheel, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, checkTouchMonster, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, createObjectAtPoint, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, getConstrainedMapPos, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MapSelectLayer, onBack, cocos2d::CCObject*)
		}
	};
}
