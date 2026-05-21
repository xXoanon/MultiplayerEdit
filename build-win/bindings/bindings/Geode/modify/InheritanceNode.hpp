#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/InheritanceNode.hpp>
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
	struct ModifyDerive<Der, InheritanceNode> : ModifyBase<ModifyDerive<Der, InheritanceNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, InheritanceNode>>;
		using ModifyBase<ModifyDerive<Der, InheritanceNode>>::ModifyBase;
		using Base = InheritanceNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InheritanceNode, create, int, InheritanceNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InheritanceNode, init, int, InheritanceNode*)
		}
	};
}
