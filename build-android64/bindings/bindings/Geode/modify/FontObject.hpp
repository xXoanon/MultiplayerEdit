#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FontObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithConfigFile
		#define GEODE_STATICS_createWithConfigFile
		GEODE_AS_STATIC_FUNCTION(createWithConfigFile) 
	#endif

	#ifndef GEODE_STATICS_getFontWidth
		#define GEODE_STATICS_getFontWidth
		GEODE_AS_STATIC_FUNCTION(getFontWidth) 
	#endif

	#ifndef GEODE_STATICS_initWithConfigFile
		#define GEODE_STATICS_initWithConfigFile
		GEODE_AS_STATIC_FUNCTION(initWithConfigFile) 
	#endif

	#ifndef GEODE_STATICS_parseConfigFile
		#define GEODE_STATICS_parseConfigFile
		GEODE_AS_STATIC_FUNCTION(parseConfigFile) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithConfigFile
		#define GEODE_CONCEPT_CHECK_createWithConfigFile
		GEODE_CONCEPT_FUNCTION_CHECK(createWithConfigFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFontWidth
		#define GEODE_CONCEPT_CHECK_getFontWidth
		GEODE_CONCEPT_FUNCTION_CHECK(getFontWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithConfigFile
		#define GEODE_CONCEPT_CHECK_initWithConfigFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithConfigFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseConfigFile
		#define GEODE_CONCEPT_CHECK_parseConfigFile
		GEODE_CONCEPT_FUNCTION_CHECK(parseConfigFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FontObject> : ModifyBase<ModifyDerive<Der, FontObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FontObject>>;
		using ModifyBase<ModifyDerive<Der, FontObject>>::ModifyBase;
		using Base = FontObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, float>::func(&FontObject::createWithConfigFile)), Default, FontObject, createWithConfigFile, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<int>::func(&FontObject::getFontWidth)), Default, FontObject, getFontWidth, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, float>::func(&FontObject::initWithConfigFile)), Default, FontObject, initWithConfigFile, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<char const*, float>::func(&FontObject::parseConfigFile)), Default, FontObject, parseConfigFile, char const*, float)
		}
	};
}
