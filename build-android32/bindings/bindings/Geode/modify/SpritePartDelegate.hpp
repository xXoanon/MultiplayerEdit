#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpritePartDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_displayFrameChanged
		#define GEODE_CONCEPT_CHECK_displayFrameChanged
		GEODE_CONCEPT_FUNCTION_CHECK(displayFrameChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpritePartDelegate> : ModifyBase<ModifyDerive<Der, SpritePartDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpritePartDelegate>>;
		using ModifyBase<ModifyDerive<Der, SpritePartDelegate>>::ModifyBase;
		using Base = SpritePartDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpritePartDelegate, displayFrameChanged, cocos2d::CCObject*, gd::string)
		}
	};
}
