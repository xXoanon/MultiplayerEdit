#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TimerTriggerAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, TimerTriggerAction> : ModifyBase<ModifyDerive<Der, TimerTriggerAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TimerTriggerAction>>;
		using ModifyBase<ModifyDerive<Der, TimerTriggerAction>>::ModifyBase;
		using Base = TimerTriggerAction;
        using Derived = Der;
		void apply() override {

		}
	};
}
