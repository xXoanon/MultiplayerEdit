#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_initWithFNTfile
		#define GEODE_STATICS_initWithFNTfile
		GEODE_AS_STATIC_FUNCTION(initWithFNTfile) 
	#endif

	#ifndef GEODE_STATICS_parseCharacterDefinition
		#define GEODE_STATICS_parseCharacterDefinition
		GEODE_AS_STATIC_FUNCTION(parseCharacterDefinition) 
	#endif

	#ifndef GEODE_STATICS_parseCommonArguments
		#define GEODE_STATICS_parseCommonArguments
		GEODE_AS_STATIC_FUNCTION(parseCommonArguments) 
	#endif

	#ifndef GEODE_STATICS_parseConfigFile
		#define GEODE_STATICS_parseConfigFile
		GEODE_AS_STATIC_FUNCTION(parseConfigFile) 
	#endif

	#ifndef GEODE_STATICS_parseImageFileName
		#define GEODE_STATICS_parseImageFileName
		GEODE_AS_STATIC_FUNCTION(parseImageFileName) 
	#endif

	#ifndef GEODE_STATICS_parseInfoArguments
		#define GEODE_STATICS_parseInfoArguments
		GEODE_AS_STATIC_FUNCTION(parseInfoArguments) 
	#endif

	#ifndef GEODE_STATICS_parseKerningEntry
		#define GEODE_STATICS_parseKerningEntry
		GEODE_AS_STATIC_FUNCTION(parseKerningEntry) 
	#endif

	#ifndef GEODE_STATICS_purgeFontDefDictionary
		#define GEODE_STATICS_purgeFontDefDictionary
		GEODE_AS_STATIC_FUNCTION(purgeFontDefDictionary) 
	#endif

	#ifndef GEODE_STATICS_purgeKerningDictionary
		#define GEODE_STATICS_purgeKerningDictionary
		GEODE_AS_STATIC_FUNCTION(purgeKerningDictionary) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithFNTfile
		#define GEODE_CONCEPT_CHECK_initWithFNTfile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithFNTfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseCharacterDefinition
		#define GEODE_CONCEPT_CHECK_parseCharacterDefinition
		GEODE_CONCEPT_FUNCTION_CHECK(parseCharacterDefinition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseCommonArguments
		#define GEODE_CONCEPT_CHECK_parseCommonArguments
		GEODE_CONCEPT_FUNCTION_CHECK(parseCommonArguments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseConfigFile
		#define GEODE_CONCEPT_CHECK_parseConfigFile
		GEODE_CONCEPT_FUNCTION_CHECK(parseConfigFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseImageFileName
		#define GEODE_CONCEPT_CHECK_parseImageFileName
		GEODE_CONCEPT_FUNCTION_CHECK(parseImageFileName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseInfoArguments
		#define GEODE_CONCEPT_CHECK_parseInfoArguments
		GEODE_CONCEPT_FUNCTION_CHECK(parseInfoArguments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseKerningEntry
		#define GEODE_CONCEPT_CHECK_parseKerningEntry
		GEODE_CONCEPT_FUNCTION_CHECK(parseKerningEntry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeFontDefDictionary
		#define GEODE_CONCEPT_CHECK_purgeFontDefDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(purgeFontDefDictionary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeKerningDictionary
		#define GEODE_CONCEPT_CHECK_purgeKerningDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(purgeKerningDictionary) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCBMFontConfiguration> : ModifyBase<ModifyDerive<Der, cocos2d::CCBMFontConfiguration>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCBMFontConfiguration>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCBMFontConfiguration>>::ModifyBase;
		using Base = cocos2d::CCBMFontConfiguration;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??0CCBMFontConfiguration@cocos2d@@QEAA@XZ")), Thiscall, cocos2d::CCBMFontConfiguration, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress((HMODULE)base::getCocos(), "??1CCBMFontConfiguration@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCBMFontConfiguration)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCBMFontConfiguration::create)), Default, cocos2d::CCBMFontConfiguration, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCBMFontConfiguration::description)), Thiscall, cocos2d::CCBMFontConfiguration, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCBMFontConfiguration::initWithFNTfile)), Thiscall, cocos2d::CCBMFontConfiguration, initWithFNTfile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string, cocos2d::_BMFontDef*>::func(&cocos2d::CCBMFontConfiguration::parseCharacterDefinition)), Thiscall, cocos2d::CCBMFontConfiguration, parseCharacterDefinition, gd::string, cocos2d::_BMFontDef*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string>::func(&cocos2d::CCBMFontConfiguration::parseCommonArguments)), Thiscall, cocos2d::CCBMFontConfiguration, parseCommonArguments, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*>::func(&cocos2d::CCBMFontConfiguration::parseConfigFile)), Thiscall, cocos2d::CCBMFontConfiguration, parseConfigFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string, char const*>::func(&cocos2d::CCBMFontConfiguration::parseImageFileName)), Thiscall, cocos2d::CCBMFontConfiguration, parseImageFileName, gd::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string>::func(&cocos2d::CCBMFontConfiguration::parseInfoArguments)), Thiscall, cocos2d::CCBMFontConfiguration, parseInfoArguments, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string>::func(&cocos2d::CCBMFontConfiguration::parseKerningEntry)), Thiscall, cocos2d::CCBMFontConfiguration, parseKerningEntry, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCBMFontConfiguration::purgeFontDefDictionary)), Thiscall, cocos2d::CCBMFontConfiguration, purgeFontDefDictionary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCBMFontConfiguration::purgeKerningDictionary)), Thiscall, cocos2d::CCBMFontConfiguration, purgeKerningDictionary, )
		}
	};
}
