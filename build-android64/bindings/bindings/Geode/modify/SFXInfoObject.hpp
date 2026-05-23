#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXInfoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getLowerCaseName
		#define GEODE_STATICS_getLowerCaseName
		GEODE_AS_STATIC_FUNCTION(getLowerCaseName) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLowerCaseName
		#define GEODE_CONCEPT_CHECK_getLowerCaseName
		GEODE_CONCEPT_FUNCTION_CHECK(getLowerCaseName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXInfoObject> : ModifyBase<ModifyDerive<Der, SFXInfoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXInfoObject>>;
		using ModifyBase<ModifyDerive<Der, SFXInfoObject>>::ModifyBase;
		using Base = SFXInfoObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13SFXInfoObject6createEiSsiii")), Default, SFXInfoObject, create, int, gd::string, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&SFXInfoObject::getLowerCaseName)), Default, SFXInfoObject, getLowerCaseName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(reinterpret_cast<uintptr_t>(dlsym(dlopen("libcocos2dcpp.so", RTLD_NOW), "_ZN13SFXInfoObject4initEiSsiii")), Default, SFXInfoObject, init, int, gd::string, int, int, int)
		}
	};
}
