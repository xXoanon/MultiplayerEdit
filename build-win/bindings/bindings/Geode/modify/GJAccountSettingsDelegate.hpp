#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountSettingsDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_updateSettingsFinished
		#define GEODE_CONCEPT_CHECK_updateSettingsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateSettingsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSettingsFailed
		#define GEODE_CONCEPT_CHECK_updateSettingsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(updateSettingsFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountSettingsDelegate> : ModifyBase<ModifyDerive<Der, GJAccountSettingsDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountSettingsDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJAccountSettingsDelegate>>::ModifyBase;
		using Base = GJAccountSettingsDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountSettingsDelegate, updateSettingsFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountSettingsDelegate, updateSettingsFailed, )
		}
	};
}
