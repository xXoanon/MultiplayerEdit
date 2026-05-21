#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCircleWave.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_removeMeAndCleanup
		#define GEODE_STATICS_removeMeAndCleanup
		GEODE_AS_STATIC_FUNCTION(removeMeAndCleanup) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updatePosition
		#define GEODE_STATICS_updatePosition
		GEODE_AS_STATIC_FUNCTION(updatePosition) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMeAndCleanup
		#define GEODE_CONCEPT_CHECK_removeMeAndCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(removeMeAndCleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTweenAction
		#define GEODE_CONCEPT_CHECK_updateTweenAction
		GEODE_CONCEPT_FUNCTION_CHECK(updateTweenAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_baseSetup
		#define GEODE_CONCEPT_CHECK_baseSetup
		GEODE_CONCEPT_FUNCTION_CHECK(baseSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followObject
		#define GEODE_CONCEPT_CHECK_followObject
		GEODE_CONCEPT_FUNCTION_CHECK(followObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePosition
		#define GEODE_CONCEPT_CHECK_updatePosition
		GEODE_CONCEPT_FUNCTION_CHECK(updatePosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCCircleWave> : ModifyBase<ModifyDerive<Der, CCCircleWave>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCircleWave>>;
		using ModifyBase<ModifyDerive<Der, CCCircleWave>>::ModifyBase;
		using Base = CCCircleWave;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCircleWave, create, float, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42870, Default, CCCircleWave, create, float, float, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42b60, Thiscall, CCCircleWave, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42f70, Thiscall, CCCircleWave, removeMeAndCleanup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42e40, Thiscall, CCCircleWave, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42be0, Thiscall, CCCircleWave, updateTweenAction, float, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCircleWave, baseSetup, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCCircleWave, followObject, cocos2d::CCNode*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42920, Thiscall, CCCircleWave, init, float, float, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x42ba0, Thiscall, CCCircleWave, updatePosition, float)
		}
	};
}
