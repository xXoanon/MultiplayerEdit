#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCExtenderNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCExtenderNode> : ModifyBase<ModifyDerive<Der, CCExtenderNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCExtenderNode>>;
		using ModifyBase<ModifyDerive<Der, CCExtenderNode>>::ModifyBase;
		using Base = CCExtenderNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCExtenderNode, setOpacity, unsigned int)
		}
	};
}
