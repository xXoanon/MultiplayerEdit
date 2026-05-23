#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpriteDescription.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createDescription
		#define GEODE_STATICS_createDescription
		GEODE_AS_STATIC_FUNCTION(createDescription) 
	#endif

	#ifndef GEODE_STATICS_initDescription
		#define GEODE_STATICS_initDescription
		GEODE_AS_STATIC_FUNCTION(initDescription) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createDescription
		#define GEODE_CONCEPT_CHECK_createDescription
		GEODE_CONCEPT_FUNCTION_CHECK(createDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initDescription
		#define GEODE_CONCEPT_CHECK_initDescription
		GEODE_CONCEPT_FUNCTION_CHECK(initDescription) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpriteDescription> : ModifyBase<ModifyDerive<Der, SpriteDescription>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpriteDescription>>;
		using ModifyBase<ModifyDerive<Der, SpriteDescription>>::ModifyBase;
		using Base = SpriteDescription;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN17SpriteDescriptionD2Ev")), Default, SpriteDescription)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&SpriteDescription::createDescription)), Default, SpriteDescription, createDescription, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&SpriteDescription::createDescription)), Default, SpriteDescription, createDescription, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<DS_Dictionary*>::func(&SpriteDescription::initDescription)), Default, SpriteDescription, initDescription, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<cocos2d::CCDictionary*>::func(&SpriteDescription::initDescription)), Default, SpriteDescription, initDescription, cocos2d::CCDictionary*)
		}
	};
}
