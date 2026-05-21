#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXTriggerState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SFXTriggerState> : ModifyBase<ModifyDerive<Der, SFXTriggerState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXTriggerState>>;
		using ModifyBase<ModifyDerive<Der, SFXTriggerState>>::ModifyBase;
		using Base = SFXTriggerState;
        using Derived = Der;
		void apply() override {

		}
	};
}
