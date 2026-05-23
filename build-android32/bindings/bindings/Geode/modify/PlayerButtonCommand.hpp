#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerButtonCommand.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, PlayerButtonCommand> : ModifyBase<ModifyDerive<Der, PlayerButtonCommand>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerButtonCommand>>;
		using ModifyBase<ModifyDerive<Der, PlayerButtonCommand>>::ModifyBase;
		using Base = PlayerButtonCommand;
        using Derived = Der;
		void apply() override {

		}
	};
}
