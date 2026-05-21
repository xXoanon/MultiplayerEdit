#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_likedItem
		#define GEODE_CONCEPT_CHECK_likedItem
		GEODE_CONCEPT_FUNCTION_CHECK(likedItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LikeItemDelegate> : ModifyBase<ModifyDerive<Der, LikeItemDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LikeItemDelegate>>;
		using ModifyBase<ModifyDerive<Der, LikeItemDelegate>>::ModifyBase;
		using Base = LikeItemDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LikeItemDelegate, likedItem, LikeItemType, int, bool)
		}
	};
}
