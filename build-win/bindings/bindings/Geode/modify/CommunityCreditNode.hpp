#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CommunityCreditNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CommunityCreditNode> : ModifyBase<ModifyDerive<Der, CommunityCreditNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CommunityCreditNode>>;
		using ModifyBase<ModifyDerive<Der, CommunityCreditNode>>::ModifyBase;
		using Base = CommunityCreditNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x93f80, Default, CommunityCreditNode, create, int, int, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommunityCreditNode, init, int, int, int, gd::string)
		}
	};
}
