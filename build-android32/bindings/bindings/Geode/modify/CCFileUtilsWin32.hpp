#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    
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

		}
	};
}
