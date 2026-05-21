#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos-ext.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_indexOfSortedObject
		#define GEODE_STATICS_indexOfSortedObject
		GEODE_AS_STATIC_FUNCTION(indexOfSortedObject) 
	#endif

	#ifndef GEODE_STATICS_insertSortedObject
		#define GEODE_STATICS_insertSortedObject
		GEODE_AS_STATIC_FUNCTION(insertSortedObject) 
	#endif

	#ifndef GEODE_STATICS_objectWithObjectID
		#define GEODE_STATICS_objectWithObjectID
		GEODE_AS_STATIC_FUNCTION(objectWithObjectID) 
	#endif

	#ifndef GEODE_STATICS_removeSortedObject
		#define GEODE_STATICS_removeSortedObject
		GEODE_AS_STATIC_FUNCTION(removeSortedObject) 
	#endif

	#ifndef GEODE_STATICS_setObjectID_ofSortedObject
		#define GEODE_STATICS_setObjectID_ofSortedObject
		GEODE_AS_STATIC_FUNCTION(setObjectID_ofSortedObject) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_indexOfSortedObject
		#define GEODE_CONCEPT_CHECK_indexOfSortedObject
		GEODE_CONCEPT_FUNCTION_CHECK(indexOfSortedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertSortedObject
		#define GEODE_CONCEPT_CHECK_insertSortedObject
		GEODE_CONCEPT_FUNCTION_CHECK(insertSortedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectWithObjectID
		#define GEODE_CONCEPT_CHECK_objectWithObjectID
		GEODE_CONCEPT_FUNCTION_CHECK(objectWithObjectID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSortedObject
		#define GEODE_CONCEPT_CHECK_removeSortedObject
		GEODE_CONCEPT_FUNCTION_CHECK(removeSortedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectID_ofSortedObject
		#define GEODE_CONCEPT_CHECK_setObjectID_ofSortedObject
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectID_ofSortedObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::extension::CCArrayForObjectSorting> : ModifyBase<ModifyDerive<Der, cocos2d::extension::CCArrayForObjectSorting>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::extension::CCArrayForObjectSorting>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::extension::CCArrayForObjectSorting>>::ModifyBase;
		using Base = cocos2d::extension::CCArrayForObjectSorting;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCSortableObject*>::func(&cocos2d::extension::CCArrayForObjectSorting::indexOfSortedObject)), Thiscall, cocos2d::extension::CCArrayForObjectSorting, indexOfSortedObject, cocos2d::extension::CCSortableObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCSortableObject*>::func(&cocos2d::extension::CCArrayForObjectSorting::insertSortedObject)), Thiscall, cocos2d::extension::CCArrayForObjectSorting, insertSortedObject, cocos2d::extension::CCSortableObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::extension::CCArrayForObjectSorting::objectWithObjectID)), Thiscall, cocos2d::extension::CCArrayForObjectSorting, objectWithObjectID, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::extension::CCSortableObject*>::func(&cocos2d::extension::CCArrayForObjectSorting::removeSortedObject)), Thiscall, cocos2d::extension::CCArrayForObjectSorting, removeSortedObject, cocos2d::extension::CCSortableObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, cocos2d::extension::CCSortableObject*>::func(&cocos2d::extension::CCArrayForObjectSorting::setObjectID_ofSortedObject)), Thiscall, cocos2d::extension::CCArrayForObjectSorting, setObjectID_ofSortedObject, unsigned int, cocos2d::extension::CCSortableObject*)
		}
	};
}
