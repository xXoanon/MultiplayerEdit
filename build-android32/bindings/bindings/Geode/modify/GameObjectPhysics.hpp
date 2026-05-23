#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameObjectPhysics.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, GameObjectPhysics> : ModifyBase<ModifyDerive<Der, GameObjectPhysics>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameObjectPhysics>>;
		using ModifyBase<ModifyDerive<Der, GameObjectPhysics>>::ModifyBase;
		using Base = GameObjectPhysics;
        using Derived = Der;
		void apply() override {

		}
	};
}
