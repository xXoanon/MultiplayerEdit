#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ChanceObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, ChanceObject> : ModifyBase<ModifyDerive<Der, ChanceObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ChanceObject>>;
		using ModifyBase<ModifyDerive<Der, ChanceObject>>::ModifyBase;
		using Base = ChanceObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
