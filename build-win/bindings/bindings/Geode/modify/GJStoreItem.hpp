#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJStoreItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrencyKey
		#define GEODE_CONCEPT_CHECK_getCurrencyKey
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrencyKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJStoreItem> : ModifyBase<ModifyDerive<Der, GJStoreItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJStoreItem>>;
		using ModifyBase<ModifyDerive<Der, GJStoreItem>>::ModifyBase;
		using Base = GJStoreItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJStoreItem, create, int, int, int, int, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJStoreItem, getCurrencyKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJStoreItem, init, int, int, int, int, ShopType)
		}
	};
}
