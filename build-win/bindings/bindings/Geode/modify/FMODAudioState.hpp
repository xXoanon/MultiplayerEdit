#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODAudioState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, FMODAudioState> : ModifyBase<ModifyDerive<Der, FMODAudioState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODAudioState>>;
		using ModifyBase<ModifyDerive<Der, FMODAudioState>>::ModifyBase;
		using Base = FMODAudioState;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x52e70, Thiscall, FMODAudioState, )
		}
	};
}
