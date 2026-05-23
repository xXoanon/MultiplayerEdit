#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CAState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, CAState> : ModifyBase<ModifyDerive<Der, CAState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CAState>>;
		using ModifyBase<ModifyDerive<Der, CAState>>::ModifyBase;
		using Base = CAState;
        using Derived = Der;
		void apply() override {

		}
	};
}
