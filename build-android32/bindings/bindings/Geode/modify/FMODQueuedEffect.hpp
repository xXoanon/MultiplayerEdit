#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODQueuedEffect.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, FMODQueuedEffect> : ModifyBase<ModifyDerive<Der, FMODQueuedEffect>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODQueuedEffect>>;
		using ModifyBase<ModifyDerive<Der, FMODQueuedEffect>>::ModifyBase;
		using Base = FMODQueuedEffect;
        using Derived = Der;
		void apply() override {

		}
	};
}
