#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJUnlockableItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJUnlockableItem> : ModifyBase<ModifyDerive<Der, GJUnlockableItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJUnlockableItem>>;
		using ModifyBase<ModifyDerive<Der, GJUnlockableItem>>::ModifyBase;
		using Base = GJUnlockableItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUnlockableItem, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJUnlockableItem, init, )
		}
	};
}
