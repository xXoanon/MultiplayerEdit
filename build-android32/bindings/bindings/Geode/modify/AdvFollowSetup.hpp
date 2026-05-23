#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdvFollowSetup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdvFollowSetup> : ModifyBase<ModifyDerive<Der, AdvFollowSetup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdvFollowSetup>>;
		using ModifyBase<ModifyDerive<Der, AdvFollowSetup>>::ModifyBase;
		using Base = AdvFollowSetup;
        using Derived = Der;
		void apply() override {

		}
	};
}
