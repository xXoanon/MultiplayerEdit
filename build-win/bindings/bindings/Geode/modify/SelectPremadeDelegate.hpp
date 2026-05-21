#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectPremadeDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_selectPremadeClosed
		#define GEODE_CONCEPT_CHECK_selectPremadeClosed
		GEODE_CONCEPT_FUNCTION_CHECK(selectPremadeClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectPremadeDelegate> : ModifyBase<ModifyDerive<Der, SelectPremadeDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectPremadeDelegate>>;
		using ModifyBase<ModifyDerive<Der, SelectPremadeDelegate>>::ModifyBase;
		using Base = SelectPremadeDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SelectPremadeDelegate, selectPremadeClosed, SelectPremadeLayer*, int)
		}
	};
}
