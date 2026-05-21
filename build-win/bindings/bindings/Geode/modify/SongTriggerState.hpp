#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongTriggerState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SongTriggerState> : ModifyBase<ModifyDerive<Der, SongTriggerState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongTriggerState>>;
		using ModifyBase<ModifyDerive<Der, SongTriggerState>>::ModifyBase;
		using Base = SongTriggerState;
        using Derived = Der;
		void apply() override {

		}
	};
}
