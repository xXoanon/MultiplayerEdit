#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addSearchPath
		#define GEODE_STATICS_addSearchPath
		GEODE_AS_STATIC_FUNCTION(addSearchPath) 
	#endif

	#ifndef GEODE_STATICS_fullPathForFilename
		#define GEODE_STATICS_fullPathForFilename
		GEODE_AS_STATIC_FUNCTION(fullPathForFilename) 
	#endif

	#ifndef GEODE_STATICS_getPathForFilename
		#define GEODE_STATICS_getPathForFilename
		GEODE_AS_STATIC_FUNCTION(getPathForFilename) 
	#endif

	#ifndef GEODE_STATICS_getWritablePath
		#define GEODE_STATICS_getWritablePath
		GEODE_AS_STATIC_FUNCTION(getWritablePath) 
	#endif

	#ifndef GEODE_STATICS_getWritablePath2
		#define GEODE_STATICS_getWritablePath2
		GEODE_AS_STATIC_FUNCTION(getWritablePath2) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isAbsolutePath
		#define GEODE_STATICS_isAbsolutePath
		GEODE_AS_STATIC_FUNCTION(isAbsolutePath) 
	#endif

	#ifndef GEODE_STATICS_isFileExist
		#define GEODE_STATICS_isFileExist
		GEODE_AS_STATIC_FUNCTION(isFileExist) 
	#endif

	#ifndef GEODE_STATICS_removeSearchPath
		#define GEODE_STATICS_removeSearchPath
		GEODE_AS_STATIC_FUNCTION(removeSearchPath) 
	#endif

	#ifndef GEODE_STATICS_utf8Togbk
		#define GEODE_STATICS_utf8Togbk
		GEODE_AS_STATIC_FUNCTION(utf8Togbk) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addSearchPath
		#define GEODE_CONCEPT_CHECK_addSearchPath
		GEODE_CONCEPT_FUNCTION_CHECK(addSearchPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fullPathForFilename
		#define GEODE_CONCEPT_CHECK_fullPathForFilename
		GEODE_CONCEPT_FUNCTION_CHECK(fullPathForFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPathForFilename
		#define GEODE_CONCEPT_CHECK_getPathForFilename
		GEODE_CONCEPT_FUNCTION_CHECK(getPathForFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWritablePath
		#define GEODE_CONCEPT_CHECK_getWritablePath
		GEODE_CONCEPT_FUNCTION_CHECK(getWritablePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWritablePath2
		#define GEODE_CONCEPT_CHECK_getWritablePath2
		GEODE_CONCEPT_FUNCTION_CHECK(getWritablePath2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isAbsolutePath
		#define GEODE_CONCEPT_CHECK_isAbsolutePath
		GEODE_CONCEPT_FUNCTION_CHECK(isAbsolutePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFileExist
		#define GEODE_CONCEPT_CHECK_isFileExist
		GEODE_CONCEPT_FUNCTION_CHECK(isFileExist) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSearchPath
		#define GEODE_CONCEPT_CHECK_removeSearchPath
		GEODE_CONCEPT_FUNCTION_CHECK(removeSearchPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_utf8Togbk
		#define GEODE_CONCEPT_CHECK_utf8Togbk
		GEODE_CONCEPT_FUNCTION_CHECK(utf8Togbk) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFileUtilsWin32> : ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtilsWin32>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtilsWin32>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtilsWin32>>::ModifyBase;
		using Base = cocos2d::CCFileUtilsWin32;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtilsWin32::addSearchPath)), Thiscall, cocos2d::CCFileUtilsWin32, addSearchPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtilsWin32::fullPathForFilename)), Thiscall, cocos2d::CCFileUtilsWin32, fullPathForFilename, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&, gd::string const&, gd::string const&>::func(&cocos2d::CCFileUtilsWin32::getPathForFilename)), Thiscall, cocos2d::CCFileUtilsWin32, getPathForFilename, gd::string const&, gd::string const&, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtilsWin32::getWritablePath)), Thiscall, cocos2d::CCFileUtilsWin32, getWritablePath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtilsWin32::getWritablePath2)), Thiscall, cocos2d::CCFileUtilsWin32, getWritablePath2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtilsWin32::init)), Thiscall, cocos2d::CCFileUtilsWin32, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&>::func(&cocos2d::CCFileUtilsWin32::isAbsolutePath)), Thiscall, cocos2d::CCFileUtilsWin32, isAbsolutePath, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&>::func(&cocos2d::CCFileUtilsWin32::isFileExist)), Thiscall, cocos2d::CCFileUtilsWin32, isFileExist, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtilsWin32::removeSearchPath)), Thiscall, cocos2d::CCFileUtilsWin32, removeSearchPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtilsWin32::utf8Togbk)), Thiscall, cocos2d::CCFileUtilsWin32, utf8Togbk, char const*)
		}
	};
}
