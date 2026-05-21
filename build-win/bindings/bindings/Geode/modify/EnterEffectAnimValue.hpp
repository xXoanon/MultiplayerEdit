#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EnterEffectAnimValue.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, EnterEffectAnimValue> : ModifyBase<ModifyDerive<Der, EnterEffectAnimValue>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EnterEffectAnimValue>>;
		using ModifyBase<ModifyDerive<Der, EnterEffectAnimValue>>::ModifyBase;
		using Base = EnterEffectAnimValue;
        using Derived = Der;
		void apply() override {

		}
	};
}
