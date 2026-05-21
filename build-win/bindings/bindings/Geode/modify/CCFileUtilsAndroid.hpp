#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_getFileData
		#define GEODE_CONCEPT_CHECK_getFileData
		GEODE_CONCEPT_FUNCTION_CHECK(getFileData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWritablePath
		#define GEODE_CONCEPT_CHECK_getWritablePath
		GEODE_CONCEPT_FUNCTION_CHECK(getWritablePath) 
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

	#ifndef GEODE_CONCEPT_CHECK_doGetFileData
		#define GEODE_CONCEPT_CHECK_doGetFileData
		GEODE_CONCEPT_FUNCTION_CHECK(doGetFileData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFileDataForAsync
		#define GEODE_CONCEPT_CHECK_getFileDataForAsync
		GEODE_CONCEPT_FUNCTION_CHECK(getFileDataForAsync) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFileUtilsAndroid> : ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtilsAndroid>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtilsAndroid>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtilsAndroid>>::ModifyBase;
		using Base = cocos2d::CCFileUtilsAndroid;
        using Derived = Der;
		void apply() override {

		}
	};
}
