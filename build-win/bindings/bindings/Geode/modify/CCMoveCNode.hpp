#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCMoveCNode.hpp>
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

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMoveCNode> : ModifyBase<ModifyDerive<Der, CCMoveCNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMoveCNode>>;
		using ModifyBase<ModifyDerive<Der, CCMoveCNode>>::ModifyBase;
		using Base = CCMoveCNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMoveCNode, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMoveCNode, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCMoveCNode, reset, )
		}
	};
}
