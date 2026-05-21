#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJHttpResult.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJHttpResult> : ModifyBase<ModifyDerive<Der, GJHttpResult>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJHttpResult>>;
		using ModifyBase<ModifyDerive<Der, GJHttpResult>>::ModifyBase;
		using Base = GJHttpResult;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJHttpResult, create, bool, gd::string, gd::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJHttpResult, init, bool, gd::string, gd::string, GJHttpType)
		}
	};
}
