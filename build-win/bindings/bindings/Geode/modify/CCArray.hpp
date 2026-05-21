#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addObjectNew
		#define GEODE_STATICS_addObjectNew
		GEODE_AS_STATIC_FUNCTION(addObjectNew) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndexChild
		#define GEODE_STATICS_fastRemoveObjectAtIndexChild
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndexChild) 
	#endif

	#ifndef GEODE_STATICS_fastRemoveObjectAtIndexNew
		#define GEODE_STATICS_fastRemoveObjectAtIndexNew
		GEODE_AS_STATIC_FUNCTION(fastRemoveObjectAtIndexNew) 
	#endif

	#ifndef GEODE_STATICS_recreateNewIndexes
		#define GEODE_STATICS_recreateNewIndexes
		GEODE_AS_STATIC_FUNCTION(recreateNewIndexes) 
	#endif

	#ifndef GEODE_STATICS_removeObjectAtIndexChild
		#define GEODE_STATICS_removeObjectAtIndexChild
		GEODE_AS_STATIC_FUNCTION(removeObjectAtIndexChild) 
	#endif

	#ifndef GEODE_STATICS_stringAtIndex
		#define GEODE_STATICS_stringAtIndex
		GEODE_AS_STATIC_FUNCTION(stringAtIndex) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addObjectNew
		#define GEODE_CONCEPT_CHECK_addObjectNew
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fastRemoveObjectAtIndexChild
		#define GEODE_CONCEPT_CHECK_fastRemoveObjectAtIndexChild
		GEODE_CONCEPT_FUNCTION_CHECK(fastRemoveObjectAtIndexChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fastRemoveObjectAtIndexNew
		#define GEODE_CONCEPT_CHECK_fastRemoveObjectAtIndexNew
		GEODE_CONCEPT_FUNCTION_CHECK(fastRemoveObjectAtIndexNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recreateNewIndexes
		#define GEODE_CONCEPT_CHECK_recreateNewIndexes
		GEODE_CONCEPT_FUNCTION_CHECK(recreateNewIndexes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectAtIndexChild
		#define GEODE_CONCEPT_CHECK_removeObjectAtIndexChild
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectAtIndexChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stringAtIndex
		#define GEODE_CONCEPT_CHECK_stringAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(stringAtIndex) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCArray> : ModifyBase<ModifyDerive<Der, cocos2d::CCArray>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCArray>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCArray>>::ModifyBase;
		using Base = cocos2d::CCArray;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCArray::addObjectNew)), Thiscall, cocos2d::CCArray, addObjectNew, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::fastRemoveObjectAtIndexChild)), Thiscall, cocos2d::CCArray, fastRemoveObjectAtIndexChild, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::fastRemoveObjectAtIndexNew)), Thiscall, cocos2d::CCArray, fastRemoveObjectAtIndexNew, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCArray::recreateNewIndexes)), Thiscall, cocos2d::CCArray, recreateNewIndexes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int, bool>::func(&cocos2d::CCArray::removeObjectAtIndexChild)), Thiscall, cocos2d::CCArray, removeObjectAtIndexChild, unsigned int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned int>::func(&cocos2d::CCArray::stringAtIndex)), Thiscall, cocos2d::CCArray, stringAtIndex, unsigned int)
		}
	};
}
