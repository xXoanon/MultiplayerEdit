#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EffectManagerState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, EffectManagerState> : ModifyBase<ModifyDerive<Der, EffectManagerState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EffectManagerState>>;
		using ModifyBase<ModifyDerive<Der, EffectManagerState>>::ModifyBase;
		using Base = EffectManagerState;
        using Derived = Der;
		void apply() override {

		}
	};
}
