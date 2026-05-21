#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_acceptVisitor
		#define GEODE_STATICS_acceptVisitor
		GEODE_AS_STATIC_FUNCTION(acceptVisitor) 
	#endif

	#ifndef GEODE_STATICS_addObject
		#define GEODE_STATICS_addObject
		GEODE_AS_STATIC_FUNCTION(addObject) 
	#endif

	#ifndef GEODE_STATICS_anyObject
		#define GEODE_STATICS_anyObject
		GEODE_AS_STATIC_FUNCTION(anyObject) 
	#endif

	#ifndef GEODE_STATICS_begin
		#define GEODE_STATICS_begin
		GEODE_AS_STATIC_FUNCTION(begin) 
	#endif

	#ifndef GEODE_STATICS_containsObject
		#define GEODE_STATICS_containsObject
		GEODE_AS_STATIC_FUNCTION(containsObject) 
	#endif

	#ifndef GEODE_STATICS_copy
		#define GEODE_STATICS_copy
		GEODE_AS_STATIC_FUNCTION(copy) 
	#endif

	#ifndef GEODE_STATICS_count
		#define GEODE_STATICS_count
		GEODE_AS_STATIC_FUNCTION(count) 
	#endif

	#ifndef GEODE_STATICS_end
		#define GEODE_STATICS_end
		GEODE_AS_STATIC_FUNCTION(end) 
	#endif

	#ifndef GEODE_STATICS_mutableCopy
		#define GEODE_STATICS_mutableCopy
		GEODE_AS_STATIC_FUNCTION(mutableCopy) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeObject
		#define GEODE_STATICS_removeObject
		GEODE_AS_STATIC_FUNCTION(removeObject) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_acceptVisitor
		#define GEODE_CONCEPT_CHECK_acceptVisitor
		GEODE_CONCEPT_FUNCTION_CHECK(acceptVisitor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObject
		#define GEODE_CONCEPT_CHECK_addObject
		GEODE_CONCEPT_FUNCTION_CHECK(addObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_anyObject
		#define GEODE_CONCEPT_CHECK_anyObject
		GEODE_CONCEPT_FUNCTION_CHECK(anyObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_begin
		#define GEODE_CONCEPT_CHECK_begin
		GEODE_CONCEPT_FUNCTION_CHECK(begin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_containsObject
		#define GEODE_CONCEPT_CHECK_containsObject
		GEODE_CONCEPT_FUNCTION_CHECK(containsObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copy
		#define GEODE_CONCEPT_CHECK_copy
		GEODE_CONCEPT_FUNCTION_CHECK(copy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_count
		#define GEODE_CONCEPT_CHECK_count
		GEODE_CONCEPT_FUNCTION_CHECK(count) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_end
		#define GEODE_CONCEPT_CHECK_end
		GEODE_CONCEPT_FUNCTION_CHECK(end) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mutableCopy
		#define GEODE_CONCEPT_CHECK_mutableCopy
		GEODE_CONCEPT_FUNCTION_CHECK(mutableCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllObjects
		#define GEODE_CONCEPT_CHECK_removeAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObject
		#define GEODE_CONCEPT_CHECK_removeObject
		GEODE_CONCEPT_FUNCTION_CHECK(removeObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSet> : ModifyBase<ModifyDerive<Der, cocos2d::CCSet>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSet>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSet>>::ModifyBase;
		using Base = cocos2d::CCSet;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCSet@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCSet, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCSet@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCSet)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSet::create)), Default, cocos2d::CCSet, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDataVisitor&>::func(&cocos2d::CCSet::acceptVisitor)), Thiscall, cocos2d::CCSet, acceptVisitor, cocos2d::CCDataVisitor&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCSet::addObject)), Thiscall, cocos2d::CCSet, addObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSet::anyObject)), Thiscall, cocos2d::CCSet, anyObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSet::begin)), Thiscall, cocos2d::CCSet, begin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCSet::containsObject)), Thiscall, cocos2d::CCSet, containsObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSet::copy)), Thiscall, cocos2d::CCSet, copy, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSet::count)), Thiscall, cocos2d::CCSet, count, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSet::end)), Thiscall, cocos2d::CCSet, end, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSet::mutableCopy)), Thiscall, cocos2d::CCSet, mutableCopy, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCSet::removeAllObjects)), Thiscall, cocos2d::CCSet, removeAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCSet::removeObject)), Thiscall, cocos2d::CCSet, removeObject, cocos2d::CCObject*)
		}
	};
}
