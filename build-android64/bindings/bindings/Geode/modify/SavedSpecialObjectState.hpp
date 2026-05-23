#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SavedSpecialObjectState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SavedSpecialObjectState> : ModifyBase<ModifyDerive<Der, SavedSpecialObjectState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SavedSpecialObjectState>>;
		using ModifyBase<ModifyDerive<Der, SavedSpecialObjectState>>::ModifyBase;
		using Base = SavedSpecialObjectState;
        using Derived = Der;
		void apply() override {

		}
	};
}
