#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithContentsOfFile
		#define GEODE_STATICS_createWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createWithData
		#define GEODE_STATICS_createWithData
		GEODE_AS_STATIC_FUNCTION(createWithData) 
	#endif

	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

	#ifndef GEODE_STATICS_isEqual
		#define GEODE_STATICS_isEqual
		GEODE_AS_STATIC_FUNCTION(isEqual) 
	#endif

	#ifndef GEODE_STATICS_acceptVisitor
		#define GEODE_STATICS_acceptVisitor
		GEODE_AS_STATIC_FUNCTION(acceptVisitor) 
	#endif

	#ifndef GEODE_STATICS_boolValue
		#define GEODE_STATICS_boolValue
		GEODE_AS_STATIC_FUNCTION(boolValue) 
	#endif

	#ifndef GEODE_STATICS_compare
		#define GEODE_STATICS_compare
		GEODE_AS_STATIC_FUNCTION(compare) 
	#endif

	#ifndef GEODE_STATICS_doubleValue
		#define GEODE_STATICS_doubleValue
		GEODE_AS_STATIC_FUNCTION(doubleValue) 
	#endif

	#ifndef GEODE_STATICS_floatValue
		#define GEODE_STATICS_floatValue
		GEODE_AS_STATIC_FUNCTION(floatValue) 
	#endif

	#ifndef GEODE_STATICS_getCString
		#define GEODE_STATICS_getCString
		GEODE_AS_STATIC_FUNCTION(getCString) 
	#endif

	#ifndef GEODE_STATICS_intValue
		#define GEODE_STATICS_intValue
		GEODE_AS_STATIC_FUNCTION(intValue) 
	#endif

	#ifndef GEODE_STATICS_length
		#define GEODE_STATICS_length
		GEODE_AS_STATIC_FUNCTION(length) 
	#endif

	#ifndef GEODE_STATICS_uintValue
		#define GEODE_STATICS_uintValue
		GEODE_AS_STATIC_FUNCTION(uintValue) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithContentsOfFile
		#define GEODE_CONCEPT_CHECK_createWithContentsOfFile
		GEODE_CONCEPT_FUNCTION_CHECK(createWithContentsOfFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithData
		#define GEODE_CONCEPT_CHECK_createWithData
		GEODE_CONCEPT_FUNCTION_CHECK(createWithData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEqual
		#define GEODE_CONCEPT_CHECK_isEqual
		GEODE_CONCEPT_FUNCTION_CHECK(isEqual) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_acceptVisitor
		#define GEODE_CONCEPT_CHECK_acceptVisitor
		GEODE_CONCEPT_FUNCTION_CHECK(acceptVisitor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_boolValue
		#define GEODE_CONCEPT_CHECK_boolValue
		GEODE_CONCEPT_FUNCTION_CHECK(boolValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_compare
		#define GEODE_CONCEPT_CHECK_compare
		GEODE_CONCEPT_FUNCTION_CHECK(compare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doubleValue
		#define GEODE_CONCEPT_CHECK_doubleValue
		GEODE_CONCEPT_FUNCTION_CHECK(doubleValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_floatValue
		#define GEODE_CONCEPT_CHECK_floatValue
		GEODE_CONCEPT_FUNCTION_CHECK(floatValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCString
		#define GEODE_CONCEPT_CHECK_getCString
		GEODE_CONCEPT_FUNCTION_CHECK(getCString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_intValue
		#define GEODE_CONCEPT_CHECK_intValue
		GEODE_CONCEPT_FUNCTION_CHECK(intValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_length
		#define GEODE_CONCEPT_CHECK_length
		GEODE_CONCEPT_FUNCTION_CHECK(length) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uintValue
		#define GEODE_CONCEPT_CHECK_uintValue
		GEODE_CONCEPT_FUNCTION_CHECK(uintValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCString> : ModifyBase<ModifyDerive<Der, cocos2d::CCString>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCString>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCString>>::ModifyBase;
		using Base = cocos2d::CCString;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCString@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCString::createWithContentsOfFile)), Default, cocos2d::CCString, createWithContentsOfFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<unsigned char const*, unsigned long>::func(&cocos2d::CCString::createWithData)), Default, cocos2d::CCString, createWithData, unsigned char const*, unsigned long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCString::copyWithZone)), Thiscall, cocos2d::CCString, copyWithZone, cocos2d::CCZone*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCObject const*>::func(&cocos2d::CCString::isEqual)), Thiscall, cocos2d::CCString, isEqual, cocos2d::CCObject const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDataVisitor&>::func(&cocos2d::CCString::acceptVisitor)), Thiscall, cocos2d::CCString, acceptVisitor, cocos2d::CCDataVisitor&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCString::boolValue)), Thiscall, cocos2d::CCString, boolValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCString::compare)), Thiscall, cocos2d::CCString, compare, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCString::doubleValue)), Thiscall, cocos2d::CCString, doubleValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCString::floatValue)), Thiscall, cocos2d::CCString, floatValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCString::getCString)), Thiscall, cocos2d::CCString, getCString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCString::intValue)), Thiscall, cocos2d::CCString, intValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCString::length)), Thiscall, cocos2d::CCString, length, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCString::uintValue)), Thiscall, cocos2d::CCString, uintValue, )
		}
	};
}
