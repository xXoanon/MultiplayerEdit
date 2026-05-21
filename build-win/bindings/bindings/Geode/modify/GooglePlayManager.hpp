#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GooglePlayManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_googlePlaySignedIn
		#define GEODE_CONCEPT_CHECK_googlePlaySignedIn
		GEODE_CONCEPT_FUNCTION_CHECK(googlePlaySignedIn) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GooglePlayManager> : ModifyBase<ModifyDerive<Der, GooglePlayManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GooglePlayManager>>;
		using ModifyBase<ModifyDerive<Der, GooglePlayManager>>::ModifyBase;
		using Base = GooglePlayManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6ac80, Default, GooglePlayManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GooglePlayManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GooglePlayManager, googlePlaySignedIn, )
		}
	};
}
