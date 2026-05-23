#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXStateContainer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SFXStateContainer> : ModifyBase<ModifyDerive<Der, SFXStateContainer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXStateContainer>>;
		using ModifyBase<ModifyDerive<Der, SFXStateContainer>>::ModifyBase;
		using Base = SFXStateContainer;
        using Derived = Der;
		void apply() override {

		}
	};
}
