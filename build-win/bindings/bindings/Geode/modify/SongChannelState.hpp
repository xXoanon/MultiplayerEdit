#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongChannelState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SongChannelState> : ModifyBase<ModifyDerive<Der, SongChannelState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongChannelState>>;
		using ModifyBase<ModifyDerive<Der, SongChannelState>>::ModifyBase;
		using Base = SongChannelState;
        using Derived = Der;
		void apply() override {

		}
	};
}
