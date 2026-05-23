#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SavedActiveObjectState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SavedActiveObjectState> : ModifyBase<ModifyDerive<Der, SavedActiveObjectState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SavedActiveObjectState>>;
		using ModifyBase<ModifyDerive<Der, SavedActiveObjectState>>::ModifyBase;
		using Base = SavedActiveObjectState;
        using Derived = Der;
		void apply() override {

		}
	};
}
