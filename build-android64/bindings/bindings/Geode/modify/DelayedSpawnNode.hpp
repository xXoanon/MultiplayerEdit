#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DelayedSpawnNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, DelayedSpawnNode> : ModifyBase<ModifyDerive<Der, DelayedSpawnNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DelayedSpawnNode>>;
		using ModifyBase<ModifyDerive<Der, DelayedSpawnNode>>::ModifyBase;
		using Base = DelayedSpawnNode;
        using Derived = Der;
		void apply() override {

		}
	};
}
