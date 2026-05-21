#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountRegisterDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_registerAccountFinished
		#define GEODE_CONCEPT_CHECK_registerAccountFinished
		GEODE_CONCEPT_FUNCTION_CHECK(registerAccountFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerAccountFailed
		#define GEODE_CONCEPT_CHECK_registerAccountFailed
		GEODE_CONCEPT_FUNCTION_CHECK(registerAccountFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountRegisterDelegate> : ModifyBase<ModifyDerive<Der, GJAccountRegisterDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountRegisterDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountRegisterDelegate>>::ModifyBase;
		using Base = GJAccountRegisterDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountRegisterDelegate, registerAccountFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountRegisterDelegate, registerAccountFailed, AccountError)
		}
	};
}
