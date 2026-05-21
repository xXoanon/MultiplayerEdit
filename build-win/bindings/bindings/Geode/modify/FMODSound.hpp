#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODSound.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, FMODSound> : ModifyBase<ModifyDerive<Der, FMODSound>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODSound>>;
		using ModifyBase<ModifyDerive<Der, FMODSound>>::ModifyBase;
		using Base = FMODSound;
        using Derived = Der;
		void apply() override {

		}
	};
}
