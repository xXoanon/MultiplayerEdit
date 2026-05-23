#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SequenceTriggerState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SequenceTriggerState> : ModifyBase<ModifyDerive<Der, SequenceTriggerState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SequenceTriggerState>>;
		using ModifyBase<ModifyDerive<Der, SequenceTriggerState>>::ModifyBase;
		using Base = SequenceTriggerState;
        using Derived = Der;
		void apply() override {

		}
	};
}
