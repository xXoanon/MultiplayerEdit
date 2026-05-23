#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TimerItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, TimerItem> : ModifyBase<ModifyDerive<Der, TimerItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TimerItem>>;
		using ModifyBase<ModifyDerive<Der, TimerItem>>::ModifyBase;
		using Base = TimerItem;
        using Derived = Der;
		void apply() override {

		}
	};
}
