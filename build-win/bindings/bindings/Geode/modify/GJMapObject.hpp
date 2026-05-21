#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMapObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createMonster
		#define GEODE_STATICS_createMonster
		GEODE_AS_STATIC_FUNCTION(createMonster) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_monsterIdle
		#define GEODE_STATICS_monsterIdle
		GEODE_AS_STATIC_FUNCTION(monsterIdle) 
	#endif

	#ifndef GEODE_STATICS_monsterJump
		#define GEODE_STATICS_monsterJump
		GEODE_AS_STATIC_FUNCTION(monsterJump) 
	#endif

	#ifndef GEODE_STATICS_moveFinished
		#define GEODE_STATICS_moveFinished
		GEODE_AS_STATIC_FUNCTION(moveFinished) 
	#endif

	#ifndef GEODE_STATICS_moveMonster
		#define GEODE_STATICS_moveMonster
		GEODE_AS_STATIC_FUNCTION(moveMonster) 
	#endif

	#ifndef GEODE_STATICS_playerJump
		#define GEODE_STATICS_playerJump
		GEODE_AS_STATIC_FUNCTION(playerJump) 
	#endif

	#ifndef GEODE_STATICS_setObjectOrigin
		#define GEODE_STATICS_setObjectOrigin
		GEODE_AS_STATIC_FUNCTION(setObjectOrigin) 
	#endif

	#ifndef GEODE_STATICS_startMonsterJumpLoop
		#define GEODE_STATICS_startMonsterJumpLoop
		GEODE_AS_STATIC_FUNCTION(startMonsterJumpLoop) 
	#endif

	#ifndef GEODE_STATICS_startPlayerJumpLoop
		#define GEODE_STATICS_startPlayerJumpLoop
		GEODE_AS_STATIC_FUNCTION(startPlayerJumpLoop) 
	#endif

	#ifndef GEODE_STATICS_touchMonster
		#define GEODE_STATICS_touchMonster
		GEODE_AS_STATIC_FUNCTION(touchMonster) 
	#endif

	#ifndef GEODE_STATICS_updateShadow
		#define GEODE_STATICS_updateShadow
		GEODE_AS_STATIC_FUNCTION(updateShadow) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMonster
		#define GEODE_CONCEPT_CHECK_createMonster
		GEODE_CONCEPT_FUNCTION_CHECK(createMonster) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_monsterIdle
		#define GEODE_CONCEPT_CHECK_monsterIdle
		GEODE_CONCEPT_FUNCTION_CHECK(monsterIdle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_monsterJump
		#define GEODE_CONCEPT_CHECK_monsterJump
		GEODE_CONCEPT_FUNCTION_CHECK(monsterJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveFinished
		#define GEODE_CONCEPT_CHECK_moveFinished
		GEODE_CONCEPT_FUNCTION_CHECK(moveFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveMonster
		#define GEODE_CONCEPT_CHECK_moveMonster
		GEODE_CONCEPT_FUNCTION_CHECK(moveMonster) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerJump
		#define GEODE_CONCEPT_CHECK_playerJump
		GEODE_CONCEPT_FUNCTION_CHECK(playerJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectOrigin
		#define GEODE_CONCEPT_CHECK_setObjectOrigin
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectOrigin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startMonsterJumpLoop
		#define GEODE_CONCEPT_CHECK_startMonsterJumpLoop
		GEODE_CONCEPT_FUNCTION_CHECK(startMonsterJumpLoop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startPlayerJumpLoop
		#define GEODE_CONCEPT_CHECK_startPlayerJumpLoop
		GEODE_CONCEPT_FUNCTION_CHECK(startPlayerJumpLoop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchMonster
		#define GEODE_CONCEPT_CHECK_touchMonster
		GEODE_CONCEPT_FUNCTION_CHECK(touchMonster) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShadow
		#define GEODE_CONCEPT_CHECK_updateShadow
		GEODE_CONCEPT_FUNCTION_CHECK(updateShadow) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMapObject> : ModifyBase<ModifyDerive<Der, GJMapObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMapObject>>;
		using ModifyBase<ModifyDerive<Der, GJMapObject>>::ModifyBase;
		using Base = GJMapObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, create, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, createMonster, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, init, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, monsterIdle, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, monsterJump, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, moveFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, moveMonster, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, moveMonster, cocos2d::CCPoint, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, playerJump, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, setObjectOrigin, cocos2d::CCPoint, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, startMonsterJumpLoop, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, startPlayerJumpLoop, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, touchMonster, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMapObject, updateShadow, float, float, cocos2d::CCPoint)
		}
	};
}
