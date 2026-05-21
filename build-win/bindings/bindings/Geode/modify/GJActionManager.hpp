#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJActionManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getInternalAction
		#define GEODE_CONCEPT_CHECK_getInternalAction
		GEODE_CONCEPT_FUNCTION_CHECK(getInternalAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runInternalAction
		#define GEODE_CONCEPT_CHECK_runInternalAction
		GEODE_CONCEPT_FUNCTION_CHECK(runInternalAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllInternalActions
		#define GEODE_CONCEPT_CHECK_stopAllInternalActions
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllInternalActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopInternalAction
		#define GEODE_CONCEPT_CHECK_stopInternalAction
		GEODE_CONCEPT_FUNCTION_CHECK(stopInternalAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInternalActions
		#define GEODE_CONCEPT_CHECK_updateInternalActions
		GEODE_CONCEPT_FUNCTION_CHECK(updateInternalActions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJActionManager> : ModifyBase<ModifyDerive<Der, GJActionManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJActionManager>>;
		using ModifyBase<ModifyDerive<Der, GJActionManager>>::ModifyBase;
		using Base = GJActionManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJActionManager, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x200590, Thiscall, GJActionManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJActionManager, getInternalAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJActionManager, runInternalAction, cocos2d::CCAction*, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJActionManager, stopAllInternalActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJActionManager, stopInternalAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJActionManager, updateInternalActions, float, bool)
		}
	};
}
