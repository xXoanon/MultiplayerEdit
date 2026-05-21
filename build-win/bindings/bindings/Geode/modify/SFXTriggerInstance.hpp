#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXTriggerInstance.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SFXTriggerInstance> : ModifyBase<ModifyDerive<Der, SFXTriggerInstance>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXTriggerInstance>>;
		using ModifyBase<ModifyDerive<Der, SFXTriggerInstance>>::ModifyBase;
		using Base = SFXTriggerInstance;
        using Derived = Der;
		void apply() override {

		}
	};
}
