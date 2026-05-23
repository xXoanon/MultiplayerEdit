#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AnimatedSpriteDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_animationFinished
		#define GEODE_CONCEPT_CHECK_animationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AnimatedSpriteDelegate> : ModifyBase<ModifyDerive<Der, AnimatedSpriteDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AnimatedSpriteDelegate>>;
		using ModifyBase<ModifyDerive<Der, AnimatedSpriteDelegate>>::ModifyBase;
		using Base = AnimatedSpriteDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AnimatedSpriteDelegate, animationFinished, char const*)
		}
	};
}
