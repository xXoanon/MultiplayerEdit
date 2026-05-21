#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setupFromMap
		#define GEODE_STATICS_setupFromMap
		GEODE_AS_STATIC_FUNCTION(setupFromMap) 
	#endif

	#ifndef GEODE_STATICS_setupFromString
		#define GEODE_STATICS_setupFromString
		GEODE_AS_STATIC_FUNCTION(setupFromString) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCopy
		#define GEODE_CONCEPT_CHECK_getCopy
		GEODE_CONCEPT_FUNCTION_CHECK(getCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isInUse
		#define GEODE_CONCEPT_CHECK_isInUse
		GEODE_CONCEPT_FUNCTION_CHECK(isInUse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromState
		#define GEODE_CONCEPT_CHECK_loadFromState
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAction
		#define GEODE_CONCEPT_CHECK_resetAction
		GEODE_CONCEPT_FUNCTION_CHECK(resetAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToState
		#define GEODE_CONCEPT_CHECK_saveToState
		GEODE_CONCEPT_FUNCTION_CHECK(saveToState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupFromMap
		#define GEODE_CONCEPT_CHECK_setupFromMap
		GEODE_CONCEPT_FUNCTION_CHECK(setupFromMap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupFromString
		#define GEODE_CONCEPT_CHECK_setupFromString
		GEODE_CONCEPT_FUNCTION_CHECK(setupFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomColor
		#define GEODE_CONCEPT_CHECK_updateCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorAction> : ModifyBase<ModifyDerive<Der, ColorAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorAction>>;
		using ModifyBase<ModifyDerive<Der, ColorAction>>::ModifyBase;
		using Base = ColorAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x258ea0, Default, ColorAction, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, create, cocos2d::ccColor3B, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, create, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, create, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, getCopy, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, init, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, isInUse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, loadFromState, CAState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, resetAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, saveToState, CAState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x259b60, Thiscall, ColorAction, setupFromMap, gd::map<gd::string, gd::string>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x259a80, Thiscall, ColorAction, setupFromString, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x258f90, Thiscall, ColorAction, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorAction, updateCustomColor, cocos2d::ccColor3B, cocos2d::ccColor3B)
		}
	};
}
