#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJTransformState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, GJTransformState> : ModifyBase<ModifyDerive<Der, GJTransformState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJTransformState>>;
		using ModifyBase<ModifyDerive<Der, GJTransformState>>::ModifyBase;
		using Base = GJTransformState;
        using Derived = Der;
		void apply() override {

		}
	};
}
