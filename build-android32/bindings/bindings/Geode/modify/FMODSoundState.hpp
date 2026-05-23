#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODSoundState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, FMODSoundState> : ModifyBase<ModifyDerive<Der, FMODSoundState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODSoundState>>;
		using ModifyBase<ModifyDerive<Der, FMODSoundState>>::ModifyBase;
		using Base = FMODSoundState;
        using Derived = Der;
		void apply() override {

		}
	};
}
