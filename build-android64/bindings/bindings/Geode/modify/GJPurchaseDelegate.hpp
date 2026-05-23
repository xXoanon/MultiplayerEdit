#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPurchaseDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_didPurchaseItem
		#define GEODE_CONCEPT_CHECK_didPurchaseItem
		GEODE_CONCEPT_FUNCTION_CHECK(didPurchaseItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJPurchaseDelegate> : ModifyBase<ModifyDerive<Der, GJPurchaseDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPurchaseDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJPurchaseDelegate>>::ModifyBase;
		using Base = GJPurchaseDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJPurchaseDelegate, didPurchaseItem, GJStoreItem*)
		}
	};
}
