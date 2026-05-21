#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CountTriggerAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, CountTriggerAction> : ModifyBase<ModifyDerive<Der, CountTriggerAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CountTriggerAction>>;
		using ModifyBase<ModifyDerive<Der, CountTriggerAction>>::ModifyBase;
		using Base = CountTriggerAction;
        using Derived = Der;
		void apply() override {

		}
	};
}
