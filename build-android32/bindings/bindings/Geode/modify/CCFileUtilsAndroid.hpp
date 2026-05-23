#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getFileData
		#define GEODE_STATICS_getFileData
		GEODE_AS_STATIC_FUNCTION(getFileData) 
	#endif

	#ifndef GEODE_STATICS_getWritablePath
		#define GEODE_STATICS_getWritablePath
		GEODE_AS_STATIC_FUNCTION(getWritablePath) 
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

	#ifndef GEODE_STATICS_doGetFileData
		#define GEODE_STATICS_doGetFileData
		GEODE_AS_STATIC_FUNCTION(doGetFileData) 
	#endif

	#ifndef GEODE_STATICS_getFileDataForAsync
		#define GEODE_STATICS_getFileDataForAsync
		GEODE_AS_STATIC_FUNCTION(getFileDataForAsync) 
	#endif

    
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

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d18CCFileUtilsAndroidC2Ev")), Default, cocos2d::CCFileUtilsAndroid, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d18CCFileUtilsAndroidD2Ev")), Default, cocos2d::CCFileUtilsAndroid)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, char const*, unsigned long*>::func(&cocos2d::CCFileUtilsAndroid::getFileData)), Default, cocos2d::CCFileUtilsAndroid, getFileData, char const*, char const*, unsigned long*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtilsAndroid::getWritablePath)), Default, cocos2d::CCFileUtilsAndroid, getWritablePath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtilsAndroid::init)), Default, cocos2d::CCFileUtilsAndroid, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d18CCFileUtilsAndroid14isAbsolutePathERKSs")), Default, cocos2d::CCFileUtilsAndroid, isAbsolutePath, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN7cocos2d18CCFileUtilsAndroid11isFileExistERKSs")), Default, cocos2d::CCFileUtilsAndroid, isFileExist, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, unsigned long*, bool>::func(&cocos2d::CCFileUtilsAndroid::doGetFileData)), Default, cocos2d::CCFileUtilsAndroid, doGetFileData, char const*, char const*, unsigned long*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, char const*, unsigned long*>::func(&cocos2d::CCFileUtilsAndroid::getFileDataForAsync)), Default, cocos2d::CCFileUtilsAndroid, getFileDataForAsync, char const*, char const*, unsigned long*)
		}
	};
}
