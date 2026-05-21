#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_createCCArrayWithContentsOfFile
		#define GEODE_CONCEPT_CHECK_createCCArrayWithContentsOfFile
		GEODE_CONCEPT_FUNCTION_CHECK(createCCArrayWithContentsOfFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCCDictionaryWithContentsOfFile
		#define GEODE_CONCEPT_CHECK_createCCDictionaryWithContentsOfFile
		GEODE_CONCEPT_FUNCTION_CHECK(createCCDictionaryWithContentsOfFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFullPathForDirectoryAndFilename
		#define GEODE_CONCEPT_CHECK_getFullPathForDirectoryAndFilename
		GEODE_CONCEPT_FUNCTION_CHECK(getFullPathForDirectoryAndFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWritablePath
		#define GEODE_CONCEPT_CHECK_getWritablePath
		GEODE_CONCEPT_FUNCTION_CHECK(getWritablePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isAbsolutePath
		#define GEODE_CONCEPT_CHECK_isAbsolutePath
		GEODE_CONCEPT_FUNCTION_CHECK(isAbsolutePath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFileExist
		#define GEODE_CONCEPT_CHECK_isFileExist
		GEODE_CONCEPT_FUNCTION_CHECK(isFileExist) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_writeToFile
		#define GEODE_CONCEPT_CHECK_writeToFile
		GEODE_CONCEPT_FUNCTION_CHECK(writeToFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFileUtilsMac> : ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtilsMac>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtilsMac>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtilsMac>>::ModifyBase;
		using Base = cocos2d::CCFileUtilsMac;
        using Derived = Der;
		void apply() override {

		}
	};
}
