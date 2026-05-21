#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GooglePlayDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_googlePlaySignedIn
		#define GEODE_CONCEPT_CHECK_googlePlaySignedIn
		GEODE_CONCEPT_FUNCTION_CHECK(googlePlaySignedIn) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GooglePlayDelegate> : ModifyBase<ModifyDerive<Der, GooglePlayDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GooglePlayDelegate>>;
		using ModifyBase<ModifyDerive<Der, GooglePlayDelegate>>::ModifyBase;
		using Base = GooglePlayDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GooglePlayDelegate, googlePlaySignedIn, )
		}
	};
}
