#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DynamicMoveCalculation.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, DynamicMoveCalculation> : ModifyBase<ModifyDerive<Der, DynamicMoveCalculation>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DynamicMoveCalculation>>;
		using ModifyBase<ModifyDerive<Der, DynamicMoveCalculation>>::ModifyBase;
		using Base = DynamicMoveCalculation;
        using Derived = Der;
		void apply() override {

		}
	};
}
