#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ToggleTriggerAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, ToggleTriggerAction> : ModifyBase<ModifyDerive<Der, ToggleTriggerAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ToggleTriggerAction>>;
		using ModifyBase<ModifyDerive<Der, ToggleTriggerAction>>::ModifyBase;
		using Base = ToggleTriggerAction;
        using Derived = Der;
		void apply() override {

		}
	};
}
