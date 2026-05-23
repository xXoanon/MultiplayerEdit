#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_colorSelectClosed
		#define GEODE_CONCEPT_CHECK_colorSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(colorSelectClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorSelectDelegate> : ModifyBase<ModifyDerive<Der, ColorSelectDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorSelectDelegate>>;
		using ModifyBase<ModifyDerive<Der, ColorSelectDelegate>>::ModifyBase;
		using Base = ColorSelectDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ColorSelectDelegate, colorSelectClosed, cocos2d::CCNode*)
		}
	};
}
