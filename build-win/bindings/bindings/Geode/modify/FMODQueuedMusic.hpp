#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODQueuedMusic.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, FMODQueuedMusic> : ModifyBase<ModifyDerive<Der, FMODQueuedMusic>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODQueuedMusic>>;
		using ModifyBase<ModifyDerive<Der, FMODQueuedMusic>>::ModifyBase;
		using Base = FMODQueuedMusic;
        using Derived = Der;
		void apply() override {

		}
	};
}
