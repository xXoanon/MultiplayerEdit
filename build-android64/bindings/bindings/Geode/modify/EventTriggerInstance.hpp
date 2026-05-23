#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EventTriggerInstance.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, EventTriggerInstance> : ModifyBase<ModifyDerive<Der, EventTriggerInstance>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EventTriggerInstance>>;
		using ModifyBase<ModifyDerive<Der, EventTriggerInstance>>::ModifyBase;
		using Base = EventTriggerInstance;
        using Derived = Der;
		void apply() override {

		}
	};
}
