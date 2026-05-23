#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RecordCheckpoint.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, RecordCheckpoint> : ModifyBase<ModifyDerive<Der, RecordCheckpoint>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RecordCheckpoint>>;
		using ModifyBase<ModifyDerive<Der, RecordCheckpoint>>::ModifyBase;
		using Base = RecordCheckpoint;
        using Derived = Der;
		void apply() override {

		}
	};
}
