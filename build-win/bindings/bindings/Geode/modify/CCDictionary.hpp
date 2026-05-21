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

	#ifndef GEODE_STATICS_createWithContentsOfFile
		#define GEODE_STATICS_createWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createWithContentsOfFileThreadSafe
		#define GEODE_STATICS_createWithContentsOfFileThreadSafe
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFileThreadSafe) 
	#endif

	#ifndef GEODE_STATICS_createWithDictionary
		#define GEODE_STATICS_createWithDictionary
		GEODE_AS_STATIC_FUNCTION(createWithDictionary) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_acceptVisitor
		#define GEODE_STATICS_acceptVisitor
		GEODE_AS_STATIC_FUNCTION(acceptVisitor) 
	#endif

	#ifndef GEODE_STATICS_allKeys
		#define GEODE_STATICS_allKeys
		GEODE_AS_STATIC_FUNCTION(allKeys) 
	#endif

	#ifndef GEODE_STATICS_allKeysForObject
		#define GEODE_STATICS_allKeysForObject
		GEODE_AS_STATIC_FUNCTION(allKeysForObject) 
	#endif

	#ifndef GEODE_STATICS_charForKey
		#define GEODE_STATICS_charForKey
		GEODE_AS_STATIC_FUNCTION(charForKey) 
	#endif

	#ifndef GEODE_STATICS_count
		#define GEODE_STATICS_count
		GEODE_AS_STATIC_FUNCTION(count) 
	#endif

	#ifndef GEODE_STATICS_getFirstKey
		#define GEODE_STATICS_getFirstKey
		GEODE_AS_STATIC_FUNCTION(getFirstKey) 
	#endif

	#ifndef GEODE_STATICS_objectForKey
		#define GEODE_STATICS_objectForKey
		GEODE_AS_STATIC_FUNCTION(objectForKey) 
	#endif

	#ifndef GEODE_STATICS_randomObject
		#define GEODE_STATICS_randomObject
		GEODE_AS_STATIC_FUNCTION(randomObject) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeObjectForElememt
		#define GEODE_STATICS_removeObjectForElememt
		GEODE_AS_STATIC_FUNCTION(removeObjectForElememt) 
	#endif

	#ifndef GEODE_STATICS_removeObjectForKey
		#define GEODE_STATICS_removeObjectForKey
		GEODE_AS_STATIC_FUNCTION(removeObjectForKey) 
	#endif

	#ifndef GEODE_STATICS_removeObjectsForKeys
		#define GEODE_STATICS_removeObjectsForKeys
		GEODE_AS_STATIC_FUNCTION(removeObjectsForKeys) 
	#endif

	#ifndef GEODE_STATICS_setObject
		#define GEODE_STATICS_setObject
		GEODE_AS_STATIC_FUNCTION(setObject) 
	#endif

	#ifndef GEODE_STATICS_setObjectUnSafe
		#define GEODE_STATICS_setObjectUnSafe
		GEODE_AS_STATIC_FUNCTION(setObjectUnSafe) 
	#endif

	#ifndef GEODE_STATICS_valueForKey
		#define GEODE_STATICS_valueForKey
		GEODE_AS_STATIC_FUNCTION(valueForKey) 
	#endif

	#ifndef GEODE_STATICS_writeToFile
		#define GEODE_STATICS_writeToFile
		GEODE_AS_STATIC_FUNCTION(writeToFile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithContentsOfFile
		#define GEODE_CONCEPT_CHECK_createWithContentsOfFile
		GEODE_CONCEPT_FUNCTION_CHECK(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithContentsOfFileThreadSafe
		#define GEODE_CONCEPT_CHECK_createWithContentsOfFileThreadSafe
		GEODE_CONCEPT_FUNCTION_CHECK(createWithContentsOfFileThreadSafe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithDictionary
		#define GEODE_CONCEPT_CHECK_createWithDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(createWithDictionary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_acceptVisitor
		#define GEODE_CONCEPT_CHECK_acceptVisitor
		GEODE_CONCEPT_FUNCTION_CHECK(acceptVisitor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allKeys
		#define GEODE_CONCEPT_CHECK_allKeys
		GEODE_CONCEPT_FUNCTION_CHECK(allKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allKeysForObject
		#define GEODE_CONCEPT_CHECK_allKeysForObject
		GEODE_CONCEPT_FUNCTION_CHECK(allKeysForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_charForKey
		#define GEODE_CONCEPT_CHECK_charForKey
		GEODE_CONCEPT_FUNCTION_CHECK(charForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_count
		#define GEODE_CONCEPT_CHECK_count
		GEODE_CONCEPT_FUNCTION_CHECK(count) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFirstKey
		#define GEODE_CONCEPT_CHECK_getFirstKey
		GEODE_CONCEPT_FUNCTION_CHECK(getFirstKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectForKey
		#define GEODE_CONCEPT_CHECK_objectForKey
		GEODE_CONCEPT_FUNCTION_CHECK(objectForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_randomObject
		#define GEODE_CONCEPT_CHECK_randomObject
		GEODE_CONCEPT_FUNCTION_CHECK(randomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllObjects
		#define GEODE_CONCEPT_CHECK_removeAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectForElememt
		#define GEODE_CONCEPT_CHECK_removeObjectForElememt
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectForElememt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectForKey
		#define GEODE_CONCEPT_CHECK_removeObjectForKey
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectsForKeys
		#define GEODE_CONCEPT_CHECK_removeObjectsForKeys
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectsForKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObject
		#define GEODE_CONCEPT_CHECK_setObject
		GEODE_CONCEPT_FUNCTION_CHECK(setObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectUnSafe
		#define GEODE_CONCEPT_CHECK_setObjectUnSafe
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectUnSafe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueForKey
		#define GEODE_CONCEPT_CHECK_valueForKey
		GEODE_CONCEPT_FUNCTION_CHECK(valueForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_writeToFile
		#define GEODE_CONCEPT_CHECK_writeToFile
		GEODE_CONCEPT_FUNCTION_CHECK(writeToFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCDictionary> : ModifyBase<ModifyDerive<Der, cocos2d::CCDictionary>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCDictionary>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCDictionary>>::ModifyBase;
		using Base = cocos2d::CCDictionary;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCDictionary@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCDictionary, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCDictionary@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCDictionary)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDictionary::create)), Default, cocos2d::CCDictionary, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCDictionary::createWithContentsOfFile)), Default, cocos2d::CCDictionary, createWithContentsOfFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCDictionary::createWithContentsOfFileThreadSafe)), Default, cocos2d::CCDictionary, createWithContentsOfFileThreadSafe, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCDictionary::createWithDictionary)), Default, cocos2d::CCDictionary, createWithDictionary, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCDictionary::copyWithZone)), Thiscall, cocos2d::CCDictionary, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDataVisitor&>::func(&cocos2d::CCDictionary::acceptVisitor)), Thiscall, cocos2d::CCDictionary, acceptVisitor, cocos2d::CCDataVisitor&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDictionary::allKeys)), Thiscall, cocos2d::CCDictionary, allKeys, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCDictionary::allKeysForObject)), Thiscall, cocos2d::CCDictionary, allKeysForObject, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string const&>::func(&cocos2d::CCDictionary::charForKey)), Thiscall, cocos2d::CCDictionary, charForKey, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDictionary::count)), Thiscall, cocos2d::CCDictionary, count, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDictionary::getFirstKey)), Thiscall, cocos2d::CCDictionary, getFirstKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string const&>::func(&cocos2d::CCDictionary::objectForKey)), Thiscall, cocos2d::CCDictionary, objectForKey, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<intptr_t>::func(&cocos2d::CCDictionary::objectForKey)), Thiscall, cocos2d::CCDictionary, objectForKey, intptr_t)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDictionary::randomObject)), Thiscall, cocos2d::CCDictionary, randomObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCDictionary::removeAllObjects)), Thiscall, cocos2d::CCDictionary, removeAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictElement*>::func(&cocos2d::CCDictionary::removeObjectForElememt)), Thiscall, cocos2d::CCDictionary, removeObjectForElememt, cocos2d::CCDictElement*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string const&>::func(&cocos2d::CCDictionary::removeObjectForKey)), Thiscall, cocos2d::CCDictionary, removeObjectForKey, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<intptr_t>::func(&cocos2d::CCDictionary::removeObjectForKey)), Thiscall, cocos2d::CCDictionary, removeObjectForKey, intptr_t)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCDictionary::removeObjectsForKeys)), Thiscall, cocos2d::CCDictionary, removeObjectsForKeys, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, gd::string const&>::func(&cocos2d::CCDictionary::setObject)), Thiscall, cocos2d::CCDictionary, setObject, cocos2d::CCObject*, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, intptr_t>::func(&cocos2d::CCDictionary::setObject)), Thiscall, cocos2d::CCDictionary, setObject, cocos2d::CCObject*, intptr_t)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, gd::string const&>::func(&cocos2d::CCDictionary::setObjectUnSafe)), Thiscall, cocos2d::CCDictionary, setObjectUnSafe, cocos2d::CCObject*, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*, intptr_t>::func(&cocos2d::CCDictionary::setObjectUnSafe)), Thiscall, cocos2d::CCDictionary, setObjectUnSafe, cocos2d::CCObject*, intptr_t)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string const&>::func(&cocos2d::CCDictionary::valueForKey)), Thiscall, cocos2d::CCDictionary, valueForKey, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<intptr_t>::func(&cocos2d::CCDictionary::valueForKey)), Thiscall, cocos2d::CCDictionary, valueForKey, intptr_t)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCDictionary::writeToFile)), Thiscall, cocos2d::CCDictionary, writeToFile, char const*)
		}
	};
}
