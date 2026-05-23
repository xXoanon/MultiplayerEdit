#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdvancedFollowInstance.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdvancedFollowInstance> : ModifyBase<ModifyDerive<Der, AdvancedFollowInstance>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdvancedFollowInstance>>;
		using ModifyBase<ModifyDerive<Der, AdvancedFollowInstance>>::ModifyBase;
		using Base = AdvancedFollowInstance;
        using Derived = Der;
		void apply() override {

		}
	};
}
