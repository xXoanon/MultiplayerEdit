#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SmartPrefabResult.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SmartPrefabResult> : ModifyBase<ModifyDerive<Der, SmartPrefabResult>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SmartPrefabResult>>;
		using ModifyBase<ModifyDerive<Der, SmartPrefabResult>>::ModifyBase;
		using Base = SmartPrefabResult;
        using Derived = Der;
		void apply() override {

		}
	};
}
