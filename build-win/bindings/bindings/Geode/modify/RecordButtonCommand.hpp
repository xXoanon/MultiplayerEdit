#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RecordButtonCommand.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, RecordButtonCommand> : ModifyBase<ModifyDerive<Der, RecordButtonCommand>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RecordButtonCommand>>;
		using ModifyBase<ModifyDerive<Der, RecordButtonCommand>>::ModifyBase;
		using Base = RecordButtonCommand;
        using Derived = Der;
		void apply() override {

		}
	};
}
