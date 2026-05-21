#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_purgeFileUtils
		#define GEODE_STATICS_purgeFileUtils
		GEODE_AS_STATIC_FUNCTION(purgeFileUtils) 
	#endif

	#ifndef GEODE_STATICS_sharedFileUtils
		#define GEODE_STATICS_sharedFileUtils
		GEODE_AS_STATIC_FUNCTION(sharedFileUtils) 
	#endif

	#ifndef GEODE_STATICS_addSearchPath
		#define GEODE_STATICS_addSearchPath
		GEODE_AS_STATIC_FUNCTION(addSearchPath) 
	#endif

	#ifndef GEODE_STATICS_addSearchResolutionsOrder
		#define GEODE_STATICS_addSearchResolutionsOrder
		GEODE_AS_STATIC_FUNCTION(addSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_STATICS_addSuffix
		#define GEODE_STATICS_addSuffix
		GEODE_AS_STATIC_FUNCTION(addSuffix) 
	#endif

	#ifndef GEODE_STATICS_createCCArrayWithContentsOfFile
		#define GEODE_STATICS_createCCArrayWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createCCArrayWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createCCDictionaryWithContentsOfFile
		#define GEODE_STATICS_createCCDictionaryWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createCCDictionaryWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_fullPathForFilename
		#define GEODE_STATICS_fullPathForFilename
		GEODE_AS_STATIC_FUNCTION(fullPathForFilename) 
	#endif

	#ifndef GEODE_STATICS_fullPathFromRelativeFile
		#define GEODE_STATICS_fullPathFromRelativeFile
		GEODE_AS_STATIC_FUNCTION(fullPathFromRelativeFile) 
	#endif

	#ifndef GEODE_STATICS_getFileData
		#define GEODE_STATICS_getFileData
		GEODE_AS_STATIC_FUNCTION(getFileData) 
	#endif

	#ifndef GEODE_STATICS_getFileDataFromZip
		#define GEODE_STATICS_getFileDataFromZip
		GEODE_AS_STATIC_FUNCTION(getFileDataFromZip) 
	#endif

	#ifndef GEODE_STATICS_getFullPathForDirectoryAndFilename
		#define GEODE_STATICS_getFullPathForDirectoryAndFilename
		GEODE_AS_STATIC_FUNCTION(getFullPathForDirectoryAndFilename) 
	#endif

	#ifndef GEODE_STATICS_getNewFilename
		#define GEODE_STATICS_getNewFilename
		GEODE_AS_STATIC_FUNCTION(getNewFilename) 
	#endif

	#ifndef GEODE_STATICS_getPathForFilename
		#define GEODE_STATICS_getPathForFilename
		GEODE_AS_STATIC_FUNCTION(getPathForFilename) 
	#endif

	#ifndef GEODE_STATICS_getSearchPaths
		#define GEODE_STATICS_getSearchPaths
		GEODE_AS_STATIC_FUNCTION(getSearchPaths) 
	#endif

	#ifndef GEODE_STATICS_getSearchResolutionsOrder
		#define GEODE_STATICS_getSearchResolutionsOrder
		GEODE_AS_STATIC_FUNCTION(getSearchResolutionsOrder) 
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

	#ifndef GEODE_STATICS_isPopupNotify
		#define GEODE_STATICS_isPopupNotify
		GEODE_AS_STATIC_FUNCTION(isPopupNotify) 
	#endif

	#ifndef GEODE_STATICS_loadFilenameLookupDictionaryFromFile
		#define GEODE_STATICS_loadFilenameLookupDictionaryFromFile
		GEODE_AS_STATIC_FUNCTION(loadFilenameLookupDictionaryFromFile) 
	#endif

	#ifndef GEODE_STATICS_purgeCachedEntries
		#define GEODE_STATICS_purgeCachedEntries
		GEODE_AS_STATIC_FUNCTION(purgeCachedEntries) 
	#endif

	#ifndef GEODE_STATICS_removeFullPath
		#define GEODE_STATICS_removeFullPath
		GEODE_AS_STATIC_FUNCTION(removeFullPath) 
	#endif

	#ifndef GEODE_STATICS_removeSearchPath
		#define GEODE_STATICS_removeSearchPath
		GEODE_AS_STATIC_FUNCTION(removeSearchPath) 
	#endif

	#ifndef GEODE_STATICS_setFilenameLookupDictionary
		#define GEODE_STATICS_setFilenameLookupDictionary
		GEODE_AS_STATIC_FUNCTION(setFilenameLookupDictionary) 
	#endif

	#ifndef GEODE_STATICS_setPopupNotify
		#define GEODE_STATICS_setPopupNotify
		GEODE_AS_STATIC_FUNCTION(setPopupNotify) 
	#endif

	#ifndef GEODE_STATICS_setSearchPaths
		#define GEODE_STATICS_setSearchPaths
		GEODE_AS_STATIC_FUNCTION(setSearchPaths) 
	#endif

	#ifndef GEODE_STATICS_setSearchResolutionsOrder
		#define GEODE_STATICS_setSearchResolutionsOrder
		GEODE_AS_STATIC_FUNCTION(setSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_STATICS_shouldUseHD
		#define GEODE_STATICS_shouldUseHD
		GEODE_AS_STATIC_FUNCTION(shouldUseHD) 
	#endif

	#ifndef GEODE_STATICS_writeToFile
		#define GEODE_STATICS_writeToFile
		GEODE_AS_STATIC_FUNCTION(writeToFile) 
	#endif

	#ifndef GEODE_STATICS_removeAllPaths
		#define GEODE_STATICS_removeAllPaths
		GEODE_AS_STATIC_FUNCTION(removeAllPaths) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_purgeFileUtils
		#define GEODE_CONCEPT_CHECK_purgeFileUtils
		GEODE_CONCEPT_FUNCTION_CHECK(purgeFileUtils) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedFileUtils
		#define GEODE_CONCEPT_CHECK_sharedFileUtils
		GEODE_CONCEPT_FUNCTION_CHECK(sharedFileUtils) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSearchPath
		#define GEODE_CONCEPT_CHECK_addSearchPath
		GEODE_CONCEPT_FUNCTION_CHECK(addSearchPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSearchResolutionsOrder
		#define GEODE_CONCEPT_CHECK_addSearchResolutionsOrder
		GEODE_CONCEPT_FUNCTION_CHECK(addSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSuffix
		#define GEODE_CONCEPT_CHECK_addSuffix
		GEODE_CONCEPT_FUNCTION_CHECK(addSuffix) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCCArrayWithContentsOfFile
		#define GEODE_CONCEPT_CHECK_createCCArrayWithContentsOfFile
		GEODE_CONCEPT_FUNCTION_CHECK(createCCArrayWithContentsOfFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCCDictionaryWithContentsOfFile
		#define GEODE_CONCEPT_CHECK_createCCDictionaryWithContentsOfFile
		GEODE_CONCEPT_FUNCTION_CHECK(createCCDictionaryWithContentsOfFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fullPathForFilename
		#define GEODE_CONCEPT_CHECK_fullPathForFilename
		GEODE_CONCEPT_FUNCTION_CHECK(fullPathForFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fullPathFromRelativeFile
		#define GEODE_CONCEPT_CHECK_fullPathFromRelativeFile
		GEODE_CONCEPT_FUNCTION_CHECK(fullPathFromRelativeFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFileData
		#define GEODE_CONCEPT_CHECK_getFileData
		GEODE_CONCEPT_FUNCTION_CHECK(getFileData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFileDataFromZip
		#define GEODE_CONCEPT_CHECK_getFileDataFromZip
		GEODE_CONCEPT_FUNCTION_CHECK(getFileDataFromZip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFullPathForDirectoryAndFilename
		#define GEODE_CONCEPT_CHECK_getFullPathForDirectoryAndFilename
		GEODE_CONCEPT_FUNCTION_CHECK(getFullPathForDirectoryAndFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNewFilename
		#define GEODE_CONCEPT_CHECK_getNewFilename
		GEODE_CONCEPT_FUNCTION_CHECK(getNewFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPathForFilename
		#define GEODE_CONCEPT_CHECK_getPathForFilename
		GEODE_CONCEPT_FUNCTION_CHECK(getPathForFilename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchPaths
		#define GEODE_CONCEPT_CHECK_getSearchPaths
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchPaths) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchResolutionsOrder
		#define GEODE_CONCEPT_CHECK_getSearchResolutionsOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchResolutionsOrder) 
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

	#ifndef GEODE_CONCEPT_CHECK_isPopupNotify
		#define GEODE_CONCEPT_CHECK_isPopupNotify
		GEODE_CONCEPT_FUNCTION_CHECK(isPopupNotify) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFilenameLookupDictionaryFromFile
		#define GEODE_CONCEPT_CHECK_loadFilenameLookupDictionaryFromFile
		GEODE_CONCEPT_FUNCTION_CHECK(loadFilenameLookupDictionaryFromFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeCachedEntries
		#define GEODE_CONCEPT_CHECK_purgeCachedEntries
		GEODE_CONCEPT_FUNCTION_CHECK(purgeCachedEntries) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFullPath
		#define GEODE_CONCEPT_CHECK_removeFullPath
		GEODE_CONCEPT_FUNCTION_CHECK(removeFullPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSearchPath
		#define GEODE_CONCEPT_CHECK_removeSearchPath
		GEODE_CONCEPT_FUNCTION_CHECK(removeSearchPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFilenameLookupDictionary
		#define GEODE_CONCEPT_CHECK_setFilenameLookupDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(setFilenameLookupDictionary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPopupNotify
		#define GEODE_CONCEPT_CHECK_setPopupNotify
		GEODE_CONCEPT_FUNCTION_CHECK(setPopupNotify) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSearchPaths
		#define GEODE_CONCEPT_CHECK_setSearchPaths
		GEODE_CONCEPT_FUNCTION_CHECK(setSearchPaths) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSearchResolutionsOrder
		#define GEODE_CONCEPT_CHECK_setSearchResolutionsOrder
		GEODE_CONCEPT_FUNCTION_CHECK(setSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldUseHD
		#define GEODE_CONCEPT_CHECK_shouldUseHD
		GEODE_CONCEPT_FUNCTION_CHECK(shouldUseHD) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_writeToFile
		#define GEODE_CONCEPT_CHECK_writeToFile
		GEODE_CONCEPT_FUNCTION_CHECK(writeToFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllPaths
		#define GEODE_CONCEPT_CHECK_removeAllPaths
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllPaths) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFileUtils> : ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtils>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtils>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtils>>::ModifyBase;
		using Base = cocos2d::CCFileUtils;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCFileUtils@cocos2d@@IEAA@XZ")), Thiscall, cocos2d::CCFileUtils, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCFileUtils@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCFileUtils)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCFileUtils::purgeFileUtils)), Default, cocos2d::CCFileUtils, purgeFileUtils, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCFileUtils::sharedFileUtils)), Default, cocos2d::CCFileUtils, sharedFileUtils, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::addSearchPath)), Thiscall, cocos2d::CCFileUtils, addSearchPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::addSearchResolutionsOrder)), Thiscall, cocos2d::CCFileUtils, addSearchResolutionsOrder, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string, gd::string>::func(&cocos2d::CCFileUtils::addSuffix)), Thiscall, cocos2d::CCFileUtils, addSuffix, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&>::func(&cocos2d::CCFileUtils::createCCArrayWithContentsOfFile)), Thiscall, cocos2d::CCFileUtils, createCCArrayWithContentsOfFile, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&>::func(&cocos2d::CCFileUtils::createCCDictionaryWithContentsOfFile)), Thiscall, cocos2d::CCFileUtils, createCCDictionaryWithContentsOfFile, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, bool>::func(&cocos2d::CCFileUtils::fullPathForFilename)), Thiscall, cocos2d::CCFileUtils, fullPathForFilename, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCFileUtils::fullPathFromRelativeFile)), Thiscall, cocos2d::CCFileUtils, fullPathFromRelativeFile, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, char const*, unsigned long*>::func(&cocos2d::CCFileUtils::getFileData)), Thiscall, cocos2d::CCFileUtils, getFileData, char const*, char const*, unsigned long*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, char const*, unsigned long*>::func(&cocos2d::CCFileUtils::getFileDataFromZip)), Thiscall, cocos2d::CCFileUtils, getFileDataFromZip, char const*, char const*, unsigned long*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&, gd::string const&>::func(&cocos2d::CCFileUtils::getFullPathForDirectoryAndFilename)), Thiscall, cocos2d::CCFileUtils, getFullPathForDirectoryAndFilename, gd::string const&, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::getNewFilename)), Thiscall, cocos2d::CCFileUtils, getNewFilename, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&, gd::string const&, gd::string const&>::func(&cocos2d::CCFileUtils::getPathForFilename)), Thiscall, cocos2d::CCFileUtils, getPathForFilename, gd::string const&, gd::string const&, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::getSearchPaths)), Thiscall, cocos2d::CCFileUtils, getSearchPaths, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::getSearchResolutionsOrder)), Thiscall, cocos2d::CCFileUtils, getSearchResolutionsOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::getWritablePath2)), Thiscall, cocos2d::CCFileUtils, getWritablePath2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::init)), Thiscall, cocos2d::CCFileUtils, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&>::func(&cocos2d::CCFileUtils::isAbsolutePath)), Thiscall, cocos2d::CCFileUtils, isAbsolutePath, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::isPopupNotify)), Thiscall, cocos2d::CCFileUtils, isPopupNotify, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::loadFilenameLookupDictionaryFromFile)), Thiscall, cocos2d::CCFileUtils, loadFilenameLookupDictionaryFromFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::purgeCachedEntries)), Thiscall, cocos2d::CCFileUtils, purgeCachedEntries, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::removeFullPath)), Thiscall, cocos2d::CCFileUtils, removeFullPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::removeSearchPath)), Thiscall, cocos2d::CCFileUtils, removeSearchPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCFileUtils::setFilenameLookupDictionary)), Thiscall, cocos2d::CCFileUtils, setFilenameLookupDictionary, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCFileUtils::setPopupNotify)), Thiscall, cocos2d::CCFileUtils, setPopupNotify, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::vector<gd::string> const&>::func(&cocos2d::CCFileUtils::setSearchPaths)), Thiscall, cocos2d::CCFileUtils, setSearchPaths, gd::vector<gd::string> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::vector<gd::string> const&>::func(&cocos2d::CCFileUtils::setSearchResolutionsOrder)), Thiscall, cocos2d::CCFileUtils, setSearchResolutionsOrder, gd::vector<gd::string> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::shouldUseHD)), Thiscall, cocos2d::CCFileUtils, shouldUseHD, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary*, gd::string const&>::func(&cocos2d::CCFileUtils::writeToFile)), Thiscall, cocos2d::CCFileUtils, writeToFile, cocos2d::CCDictionary*, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCFileUtils::removeAllPaths)), Thiscall, cocos2d::CCFileUtils, removeAllPaths, )
		}
	};
}
