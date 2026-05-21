#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DialogDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DialogDelegate> : ModifyBase<ModifyDerive<Der, DialogDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DialogDelegate>>;
		using ModifyBase<ModifyDerive<Der, DialogDelegate>>::ModifyBase;
		using Base = DialogDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DialogDelegate, dialogClosed, DialogLayer*)
		}
	};
}
