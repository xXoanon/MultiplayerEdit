#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UndoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithArray
		#define GEODE_CONCEPT_CHECK_createWithArray
		GEODE_CONCEPT_FUNCTION_CHECK(createWithArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTransformObjects
		#define GEODE_CONCEPT_CHECK_createWithTransformObjects
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTransformObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTransformObjects
		#define GEODE_CONCEPT_CHECK_initWithTransformObjects
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTransformObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjects
		#define GEODE_CONCEPT_CHECK_setObjects
		GEODE_CONCEPT_FUNCTION_CHECK(setObjects) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UndoObject> : ModifyBase<ModifyDerive<Der, UndoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UndoObject>>;
		using ModifyBase<ModifyDerive<Der, UndoObject>>::ModifyBase;
		using Base = UndoObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UndoObject, create, GameObject*, UndoCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UndoObject, createWithArray, cocos2d::CCArray*, UndoCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UndoObject, createWithTransformObjects, cocos2d::CCArray*, UndoCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UndoObject, init, GameObject*, UndoCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UndoObject, init, cocos2d::CCArray*, UndoCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UndoObject, initWithTransformObjects, cocos2d::CCArray*, UndoCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(UndoObject, setObjects, cocos2d::CCArray*)
		}
	};
}
