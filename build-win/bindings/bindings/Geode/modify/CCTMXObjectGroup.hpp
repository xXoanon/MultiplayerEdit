#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getProperties
		#define GEODE_STATICS_getProperties
		GEODE_AS_STATIC_FUNCTION(getProperties) 
	#endif

	#ifndef GEODE_STATICS_setProperties
		#define GEODE_STATICS_setProperties
		GEODE_AS_STATIC_FUNCTION(setProperties) 
	#endif

	#ifndef GEODE_STATICS_getObjects
		#define GEODE_STATICS_getObjects
		GEODE_AS_STATIC_FUNCTION(getObjects) 
	#endif

	#ifndef GEODE_STATICS_setObjects
		#define GEODE_STATICS_setObjects
		GEODE_AS_STATIC_FUNCTION(setObjects) 
	#endif

	#ifndef GEODE_STATICS_objectNamed
		#define GEODE_STATICS_objectNamed
		GEODE_AS_STATIC_FUNCTION(objectNamed) 
	#endif

	#ifndef GEODE_STATICS_propertyNamed
		#define GEODE_STATICS_propertyNamed
		GEODE_AS_STATIC_FUNCTION(propertyNamed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getProperties
		#define GEODE_CONCEPT_CHECK_getProperties
		GEODE_CONCEPT_FUNCTION_CHECK(getProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setProperties
		#define GEODE_CONCEPT_CHECK_setProperties
		GEODE_CONCEPT_FUNCTION_CHECK(setProperties) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjects
		#define GEODE_CONCEPT_CHECK_getObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjects
		#define GEODE_CONCEPT_CHECK_setObjects
		GEODE_CONCEPT_FUNCTION_CHECK(setObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectNamed
		#define GEODE_CONCEPT_CHECK_objectNamed
		GEODE_CONCEPT_FUNCTION_CHECK(objectNamed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_propertyNamed
		#define GEODE_CONCEPT_CHECK_propertyNamed
		GEODE_CONCEPT_FUNCTION_CHECK(propertyNamed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTMXObjectGroup> : ModifyBase<ModifyDerive<Der, cocos2d::CCTMXObjectGroup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTMXObjectGroup>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTMXObjectGroup>>::ModifyBase;
		using Base = cocos2d::CCTMXObjectGroup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCTMXObjectGroup@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCTMXObjectGroup, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCTMXObjectGroup@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCTMXObjectGroup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTMXObjectGroup::getProperties)), Thiscall, cocos2d::CCTMXObjectGroup, getProperties, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCTMXObjectGroup::setProperties)), Thiscall, cocos2d::CCTMXObjectGroup, setProperties, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCTMXObjectGroup::getObjects)), Thiscall, cocos2d::CCTMXObjectGroup, getObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCTMXObjectGroup::setObjects)), Thiscall, cocos2d::CCTMXObjectGroup, setObjects, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTMXObjectGroup::objectNamed)), Thiscall, cocos2d::CCTMXObjectGroup, objectNamed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCTMXObjectGroup::propertyNamed)), Thiscall, cocos2d::CCTMXObjectGroup, propertyNamed, char const*)
		}
	};
}
