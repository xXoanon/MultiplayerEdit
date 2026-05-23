#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorSetupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_colorSetupClosed
		#define GEODE_CONCEPT_CHECK_colorSetupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSetupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorSetupDelegate> : ModifyBase<ModifyDerive<Der, ColorSetupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorSetupDelegate>>;
		using ModifyBase<ModifyDerive<Der, ColorSetupDelegate>>::ModifyBase;
		using Base = ColorSetupDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorSetupDelegate, colorSetupClosed, int)
		}
	};
}
