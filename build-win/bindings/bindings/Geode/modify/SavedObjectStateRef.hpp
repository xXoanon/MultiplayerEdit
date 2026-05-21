#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SavedObjectStateRef.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SavedObjectStateRef> : ModifyBase<ModifyDerive<Der, SavedObjectStateRef>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SavedObjectStateRef>>;
		using ModifyBase<ModifyDerive<Der, SavedObjectStateRef>>::ModifyBase;
		using Base = SavedObjectStateRef;
        using Derived = Der;
		void apply() override {

		}
	};
}
