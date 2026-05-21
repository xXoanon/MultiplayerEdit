#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createXMLFile
		#define GEODE_STATICS_createXMLFile
		GEODE_AS_STATIC_FUNCTION(createXMLFile) 
	#endif

	#ifndef GEODE_STATICS_getXMLFilePath
		#define GEODE_STATICS_getXMLFilePath
		GEODE_AS_STATIC_FUNCTION(getXMLFilePath) 
	#endif

	#ifndef GEODE_STATICS_initXMLFilePath
		#define GEODE_STATICS_initXMLFilePath
		GEODE_AS_STATIC_FUNCTION(initXMLFilePath) 
	#endif

	#ifndef GEODE_STATICS_isXMLFileExist
		#define GEODE_STATICS_isXMLFileExist
		GEODE_AS_STATIC_FUNCTION(isXMLFileExist) 
	#endif

	#ifndef GEODE_STATICS_purgeSharedUserDefault
		#define GEODE_STATICS_purgeSharedUserDefault
		GEODE_AS_STATIC_FUNCTION(purgeSharedUserDefault) 
	#endif

	#ifndef GEODE_STATICS_sharedUserDefault
		#define GEODE_STATICS_sharedUserDefault
		GEODE_AS_STATIC_FUNCTION(sharedUserDefault) 
	#endif

	#ifndef GEODE_STATICS_flush
		#define GEODE_STATICS_flush
		GEODE_AS_STATIC_FUNCTION(flush) 
	#endif

	#ifndef GEODE_STATICS_getBoolForKey
		#define GEODE_STATICS_getBoolForKey
		GEODE_AS_STATIC_FUNCTION(getBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_getDoubleForKey
		#define GEODE_STATICS_getDoubleForKey
		GEODE_AS_STATIC_FUNCTION(getDoubleForKey) 
	#endif

	#ifndef GEODE_STATICS_getFloatForKey
		#define GEODE_STATICS_getFloatForKey
		GEODE_AS_STATIC_FUNCTION(getFloatForKey) 
	#endif

	#ifndef GEODE_STATICS_getIntegerForKey
		#define GEODE_STATICS_getIntegerForKey
		GEODE_AS_STATIC_FUNCTION(getIntegerForKey) 
	#endif

	#ifndef GEODE_STATICS_getStringForKey
		#define GEODE_STATICS_getStringForKey
		GEODE_AS_STATIC_FUNCTION(getStringForKey) 
	#endif

	#ifndef GEODE_STATICS_setBoolForKey
		#define GEODE_STATICS_setBoolForKey
		GEODE_AS_STATIC_FUNCTION(setBoolForKey) 
	#endif

	#ifndef GEODE_STATICS_setDoubleForKey
		#define GEODE_STATICS_setDoubleForKey
		GEODE_AS_STATIC_FUNCTION(setDoubleForKey) 
	#endif

	#ifndef GEODE_STATICS_setFloatForKey
		#define GEODE_STATICS_setFloatForKey
		GEODE_AS_STATIC_FUNCTION(setFloatForKey) 
	#endif

	#ifndef GEODE_STATICS_setIntegerForKey
		#define GEODE_STATICS_setIntegerForKey
		GEODE_AS_STATIC_FUNCTION(setIntegerForKey) 
	#endif

	#ifndef GEODE_STATICS_setStringForKey
		#define GEODE_STATICS_setStringForKey
		GEODE_AS_STATIC_FUNCTION(setStringForKey) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createXMLFile
		#define GEODE_CONCEPT_CHECK_createXMLFile
		GEODE_CONCEPT_FUNCTION_CHECK(createXMLFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getXMLFilePath
		#define GEODE_CONCEPT_CHECK_getXMLFilePath
		GEODE_CONCEPT_FUNCTION_CHECK(getXMLFilePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initXMLFilePath
		#define GEODE_CONCEPT_CHECK_initXMLFilePath
		GEODE_CONCEPT_FUNCTION_CHECK(initXMLFilePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isXMLFileExist
		#define GEODE_CONCEPT_CHECK_isXMLFileExist
		GEODE_CONCEPT_FUNCTION_CHECK(isXMLFileExist) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeSharedUserDefault
		#define GEODE_CONCEPT_CHECK_purgeSharedUserDefault
		GEODE_CONCEPT_FUNCTION_CHECK(purgeSharedUserDefault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedUserDefault
		#define GEODE_CONCEPT_CHECK_sharedUserDefault
		GEODE_CONCEPT_FUNCTION_CHECK(sharedUserDefault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flush
		#define GEODE_CONCEPT_CHECK_flush
		GEODE_CONCEPT_FUNCTION_CHECK(flush) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoolForKey
		#define GEODE_CONCEPT_CHECK_getBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDoubleForKey
		#define GEODE_CONCEPT_CHECK_getDoubleForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDoubleForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFloatForKey
		#define GEODE_CONCEPT_CHECK_getFloatForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getFloatForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIntegerForKey
		#define GEODE_CONCEPT_CHECK_getIntegerForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getIntegerForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStringForKey
		#define GEODE_CONCEPT_CHECK_getStringForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getStringForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBoolForKey
		#define GEODE_CONCEPT_CHECK_setBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDoubleForKey
		#define GEODE_CONCEPT_CHECK_setDoubleForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setDoubleForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFloatForKey
		#define GEODE_CONCEPT_CHECK_setFloatForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setFloatForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIntegerForKey
		#define GEODE_CONCEPT_CHECK_setIntegerForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setIntegerForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStringForKey
		#define GEODE_CONCEPT_CHECK_setStringForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setStringForKey) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCUserDefault> : ModifyBase<ModifyDerive<Der, cocos2d::CCUserDefault>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCUserDefault>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCUserDefault>>::ModifyBase;
		using Base = cocos2d::CCUserDefault;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCUserDefault@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCUserDefault, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCUserDefault@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCUserDefault)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCUserDefault::createXMLFile)), Default, cocos2d::CCUserDefault, createXMLFile, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCUserDefault::getXMLFilePath)), Default, cocos2d::CCUserDefault, getXMLFilePath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCUserDefault::initXMLFilePath)), Default, cocos2d::CCUserDefault, initXMLFilePath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCUserDefault::isXMLFileExist)), Default, cocos2d::CCUserDefault, isXMLFileExist, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCUserDefault::purgeSharedUserDefault)), Default, cocos2d::CCUserDefault, purgeSharedUserDefault, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCUserDefault::sharedUserDefault)), Default, cocos2d::CCUserDefault, sharedUserDefault, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCUserDefault::flush)), Thiscall, cocos2d::CCUserDefault, flush, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCUserDefault::getBoolForKey)), Thiscall, cocos2d::CCUserDefault, getBoolForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCUserDefault::getBoolForKey)), Thiscall, cocos2d::CCUserDefault, getBoolForKey, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCUserDefault::getDoubleForKey)), Thiscall, cocos2d::CCUserDefault, getDoubleForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, double>::func(&cocos2d::CCUserDefault::getDoubleForKey)), Thiscall, cocos2d::CCUserDefault, getDoubleForKey, char const*, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCUserDefault::getFloatForKey)), Thiscall, cocos2d::CCUserDefault, getFloatForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, float>::func(&cocos2d::CCUserDefault::getFloatForKey)), Thiscall, cocos2d::CCUserDefault, getFloatForKey, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCUserDefault::getIntegerForKey)), Thiscall, cocos2d::CCUserDefault, getIntegerForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&cocos2d::CCUserDefault::getIntegerForKey)), Thiscall, cocos2d::CCUserDefault, getIntegerForKey, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCUserDefault::getStringForKey)), Thiscall, cocos2d::CCUserDefault, getStringForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, gd::string const&>::func(&cocos2d::CCUserDefault::getStringForKey)), Thiscall, cocos2d::CCUserDefault, getStringForKey, char const*, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, bool>::func(&cocos2d::CCUserDefault::setBoolForKey)), Thiscall, cocos2d::CCUserDefault, setBoolForKey, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, double>::func(&cocos2d::CCUserDefault::setDoubleForKey)), Thiscall, cocos2d::CCUserDefault, setDoubleForKey, char const*, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, float>::func(&cocos2d::CCUserDefault::setFloatForKey)), Thiscall, cocos2d::CCUserDefault, setFloatForKey, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, int>::func(&cocos2d::CCUserDefault::setIntegerForKey)), Thiscall, cocos2d::CCUserDefault, setIntegerForKey, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, gd::string const&>::func(&cocos2d::CCUserDefault::setStringForKey)), Thiscall, cocos2d::CCUserDefault, setStringForKey, char const*, gd::string const&)
		}
	};
}
