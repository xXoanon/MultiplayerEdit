#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSpriteColor.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_getColorMode
		#define GEODE_CONCEPT_CHECK_getColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getColorMode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSpriteColor> : ModifyBase<ModifyDerive<Der, GJSpriteColor>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSpriteColor>>;
		using ModifyBase<ModifyDerive<Der, GJSpriteColor>>::ModifyBase;
		using Base = GJSpriteColor;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSpriteColor, getColorMode, )
		}
	};
}
