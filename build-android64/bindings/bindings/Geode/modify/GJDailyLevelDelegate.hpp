#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJDailyLevelDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_dailyStatusFinished
		#define GEODE_CONCEPT_CHECK_dailyStatusFinished
		GEODE_CONCEPT_FUNCTION_CHECK(dailyStatusFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dailyStatusFailed
		#define GEODE_CONCEPT_CHECK_dailyStatusFailed
		GEODE_CONCEPT_FUNCTION_CHECK(dailyStatusFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJDailyLevelDelegate> : ModifyBase<ModifyDerive<Der, GJDailyLevelDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJDailyLevelDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJDailyLevelDelegate>>::ModifyBase;
		using Base = GJDailyLevelDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDailyLevelDelegate, dailyStatusFinished, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJDailyLevelDelegate, dailyStatusFailed, GJTimedLevelType, GJErrorCode)
		}
	};
}
