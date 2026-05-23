#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TouchToggleAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, TouchToggleAction> : ModifyBase<ModifyDerive<Der, TouchToggleAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TouchToggleAction>>;
		using ModifyBase<ModifyDerive<Der, TouchToggleAction>>::ModifyBase;
		using Base = TouchToggleAction;
        using Derived = Der;
		void apply() override {

		}
	};
}
