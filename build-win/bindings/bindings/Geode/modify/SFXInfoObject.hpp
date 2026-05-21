#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXInfoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
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

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SFXInfoObject, create, int, gd::string, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SFXInfoObject, getLowerCaseName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SFXInfoObject, init, int, gd::string, int, int, int)
		}
	};
}
