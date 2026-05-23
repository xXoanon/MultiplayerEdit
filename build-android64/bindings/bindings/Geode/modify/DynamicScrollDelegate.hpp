#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DynamicScrollDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_updatePageWithObject
		#define GEODE_CONCEPT_CHECK_updatePageWithObject
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageWithObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DynamicScrollDelegate> : ModifyBase<ModifyDerive<Der, DynamicScrollDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DynamicScrollDelegate>>;
		using ModifyBase<ModifyDerive<Der, DynamicScrollDelegate>>::ModifyBase;
		using Base = DynamicScrollDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DynamicScrollDelegate, updatePageWithObject, cocos2d::CCObject*, cocos2d::CCObject*)
		}
	};
}
