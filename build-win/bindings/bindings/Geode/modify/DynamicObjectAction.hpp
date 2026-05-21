#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DynamicObjectAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, DynamicObjectAction> : ModifyBase<ModifyDerive<Der, DynamicObjectAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DynamicObjectAction>>;
		using ModifyBase<ModifyDerive<Der, DynamicObjectAction>>::ModifyBase;
		using Base = DynamicObjectAction;
        using Derived = Der;
		void apply() override {

		}
	};
}
