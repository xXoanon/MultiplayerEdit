#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_accountStatusChanged
		#define GEODE_CONCEPT_CHECK_accountStatusChanged
		GEODE_CONCEPT_FUNCTION_CHECK(accountStatusChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountDelegate> : ModifyBase<ModifyDerive<Der, GJAccountDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountDelegate>>::ModifyBase;
		using Base = GJAccountDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountDelegate, accountStatusChanged, )
		}
	};
}
