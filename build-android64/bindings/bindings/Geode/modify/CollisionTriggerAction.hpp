#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CollisionTriggerAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, CollisionTriggerAction> : ModifyBase<ModifyDerive<Der, CollisionTriggerAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CollisionTriggerAction>>;
		using ModifyBase<ModifyDerive<Der, CollisionTriggerAction>>::ModifyBase;
		using Base = CollisionTriggerAction;
        using Derived = Der;
		void apply() override {

		}
	};
}
