#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODMusic.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, FMODMusic> : ModifyBase<ModifyDerive<Der, FMODMusic>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODMusic>>;
		using ModifyBase<ModifyDerive<Der, FMODMusic>>::ModifyBase;
		using Base = FMODMusic;
        using Derived = Der;
		void apply() override {

		}
	};
}
