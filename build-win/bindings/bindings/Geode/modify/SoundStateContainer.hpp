#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SoundStateContainer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SoundStateContainer> : ModifyBase<ModifyDerive<Der, SoundStateContainer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SoundStateContainer>>;
		using ModifyBase<ModifyDerive<Der, SoundStateContainer>>::ModifyBase;
		using Base = SoundStateContainer;
        using Derived = Der;
		void apply() override {

		}
	};
}
