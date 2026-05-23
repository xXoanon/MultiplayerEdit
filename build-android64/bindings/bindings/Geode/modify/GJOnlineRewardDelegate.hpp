#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJOnlineRewardDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_onlineRewardStatusFinished
		#define GEODE_CONCEPT_CHECK_onlineRewardStatusFinished
		GEODE_CONCEPT_FUNCTION_CHECK(onlineRewardStatusFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onlineRewardStatusFailed
		#define GEODE_CONCEPT_CHECK_onlineRewardStatusFailed
		GEODE_CONCEPT_FUNCTION_CHECK(onlineRewardStatusFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJOnlineRewardDelegate> : ModifyBase<ModifyDerive<Der, GJOnlineRewardDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJOnlineRewardDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJOnlineRewardDelegate>>::ModifyBase;
		using Base = GJOnlineRewardDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOnlineRewardDelegate, onlineRewardStatusFinished, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJOnlineRewardDelegate, onlineRewardStatusFailed, )
		}
	};
}
